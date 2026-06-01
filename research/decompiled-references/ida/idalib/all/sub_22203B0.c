__int64 __fastcall sub_22203B0(__int64 a1)
{
  __int64 v1; // r12
  __int64 (__fastcall ***v2)(); // rdx
  __int64 (__fastcall ***v3)(); // rbx

  v1 = (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 56) + 32LL))(*(_QWORD *)(a1 + 56));
  v3 = v2;
  if ( !(_BYTE)byte_2D0AAA0 && __cxa_guard_acquire(&byte_2D0AAA0) )
  {
    __cxa_atexit((void (*)(void *))sub_221FE30, &off_2C8F5D0, &off_2B25620);
    __cxa_guard_release(&byte_2D0AAA0);
  }
  if ( (_DWORD)v1 != 3 || &off_2C8F5D0 != v3 )
    return v1;
  if ( !(_BYTE)byte_2D0AAA0 )
  {
    if ( __cxa_guard_acquire(&byte_2D0AAA0) )
    {
      __cxa_atexit((void (*)(void *))sub_221FE30, &off_2C8F5D0, &off_2B25620);
      __cxa_guard_release(&byte_2D0AAA0);
    }
  }
  return 2;
}
