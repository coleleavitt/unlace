/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49A1D8
// Address: 0x000000000049A1D8

//----- (000000000049A1D8) ----------------------------------------------------
__int64 __fastcall sub_49A1D8(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 *v8; // x1
  unsigned __int64 v9; // x5
  unsigned __int64 v10; // x3
  unsigned __int64 *v11; // x4
  __int64 v12; // x2
  unsigned __int64 v14; // x0

  if ( a2 == a3 )
    return 0;
  if ( !sub_499F08(a1, a2) )
    return 0xFFFFFFFFLL;
  v8 = (unsigned __int64 *)a1[3];
  v10 = v8[1];
  if ( v10 < a2 + a4 )
    return 4294967294LL;
  if ( a3 >= a3 + a4 )
    return 4294967293LL;
  v11 = (unsigned __int64 *)*a1;
  v12 = *a1 + 16 * a1[1];
  if ( *a1 == v12 )
    return 0;
  while ( a3 >= v11[1] )
  {
    v11 += 2;
    if ( (unsigned __int64 *)v12 == v11 )
      return 0;
  }
  v14 = *v11;
  if ( a3 < *v11 )
  {
    if ( v11 == v8 || a4 <= v14 - a3 )
      return 0;
    return 4294967293LL;
  }
  else
  {
    if ( v11 != v8 )
      return 4294967293LL;
    v9 = a2 + a4;
    if ( a2 != v14 )
    {
      if ( v10 == v9 && a2 <= a3 )
        goto LABEL_16;
      return 4294967293LL;
    }
    if ( v10 == v9 || a2 >= a3 )
    {
LABEL_16:
      if ( v11 == (unsigned __int64 *)(v12 - 16) || a4 <= v11[2] - a3 )
        return 0;
      return 4294967293LL;
    }
    return 4294967293LL;
  }
}
