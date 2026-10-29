/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49A020
// Address: 0x000000000049A020

//----- (000000000049A020) ----------------------------------------------------
__int64 __fastcall sub_49A020(__int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // x19
  unsigned __int64 *v3; // x1
  unsigned __int64 *v5; // x0
  unsigned __int64 v6; // x1

  if ( a2 )
  {
    v2 = a2 - 1;
    v3 = (unsigned __int64 *)a1[3];
    if ( v3 && v2 >= *v3 && v2 < v3[1] )
      return v2;
    v5 = (unsigned __int64 *)sub_499E30(a1, v2);
    if ( v5 != (unsigned __int64 *)(*a1 + 16 * a1[1]) && v2 >= *v5 && v2 < v5[1] )
    {
LABEL_10:
      a1[3] = (__int64)v5;
      return v2;
    }
    if ( (unsigned __int64 *)*a1 != v5 )
    {
      v6 = *(v5 - 1);
      v5 -= 2;
      if ( v6 <= v2 )
        v2 = v6 - 1;
      goto LABEL_10;
    }
  }
  return -1;
}
