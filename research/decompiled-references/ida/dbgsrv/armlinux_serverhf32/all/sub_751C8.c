/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_751C8
// Address: 0x000751C8

//----- (000751C8) --------------------------------------------------------
_DWORD *__fastcall sub_751C8(int a1, int a2)
{
  _DWORD *v4; // r4

  v4 = sub_805CC(0x38u);
  v4[5] = a1;
  v4[2] = a2;
  *((_QWORD *)v4 + 4) = 0;
  *v4 = &off_D0CFC;
  v4[6] = 0;
  v4[10] = 0;
  v4[11] = 0;
  v4[12] = 0;
  v4[3] = 0;
  v4[4] = 0;
  v4[6] = sub_77608();
  return sub_74988(v4);
}
// D0CFC: using guessed type _UNKNOWN *off_D0CFC;
