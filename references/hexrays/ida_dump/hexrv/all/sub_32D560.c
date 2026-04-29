__int64 __fastcall sub_32D560(_QWORD *a1, unsigned __int64 a2)
{
  int func_chunknum; // edx
  __int64 result; // rax
  unsigned __int64 *v4; // rax
  __int64 v5; // rdx
  unsigned __int64 *v6; // rcx

  func_chunknum = get_func_chunknum(*a1, a2);
  result = 1;
  if ( func_chunknum < 0 )
  {
    v4 = (unsigned __int64 *)a1[1];
    v5 = 2LL * a1[2];
    v6 = &v4[v5];
    if ( v5 * 8 )
    {
      while ( a2 < *v4 || a2 >= v4[1] )
      {
        v4 += 2;
        if ( v4 == v6 )
          return 0;
      }
      return 1;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
