__int64 __fastcall sub_93660(int a1, __int64 a2)
{
  if ( !(_BYTE)byte_251478 && __cxa_guard_acquire(&byte_251478) )
  {
    qword_251480 = 0;
    xmmword_251488 = 0;
    __cxa_atexit((void (*)(void *))sub_91D00, &qword_251480, &off_22F2A0);
    __cxa_guard_release(&byte_251478);
  }
  if ( a1 == -1 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 48LL))(a2, 3);
    sub_93590(a2, 0);
    return 1;
  }
  else if ( a1 == 3
         && ((**(void (__fastcall ***)(__int64, __int64, __int64 *))a2)(a2, 3, &qword_251480), (_QWORD)xmmword_251488) )
  {
    sub_93590(a2, *(_QWORD *)qword_251480);
    return 1;
  }
  else
  {
    return 1;
  }
}

