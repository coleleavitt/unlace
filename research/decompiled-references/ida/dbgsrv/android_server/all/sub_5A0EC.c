/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5A0EC
// Address: 0x000000000005A0EC

//----- (000000000005A0EC) ----------------------------------------------------
void __fastcall sub_5A0EC(__int64 a1)
{
  _QWORD *v1; // x1

  v1 = *(_QWORD **)(a1 + 40);
  *(_QWORD *)a1 = off_1568F8;
  sub_475E4(a1 + 32, v1);
  sub_5BBAC(a1 + 8, *(_QWORD **)(a1 + 16));
}
// 1568F8: using guessed type __int64 (__fastcall *off_1568F8[4])();
