void sub_389800()
{
  char *v0; // rdi
  __int64 v1; // rbp
  __int64 v2; // rbx
  char *v3; // rax
  void *v4; // rdi
  char *v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // rbx
  char *v8; // rax
  void *v9; // rdi

  v0 = (char *)qword_2CA1630;
  if ( qword_2CA1630 )
  {
    v1 = xmmword_2CA1638;
    if ( (_QWORD)xmmword_2CA1638 )
    {
      v2 = 0;
      do
      {
        v3 = &v0[24 * v2];
        v4 = *(void **)v3;
        if ( *(_QWORD *)v3 )
        {
          *((_QWORD *)v3 + 1) = 0;
          qfree(v4);
        }
        ++v2;
        v0 = (char *)qword_2CA1630;
      }
      while ( v1 != v2 );
    }
    *(_QWORD *)&xmmword_2CA1638 = 0;
    qfree(v0);
    qword_2CA1630 = 0;
    *((_QWORD *)&xmmword_2CA1638 + 1) = 0;
  }
  v5 = (char *)qword_2CA1610;
  if ( qword_2CA1610 )
  {
    v6 = xmmword_2CA1618;
    if ( (_QWORD)xmmword_2CA1618 )
    {
      v7 = 0;
      do
      {
        v8 = &v5[24 * v7];
        v9 = *(void **)v8;
        if ( *(_QWORD *)v8 )
        {
          *((_QWORD *)v8 + 1) = 0;
          qfree(v9);
        }
        ++v7;
        v5 = (char *)qword_2CA1610;
      }
      while ( v6 != v7 );
    }
    *(_QWORD *)&xmmword_2CA1618 = 0;
    qfree(v5);
    qword_2CA1610 = 0;
    *((_QWORD *)&xmmword_2CA1618 + 1) = 0;
  }
}

