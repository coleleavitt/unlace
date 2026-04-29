void __fastcall sub_CA7C0(char *src, char *a2)
{
  char *i; // rbp
  int v3; // ebx
  int v4; // edx
  char *v5; // rax
  char *v6; // rcx

  if ( src != a2 )
  {
    for ( i = src + 4; a2 != i; *(_DWORD *)src = v3 )
    {
      while ( 1 )
      {
        v3 = *(_DWORD *)i;
        if ( *(_DWORD *)i < *(_DWORD *)src )
          break;
        v4 = *((_DWORD *)i - 1);
        v5 = i - 4;
        if ( v3 >= v4 )
        {
          *(_DWORD *)i = v3;
        }
        else
        {
          do
          {
            *((_DWORD *)v5 + 1) = v4;
            v6 = v5;
            v4 = *((_DWORD *)v5 - 1);
            v5 -= 4;
          }
          while ( v3 < v4 );
          *(_DWORD *)v6 = v3;
        }
        i += 4;
        if ( a2 == i )
          return;
      }
      if ( i - src <= 4 )
      {
        if ( i - src == 4 )
          *(_DWORD *)i = *(_DWORD *)src;
      }
      else
      {
        memmove(src + 4, src, i - src);
      }
      i += 4;
    }
  }
}
