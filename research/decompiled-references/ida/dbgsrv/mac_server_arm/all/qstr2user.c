/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstr2user
// Address: 0x00000001000641D8

//----- (00000001000641D8) ----------------------------------------------------
__int64 __fastcall qstr2user(__int64 a1, char *a2, int a3)
{
  *(_QWORD *)(a1 + 8) = 0;
  return sub_1000641E8(a1, a2, a3, -1);
}
