/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_65648
// Address: 0x00065648

//----- (00065648) --------------------------------------------------------
_DWORD *__fastcall sub_65648(_DWORD *a1)
{
  void *v2; // r0

  *a1 = dword_D1B20;
  sub_66588(a1 + 17);
  v2 = (void *)a1[18];
  if ( v2 )
  {
    a1[19] = 0;
    sub_77E08(v2);
  }
  return a1;
}
// D1B20: using guessed type int dword_D1B20[2];
