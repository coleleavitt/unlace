__int64 __fastcall sub_3F1010(__int64 a1, unsigned __int64 a2, char a3)
{
  if ( !(_BYTE)byte_8D1420 && __cxa_guard_acquire(&byte_8D1420) )
  {
    qword_8D1440 = (__int64)j__xrefblk_t_first_from;
    qword_8D1450 = (__int64)j__xrefblk_t_next_from;
    xmmword_8D1460 = 0;
    xmmword_8D1480 = 0;
    xmmword_8D1470 = (__int128)_mm_unpacklo_epi64(
                                 _mm_loadl_epi64((const __m128i *)&off_86A6C0),
                                 (__m128i)(unsigned __int64)sub_3EDE60);
    qword_8D1448 = 0;
    qword_8D1458 = 0;
    xmmword_8D1490 = (__int128)_mm_unpacklo_epi64(
                                 _mm_loadl_epi64((const __m128i *)&off_86A6C8),
                                 (__m128i)(unsigned __int64)sub_3EEA00);
    __cxa_atexit((void (*)(void *))sub_3EEB50, &qword_8D1440, &off_85BC80);
    __cxa_guard_release(&byte_8D1420);
  }
  sub_3F0BC0(a1, a2, (char **)&qword_8D1440, a3);
  return a1;
}
