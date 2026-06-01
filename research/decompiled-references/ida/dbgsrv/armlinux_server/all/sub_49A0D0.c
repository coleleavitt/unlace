/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49A0D0
// Address: 0x000000000049A0D0

//----- (000000000049A0D0) ----------------------------------------------------
__int64 __fastcall sub_49A0D0(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 *v2; // x2
  __int64 *v4; // x2
  __int64 result; // x0

  v2 = (unsigned __int64 *)a1[3];
  if ( v2 && a2 >= *v2 && a2 < v2[1] )
  {
    if ( v2 == (unsigned __int64 *)(*a1 + 16LL * a1[1] - 16) )
    {
      return -1;
    }
    else
    {
      a1[3] = v2 + 2;
      return v2[2];
    }
  }
  else
  {
    v4 = sub_499E98(a1, a2);
    result = -1;
    if ( v4 != (__int64 *)(*a1 + 16LL * a1[1]) )
    {
      result = *v4;
      a1[3] = v4;
    }
  }
  return result;
}
