/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005D844
// Address: 0x000000010005D844

//----- (000000010005D844) ----------------------------------------------------
__int64 __fastcall sub_10005D844(__int64 a1)
{
  _QWORD *v2; // x20

  v2 = operator new(0x10u);
  sub_100060FFC(v2);
  *v2 = off_10009BB38;
  v2[1] = a1;
  return sub_1000610F4();
}
// 10009BB38: using guessed type __int64 (__fastcall *off_10009BB38[3])();
