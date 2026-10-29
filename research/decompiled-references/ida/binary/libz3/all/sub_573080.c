void __fastcall sub_573080(__int64 a1, int a2, int *a3)
{
  int *v5; // r12
  int *v6; // r14
  _QWORD *v7; // rax
  _DWORD *v8; // rax
  _DWORD *v9; // rcx
  int v10; // edx
  int v11; // edi
  __int64 v12; // rax
  unsigned int v13; // edx
  unsigned int v14; // r15d
  size_t v15; // rsi
  unsigned int *v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // rax
  unsigned int v19; // r13d
  _QWORD *v20; // rax
  __m128i *v21; // rdi
  unsigned __int64 v22; // r12
  unsigned __int64 v23; // r13
  unsigned __int64 *v24; // rax
  unsigned __int64 v25; // rax
  __m128i *v26; // rax
  __m128i si128; // xmm0
  char **exception; // rbx
  char **v29; // r13
  __int64 v30[11]; // [rsp+10h] [rbp-58h] BYREF

  *(_QWORD *)a1 = qword_1C67AB0;
  *(_QWORD *)(a1 + 8) = 0;
  if ( a2 )
  {
    v5 = a3;
    v6 = &a3[a2];
    v7 = (_QWORD *)sub_186B270(0x10u);
    *v7 = 2;
    v8 = v7 + 1;
    *(_QWORD *)(a1 + 8) = v8;
    v9 = v8;
    while ( 1 )
    {
      v10 = *v5++;
      *v8 = v10;
      v11 = *(v9 - 1);
      v12 = (unsigned int)(v11 + 1);
      *(v9 - 1) = v12;
      if ( v5 == v6 )
        break;
      v13 = *(v9 - 2);
      if ( v13 == (_DWORD)v12 )
      {
        v14 = (3 * v13 + 1) >> 1;
        v15 = 4 * v14 + 8;
        if ( 4 * v11 + 12 >= (unsigned int)v15 || v13 >= v14 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v30, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v30);
          sub_233E40((__int64)v30);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v16 = (unsigned int *)sub_186B300(v9 - 2, v15);
        v9 = v16 + 2;
        *v16 = v14;
        v17 = v16[1];
        *(_QWORD *)(a1 + 8) = v9;
        v8 = &v9[v17];
      }
      else
      {
        v8 = &v9[v12];
      }
    }
  }
  *(_QWORD *)a1 = &off_1C512B8;
  v18 = (_QWORD *)sub_186B270(0xC0u);
  v19 = 8 * a2;
  *v18 = 0;
  v18[2] = 0;
  v18[3] = 0;
  v18[5] = 0;
  v18[6] = 0;
  v18[8] = 0;
  v18[9] = 0;
  v18[11] = 0;
  v18[12] = 0;
  v18[14] = 0;
  v18[15] = 0;
  v18[17] = 0;
  v18[18] = 0;
  v18[20] = 0;
  v18[21] = 0;
  v18[23] = 0;
  *(_QWORD *)(a1 + 16) = v18;
  *(_QWORD *)(a1 + 24) = 8;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = a1 + 56;
  *(_DWORD *)(a1 + 72) = v19;
  *(_QWORD *)(a1 + 80) = a1 + 56;
  *(_DWORD *)(a1 + 88) = v19;
  *(_QWORD *)(a1 + 40) = _mm_shuffle_epi32(_mm_cvtsi32_si128(v19), 224).m128i_u64[0];
  v20 = (_QWORD *)sub_186B270(0x80u);
  *v20 = 0;
  v20[2] = 0;
  v20[4] = 0;
  v20[6] = 0;
  v20[8] = 0;
  v20[10] = 0;
  v20[12] = 0;
  v20[14] = 0;
  *(_QWORD *)(a1 + 96) = v20;
  *(_QWORD *)(a1 + 104) = 8;
  *(_DWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0xFFFFFFFFLL;
  sub_5716E0(a1 + 40, 0);
  v21 = *(__m128i **)(a1 + 56);
  *(_QWORD *)(a1 + 48) = 0;
  if ( v21 )
  {
    v22 = v21[-1].m128i_u64[1];
    if ( v22 > 7 )
    {
      v21[-1].m128i_i64[1] = 8;
      goto LABEL_17;
    }
  }
  else
  {
    v26 = (__m128i *)sub_186B270(0x12u);
    si128 = _mm_load_si128((const __m128i *)&xmmword_18B6640);
    v21 = v26 + 1;
    v22 = 0;
    *(_QWORD *)(a1 + 56) = v26 + 1;
    *v26 = si128;
  }
  while ( 1 )
  {
    v25 = v21[-1].m128i_u64[0];
    if ( v25 > 7 )
      break;
    v23 = (3 * v25 + 1) >> 1;
    if ( v25 + 16 >= v23 + 16 || v25 >= v23 )
    {
      v29 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v30, "Overflow encountered when expanding vector");
      *v29 = (char *)off_1C63128;
      sub_2333C0(v29 + 1, v30);
      sub_233E40((__int64)v30);
      __cxa_throw(v29, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v24 = (unsigned __int64 *)sub_186B300(&v21[-1], v23 + 16);
    v21 = (__m128i *)(v24 + 2);
    *v24 = v23;
    *(_QWORD *)(a1 + 56) = v24 + 2;
  }
  v21[-1].m128i_i64[1] = 8;
  memset(&v21->m128i_i8[v22], 0, 8 - v22);
LABEL_17:
  *(_QWORD *)(a1 + 128) = 0;
}

