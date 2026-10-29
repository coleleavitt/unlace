void __fastcall diffpos_sorting_strategy_t__::vfunc_2(
        const __m128i *a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5)
{
  __int64 v7; // rdi
  __int64 v9; // rax
  __int64 v10; // r13
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r12
  __m128i v14; // xmm1
  __int32 v15; // r14d
  unsigned __int64 *v16; // rax
  __m128i si128; // xmm0
  unsigned __int64 *v18; // r12
  __int64 v19; // rdx
  __int64 v20; // rbp
  __int64 i; // rbx
  unsigned __int64 v22; // r15
  void *v23; // rax
  unsigned __int64 *v24; // rsi
  void *v25; // rax
  unsigned __int64 *v26; // [rsp+8h] [rbp-80h]
  void *v27[2]; // [rsp+10h] [rbp-78h] BYREF
  __m128i v28; // [rsp+20h] [rbp-68h] BYREF
  __m128i v29; // [rsp+30h] [rbp-58h]
  __int64 v30; // [rsp+40h] [rbp-48h]
  unsigned __int64 v31; // [rsp+48h] [rbp-40h]

  v7 = a1[1].m128i_i64[0];
  v31 = __readfsqword(0x28u);
  v9 = sub_4A15B0(v7);
  a1[1].m128i_i64[1] = v9;
  v10 = *(_QWORD *)(v9 + 8);
  a1[2].m128i_i64[0] = v10;
  v11 = 8 * a5;
  v12 = 8 * a4[1];
  if ( 8 * a5 != v12 )
  {
    v13 = *a4;
    v14 = (__m128i)(unsigned __int64)v9;
    v15 = a1->m128i_i32[2];
    v16 = (unsigned __int64 *)(v13 + v12);
    si128 = _mm_unpacklo_epi64(_mm_loadl_epi64(a1 + 1), v14);
    v18 = (unsigned __int64 *)(v11 + v13);
    v26 = v16;
    v19 = ((v12 - v11) >> 3) + 1;
    v20 = v19 / 2;
    if ( v19 <= 1 )
    {
      v24 = v18;
      v22 = 0;
      v23 = nullptr;
      if ( v20 )
      {
LABEL_11:
        v22 = 0;
        v28.m128i_i32[2] = v15;
        v28.m128i_i64[0] = (__int64)diffpos_sorting_strategy_t___vtable;
        v30 = v10;
        v29 = si128;
        sub_2762C0(v18, v26, &v28);
        v25 = nullptr;
        goto LABEL_7;
      }
    }
    else
    {
      for ( i = v19 / 2; ; i = (i + 1) >> 1 )
      {
        v22 = i;
        *(__m128i *)v27 = si128;
        v23 = (void *)operator new(8 * i, (const std::nothrow_t *)&std::nothrow);
        si128 = _mm_load_si128((const __m128i *)v27);
        if ( v23 )
          break;
        if ( i == 1 )
          goto LABEL_11;
      }
      v24 = &v18[v22];
      if ( i != v20 )
      {
        v27[0] = v23;
        v28.m128i_i64[0] = (__int64)diffpos_sorting_strategy_t___vtable;
        v28.m128i_i32[2] = v15;
        v30 = v10;
        v29 = si128;
        sub_276E20(v18, v26, (char *)v23, i, &v28);
        v25 = v27[0];
        goto LABEL_7;
      }
    }
    v28.m128i_i64[0] = (__int64)diffpos_sorting_strategy_t___vtable;
    v27[0] = v23;
    v28.m128i_i32[2] = v15;
    v30 = v10;
    v29 = si128;
    sub_276D10(v18, v24, v26, (char *)v23, &v28);
    v25 = v27[0];
LABEL_7:
    operator delete(v25, v22 * 8);
  }
}
