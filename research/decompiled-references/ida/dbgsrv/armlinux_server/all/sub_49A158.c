/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49A158
// Address: 0x000000000049A158

//----- (000000000049A158) ----------------------------------------------------
__int64 __fastcall sub_49A158(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 *v2; // x2
  __int64 v4; // x0

  v2 = (unsigned __int64 *)a1[3];
  if ( v2 && a2 >= *v2 && a2 < v2[1] )
  {
    if ( v2 == (unsigned __int64 *)*a1 )
    {
      return -1;
    }
    else
    {
      a1[3] = (__int64)(v2 - 2);
      return *(v2 - 1) - 1;
    }
  }
  else
  {
    v4 = sub_499E30(a1, a2);
    if ( *a1 == v4 )
    {
      return -1;
    }
    else
    {
      a1[3] = v4 - 16;
      return *(_QWORD *)(v4 - 8) - 1LL;
    }
  }
}
