/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A3E90
// Address: 0x00000000000A3E90

//----- (00000000000A3E90) ----------------------------------------------------
__int64 __fastcall sub_A3E90(__int64 a1)
{
  _QWORD *v2; // x20

  v2 = operator new(0x10u);
  sub_A9274(v2);
  *v2 = off_15F268;
  v2[1] = a1;
  return sub_A92C0();
}
// 15F268: using guessed type __int64 (__fastcall *off_15F268[3])();
