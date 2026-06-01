void __fastcall __noreturn sub_32920(void *src, __int64 a2)
{
  void *v2; // rsp
  _OWORD v3[6]; // [rsp+0h] [rbp-90h] BYREF
  char v4[24]; // [rsp+60h] [rbp-30h] BYREF
  unsigned __int64 v5; // [rsp+78h] [rbp-18h]

  v5 = __readfsqword(0x28u);
  v2 = alloca(a2 - (_QWORD)src + 113);
  strcpy(v4, "/):\n    ");
  v3[0] = _mm_load_si128((const __m128i *)&xmmword_3E540);
  v3[1] = _mm_load_si128((const __m128i *)&xmmword_3E550);
  v3[2] = _mm_load_si128((const __m128i *)&xmmword_3E560);
  v3[3] = _mm_load_si128((const __m128i *)&xmmword_3E570);
  v3[4] = _mm_load_si128((const __m128i *)&xmmword_3E580);
  v3[5] = _mm_load_si128((const __m128i *)&xmmword_3E590);
  memcpy(&v4[8], src, a2 - (_QWORD)src);
  v4[a2 - (_QWORD)src + 8] = 0;
  std::__throw_logic_error((const char *)v3);
}

