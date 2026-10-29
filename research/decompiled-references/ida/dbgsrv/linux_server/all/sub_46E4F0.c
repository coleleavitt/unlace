/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46E4F0
// Address: 0x000000000046E4F0

//----- (000000000046E4F0) ----------------------------------------------------
int __fastcall sub_46E4F0(__int64 a1)
{
  _QWORD *v1; // rbx

  v1 = (_QWORD *)operator new(0x10u);
  sub_4727D0(v1);
  v1[1] = a1;
  *v1 = &off_4C3CE0;
  return sub_4728E0();
}
// 4C3CE0: using guessed type _UNKNOWN *off_4C3CE0;
