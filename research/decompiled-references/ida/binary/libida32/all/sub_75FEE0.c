void sub_75FEE0()
{
  _QWORD *v0; // rbx
  char *v1; // rbp
  void *v2; // rdi

  qfree(qword_2CAA608);
  qword_2CAA608 = nullptr;
  v0 = qword_2CAA5F0;
  if ( byte_2CAA5E7 )
  {
    v1 = (char *)qword_2CAA5F0 + 16 * xmmword_2CAA5F8;
    if ( qword_2CAA5F0 != v1 )
    {
      do
      {
        v2 = (void *)v0[1];
        v0 += 2;
        qfree(v2);
      }
      while ( v0 != (_QWORD *)v1 );
      v0 = qword_2CAA5F0;
    }
  }
  if ( v0 )
  {
    *(_QWORD *)&xmmword_2CAA5F8 = 0;
    qfree(v0);
    qword_2CAA5F0 = nullptr;
    *((_QWORD *)&xmmword_2CAA5F8 + 1) = 0;
  }
}

