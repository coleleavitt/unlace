__int64 __fastcall sub_2EE680(unsigned int a1, __int64 a2)
{
  if ( !(_BYTE)byte_8CD4E8 && __cxa_guard_acquire(&byte_8CD4E8) )
  {
    qword_8CD4F0 = 0;
    xmmword_8CD4F8 = 0;
    __cxa_atexit((void (*)(void *))sub_16B530, &qword_8CD4F0, &off_85BC80);
    __cxa_guard_release(&byte_8CD4E8);
  }
  if ( !(_BYTE)byte_8CD4B8 && __cxa_guard_acquire(&byte_8CD4B8) )
  {
    qword_8CD4C0 = 40;
    xmmword_8CD4D0 = 0;
    qword_8CD4C8 = 0;
    dword_8CD4E0 = 0;
    __cxa_atexit((void (*)(void *))sub_2EE640, &qword_8CD4C0, &off_85BC80);
    __cxa_guard_release(&byte_8CD4B8);
  }
  LOWORD(dword_8CD4E0) = 132;
  (*(void (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a2 + 8LL))(a2, a1, &qword_8CD4C0);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a2 + 112LL))(a2, a1, &qword_8CD4F0);
}
