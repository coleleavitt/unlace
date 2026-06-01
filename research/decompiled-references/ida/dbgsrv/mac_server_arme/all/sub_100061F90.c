/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100061F90
// Address: 0x0000000100061F90

//----- (0000000100061F90) ----------------------------------------------------
void __fastcall sub_100061F90(__int64 a1)
{
  _QWORD *v2; // x20

  v2 = (_QWORD *)(a1 + 8);
  sub_100062328(a1, *(_QWORD **)(a1 + 8));
  *(_QWORD *)a1 = v2;
  *(_QWORD *)(a1 + 16) = 0;
  *v2 = 0;
}
