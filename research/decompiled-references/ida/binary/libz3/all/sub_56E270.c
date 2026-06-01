_QWORD *__fastcall sub_56E270(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  char **exception; // r13
  bool v8; // zf
  unsigned int v9; // eax
  int v10; // r13d
  unsigned int v11; // edx
  unsigned int v12; // r13d
  unsigned int v13; // r13d
  __int64 v14; // r13
  __int64 v15; // rax
  _QWORD *v16; // rdx
  __m128i *v17; // rdi
  unsigned __int64 v18; // r13
  unsigned __int64 v19; // r14
  unsigned __int64 *v20; // rax
  unsigned __int64 v21; // rax
  _QWORD *result; // rax
  __m128i *v23; // rax
  __m128i si128; // xmm0
  __int64 v25[9]; // [rsp+10h] [rbp-48h] BYREF

  v8 = *(_QWORD *)a3 == 0;
  *(_QWORD *)a1 = qword_1C67518;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = 0;
  if ( !v8 )
    sub_577180(a1 + 16, a3);
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a3 + 8);
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 8);
  *(_QWORD *)a1 = &off_1C67AE0;
  sub_56AF90(a1 + 40, a3);
  v9 = *(_DWORD *)(a1 + 48);
  v10 = 8;
  *(_QWORD *)(a1 + 88) = 0;
  v11 = v9 - *(_DWORD *)(a1 + 52);
  *(_DWORD *)(a1 + 64) = v9;
  if ( a4 >= 8 )
    v10 = a4;
  *(_DWORD *)(a1 + 104) = v11;
  *(_QWORD *)(a1 + 96) = a1 + 88;
  *(_QWORD *)(a1 + 112) = a1 + 88;
  *(_DWORD *)(a1 + 120) = v11;
  *(_QWORD *)(a1 + 72) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v9), _mm_cvtsi32_si128(v11)).m128i_u64[0];
  v12 = ((((unsigned int)(v10 - 1) >> 1) | (v10 - 1)) >> 2) | ((unsigned int)(v10 - 1) >> 1) | (v10 - 1);
  v13 = (((v12 >> 4) | v12) >> 8) | (v12 >> 4) | v12;
  v14 = (HIWORD(v13) | v13) + 1;
  v15 = sub_186B270(16 * v14);
  if ( (_DWORD)v14 )
  {
    v16 = (_QWORD *)v15;
    do
    {
      *v16 = 0;
      v16 += 4;
      *(v16 - 2) = 0;
    }
    while ( v16 != (_QWORD *)(v15 + 32LL * ((unsigned int)v14 >> 1)) );
    if ( (v14 & 1) != 0 )
      *(_QWORD *)(v15 + 16LL * ((unsigned int)v14 & 0xFFFFFFFE)) = 0;
  }
  *(_QWORD *)(a1 + 128) = v15;
  *(_DWORD *)(a1 + 136) = v14;
  *(_QWORD *)(a1 + 140) = 0;
  *(_QWORD *)(a1 + 152) = 0xFFFFFFFFLL;
  sub_5716E0(a1 + 72, a4);
  v17 = *(__m128i **)(a1 + 88);
  *(_QWORD *)(a1 + 80) = 0;
  if ( v17 )
  {
    v18 = v17[-1].m128i_u64[1];
    if ( v18 > 7 )
    {
      v17[-1].m128i_i64[1] = 8;
      goto LABEL_18;
    }
  }
  else
  {
    v23 = (__m128i *)sub_186B270(0x12u);
    si128 = _mm_load_si128((const __m128i *)&xmmword_18B6640);
    v17 = v23 + 1;
    v18 = 0;
    *(_QWORD *)(a1 + 88) = v23 + 1;
    *v23 = si128;
  }
  while ( 1 )
  {
    v21 = v17[-1].m128i_u64[0];
    if ( v21 > 7 )
      break;
    v19 = (3 * v21 + 1) >> 1;
    if ( v21 + 16 >= v19 + 16 || v21 >= v19 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v25, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v25);
      sub_233E40((__int64)v25);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v20 = (unsigned __int64 *)sub_186B300(&v17[-1], v19 + 16);
    v17 = (__m128i *)(v20 + 2);
    *v20 = v19;
    *(_QWORD *)(a1 + 88) = v20 + 2;
  }
  v17[-1].m128i_i64[1] = 8;
  memset(&v17->m128i_i8[v18], 0, 8 - v18);
LABEL_18:
  result = (_QWORD *)sub_186B270(0xC0u);
  *result = 0;
  result[1] = 0;
  result[3] = 0;
  result[4] = 0;
  result[6] = 0;
  result[7] = 0;
  result[9] = 0;
  result[10] = 0;
  result[12] = 0;
  result[13] = 0;
  result[15] = 0;
  result[16] = 0;
  result[18] = 0;
  result[19] = 0;
  result[21] = 0;
  result[22] = 0;
  *(_QWORD *)(a1 + 160) = result;
  *(_QWORD *)(a1 + 168) = 8;
  *(_DWORD *)(a1 + 176) = 0;
  return result;
}

