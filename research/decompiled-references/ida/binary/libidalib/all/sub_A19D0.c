__int64 *__fastcall sub_A19D0(__int64 a1)
{
  __int64 v2; // rdi

  if ( !(_BYTE)byte_2519C0 && __cxa_guard_acquire(&byte_2519C0) )
  {
    qword_2519E8 = 0;
    xmmword_2519F0 = (__int128)_mm_load_si128((const __m128i *)&xmmword_1D2FF0);
    qword_2519E0 = get_nsec_stamp();
    __cxa_atexit((void (*)(void *))sub_9F120, &qword_2519E0, &off_22F2A0);
    __cxa_guard_release(&byte_2519C0);
    v2 = *(_QWORD *)a1;
    if ( !*(_QWORD *)a1 )
      return &qword_2519E0;
    return (__int64 *)sub_A0A20(v2, *(_DWORD *)(a1 + 8));
  }
  v2 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
    return (__int64 *)sub_A0A20(v2, *(_DWORD *)(a1 + 8));
  return &qword_2519E0;
}

