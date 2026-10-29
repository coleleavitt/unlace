/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_34F4C
// Address: 0x00034F4C

//----- (00034F4C) --------------------------------------------------------
_DWORD *__fastcall sub_34F4C(_DWORD *a1)
{
  _DWORD *v2; // r1

  v2 = (_DWORD *)a1[9];
  *a1 = &off_CF640;
  sub_19A7C((int)(a1 + 7), v2);
  sub_34EFC((int)(a1 + 1), a1[3]);
  sub_8121C(a1);
  return a1;
}
// CF640: using guessed type _UNKNOWN *off_CF640;
