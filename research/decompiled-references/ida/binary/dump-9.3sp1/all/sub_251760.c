_DWORD *__fastcall sub_251760(_QWORD *a1, int a2, __int64 a3)
{
  __int64 v4; // rbx
  int v5; // r13d
  __int64 v6; // rax
  __int64 (__fastcall *v7)(__int64, int); // rdx
  int v8; // r14d
  __int64 (__fastcall *v9)(__int64, int, int); // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rsi
  __int64 v13; // r8
  const __m128i *v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __m128i *v20; // rax
  __int64 v21; // r9
  __int64 (__fastcall *v22)(__int64, int, int); // rax
  __int64 v23; // rsi
  _DWORD *result; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int64 v27; // rax
  __int64 v28; // r8
  __int64 (__fastcall *v29)(__int64, int, int); // rax
  __int64 v30; // rsi
  _QWORD *v31; // r13
  __int64 v32; // rdx
  __int64 v33; // rcx
  __m128i *v34; // rax
  __int64 (__fastcall *v35)(__int64, int, int); // rax
  __int64 v36; // rsi
  __m128d v37; // xmm0
  unsigned int v38; // eax
  unsigned int v39; // [rsp+8h] [rbp-50h]
  __int64 v40; // [rsp+10h] [rbp-48h]
  char v42; // [rsp+1Fh] [rbp-39h]

  v4 = a2;
  v5 = *(_DWORD *)(a1[38] + 4LL * a2);
  v6 = *a1;
  v7 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 96LL);
  if ( v7 == sub_65090 )
  {
    v8 = 0;
    if ( a1[7] )
    {
      v9 = *(__int64 (__fastcall **)(__int64, int, int))(v6 + 112);
      v8 = *(_DWORD *)(a1[6] + 24LL * a2 + 8);
      if ( v9 == sub_650D0 )
        goto LABEL_4;
      goto LABEL_16;
    }
  }
  else
  {
    v8 = v7((__int64)a1, a2);
    v6 = *a1;
  }
  v9 = *(__int64 (__fastcall **)(__int64, int, int))(v6 + 112);
  if ( v9 == sub_650D0 )
  {
LABEL_4:
    v39 = **(_DWORD **)(a1[6] + 24LL * a2);
    goto LABEL_5;
  }
LABEL_16:
  v39 = v9((__int64)a1, a2, 0);
LABEL_5:
  v12 = (_QWORD *)sub_250510(a1, v39, a3, 1);
  if ( !v12 )
  {
    if ( v8 > 2 )
    {
      if ( !under_debugger )
        sub_383060(50381);
    }
    else
    {
      if ( v5 <= 14 )
      {
        v29 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
        if ( v29 == sub_650D0 )
          v30 = *(unsigned int *)(*(_QWORD *)(a1[6] + 24 * v4) + 4LL);
        else
          v30 = (unsigned int)v29((__int64)a1, a2, 1);
        return (_DWORD *)sub_250510(a1, v30, a3, 0);
      }
      if ( !under_debugger )
        sub_383060(50382);
    }
    BUG();
  }
  if ( v5 == 3 || v5 == 17 )
  {
    v12 = sub_244460(*(_QWORD *)(a1[41] + 112LL), (__int64)v12, v10, v11, v13);
    if ( v8 <= 2 )
      goto LABEL_9;
  }
  else if ( v8 <= 2 )
  {
LABEL_9:
    v42 = 0;
    goto LABEL_10;
  }
  v27 = sub_2416D0(a1[41], (__int64)v12, v10, v11, v13);
  v10 = (unsigned int)(2 * v27);
  if ( (int)v10 <= SHIDWORD(v27) )
    goto LABEL_9;
  v42 = 1;
  v12 = sub_244460(*(_QWORD *)(a1[41] + 112LL), (__int64)v12, v10, v11, v28);
LABEL_10:
  v14 = (const __m128i *)sub_241920(a3, (__int64)v12, v10, v11);
  v17 = (_QWORD *)j__qalloc_or_throw(32, (__int64)v12, v15, v16);
  *v17 = -1;
  v17[1] = -4294967225LL;
  v17[2] = 0xFFFFFFFFLL;
  v17[3] = 0;
  v40 = (__int64)v17;
  v20 = (__m128i *)qalloc_or_throw(24, (__int64)v12, v18, v19);
  v21 = v40;
  v20[1].m128i_i64[0] = 0;
  *v20 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v20, (__m128i)(unsigned __int64)v20);
  *(_QWORD *)(v40 + 24) = v20;
  v14[4].m128i_i64[0] = v40;
  if ( v5 > 14 )
    return sub_241550(a1, v39, v40);
  v22 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
  if ( v22 == sub_650D0 )
  {
    v23 = *(unsigned int *)(*(_QWORD *)(a1[6] + 24 * v4) + 4LL);
  }
  else
  {
    v38 = v22((__int64)a1, a2, 1);
    v21 = v40;
    v23 = v38;
  }
  result = (_DWORD *)sub_250510(a1, v23, v21, 0);
  if ( v8 > 2 )
  {
    v31 = (_QWORD *)j__qalloc_or_throw(32, v23, v25, v26);
    *v31 = -1;
    v31[1] = -4294967225LL;
    v31[2] = 0xFFFFFFFFLL;
    v31[3] = 0;
    v34 = (__m128i *)qalloc_or_throw(24, v23, v32, v33);
    v34[1].m128i_i64[0] = 0;
    *v34 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v34, (__m128i)(unsigned __int64)v34);
    v31[3] = v34;
    v14[4].m128i_i64[1] = (__int64)v31;
    v35 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
    if ( v35 == sub_650D0 )
      v36 = *(unsigned int *)(*(_QWORD *)(a1[6] + 24 * v4) + 8LL);
    else
      v36 = (unsigned int)v35((__int64)a1, a2, 2);
    result = (_DWORD *)sub_250510(a1, v36, v31, 0);
    if ( v42 )
    {
      v37 = (__m128d)_mm_loadu_si128(v14 + 4);
      v14[4] = (const __m128i)_mm_shuffle_pd(v37, v37, 1);
    }
  }
  return result;
}
