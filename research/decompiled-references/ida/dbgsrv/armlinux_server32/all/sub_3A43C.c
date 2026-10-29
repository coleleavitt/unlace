/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3A43C
// Address: 0x0003A43C

//----- (0003A43C) --------------------------------------------------------
void **__fastcall sub_3A43C(int a1, char *s, size_t a3)
{
  int v3; // r5
  int v7; // r3
  _BYTE *v8; // r0
  void **result; // r0

  v3 = *(_DWORD *)(a1 + 112);
  *(_BYTE *)(a1 + 120) = -88;
  v7 = *(_DWORD *)(v3 + 4);
  if ( (unsigned int)(v7 + 1) > *(_DWORD *)(v3 + 8) )
  {
    v8 = sub_78018(v3, *(void **)v3, v7 + 1, 1u);
    v7 = *(_DWORD *)(v3 + 4);
    *(_DWORD *)v3 = v8;
  }
  else
  {
    v8 = *(_BYTE **)v3;
  }
  v8[v7] = -88;
  ++*(_DWORD *)(v3 + 4);
  ++*(_DWORD *)(a1 + 116);
  if ( !a3 )
    a3 = strlen(s);
  sub_39CA8(a1, (unsigned __int16)a3);
  sub_39CA8(a1, HIWORD(a3));
  result = sub_3E690(*(void ***)(a1 + 112), s, a3);
  *(_DWORD *)(a1 + 116) += a3;
  return result;
}
