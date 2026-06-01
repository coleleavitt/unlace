__int64 *__fastcall sub_210380(__int64 a1)
{
  __int64 v2; // rdi

  if ( !(_BYTE)byte_8CB540 && __cxa_guard_acquire(&byte_8CB540) )
  {
    qword_8CB568 = 0;
    xmmword_8CB570 = (__int128)_mm_load_si128((const __m128i *)&xmmword_5DC360);
    qword_8CB560 = get_nsec_stamp();
    __cxa_atexit((void (*)(void *))sub_20DC60, &qword_8CB560, &off_85BC80);
    __cxa_guard_release(&byte_8CB540);
    v2 = *(_QWORD *)a1;
    if ( !*(_QWORD *)a1 )
      return &qword_8CB560;
    return (__int64 *)sub_20F460(v2, *(_DWORD *)(a1 + 8));
  }
  v2 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
    return (__int64 *)sub_20F460(v2, *(_DWORD *)(a1 + 8));
  return &qword_8CB560;
}
