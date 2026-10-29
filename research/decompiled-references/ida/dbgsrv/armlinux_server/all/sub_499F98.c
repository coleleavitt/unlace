/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_499F98
// Address: 0x0000000000499F98

//----- (0000000000499F98) ----------------------------------------------------
__int64 __fastcall sub_499F98(__int64 *a1, __int64 a2)
{
  unsigned __int64 *v2; // x2
  unsigned __int64 v3; // x19
  unsigned __int64 *v5; // x0
  unsigned __int64 v6; // x0

  if ( a2 != -1 )
  {
    v2 = (unsigned __int64 *)a1[3];
    v3 = a2 + 1;
    if ( v2 && v3 >= *v2 && v3 < v2[1] )
      return v3;
    v5 = (unsigned __int64 *)sub_499E30(a1, v3);
    if ( v5 != (unsigned __int64 *)(*a1 + 16 * a1[1]) )
    {
      a1[3] = (__int64)v5;
      v6 = *v5;
      if ( v3 < v6 )
        return v6;
      return v3;
    }
  }
  return -1;
}
