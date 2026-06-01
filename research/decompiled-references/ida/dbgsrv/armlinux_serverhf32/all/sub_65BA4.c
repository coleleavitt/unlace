/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_65BA4
// Address: 0x00065BA4

//----- (00065BA4) --------------------------------------------------------
_DWORD *__fastcall sub_65BA4(_DWORD *a1)
{
  _DWORD *v2; // r1

  v2 = (_DWORD *)a1[3];
  *a1 = &off_D0488;
  sub_65B5C((int)(a1 + 1), v2);
  sub_8121C(a1);
  return a1;
}
// D0488: using guessed type _UNKNOWN *off_D0488;
