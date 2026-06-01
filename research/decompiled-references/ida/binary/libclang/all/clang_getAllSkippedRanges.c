_DWORD *__fastcall clang_getAllSkippedRanges(__int64 a1, double a2, double a3, double a4, __m128 a5)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r14
  __int64 v9; // r15
  _DWORD *v10; // rbp
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // r13
  __int64 v15; // r12
  __m128 si128; // xmm1
  unsigned int *v17; // rax
  unsigned __int64 v18; // rbx
  __m128i v19; // xmm0
  __int64 v20; // rdi
  unsigned int v21; // r8d
  int v22; // eax
  char v24; // al
  int v25; // eax
  __int64 v26; // rax
  int v27; // edx
  _BYTE *v28; // rbx
  char v29; // bp
  pthread_mutex_t *v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __m128 v35; // [rsp+0h] [rbp-78h] BYREF
  __m128 v36; // [rsp+10h] [rbp-68h] BYREF
  _DWORD *v37; // [rsp+20h] [rbp-58h]
  int v38; // [rsp+2Ch] [rbp-4Ch]
  void *v39; // [rsp+30h] [rbp-48h] BYREF
  int v40; // [rsp+38h] [rbp-40h]

  v5 = operator new(0x10u);
  v37 = (_DWORD *)v5;
  *(_DWORD *)v5 = 0;
  *(_QWORD *)(v5 + 8) = 0;
  if ( a1 )
  {
    v6 = *(_QWORD *)(a1 + 8);
    v7 = *(_QWORD *)(v6 + 64);
    v8 = *(_QWORD *)(v7 + 2880);
    if ( v8 )
    {
      v9 = *(_QWORD *)(v6 + 80);
      sub_11EDB50(*(_QWORD *)(v7 + 2880));
      v10 = v37;
      v11 = (__int64)(*(_QWORD *)(v8 + 168) - *(_QWORD *)(v8 + 160)) >> 3;
      *v37 = v11;
      v12 = operator new[](24LL * (unsigned int)v11);
      *((_QWORD *)v10 + 1) = v12;
      if ( (_DWORD)v11 )
      {
        v13 = v12 + 16;
        v14 = 8LL * (unsigned int)v11;
        v15 = 0;
        while ( 1 )
        {
          si128 = (__m128)_mm_loadu_si128((const __m128i *)(v9 + 2152));
          v17 = (unsigned int *)(v15 + *(_QWORD *)(v8 + 160));
          LODWORD(v18) = v17[1];
          v19 = _mm_cvtsi32_si128(*v17);
          if ( !(_DWORD)v18 )
            break;
          v20 = si128.m128_u64[0];
          v21 = v17[1];
          if ( (v18 & 0x80000000) != 0LL )
          {
            v36 = si128;
            v38 = _mm_cvtsi128_si32(v19);
            v35.m128_u64[0] = si128.m128_u64[0];
            v24 = sub_CAC7C0(si128.m128_u64[0], (unsigned int)v18, 0);
            v20 = v35.m128_u64[0];
            si128 = (__m128)_mm_load_si128((const __m128i *)&v36);
            v19 = _mm_cvtsi32_si128(v38);
            if ( v24 )
              goto LABEL_12;
            v26 = sub_CACEA0(v35.m128_u64[0], (unsigned int)v18);
            si128 = (__m128)_mm_load_si128((const __m128i *)&v36);
            v19 = _mm_cvtsi32_si128(v38);
            v39 = (void *)v26;
            v18 = HIDWORD(v26);
            v40 = v27;
            if ( !(_BYTE)v27 )
              goto LABEL_9;
            if ( !HIDWORD(v26) )
              break;
            v20 = v35.m128_u64[0];
            v21 = HIDWORD(v26);
            if ( v26 < 0 )
            {
LABEL_12:
              v35.m128_u64[0] = v20;
              v38 = _mm_cvtsi128_si32(v19);
              v36 = si128;
              v25 = sub_CAB1A0(v20, (unsigned int)v18);
              v21 = v18;
              v19 = _mm_cvtsi32_si128(v38);
              si128 = (__m128)_mm_load_si128((const __m128i *)&v36);
              v20 = v35.m128_u64[0];
              LODWORD(v18) = v25;
            }
          }
          a5 = _mm_movehl_ps(a5, si128);
          v35 = si128;
          v38 = v21;
          v36.m128_i32[0] = _mm_cvtsi128_si32(v19);
          v22 = sub_1169590((unsigned int)v18, v20, a5.m128_u64[0]);
          v19 = _mm_cvtsi32_si128(v36.m128_u32[0]);
          si128 = (__m128)_mm_load_si128((const __m128i *)&v35);
          LODWORD(v18) = v38 + v22;
LABEL_9:
          v15 += 8;
          *(__m128 *)(v13 - 16) = si128;
          v13 += 24;
          *(_QWORD *)(v13 - 24) = _mm_unpacklo_epi32(v19, _mm_cvtsi32_si128(v18)).m128i_u64[0];
          if ( v14 == v15 )
            return v37;
        }
        LODWORD(v18) = 0;
        goto LABEL_9;
      }
    }
  }
  else
  {
    if ( !(_BYTE)qword_4AD21C0 && __cxa_guard_acquire(&qword_4AD21C0) )
    {
      qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
      __cxa_guard_release(&qword_4AD21C0);
    }
    v28 = (_BYTE *)qword_4AD21C8;
    v29 = 0;
    if ( qword_4AD21C8 && strlen((const char *)qword_4AD21C8) == 1 )
      v29 = *v28 == 50;
    sub_5FF1E0((__int64 *)&v39, "clang_getAllSkippedRanges", 0x19u, v29);
    v30 = (pthread_mutex_t *)v39;
    if ( v39 )
    {
      v31 = *((_QWORD *)v39 + 21);
      if ( (unsigned __int64)(*((_QWORD *)v39 + 20) - v31) <= 0x15 )
      {
        sub_26240F0((char *)v39 + 136, "called with a bad TU: ", 22);
      }
      else
      {
        *(__m128i *)v31 = _mm_load_si128((const __m128i *)&xmmword_3C7E2B0);
        *(_QWORD *)(v31 + 14) = 0x203A555420646162LL;
        *(&v30[4].__align + 1) += 22;
      }
      sub_5FF0F0((__int64)(&v30[3].__align + 2), "<NULL TU>");
      if ( v30->__lock-- == 1 )
      {
        sub_60C330(v30, (__int64 (*)())"<NULL TU>", v32, v33);
        operator delete(v30, 0xC0u);
      }
    }
  }
  return v37;
}

