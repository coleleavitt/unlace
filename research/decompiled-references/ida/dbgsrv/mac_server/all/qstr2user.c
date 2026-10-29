/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstr2user
// Address: 0x00000001000710E0

//----- (00000001000710E0) ----------------------------------------------------
__int64 __fastcall qstr2user(__int64 a1, const char *a2, int a3)
{
  *(_QWORD *)(a1 + 8) = 0;
  return sub_100071100(a1, a2, a3, -1);
}
