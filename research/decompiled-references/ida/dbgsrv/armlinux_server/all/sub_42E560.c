/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42E560
// Address: 0x000000000042E560

//----- (000000000042E560) ----------------------------------------------------
void __fastcall sub_42E560(_QWORD *a1)
{
  _QWORD *v2; // x1

  v2 = (_QWORD *)a1[9];
  *a1 = off_519C80;
  sub_40E5E8((__int64)(a1 + 7), v2);
  sub_42E510((__int64)(a1 + 1), a1[3]);
}
// 519C80: using guessed type __int64 (__fastcall *off_519C80[5])();
