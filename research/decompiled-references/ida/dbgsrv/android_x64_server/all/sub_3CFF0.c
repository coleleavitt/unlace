/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3CFF0
// Address: 0x000000000003CFF0

//----- (000000000003CFF0) ----------------------------------------------------
_QWORD *__fastcall sub_3CFF0(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // r13
  __int64 v5; // r8
  unsigned __int64 v6; // r9
  _QWORD *v7; // rdi
  __int64 v8; // r15
  unsigned __int64 v9; // r14
  __int64 v10; // rsi
  __int64 *v11; // r10
  __int64 v12; // r11
  __int64 v13; // r12
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int64 *v17; // rdi
  __int64 v18; // rsi
  __int64 *v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // r12
  _QWORD *v22; // rdx
  __int64 v23; // rcx
  __m128i v24; // xmm0
  unsigned __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rax
  _QWORD *v30; // rcx
  unsigned __int64 v31; // rsi
  __int64 v32; // rsi
  __int64 v33; // rsi
  char v35; // [rsp+0h] [rbp-34h]

  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(a1 + 16);
  v6 = *(_QWORD *)(a1 + 32);
  v7 = (_QWORD *)(v4 + 8 * (v6 / 0x38));
  if ( v5 != v4 )
  {
    v8 = *v7 + 72 * (v6 % 0x38);
    if ( v8 != a3 )
      goto LABEL_3;
LABEL_8:
    v35 = 1;
    v9 = 0;
    v12 = v8;
    v11 = (__int64 *)(v4 + 8 * (v6 / 0x38));
    goto LABEL_11;
  }
  v8 = 0;
  if ( !a3 )
    goto LABEL_8;
LABEL_3:
  v9 = 56 * (a2 - v7) - 0x71C71C71C71C71C7LL * ((a3 - *a2) >> 3) + (v8 - *v7) / -72;
  if ( v9 )
  {
    v10 = v9 - 0x71C71C71C71C71C7LL * ((v8 - *v7) >> 3);
    if ( v10 <= 0 )
    {
      v11 = &v7[(55 - v10) / -56];
      v12 = *v11 + 72 * (56 * ((55 - v10) / 56) - (55 - v10)) + 3960;
    }
    else
    {
      v11 = &v7[v10 / 0x38uLL];
      v12 = *v11 + 72 * (v10 % 0x38uLL);
    }
    v35 = 0;
  }
  else
  {
    v35 = 1;
    v9 = 0;
    v12 = v8;
    v11 = (__int64 *)(v4 + 8 * (v6 / 0x38));
  }
LABEL_11:
  v13 = *(_QWORD *)(a1 + 40);
  v14 = v12 - *v11;
  v15 = 0x8E38E38E38E38E39LL * (v14 >> 3);
  v16 = v15 + 1;
  if ( v9 <= (unsigned __int64)(v13 - 1) >> 1 )
  {
    if ( v14 < -71 )
    {
      v19 = &v11[(__int64)(54 - v15) / -56];
      v20 = *v19 + 72 * (56 * ((__int64)(54 - v15) / 56) - (54 - v15)) + 3960;
    }
    else
    {
      v19 = &v11[v16 / 0x38];
      v20 = *v19 + 72 * (v16 % 0x38);
    }
    sub_4BC30(v7, v8, v11, v12, v19, v20);
    free_debug_event(v8);
    v24 = _mm_add_epi64(_mm_loadu_si128((const __m128i *)(a1 + 32)), (__m128i)xmmword_FE0D0);
    *(__m128i *)(a1 + 32) = v24;
    v25 = v24.m128i_i64[0];
    if ( v24.m128i_i64[0] >= 0x70uLL )
    {
      operator delete(**(void ***)(a1 + 8));
      *(_QWORD *)(a1 + 8) += 8LL;
      v25 = *(_QWORD *)(a1 + 32) - 56LL;
      *(_QWORD *)(a1 + 32) = v25;
    }
  }
  else
  {
    if ( v14 < -71 )
    {
      v17 = &v11[(__int64)(54 - v15) / -56];
      v18 = *v17 + 72 * (56 * ((__int64)(54 - v15) / 56) - (54 - v15)) + 3960;
    }
    else
    {
      v17 = &v11[v16 / 0x38];
      v18 = *v17 + 72 * (v16 % 0x38);
    }
    v21 = v6 + v13;
    v22 = (_QWORD *)(v4 + 8 * (v21 / 0x38));
    if ( v5 == v4 )
      v23 = 0;
    else
      v23 = *v22 + 72 * (v21 % 0x38);
    sub_4BDF0(v17, v18, v22, v23, v11, v12);
    free_debug_event(v26);
    v27 = *(_QWORD *)(a1 + 40);
    *(_QWORD *)(a1 + 40) = v27 - 1;
    v28 = 56 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)(a1 + 8)) >> 3) - 1;
    if ( *(_QWORD *)(a1 + 16) == *(_QWORD *)(a1 + 8) )
      v28 = *(_QWORD *)(a1 + 16) - *(_QWORD *)(a1 + 8);
    v25 = *(_QWORD *)(a1 + 32);
    if ( v28 - (v25 + v27 - 1) >= 0x70 )
    {
      operator delete(*(void **)(*(_QWORD *)(a1 + 16) - 8LL));
      *(_QWORD *)(a1 + 16) -= 8LL;
      v25 = *(_QWORD *)(a1 + 32);
    }
  }
  v29 = *(_QWORD *)(a1 + 8);
  v30 = (_QWORD *)(v29 + 8 * (v25 / 0x38));
  if ( *(_QWORD *)(a1 + 16) == v29 )
  {
    v31 = 0;
    if ( v35 )
      return v30;
  }
  else
  {
    v31 = *v30 + 72 * (v25 % 0x38);
    if ( v35 )
      return v30;
  }
  v32 = v9 - 0x71C71C71C71C71C7LL * ((__int64)(v31 - *v30) >> 3);
  if ( v32 <= 0 )
  {
    v33 = (unsigned __int128)((__int64)0xB6DB6DB6DB6DB6DBLL * (__int128)(55 - v32)) >> 64;
    v30 += ((unsigned __int64)v33 >> 63) + (v33 >> 4);
  }
  else
  {
    v30 += v32 / 0x38uLL;
  }
  return v30;
}
// 3D37B: variable 'v26' is possibly undefined
// FE0D0: using guessed type __int128 xmmword_FE0D0;
