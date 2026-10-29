/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42E770
// Address: 0x0042E770

//----- (0042E770) --------------------------------------------------------
void *__thiscall sub_42E770(int this, unsigned __int8 a2, __int16 a3)
{
  char v3; // bl
  int v5; // esi
  char v6; // cl
  char v7; // cl
  unsigned int v8; // eax
  unsigned int v9; // eax
  void *result; // eax
  char v11; // cl
  unsigned int v12; // eax
  char v13; // [esp+10h] [ebp+4h]
  char v14; // [esp+10h] [ebp+4h]

  v3 = a3;
  v5 = *(_DWORD *)(this + 104);
  if ( (unsigned __int16)a3 < 0x10u )
  {
    v3 = a2 + a3;
    *(_BYTE *)(this + 112) = a2 + a3;
LABEL_7:
    v9 = *(_DWORD *)(v5 + 4) + 1;
    if ( v9 > *(_DWORD *)(v5 + 8) )
      *(_DWORD *)v5 = sub_453B00(v5, *(void **)v5, v9, 1u);
    result = *(void **)v5;
    *(_BYTE *)(*(_DWORD *)(v5 + 4) + *(_DWORD *)v5) = v3;
    ++*(_DWORD *)(v5 + 4);
    ++*(_DWORD *)(this + 108);
    return result;
  }
  v6 = a2 >> 3;
  if ( (unsigned __int8)a3 == a3 )
  {
    v7 = v6 + 0x80;
    *(_BYTE *)(this + 112) = v7;
    v8 = *(_DWORD *)(v5 + 4) + 1;
    v13 = v7;
    if ( v8 > *(_DWORD *)(v5 + 8) )
      *(_DWORD *)v5 = sub_453B00(v5, *(void **)v5, v8, 1u);
    *(_BYTE *)(*(_DWORD *)(v5 + 4) + *(_DWORD *)v5) = v13;
    ++*(_DWORD *)(v5 + 4);
    ++*(_DWORD *)(this + 108);
    v5 = *(_DWORD *)(this + 104);
    goto LABEL_7;
  }
  v11 = v6 - 127;
  *(_BYTE *)(this + 112) = v11;
  v12 = *(_DWORD *)(v5 + 4) + 1;
  v14 = v11;
  if ( v12 > *(_DWORD *)(v5 + 8) )
    *(_DWORD *)v5 = sub_453B00(v5, *(void **)v5, v12, 1u);
  *(_BYTE *)(*(_DWORD *)v5 + (*(_DWORD *)(v5 + 4))++) = v14;
  ++*(_DWORD *)(this + 108);
  return (void *)sub_42E320((int *)this, a3);
}
