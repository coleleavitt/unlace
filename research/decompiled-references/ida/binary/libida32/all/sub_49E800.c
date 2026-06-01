void sub_49E800()
{
  void **v0; // rbx
  void **v1; // rbp

  if ( qword_2CA1EF0 )
    qmutex_lock(qword_2CA1EF0);
  v0 = (void **)qword_2CA1ED0;
  v1 = (void **)(qword_2CA1ED0 + 8 * xmmword_2CA1ED8);
  if ( (void **)qword_2CA1ED0 != v1 )
  {
    do
    {
      if ( *v0 )
        operator delete(*v0, 0x20u);
      ++v0;
    }
    while ( v1 != v0 );
    v1 = (void **)qword_2CA1ED0;
  }
  if ( v1 )
  {
    *(_QWORD *)&xmmword_2CA1ED8 = 0;
    qfree(v1);
    qword_2CA1ED0 = 0;
    *((_QWORD *)&xmmword_2CA1ED8 + 1) = 0;
  }
  if ( qword_2CA1EF0 )
    qmutex_unlock(qword_2CA1EF0);
}

