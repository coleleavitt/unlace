void sub_780340()
{
  _QWORD *v0; // rbx
  char *v1; // rbp
  void *v2; // rdi

  qfree(qword_2CD4528);
  qword_2CD4528 = nullptr;
  v0 = qword_2CD4510;
  if ( byte_2CD4501 )
  {
    v1 = (char *)qword_2CD4510 + 16 * xmmword_2CD4518;
    if ( qword_2CD4510 != v1 )
    {
      do
      {
        v2 = (void *)v0[1];
        v0 += 2;
        qfree(v2);
      }
      while ( v0 != (_QWORD *)v1 );
      v0 = qword_2CD4510;
    }
  }
  if ( v0 )
  {
    *(_QWORD *)&xmmword_2CD4518 = 0;
    qfree(v0);
    qword_2CD4510 = nullptr;
    *((_QWORD *)&xmmword_2CD4518 + 1) = 0;
  }
}
