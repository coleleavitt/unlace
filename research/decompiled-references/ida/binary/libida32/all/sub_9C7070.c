void __fastcall sub_9C7070(unsigned int **src, char *a2, __int64 a3)
{
  unsigned int **v3; // r15
  unsigned int *v5; // rbx
  unsigned int *v6; // r13
  _QWORD *i; // rbx
  unsigned int *v8; // rax
  _QWORD *v9; // r14

  if ( src != (unsigned int **)a2 && a2 != (char *)(src + 1) )
  {
    v3 = src + 1;
    do
    {
      while ( !(unsigned __int8)sub_1000980(a3, **v3, **src) )
      {
        v6 = *v3;
        for ( i = v3; ; i[1] = *i )
        {
          v8 = (unsigned int *)*(i - 1);
          v9 = i--;
          if ( !(unsigned __int8)sub_1000980(a3, *v6, *v8) )
            break;
        }
        *v9 = v6;
        if ( a2 == (char *)++v3 )
          return;
      }
      v5 = *v3;
      if ( src != v3 )
        memmove(src + 1, src, (char *)v3 - (char *)src);
      *src = v5;
      ++v3;
    }
    while ( a2 != (char *)v3 );
  }
}

