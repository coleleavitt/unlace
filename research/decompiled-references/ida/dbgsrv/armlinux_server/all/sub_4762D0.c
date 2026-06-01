/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4762D0
// Address: 0x00000000004762D0

//----- (00000000004762D0) ----------------------------------------------------
void __fastcall sub_4762D0(_QWORD *a1)
{
  _QWORD *v2; // x1

  v2 = (_QWORD *)a1[3];
  *a1 = off_51B8F0;
  sub_476268((__int64)(a1 + 1), v2);
  j_j__free_0(a1);
}
// 51B8F0: using guessed type __int64 (__fastcall *off_51B8F0[5])();
