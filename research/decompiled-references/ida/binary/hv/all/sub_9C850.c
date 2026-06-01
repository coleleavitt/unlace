bool sub_9C850()
{
  pthread_mutex_t *v0; // rbp
  void *v2; // rbx

  v0 = (pthread_mutex_t *)qword_167200;
  sub_98400((pthread_mutex_t *)qword_167200);
  while ( (_QWORD)xmmword_1671E8 )
  {
    v2 = *(void **)(qword_1671E0 + 8 * xmmword_1671E8 - 8);
    if ( !v2 )
    {
      while ( 1 )
        ;
    }
    sub_9C6D0(*(_QWORD *)(qword_1671E0 + 8 * xmmword_1671E8 - 8));
    operator delete(v2, 0x1668u);
  }
  return sub_98450(v0);
}

