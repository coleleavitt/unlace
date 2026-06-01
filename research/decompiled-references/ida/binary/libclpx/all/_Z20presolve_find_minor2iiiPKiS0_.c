__int64 __fastcall presolve_find_minor2(int a1, unsigned int a2, int a3, const int *a4, const int *a5)
{
  __int64 v5; // r11
  int v6; // r9d
  __int64 result; // rax

  if ( a3 <= 0 )
    goto LABEL_8;
  v5 = (int)a2;
  if ( a1 != a4[v5] )
  {
    v6 = 0;
    while ( 1 )
    {
      ++v6;
      result = (unsigned int)a5[v5];
      if ( a3 == v6 )
        break;
      v5 = (int)result;
      if ( a4[v5] == a1 )
        return result;
    }
LABEL_8:
    abort();
  }
  return a2;
}

