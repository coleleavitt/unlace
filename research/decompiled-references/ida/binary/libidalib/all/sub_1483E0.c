__int64 __fastcall sub_1483E0(double a1, double a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  __int64 v8; // rax
  __m128i si128; // xmm0
  double v10; // xmm4_8
  double v11; // xmm5_8
  __int64 v12; // r9
  __int64 v13; // rbp
  __int64 vars0; // [rsp+0h] [rbp+0h] BYREF
  __int128 vars8; // [rsp+8h] [rbp+8h]
  _QWORD vars20[32]; // [rsp+20h] [rbp+20h] BYREF
  __int64 vars120; // [rsp+120h] [rbp+120h]
  __int64 vars128; // [rsp+128h] [rbp+128h]
  __int64 vars130; // [rsp+130h] [rbp+130h]
  __int64 vars140; // [rsp+140h] [rbp+140h]
  unsigned __int64 vars148; // [rsp+148h] [rbp+148h]
  __int64 vars158; // [rsp+158h] [rbp+158h]
  __int64 vars160; // [rsp+160h] [rbp+160h]
  __int64 vars170; // [rsp+170h] [rbp+170h]
  __int64 vars178; // [rsp+178h] [rbp+178h]
  unsigned __int64 vars188; // [rsp+188h] [rbp+188h]

  vars188 = __readfsqword(0x28u);
  vars8 = 0;
  v8 = qvector_reserve();
  vars0 = v8;
  *(_QWORD *)&vars8 = 34;
  *(__m128i *)v8 = _mm_load_si128((const __m128i *)&xmmword_1D37D0);
  si128 = _mm_load_si128((const __m128i *)&xmmword_1D37E0);
  *(_BYTE *)(v8 + 32) = 115;
  *(__m128i *)(v8 + 16) = si128;
  *(_BYTE *)(vars0 + 33) = 0;
  sub_147F60(vars20, (char)&vars0, *(double *)si128.m128i_i64, a2, a3, a4, v10, v11, a7, a8);
  if ( vars0 )
  {
    *(_QWORD *)&vars8 = 0;
    qfree();
  }
  vars8 = 0;
  vars0 = 0;
  if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
                       203,
                       0,
                       vars20,
                       &vars0,
                       &callui,
                       v12) == 1
    && vars148 > 1 )
  {
    v13 = qstrdup();
  }
  else
  {
    v13 = 0;
  }
  if ( vars0 )
  {
    *(_QWORD *)&vars8 = 0;
    qfree();
  }
  vars20[0] = &off_235470;
  if ( vars120 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)vars120 + 8LL))(vars120);
  if ( vars170 )
  {
    vars178 = 0;
    qfree();
  }
  if ( vars158 )
  {
    vars160 = 0;
    qfree();
  }
  if ( vars140 )
  {
    vars148 = 0;
    qfree();
  }
  if ( vars128 )
  {
    vars130 = 0;
    qfree();
  }
  sub_BD6A0(vars20);
  return v13;
}

