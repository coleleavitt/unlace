/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstr2user
// Address: 0x0000000100068E2C

//----- (0000000100068E2C) ----------------------------------------------------
__int64 __fastcall qstr2user(__int64 a1, char *a2, int a3)
{
  *(_QWORD *)(a1 + 8) = 0;
  return sub_100068E3C(a1, a2, a3, -1);
}
