/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42E270
// Address: 0x0042E270

//----- (0042E270) --------------------------------------------------------
int __thiscall sub_42E270(int this, char a2, __int16 a3)
{
  int v4; // esi
  unsigned int v5; // eax
  int v6; // esi
  unsigned int v7; // eax
  int result; // eax
  unsigned int v9; // eax
  char v10; // [esp+10h] [ebp+4h]

  v4 = *(_DWORD *)(this + 104);
  if ( (unsigned __int8)a3 == a3 )
  {
    *(_BYTE *)(this + 112) = a2;
    v5 = *(_DWORD *)(v4 + 4) + 1;
    if ( v5 > *(_DWORD *)(v4 + 8) )
      *(_DWORD *)v4 = sub_453B00(v4, *(void **)v4, v5, 1u);
    *(_BYTE *)(*(_DWORD *)v4 + (*(_DWORD *)(v4 + 4))++) = a2;
    v6 = *(_DWORD *)(this + 104);
    ++*(_DWORD *)(this + 108);
    v7 = *(_DWORD *)(v6 + 4) + 1;
    if ( v7 > *(_DWORD *)(v6 + 8) )
      *(_DWORD *)v6 = sub_453B00(v6, *(void **)v6, v7, 1u);
    result = *(_DWORD *)(v6 + 4);
    *(_BYTE *)(*(_DWORD *)v6 + result) = a3;
    ++*(_DWORD *)(v6 + 4);
    ++*(_DWORD *)(this + 108);
  }
  else
  {
    *(_BYTE *)(this + 112) = a2 + 1;
    v10 = a2 + 1;
    v9 = *(_DWORD *)(v4 + 4) + 1;
    if ( v9 > *(_DWORD *)(v4 + 8) )
      *(_DWORD *)v4 = sub_453B00(v4, *(void **)v4, v9, 1u);
    *(_BYTE *)(*(_DWORD *)v4 + (*(_DWORD *)(v4 + 4))++) = v10;
    ++*(_DWORD *)(this + 108);
    return sub_42E320((int *)this, a3);
  }
  return result;
}
