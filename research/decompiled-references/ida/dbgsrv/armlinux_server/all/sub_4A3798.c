/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A3798
// Address: 0x00000000004A3798

//----- (00000000004A3798) ----------------------------------------------------
__int64 *__fastcall sub_4A3798(__int64 **a1, __int64 *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // x6
  unsigned __int64 v6; // x0
  unsigned __int64 v7; // x0
  unsigned __int64 v8; // x1
  __int64 *result; // x0

  v4 = *a2;
  v6 = *(_QWORD *)(*a2 - 24);
  if ( a3 > v6 )
    sub_4A0590(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::basic_string",
      a3,
      *(_QWORD *)(*a2 - 24));
  v7 = v6 - a3;
  v8 = a4;
  if ( v7 <= a4 )
    v8 = v7;
  result = sub_4A3590((_BYTE *)(v4 + a3), (_BYTE *)(v4 + v8 + a3));
  *a1 = result;
  return result;
}
