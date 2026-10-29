int sub_2EA830()
{
  qword_2CAD130 = (void *)qmutex_create();
  if ( !qword_2CAD130 )
  {
    if ( !under_debugger )
      interr(791);
    BUG();
  }
  return __cxa_atexit(sub_883250, &unk_2CAD128, &off_2AFC540);
}

