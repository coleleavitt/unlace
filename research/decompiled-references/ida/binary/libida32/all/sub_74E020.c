__int64 __fastcall sub_74E020(__int64 (__fastcall *a1)(__int64), __int64 a2)
{
  int v2; // edx
  __int64 result; // rax
  __m128i v4; // xmm0
  __m128i si128; // [rsp+10h] [rbp-D8h] BYREF
  __m128i v6; // [rsp+20h] [rbp-C8h] BYREF
  __m128i v7; // [rsp+30h] [rbp-B8h] BYREF
  __m128i v8; // [rsp+40h] [rbp-A8h] BYREF
  __m128i v9; // [rsp+50h] [rbp-98h] BYREF
  __m128i v10; // [rsp+60h] [rbp-88h] BYREF
  __m128i v11; // [rsp+70h] [rbp-78h] BYREF
  __m128i v12; // [rsp+80h] [rbp-68h] BYREF
  __m128i v13; // [rsp+90h] [rbp-58h] BYREF
  __m128i v14; // [rsp+A0h] [rbp-48h] BYREF
  __m128i v15; // [rsp+B0h] [rbp-38h] BYREF
  __m128i v16; // [rsp+C0h] [rbp-28h] BYREF
  __int64 v17; // [rsp+D0h] [rbp-18h]
  unsigned __int64 v18; // [rsp+D8h] [rbp-10h]

  v18 = __readfsqword(0x28u);
  si128 = _mm_load_si128((const __m128i *)env);
  v6 = _mm_load_si128((const __m128i *)&xmmword_2CAA430);
  v17 = qword_2CAA4E0;
  v7 = _mm_load_si128((const __m128i *)&xmmword_2CAA440);
  v8 = _mm_load_si128((const __m128i *)&xmmword_2CAA450);
  v9 = _mm_load_si128((const __m128i *)&xmmword_2CAA460);
  v10 = _mm_load_si128((const __m128i *)&xmmword_2CAA470);
  v11 = _mm_load_si128((const __m128i *)&xmmword_2CAA480);
  v12 = _mm_load_si128((const __m128i *)&xmmword_2CAA490);
  v13 = _mm_load_si128((const __m128i *)&xmmword_2CAA4A0);
  v14 = _mm_load_si128((const __m128i *)&xmmword_2CAA4B0);
  v15 = _mm_load_si128((const __m128i *)&xmmword_2CAA4C0);
  v16 = _mm_load_si128((const __m128i *)&xmmword_2CAA4D0);
  v2 = _setjmp(env);
  result = 0;
  if ( !v2 )
    result = a1(a2);
  *(__m128i *)env[0].__jmpbuf = _mm_load_si128(&si128);
  v4 = _mm_load_si128(&v6);
  qword_2CAA4E0 = v17;
  xmmword_2CAA430 = (__int128)v4;
  xmmword_2CAA440 = (__int128)_mm_load_si128(&v7);
  xmmword_2CAA450 = (__int128)_mm_load_si128(&v8);
  xmmword_2CAA460 = (__int128)_mm_load_si128(&v9);
  xmmword_2CAA470 = (__int128)_mm_load_si128(&v10);
  xmmword_2CAA480 = (__int128)_mm_load_si128(&v11);
  xmmword_2CAA490 = (__int128)_mm_load_si128(&v12);
  xmmword_2CAA4A0 = (__int128)_mm_load_si128(&v13);
  xmmword_2CAA4B0 = (__int128)_mm_load_si128(&v14);
  xmmword_2CAA4C0 = (__int128)_mm_load_si128(&v15);
  xmmword_2CAA4D0 = (__int128)_mm_load_si128(&v16);
  return result;
}

