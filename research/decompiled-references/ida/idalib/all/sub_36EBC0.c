__int64 sub_36EBC0()
{
  void *v1; // r12
  _QWORD *v2; // rbx
  _QWORD *v3; // rbp

  setinf_flag(2, 4, 0);
  if ( !(unsigned __int8)getinf_flag(45, 16) )
  {
    v1 = qword_2CD4690;
    qmutex_lock(qword_2CD4690);
    v2 = (_QWORD *)qword_2CCB480;
    v3 = (_QWORD *)(qword_2CCB480 + 8 * xmmword_2CCB488);
    if ( (_QWORD *)qword_2CCB480 != v3 )
    {
      do
      {
        if ( *v2 )
          qfclose(*v2);
        ++v2;
      }
      while ( v3 != v2 );
    }
    *(_QWORD *)&xmmword_2CCB488 = 0;
    qmutex_unlock(v1);
  }
  if ( (unsigned __int8)is_main_thread() )
    callui();
  return 0;
}
