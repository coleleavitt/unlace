__int64 __fastcall sub_432460(__int64 a1, const char *a2)
{
  double v2; // xmm0_8
  __int64 *v3; // rbp
  __int64 *v4; // rbx
  __int64 v5; // rdi
  __int64 *v6; // r12
  _QWORD *v7; // rax
  __m128i v8; // xmm0
  __int64 v9; // rdx
  __m128i *v10; // rsi
  __m128i si128; // xmm0
  __int64 v12; // rsi
  __m128i v13; // xmm0
  __int64 v14; // rsi
  __m128i v15; // xmm0
  __int64 result; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  struct _Unwind_Exception *v20; // r13

  *(_QWORD *)(a1 + 8) = 0x2070247000004LL;
  *(_QWORD *)(a1 + 40) = "File extension associations";
  *(_OWORD *)(a1 + 16) = -1;
  v7 = (_QWORD *)(a1 + 80);
  v8 = _mm_loadl_epi64((const __m128i *)&off_86B120);
  *(_QWORD *)a1 = &stru_86F6A0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 48) = 4;
  *(_DWORD *)(a1 + 72) = -1;
  *(__m128i *)(a1 + 56) = _mm_unpacklo_epi64(v8, (__m128i)(unsigned __int64)&off_86B100);
  do
  {
    *v7 = 0;
    v7 += 3;
    *((_OWORD *)v7 - 1) = 0;
  }
  while ( (_QWORD *)(a1 + 176) != v7 );
  *(_DWORD *)(a1 + 176) = 0;
  v9 = *(unsigned int *)(a1 + 12);
  if ( ((*(_DWORD *)(a1 + 12) >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(a1 + 11) != 0xFF )
    {
      if ( !under_debugger )
      {
        v20 = (struct _Unwind_Exception *)interr(3449, a2, v9, ((*(_DWORD *)(a1 + 12) >> 19) & 0x3Fu) - 1, 0.0);
        v2 = sub_419E70(v6, a2);
        *(_QWORD *)a1 = &stru_86F6A0;
        v3 = (__int64 *)(a1 + 152);
        v4 = (__int64 *)(a1 + 56);
        while ( 1 )
        {
          v5 = *v3;
          if ( *v3 )
          {
            v3[1] = 0;
            v2 = qfree(v5, a2, v2);
          }
          v3 -= 3;
          if ( v4 == v3 )
            _Unwind_Resume(v20);
        }
      }
      BUG();
    }
    *(_BYTE *)(a1 + 11) = ((*(_DWORD *)(a1 + 12) >> 19) & 0x3F) - 1;
    *(_DWORD *)(a1 + 12) = v9 & 0xFE07FFFF;
  }
  *(_QWORD *)(a1 + 184) = 0;
  *(_QWORD *)a1 = file_assoc_chooser_t___vtable;
  *(_OWORD *)(a1 + 192) = 0;
  sub_431330((__int64 *)(a1 + 184), a2);
  v10 = *(__m128i **)(a1 + 80);
  if ( *(_QWORD *)(a1 + 96) <= 0x12u )
  {
    v17 = qvector_reserve(a1 + 80, v10, 19, 1);
    *(_QWORD *)(a1 + 80) = v17;
    v10 = (__m128i *)v17;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DDAD0);
  *(_QWORD *)(a1 + 88) = 19;
  v10[1].m128i_i16[0] = 11822;
  *v10 = si128;
  *(_BYTE *)(*(_QWORD *)(a1 + 80) + 18LL) = 0;
  v12 = *(_QWORD *)(a1 + 104);
  if ( *(_QWORD *)(a1 + 120) <= 0x15u )
  {
    v19 = qvector_reserve(a1 + 104, v12, 22, 1);
    *(_QWORD *)(a1 + 104) = v19;
    v12 = v19;
  }
  v13 = _mm_load_si128((const __m128i *)&xmmword_5DDAE0);
  *(_QWORD *)(a1 + 112) = 22;
  *(__m128i *)v12 = v13;
  *(_QWORD *)(v12 + 13) = 0x2E2E2E6E6F697461LL;
  *(_BYTE *)(*(_QWORD *)(a1 + 104) + 21LL) = 0;
  v14 = *(_QWORD *)(a1 + 128);
  if ( *(_QWORD *)(a1 + 144) <= 0x13u )
  {
    v18 = qvector_reserve(a1 + 128, v14, 20, 1);
    *(_QWORD *)(a1 + 128) = v18;
    v14 = v18;
  }
  v15 = _mm_load_si128((const __m128i *)&xmmword_5DDAF0);
  *(_QWORD *)(a1 + 136) = 20;
  *(__m128i *)v14 = v15;
  *(_DWORD *)(v14 + 15) = 774778478;
  result = *(_QWORD *)(a1 + 128);
  *(_BYTE *)(result + 19) = 0;
  return result;
}
