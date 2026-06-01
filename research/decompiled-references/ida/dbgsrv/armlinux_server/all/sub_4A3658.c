/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A3658
// Address: 0x00000000004A3658

//----- (00000000004A3658) ----------------------------------------------------
__int64 *__fastcall sub_4A3658(__int64 **a1, __int64 *a2, unsigned __int64 a3)
{
  __int64 v3; // x4
  unsigned __int64 v4; // x1
  __int64 *result; // x0

  v3 = *a2;
  v4 = *(_QWORD *)(*a2 - 24);
  if ( a3 > v4 )
    sub_4A0590("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::basic_string", a3, v4);
  result = sub_4A3590((_BYTE *)(v3 + a3), (_BYTE *)(v3 + v4));
  *a1 = result;
  return result;
}
