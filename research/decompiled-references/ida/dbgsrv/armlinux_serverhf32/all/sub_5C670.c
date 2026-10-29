/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5C670
// Address: 0x0005C670

//----- (0005C670) --------------------------------------------------------
_DWORD *__fastcall sub_5C670(_DWORD *a1, int a2)
{
  size_t v3; // r4
  void *v5; // r0

  v3 = *(_DWORD *)(a2 + 4);
  if ( v3 )
  {
    v5 = sub_77E84(*(_DWORD *)(a2 + 4));
    a1[2] = v3;
    *a1 = v5;
    memcpy(v5, *(const void **)a2, v3);
    a1[1] = v3;
  }
  return a1;
}
