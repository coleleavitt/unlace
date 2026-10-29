/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005DF78
// Address: 0x000000010005DF78

//----- (000000010005DF78) ----------------------------------------------------
void __fastcall sub_10005DF78(__int64 a1)
{
  _QWORD *v2; // x20

  v2 = (_QWORD *)(a1 + 8);
  sub_10005E220(a1, *(_QWORD **)(a1 + 8));
  *(_QWORD *)a1 = v2;
  *(_QWORD *)(a1 + 16) = 0;
  *v2 = 0;
}
