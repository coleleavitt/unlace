/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A0838
// Address: 0x00000000004A0838

//----- (00000000004A0838) ----------------------------------------------------
unsigned __int64 __fastcall sub_4A0838(__int64 *a1, unsigned __int64 a2, const char *a3)
{
  __int64 v3; // x3
  unsigned __int64 result; // x0
  unsigned __int64 v5; // x3

  v3 = *a1;
  result = a2;
  v5 = *(_QWORD *)(v3 - 24);
  if ( v5 < a2 )
    sub_4A0590("%s: __pos (which is %zu) > this->size() (which is %zu)", a3, a2, v5);
  return result;
}
