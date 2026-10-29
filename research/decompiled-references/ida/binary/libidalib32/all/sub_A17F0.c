__int64 *__fastcall sub_A17F0(__int64 a1)
{
  __int64 v2; // rdi

  if ( !(_BYTE)byte_250950 && __cxa_guard_acquire(&byte_250950) )
  {
    qword_250968 = 0;
    qword_250970 = 0xFFFFFFFFLL;
    qword_250978 = 0;
    qword_250960 = get_nsec_stamp();
    __cxa_atexit((void (*)(void *))sub_9EFE0, &qword_250960, &off_22E220);
    __cxa_guard_release(&byte_250950);
    v2 = *(_QWORD *)a1;
    if ( !*(_QWORD *)a1 )
      return &qword_250960;
    return (__int64 *)sub_A0850(v2, *(_DWORD *)(a1 + 8));
  }
  v2 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
    return (__int64 *)sub_A0850(v2, *(_DWORD *)(a1 + 8));
  return &qword_250960;
}

