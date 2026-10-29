/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42E3C0
// Address: 0x0042E3C0

//----- (0042E3C0) --------------------------------------------------------
_BYTE *__thiscall sub_42E3C0(int this, unsigned int a2)
{
  int v3; // edi
  unsigned int v4; // eax
  _BYTE *result; // eax
  int v6; // edi
  unsigned int v7; // eax
  int v8; // edi
  unsigned int v9; // eax

  if ( a2 > 0xF )
  {
    if ( (char)a2 == a2 )
    {
      v6 = *(_DWORD *)(this + 104);
      *(_BYTE *)(this + 112) = -96;
      v7 = *(_DWORD *)(v6 + 4) + 1;
      if ( v7 > *(_DWORD *)(v6 + 8) )
        *(_DWORD *)v6 = sub_453B00(v6, *(void **)v6, v7, 1u);
      *(_BYTE *)(*(_DWORD *)v6 + (*(_DWORD *)(v6 + 4))++) = -96;
      v8 = *(_DWORD *)(this + 104);
      ++*(_DWORD *)(this + 108);
      v9 = *(_DWORD *)(v8 + 4) + 1;
      if ( v9 > *(_DWORD *)(v8 + 8) )
        *(_DWORD *)v8 = sub_453B00(v8, *(void **)v8, v9, 1u);
      result = *(_BYTE **)v8;
      *(_BYTE *)(*(_DWORD *)(v8 + 4) + *(_DWORD *)v8) = a2;
      ++*(_DWORD *)(v8 + 4);
      ++*(_DWORD *)(this + 108);
    }
    else
    {
      sub_42E650(this, 167);
      sub_42E320((int *)this, a2);
      return (_BYTE *)sub_42E320((int *)this, SHIWORD(a2));
    }
  }
  else
  {
    v3 = *(_DWORD *)(this + 104);
    *(_BYTE *)(this + 112) = a2 - 32;
    v4 = *(_DWORD *)(v3 + 4) + 1;
    if ( v4 > *(_DWORD *)(v3 + 8) )
      *(_DWORD *)v3 = sub_453B00(v3, *(void **)v3, v4, 1u);
    result = *(_BYTE **)(v3 + 4);
    result[*(_DWORD *)v3] = a2 - 32;
    ++*(_DWORD *)(v3 + 4);
    ++*(_DWORD *)(this + 108);
  }
  return result;
}
