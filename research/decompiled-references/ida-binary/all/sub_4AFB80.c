void __fastcall sub_4AFB80(char *src, char *a2)
{
  char *i; // rbp
  unsigned __int16 v3; // bx
  unsigned __int16 v4; // dx
  char *v5; // rax
  char *v6; // rcx

  if ( src != a2 )
  {
    for ( i = src + 2; a2 != i; *(_WORD *)src = v3 )
    {
      while ( 1 )
      {
        v3 = *(_WORD *)i;
        if ( *(_WORD *)i < *(_WORD *)src )
          break;
        v4 = *((_WORD *)i - 1);
        v5 = i - 2;
        if ( v3 >= v4 )
        {
          *(_WORD *)i = v3;
        }
        else
        {
          do
          {
            *((_WORD *)v5 + 1) = v4;
            v6 = v5;
            v4 = *((_WORD *)v5 - 1);
            v5 -= 2;
          }
          while ( v3 < v4 );
          *(_WORD *)v6 = v3;
        }
        i += 2;
        if ( a2 == i )
          return;
      }
      if ( i - src <= 2 )
      {
        if ( i - src == 2 )
          *(_WORD *)i = *(_WORD *)src;
      }
      else
      {
        memmove(src + 2, src, i - src);
      }
      i += 2;
    }
  }
}
