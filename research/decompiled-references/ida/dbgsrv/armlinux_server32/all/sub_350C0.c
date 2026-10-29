/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_350C0
// Address: 0x000350C0

//----- (000350C0) --------------------------------------------------------
_DWORD *__fastcall sub_350C0(_DWORD *a1)
{
  _DWORD *v2; // r1

  v2 = (_DWORD *)a1[9];
  *a1 = &off_D0640;
  sub_19C20((int)(a1 + 7), v2);
  sub_35094((int)(a1 + 1), a1[3]);
  return a1;
}
// D0640: using guessed type _UNKNOWN *off_D0640;
