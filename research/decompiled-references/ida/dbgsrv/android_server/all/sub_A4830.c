/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A4830
// Address: 0x00000000000A4830

//----- (00000000000A4830) ----------------------------------------------------
void __fastcall sub_A4830(_QWORD *a1)
{
  _QWORD *v1; // x1

  v1 = (_QWORD *)a1[2];
  *a1 = off_15F230;
  sub_A4868((__int64)(a1 + 1), v1);
  operator delete(a1);
}
// 15F230: using guessed type __int64 (__fastcall *off_15F230[5])();
