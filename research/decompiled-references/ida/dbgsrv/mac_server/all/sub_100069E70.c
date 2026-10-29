/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100069E70
// Address: 0x0000000100069E70

//----- (0000000100069E70) ----------------------------------------------------
int __fastcall sub_100069E70(__int64 a1)
{
  _QWORD *v1; // r14

  v1 = operator new(0x10u);
  sub_10006D9B0(v1);
  *v1 = off_1000AA690;
  v1[1] = a1;
  return sub_10006DA90();
}
// 1000AA690: using guessed type __int64 (__fastcall *off_1000AA690[2])();
