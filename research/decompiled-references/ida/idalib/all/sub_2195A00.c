void __fastcall sub_2195A00(__int64 a1, __int64 a2, int a3)
{
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = std::_V2::system_category((std::_V2 *)a1);
  *(_QWORD *)a1 = off_2BE9688;
  if ( !(_BYTE)byte_2CFEFF8 && __cxa_guard_acquire(&byte_2CFEFF8) )
  {
    __cxa_atexit((void (*)(void *))sub_21955E0, &off_2C8EF48, &off_2B25620);
    __cxa_guard_release(&byte_2CFEFF8);
  }
  *(_DWORD *)(a1 + 8) = 3;
  *(_QWORD *)(a1 + 16) = &off_2C8EF48;
  *(_QWORD *)a1 = &off_2BE96D8;
  sub_2253560(a1 + 24, a2);
  if ( !(_BYTE)byte_2CFEFF8 && __cxa_guard_acquire(&byte_2CFEFF8) )
  {
    __cxa_atexit((void (*)(void *))sub_21955E0, &off_2C8EF48, &off_2B25620);
    __cxa_guard_release(&byte_2CFEFF8);
  }
  *(_DWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 16) = &off_2C8EF48;
}
