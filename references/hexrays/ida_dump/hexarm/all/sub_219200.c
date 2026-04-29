void __fastcall sub_219200(int *src, int *a2, _QWORD *a3)
{
  int *i; // rbx
  char v5; // al
  int v6; // ebp
  int *j; // r15
  int v8; // edx
  int *v9; // r13

  if ( src != a2 )
  {
    for ( i = src + 1; a2 != i; ++i )
    {
      while ( 1 )
      {
        v5 = sub_215E80(a3, *i, *src);
        v6 = *i;
        if ( v5 )
          break;
        for ( j = i; ; j[1] = *j )
        {
          v8 = *(j - 1);
          v9 = j--;
          if ( !sub_215E80(a3, v6, v8) )
            break;
        }
        *v9 = v6;
        if ( a2 == ++i )
          return;
      }
      if ( (char *)i - (char *)src <= 4 )
      {
        if ( (char *)i - (char *)src == 4 )
          *i = *src;
      }
      else
      {
        memmove(src + 1, src, (char *)i - (char *)src);
      }
      *src = v6;
    }
  }
}
