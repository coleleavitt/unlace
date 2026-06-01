int sub_2EDBF0()
{
  qword_2CD7050 = (void *)qmutex_create();
  if ( !qword_2CD7050 )
  {
    if ( !under_debugger )
      interr(791);
    BUG();
  }
  return __cxa_atexit(sub_8A6BD0, &unk_2CD7048, &off_2B25620);
}
