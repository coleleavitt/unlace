__int64 __fastcall sub_93580(int a1, __int64 a2)
{
  if ( !(_BYTE)byte_250418 && __cxa_guard_acquire(&byte_250418) )
  {
    qword_250420 = 0;
    xmmword_250428 = 0;
    __cxa_atexit((void (*)(void *))sub_91C20, &qword_250420, &off_22E220);
    __cxa_guard_release(&byte_250418);
  }
  if ( a1 == -1 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 48LL))(a2, 3);
    sub_934B0(a2, 0);
    return 1;
  }
  else if ( a1 == 3
         && ((**(void (__fastcall ***)(__int64, __int64, __int64 *))a2)(a2, 3, &qword_250420), (_QWORD)xmmword_250428) )
  {
    sub_934B0(a2, *(_QWORD *)qword_250420);
    return 1;
  }
  else
  {
    return 1;
  }
}

