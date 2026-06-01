void __fastcall __noreturn sub_285110(void *src, __int64 a2)
{
  void *v2; // rsp
  _OWORD v3[6]; // [rsp+0h] [rbp-90h] BYREF
  _QWORD v4[6]; // [rsp+60h] [rbp-30h] BYREF

  strcpy((char *)v4, "/):\n    ");
  v4[3] = __readfsqword(0x28u);
  v2 = alloca(a2 - (_QWORD)src + 120);
  v4[0] = 0x202020200A3A292FLL;
  v3[0] = _mm_load_si128((const __m128i *)&xmmword_29B870);
  v3[1] = _mm_load_si128((const __m128i *)&xmmword_29B880);
  v3[2] = _mm_load_si128((const __m128i *)&xmmword_29B890);
  v3[3] = _mm_load_si128((const __m128i *)&xmmword_29B8A0);
  v3[4] = _mm_load_si128((const __m128i *)&xmmword_29B8B0);
  v3[5] = _mm_load_si128((const __m128i *)&xmmword_29B8C0);
  memcpy(&v4[1], src, a2 - (_QWORD)src);
  *((_BYTE *)&v4[1] + a2 - (_QWORD)src) = 0;
  std::__throw_logic_error((const char *)v3);
}

