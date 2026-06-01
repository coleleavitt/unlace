/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_75330
// Address: 0x00075330

//----- (00075330) --------------------------------------------------------
_DWORD *__fastcall sub_75330(int a1, int a2)
{
  _DWORD *v4; // r4

  v4 = sub_808A4(0x38u);
  v4[5] = a1;
  v4[2] = a2;
  *((_QWORD *)v4 + 4) = 0;
  *v4 = &off_D1CFC;
  v4[6] = 0;
  v4[10] = 0;
  v4[11] = 0;
  v4[12] = 0;
  v4[3] = 0;
  v4[4] = 0;
  v4[6] = sub_77770();
  return sub_74AF4(v4);
}
// D1CFC: using guessed type _UNKNOWN *off_D1CFC;
