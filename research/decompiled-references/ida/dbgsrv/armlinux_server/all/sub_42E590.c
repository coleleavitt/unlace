/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42E590
// Address: 0x000000000042E590

//----- (000000000042E590) ----------------------------------------------------
void __fastcall sub_42E590(_QWORD *a1)
{
  _QWORD *v2; // x1

  v2 = (_QWORD *)a1[9];
  *a1 = off_519C80;
  sub_40E5E8((__int64)(a1 + 7), v2);
  sub_42E510((__int64)(a1 + 1), a1[3]);
  j_j__free_0(a1);
}
// 519C80: using guessed type __int64 (__fastcall *off_519C80[5])();
