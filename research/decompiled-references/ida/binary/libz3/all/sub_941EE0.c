__m128i *__fastcall sub_941EE0(unsigned __int64 a1, __int64 a2)
{
  __int64 v4; // r13
  unsigned int v5; // eax
  __int64 v6; // rsi
  __m128i si128; // xmm0
  __int64 v8; // rax
  __int64 v9; // rax
  _DWORD *v10; // rax
  _QWORD *v11; // r12
  __int64 v12; // rax
  __m128i *result; // rax
  __m128i v14; // xmm0
  unsigned int v15; // r13d
  size_t v16; // rdi
  __int64 v17; // rax
  const __m128i *v18; // rdi
  __int64 v19; // rdx
  const __m128i *v20; // rsi
  const __m128i *i; // rax
  __m128i v22; // xmm0
  _QWORD *v23; // rax
  char **exception; // r12
  __int64 vars0[9]; // [rsp+0h] [rbp+0h] BYREF

  v4 = *(_QWORD *)(a2 + 104);
  sub_180C5A0(vars0, "arith");
  v5 = sub_15DA4C0(v4 + 560, vars0);
  sub_966710(a1, a2, v5);
  v6 = *(_QWORD *)(a2 + 104);
  *(_QWORD *)a1 = off_1C6FCB8;
  si128 = _mm_load_si128((const __m128i *)&xmmword_18B66C0);
  *(_QWORD *)(a1 + 56) = off_1C6FE78;
  v8 = *(_QWORD *)(a2 + 112);
  *(_QWORD *)(a1 + 80) = 0;
  *(__m128i *)(a1 + 64) = si128;
  *(_QWORD *)(a1 + 88) = v8 + 248;
  sub_16669D0(a1 + 96, v6);
  *(_DWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = a1;
  *(_QWORD *)(a1 + 128) = a1 + 96;
  v9 = sub_186B270(0x180u);
  *(_QWORD *)(v9 + 32) = 0;
  *(_OWORD *)v9 = 0;
  *(_OWORD *)(v9 + 16) = 0;
  *(_OWORD *)(v9 + 48) = 0;
  *(_OWORD *)(v9 + 64) = 0;
  *(_OWORD *)(v9 + 96) = 0;
  *(_OWORD *)(v9 + 112) = 0;
  *(_OWORD *)(v9 + 144) = 0;
  *(_OWORD *)(v9 + 160) = 0;
  *(_OWORD *)(v9 + 192) = 0;
  *(_OWORD *)(v9 + 208) = 0;
  *(_OWORD *)(v9 + 240) = 0;
  *(_OWORD *)(v9 + 256) = 0;
  *(_OWORD *)(v9 + 288) = 0;
  *(_OWORD *)(v9 + 304) = 0;
  *(_OWORD *)(v9 + 336) = 0;
  *(_OWORD *)(v9 + 352) = 0;
  *(_DWORD *)(v9 + 40) = 0;
  *(_QWORD *)(v9 + 80) = 0;
  *(_DWORD *)(v9 + 88) = 0;
  *(_QWORD *)(v9 + 128) = 0;
  *(_DWORD *)(v9 + 136) = 0;
  *(_QWORD *)(v9 + 176) = 0;
  *(_DWORD *)(v9 + 184) = 0;
  *(_QWORD *)(v9 + 224) = 0;
  *(_DWORD *)(v9 + 232) = 0;
  *(_QWORD *)(v9 + 272) = 0;
  *(_DWORD *)(v9 + 280) = 0;
  *(_QWORD *)(v9 + 320) = 0;
  *(_DWORD *)(v9 + 328) = 0;
  *(_QWORD *)(v9 + 368) = 0;
  *(_DWORD *)(v9 + 376) = 0;
  *(_QWORD *)(a1 + 136) = v9;
  *(_OWORD *)(a1 + 160) = 0;
  *(_OWORD *)(a1 + 176) = 0;
  *(_OWORD *)(a1 + 192) = 0;
  *(_OWORD *)(a1 + 208) = 0;
  *(_OWORD *)(a1 + 240) = 0;
  *(_OWORD *)(a1 + 256) = 0;
  *(_OWORD *)(a1 + 272) = 0;
  *(_QWORD *)(a1 + 144) = 8;
  *(_DWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 224) = 0;
  *(_BYTE *)(a1 + 232) = 0;
  *(_QWORD *)(a1 + 288) = 0;
  *(__m128i *)(a1 + 296) = _mm_unpacklo_epi64((__m128i)a1, (__m128i)a1);
  v10 = (_DWORD *)sub_186B270(0x40u);
  *(_QWORD *)(a1 + 320) = 8;
  v11 = *(_QWORD **)(a1 + 192);
  v10[1] = 0x80000000;
  v10[3] = 0x80000000;
  v10[5] = 0x80000000;
  v10[7] = 0x80000000;
  v10[9] = 0x80000000;
  v10[11] = 0x80000000;
  v10[13] = 0x80000000;
  v10[15] = 0x80000000;
  *(_QWORD *)(a1 + 312) = v10;
  *(_DWORD *)(a1 + 328) = 0;
  *(_QWORD *)(a1 + 344) = 0;
  *(_QWORD *)(a1 + 352) = 0;
  *(_QWORD *)(a1 + 360) = 1;
  *(_QWORD *)(a1 + 368) = 0;
  if ( v11 )
  {
    v12 = *((unsigned int *)v11 - 1);
    if ( (_DWORD)v12 == *((_DWORD *)v11 - 2) )
    {
      v15 = (unsigned int)(3 * v12 + 1) >> 1;
      v16 = 20 * v15 + 8;
      if ( 20 * (int)v12 + 8 >= (unsigned int)v16 || (unsigned int)v12 >= v15 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_91CD50(vars0, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, vars0);
        sub_233E40((__int64)vars0);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v17 = sub_186B270(v16);
      v18 = *(const __m128i **)(a1 + 192);
      v11 = (_QWORD *)(v17 + 8);
      if ( v18 )
      {
        v19 = v17 + 8;
        HIDWORD(vars0[0]) = v18[-1].m128i_i32[3];
        v20 = (const __m128i *)((char *)v18 + 20 * HIDWORD(vars0[0]));
        for ( i = v18; v20 != i; *(_DWORD *)(v19 - 4) = i[-1].m128i_i32[3] )
        {
          v22 = _mm_loadu_si128(i);
          i = (const __m128i *)((char *)i + 20);
          v19 += 20;
          *(__m128i *)(v19 - 20) = v22;
        }
        sub_186B220(&v18[-1].m128i_u64[1]);
        result = (__m128i *)((char *)v11 + 20 * HIDWORD(vars0[0]));
      }
      else
      {
        *(_DWORD *)(v17 + 4) = 0;
        result = (__m128i *)(v17 + 8);
      }
      *(_QWORD *)(a1 + 192) = v11;
      LODWORD(vars0[0]) = v15;
    }
    else
    {
      result = (__m128i *)((char *)v11 + 20 * v12);
    }
  }
  else
  {
    v23 = (_QWORD *)sub_186B270(0x30u);
    v11 = v23 + 1;
    *v23 = 2;
    *(_QWORD *)(a1 + 192) = v23 + 1;
    result = (__m128i *)(v23 + 1);
  }
  v14 = _mm_load_si128((const __m128i *)&xmmword_18B6660);
  result[1].m128i_i32[0] = -2;
  *result = v14;
  ++*((_DWORD *)v11 - 1);
  return result;
}

