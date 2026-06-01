/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5A118
// Address: 0x000000000005A118

//----- (000000000005A118) ----------------------------------------------------
void __fastcall sub_5A118(_QWORD *a1)
{
  _QWORD *v1; // x1

  v1 = (_QWORD *)a1[5];
  *a1 = off_1568F8;
  sub_475E4((__int64)(a1 + 4), v1);
  sub_5BBAC((__int64)(a1 + 1), (_QWORD *)a1[2]);
  operator delete(a1);
}
// 1568F8: using guessed type __int64 (__fastcall *off_1568F8[4])();
