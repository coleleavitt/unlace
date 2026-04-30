int sub_1668F0()
{
  int result; // eax

  qword_8CF0B0 = 0;
  xmmword_8CF0B8 = 0;
  result = __cxa_atexit(sub_34ADA0, &qword_8CF0B0, &off_85BC80);
  dword_8CF090 = 3;
  xmmword_8CF080 = (__int128)_mm_load_si128((const __m128i *)&xmmword_5DD0F0);
  return result;
}
