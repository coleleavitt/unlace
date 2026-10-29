/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_752C0
// Address: 0x000752C0

//----- (000752C0) --------------------------------------------------------
_DWORD *__fastcall sub_752C0(int a1)
{
  _DWORD *v2; // r4
  int v3; // r6
  void *v5; // r0
  const void *v6; // r1

  v2 = sub_808A4(0x38u);
  v3 = *(_DWORD *)(a1 + 4);
  v2[5] = 0;
  v2[6] = 0;
  v2[7] = 0;
  *v2 = &off_D1CE8;
  if ( v3 )
  {
    v5 = sub_77FEC(4 * v3);
    v6 = *(const void **)a1;
    v2[5] = v5;
    v2[7] = v3;
    memcpy(v5, v6, 4 * v3);
    v2[6] = v3;
  }
  v2[8] = 0;
  v2[4] = 0;
  *((_QWORD *)v2 + 5) = 0;
  *((_QWORD *)v2 + 6) = 0;
  *((_QWORD *)v2 + 1) = 0;
  return sub_74AF4(v2);
}
// D1CE8: using guessed type _UNKNOWN *off_D1CE8;
