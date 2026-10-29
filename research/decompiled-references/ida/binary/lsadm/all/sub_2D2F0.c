bool sub_2D2F0()
{
  pthread_mutex_t *v0; // rbp
  void *v2; // rbx

  v0 = (pthread_mutex_t *)qword_7BCF0;
  sub_2B4D0((pthread_mutex_t *)qword_7BCF0);
  while ( (_QWORD)xmmword_7BCD8 )
  {
    v2 = *(void **)(qword_7BCD0 + 8 * xmmword_7BCD8 - 8);
    if ( !v2 )
    {
      while ( 1 )
        ;
    }
    sub_2D170(*(_QWORD *)(qword_7BCD0 + 8 * xmmword_7BCD8 - 8));
    operator delete(v2, 0x1668u);
  }
  return sub_2B520(v0);
}

