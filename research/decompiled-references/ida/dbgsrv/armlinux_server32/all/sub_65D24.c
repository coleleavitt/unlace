/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_65D24
// Address: 0x00065D24

//----- (00065D24) --------------------------------------------------------
_DWORD *__fastcall sub_65D24(_DWORD *a1)
{
  _DWORD *v2; // r1

  v2 = (_DWORD *)a1[3];
  *a1 = &off_D1488;
  sub_65CDC((int)(a1 + 1), v2);
  sub_808A0(a1);
  return a1;
}
// D1488: using guessed type _UNKNOWN *off_D1488;
