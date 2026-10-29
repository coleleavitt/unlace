__m128i *__fastcall clang_getTokenExtent(
        __m128i *a1,
        __int64 a2,
        double a3,
        double a4,
        __m128 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // rax
  __m128 si128; // xmm1
  __m128i v12; // xmm0
  __int64 v14; // r13
  unsigned int v15; // r12d
  int v16; // eax
  _BYTE *v17; // r14
  bool v18; // r13
  __int64 v19; // rbp
  __int64 v20; // rax
  __int64 v21; // rdx
  __m128i v22; // xmm0
  __m128i v23; // xmm0
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  char v33; // al
  unsigned int v34; // eax
  __int64 v35; // rax
  __m128i v36; // xmm3
  int v37; // edx
  int v38; // eax
  __m128 v39; // [rsp+0h] [rbp-48h] BYREF
  __int64 v40; // [rsp+10h] [rbp-38h]
  int v41; // [rsp+18h] [rbp-30h]

  if ( a2 )
  {
    v10 = *(_QWORD *)(a2 + 8);
    if ( v10 )
    {
      si128 = (__m128)_mm_loadu_si128((const __m128i *)(*(_QWORD *)(v10 + 80) + 2152LL));
      if ( !HIDWORD(a10) )
      {
LABEL_4:
        v12 = 0;
LABEL_5:
        *a1 = (__m128i)si128;
        a1[1].m128i_i64[0] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(HIDWORD(a10)), v12).m128i_u64[0];
        return a1;
      }
      v14 = si128.m128_u64[0];
      v15 = HIDWORD(a10);
      v12 = _mm_cvtsi32_si128(HIDWORD(a10));
      if ( a10 < 0 )
      {
        v39 = si128;
        v33 = sub_CAC7C0(si128.m128_u64[0], HIDWORD(a10), 0);
        si128 = (__m128)_mm_load_si128((const __m128i *)&v39);
        if ( v33 )
          goto LABEL_20;
        v35 = sub_CACEA0(v14, HIDWORD(a10));
        si128 = (__m128)_mm_load_si128((const __m128i *)&v39);
        v40 = v35;
        v36 = (__m128i)_mm_shuffle_ps((__m128)(unsigned __int64)v35, (__m128)(unsigned __int64)v35, 85);
        v41 = v37;
        v12 = v36;
        if ( !(_BYTE)v37 )
          goto LABEL_5;
        v38 = _mm_cvtsi128_si32(v36);
        if ( !v38 )
          goto LABEL_4;
        v15 = _mm_cvtsi128_si32(v36);
        if ( v38 < 0 )
        {
LABEL_20:
          v39 = si128;
          v34 = sub_CAB1A0(v14, v15);
          si128 = (__m128)_mm_load_si128((const __m128i *)&v39);
          v12 = _mm_cvtsi32_si128(v34);
        }
      }
      v39 = si128;
      v16 = sub_1169590((unsigned int)_mm_cvtsi128_si32(v12), v14, _mm_movehl_ps(a5, si128).m128_u64[0]);
      si128 = (__m128)_mm_load_si128((const __m128i *)&v39);
      v12 = _mm_cvtsi32_si128(v15 + v16);
      goto LABEL_5;
    }
  }
  else
  {
    if ( !(_BYTE)qword_4AD21C0 && __cxa_guard_acquire(&qword_4AD21C0) )
    {
      qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
      __cxa_guard_release(&qword_4AD21C0);
    }
    v17 = (_BYTE *)qword_4AD21C8;
    v18 = 0;
    if ( qword_4AD21C8 && strlen((const char *)qword_4AD21C8) == 1 )
      v18 = *v17 == 50;
    if ( !(_BYTE)qword_4AD21C0 && __cxa_guard_acquire(&qword_4AD21C0) )
    {
      qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
      __cxa_guard_release(&qword_4AD21C0);
    }
    if ( qword_4AD21C8 )
    {
      v40 = 20;
      v19 = operator new(0xC0u);
      *(_DWORD *)v19 = 0;
      *(_QWORD *)(v19 + 8) = v19 + 24;
      v20 = std::string::_M_create();
      v21 = v40;
      v22 = _mm_load_si128((const __m128i *)&xmmword_3C7E2F0);
      *(_QWORD *)(v19 + 8) = v20;
      *(_QWORD *)(v19 + 24) = v21;
      *(__m128i *)v20 = v22;
      v23 = _mm_load_si128((const __m128i *)&xmmword_3C7E260);
      *(_DWORD *)(v20 + 16) = 1953391988;
      v24 = v40;
      v25 = *(_QWORD *)(v19 + 8);
      *(_QWORD *)(v19 + 16) = v40;
      *(_BYTE *)(v25 + v24) = 0;
      *(_QWORD *)(v19 + 48) = v19 + 72;
      *(_BYTE *)(v19 + 40) = v18;
      *(__m128i *)(v19 + 56) = v23;
      *(_QWORD *)(v19 + 136) = &off_49DA340;
      *(_QWORD *)(v19 + 184) = v19 + 48;
      *(_DWORD *)(v19 + 144) = 2;
      *(_BYTE *)(v19 + 176) = 0;
      *(_DWORD *)(v19 + 180) = 1;
      *(_QWORD *)(v19 + 168) = 0;
      *(_OWORD *)(v19 + 152) = 0;
      sub_2623850(v19 + 136, 0, 0, 0, v26, v27);
      v28 = *(_QWORD *)(v19 + 168);
      v29 = *(_QWORD *)(v19 + 160);
      ++*(_DWORD *)v19;
      if ( (unsigned __int64)(v29 - v28) <= 0x15 )
      {
        sub_26240F0(v19 + 136, "called with a bad TU: ", 22);
      }
      else
      {
        *(__m128i *)v28 = _mm_load_si128((const __m128i *)&xmmword_3C7E2B0);
        *(_QWORD *)(v28 + 14) = 0x203A555420646162LL;
        *(_QWORD *)(v19 + 168) += 22LL;
      }
      sub_5FF0F0(v19 + 136, "<NULL TU>");
      if ( (*(_DWORD *)v19)-- == 1 )
      {
        sub_60C330((pthread_mutex_t *)v19, (__int64 (*)())"<NULL TU>", v30, v31);
        operator delete((void *)v19, 0xC0u);
      }
    }
  }
  clang_getNullRange(a1);
  return a1;
}

