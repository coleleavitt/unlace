/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A0E20
// Address: 0x00000000004A0E20

//----- (00000000004A0E20) ----------------------------------------------------
__int64 __fastcall sub_4A0E20(__int64 *a1, unsigned __int8 a2, unsigned __int64 a3)
{
  __int64 v3; // x19
  __int64 result; // x0
  unsigned __int64 v5; // x3
  char *v6; // x0
  char *v7; // x19

  v3 = *a1;
  result = -1;
  v5 = *(_QWORD *)(v3 - 24);
  if ( a3 < v5 )
  {
    v6 = (char *)memchr((const void *)(v3 + a3), a2, v5 - a3);
    v7 = &v6[-v3];
    if ( v6 )
      return (__int64)v7;
    else
      return -1;
  }
  return result;
}
