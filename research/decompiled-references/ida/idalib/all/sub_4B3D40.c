void sub_4B3D40()
{
  void **v0; // rbx
  void **v1; // rbp

  if ( qword_2CCBDF0 )
    qmutex_lock(qword_2CCBDF0);
  v0 = (void **)qword_2CCBDD0;
  v1 = (void **)(qword_2CCBDD0 + 8 * xmmword_2CCBDD8);
  if ( (void **)qword_2CCBDD0 != v1 )
  {
    do
    {
      if ( *v0 )
        operator delete(*v0, 0x20u);
      ++v0;
    }
    while ( v1 != v0 );
    v1 = (void **)qword_2CCBDD0;
  }
  if ( v1 )
  {
    *(_QWORD *)&xmmword_2CCBDD8 = 0;
    qfree(v1);
    qword_2CCBDD0 = 0;
    *((_QWORD *)&xmmword_2CCBDD8 + 1) = 0;
  }
  if ( qword_2CCBDF0 )
    qmutex_unlock(qword_2CCBDF0);
}
