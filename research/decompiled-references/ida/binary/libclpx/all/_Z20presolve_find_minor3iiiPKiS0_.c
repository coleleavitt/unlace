__int64 __fastcall presolve_find_minor3(int a1, unsigned int a2, int a3, const int *a4, const int *a5)
{
  __int64 result; // rax
  __int64 v6; // r10
  int v7; // esi

  result = 0xFFFFFFFFLL;
  if ( a3 > 0 )
  {
    v6 = (int)a2;
    if ( a1 == a4[v6] )
    {
      return a2;
    }
    else
    {
      v7 = 0;
      while ( 1 )
      {
        ++v7;
        result = (unsigned int)a5[v6];
        if ( a3 == v7 )
          break;
        v6 = (int)result;
        if ( a4[v6] == a1 )
          return result;
      }
      return 0xFFFFFFFFLL;
    }
  }
  return result;
}

