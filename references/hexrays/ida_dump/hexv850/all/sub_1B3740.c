void __fastcall sub_1B3740(char *src, char *a2)
{
  char *i; // rbp
  __int64 v3; // rbx
  __int64 v4; // rdx
  char *v5; // rax
  char *v6; // rcx

  if ( src != a2 )
  {
    for ( i = src + 8; a2 != i; *(_QWORD *)src = v3 )
    {
      while ( 1 )
      {
        v3 = *(_QWORD *)i;
        if ( *(_QWORD *)i < *(_QWORD *)src )
          break;
        v4 = *((_QWORD *)i - 1);
        v5 = i - 8;
        if ( v3 >= v4 )
        {
          *(_QWORD *)i = v3;
        }
        else
        {
          do
          {
            *((_QWORD *)v5 + 1) = v4;
            v6 = v5;
            v4 = *((_QWORD *)v5 - 1);
            v5 -= 8;
          }
          while ( v3 < v4 );
          *(_QWORD *)v6 = v3;
        }
        i += 8;
        if ( a2 == i )
          return;
      }
      if ( i - src <= 8 )
      {
        if ( i - src == 8 )
          *(_QWORD *)i = *(_QWORD *)src;
      }
      else
      {
        memmove(src + 8, src, i - src);
      }
      i += 8;
    }
  }
}
