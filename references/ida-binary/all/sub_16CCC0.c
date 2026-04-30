__int64 __fastcall sub_16CCC0(int a1, __int64 a2)
{
  if ( !(_BYTE)byte_8C9108 && __cxa_guard_acquire(&byte_8C9108) )
  {
    qword_8C9110 = 0;
    xmmword_8C9118 = 0;
    __cxa_atexit((void (*)(void *))sub_16B560, &qword_8C9110, &off_85BC80);
    __cxa_guard_release(&byte_8C9108);
  }
  if ( a1 == -1 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 48LL))(a2, 3);
    sub_16CBF0(a2, 0);
    return 1;
  }
  else if ( a1 == 3
         && ((**(void (__fastcall ***)(__int64, __int64, __int64 *))a2)(a2, 3, &qword_8C9110), (_QWORD)xmmword_8C9118) )
  {
    sub_16CBF0(a2, *(_QWORD *)qword_8C9110);
    return 1;
  }
  else
  {
    return 1;
  }
}
