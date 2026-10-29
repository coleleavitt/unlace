__int64 __fastcall sub_3F0ED0(__int64 a1, unsigned __int64 a2, char a3)
{
  if ( !(_BYTE)byte_8D13B8 && __cxa_guard_acquire(&byte_8D13B8) )
  {
    qword_8D13C0 = (__int64)j__xrefblk_t_first_to;
    qword_8D13D0 = (__int64)j__xrefblk_t_next_to;
    xmmword_8D13E0 = 0;
    xmmword_8D1400 = 0;
    xmmword_8D13F0 = (__int128)_mm_unpacklo_epi64(
                                 _mm_loadl_epi64((const __m128i *)&off_86A6B0),
                                 (__m128i)(unsigned __int64)sub_3EDED0);
    qword_8D13C8 = 0;
    qword_8D13D8 = 0;
    xmmword_8D1410 = (__int128)_mm_unpacklo_epi64(
                                 _mm_loadl_epi64((const __m128i *)&off_86A6B8),
                                 (__m128i)(unsigned __int64)sub_3EE9D0);
    __cxa_atexit((void (*)(void *))sub_3EEB50, &qword_8D13C0, &off_85BC80);
    __cxa_guard_release(&byte_8D13B8);
  }
  sub_3F0BC0(a1, a2, (char **)&qword_8D13C0, a3);
  return a1;
}
