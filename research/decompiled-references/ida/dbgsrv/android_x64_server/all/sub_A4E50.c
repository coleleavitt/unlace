/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A4E50
// Address: 0x00000000000A4E50

//----- (00000000000A4E50) ----------------------------------------------------
__int64 (__fastcall **__fastcall sub_A4E50(__int64 a1, char a2, int a3))()
{
  sub_AA1C0(a1, a2, a3, 0, 0);
  *(_QWORD *)a1 = &off_14EE10;
  *(_WORD *)(a1 + 96) = 0;
  return &off_14EE10;
}
// 14EE10: using guessed type __int64 (__fastcall *off_14EE10)();
