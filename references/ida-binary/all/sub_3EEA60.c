void **sub_3EEA60()
{
  __m128i *v1; // rax

  if ( (_BYTE)byte_8D1398 || !__cxa_guard_acquire(&byte_8D1398) )
    return &xmmword_8D13A0;
  qword_8D13B0 = 0;
  *(_OWORD *)&xmmword_8D13A0 = 0;
  v1 = (__m128i *)operator new(0x20u);
  qword_8D13B0 = (__int64)v1[2].m128i_i64;
  *v1 = _mm_load_si128((const __m128i *)&off_86A480);
  *(&xmmword_8D13A0 + 1) = &v1[2];
  v1[1] = _mm_load_si128((const __m128i *)&off_86A490);
  xmmword_8D13A0 = v1;
  __cxa_atexit(sub_3EEB20, &xmmword_8D13A0, &off_85BC80);
  __cxa_guard_release(&byte_8D1398);
  return &xmmword_8D13A0;
}
