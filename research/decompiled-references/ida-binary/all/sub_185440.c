void __fastcall sub_185440(char *a1, char *a2)
{
  char *v3; // rbp
  int v4; // ebx
  char *v5; // rsi
  __int64 v6; // rax
  int v7; // edx
  char *i; // rax

  if ( a1 != a2 )
  {
    v3 = a1 + 4;
    while ( a2 != v3 )
    {
      while ( 1 )
      {
        v4 = *(_DWORD *)v3;
        v5 = v3;
        v3 += 4;
        if ( v4 >= *(_DWORD *)a1 )
          break;
        if ( v5 - a1 > 0 )
        {
          v6 = ((v5 - a1) >> 2) - 1;
          if ( v6 < 0 )
            v6 = 0;
          memmove(&v3[-4 * v6 - 4], &v5[-4 * v6 - 4], 4 * v6 + 4);
        }
        *(_DWORD *)a1 = v4;
        if ( a2 == v3 )
          return;
      }
      v7 = *((_DWORD *)v3 - 2);
      for ( i = v3 - 8; v4 < v7; i -= 4 )
      {
        *((_DWORD *)i + 1) = v7;
        v5 = i;
        v7 = *((_DWORD *)i - 1);
      }
      *(_DWORD *)v5 = v4;
    }
  }
}
