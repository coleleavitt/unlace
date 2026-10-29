__int64 __fastcall dbgreg_place_t__::vfunc_11(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // rbp
  _DWORD *v7; // rax
  __int64 v8; // r11
  _DWORD *v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 outctx; // rax
  int v15; // esi
  __m128i *v16; // r15
  int v17; // eax
  int v18; // esi
  __int64 v19; // r12
  int v20; // r13d
  __int64 v21; // rcx
  int v22; // ebx
  int v23; // ebp
  int v24; // edx
  int v25; // edx
  __int64 v26; // rdi
  unsigned int v27; // esi
  __int64 v28; // rdx
  const char *v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rdx
  __m128i v34; // xmm0
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 *v37; // [rsp+8h] [rbp-60h]
  __int64 v38; // [rsp+10h] [rbp-58h]
  int v40; // [rsp+24h] [rbp-44h]
  __int64 *v41; // [rsp+28h] [rbp-40h]

  v6 = a2;
  v7 = sub_1E0240(a6, *(_QWORD *)(a1 + 12));
  if ( *(_DWORD **)(v8 + 8) == v7 || (v9 = v7, (unsigned __int64)*(int *)(a1 + 20) >= *((_QWORD *)v7 + 3)) )
  {
    v10 = a2[1];
    v11 = *a2;
    if ( v6[2] < (unsigned __int64)(v10 + 1) )
    {
      v35 = qvector_reserve(v6, v11, v10 + 1, 24);
      v10 = v6[1];
      *v6 = v35;
      v11 = v35;
    }
    v12 = v11 + 24 * v10;
    *(_QWORD *)v12 = 0;
    *(_OWORD *)(v12 + 8) = 0;
    ++v6[1];
  }
  else
  {
    outctx = create_outctx(-1, 0, 0);
    v15 = v9[11];
    v16 = (__m128i *)outctx;
    v17 = *(_DWORD *)(a1 + 20);
    if ( v17 >= 0 )
      v17 /= v15;
    if ( v17 + v9[2] >= v9[2] )
      v17 *= v15;
    v18 = v17 + v15;
    if ( v18 > v9[6] )
      v18 = v9[6];
    if ( v18 > v17 )
    {
      v41 = v6;
      v40 = v18 - v17;
      v19 = 4LL * v17;
      v20 = 0;
      v37 = &v16[1].m128i_i64[1];
      do
      {
        v21 = 0;
        v22 = *(_DWORD *)(*((_QWORD *)v9 + 2) + v19);
        v23 = v20 * v9[12];
        if ( v22 >= 0 && v22 < (unsigned __int64)xmmword_8CC398 )
          v21 = qword_8CC390 + 56LL * v22;
        v24 = v20 * v9[12];
        if ( *((_BYTE *)v9 + 12) )
        {
          v25 = v9[10];
          v26 = *(_QWORD *)(v21 + 8);
          if ( v26 )
            v25 = v25 + 1 - v26;
          v24 = v23 + v25;
        }
        v38 = v21;
        (*(void (__fastcall **)(__m128i *, __int64 *, _QWORD))(v16->m128i_i64[0] + 48))(v16, v37, v24);
        v27 = 18;
        v28 = *(unsigned __int8 *)(v38 + 35);
        if ( (unsigned __int8)v28 <= 3u )
          v27 = (unsigned __int8)asc_5E0688[v28];
        v29 = &s1;
        if ( *(_QWORD *)(v38 + 8) )
          v29 = *(const char **)v38;
        ++v20;
        (*(void (__fastcall **)(__m128i *, const char *, _QWORD))(v16->m128i_i64[0] + 56))(v16, v29, v27);
        v19 += 4;
        (*(void (__fastcall **)(__m128i *, __int64 *, _QWORD))(v16->m128i_i64[0] + 48))(v16, v37, v23 + v9[10] + 1);
        sub_1E0720((__int64)v16, v22, a6);
      }
      while ( v40 != v20 );
      v6 = v41;
    }
    v30 = v6[1];
    v31 = *v6;
    if ( v6[2] < (unsigned __int64)(v30 + 1) )
    {
      v36 = qvector_reserve(v6, v31, v30 + 1, 24);
      v30 = v6[1];
      *v6 = v36;
      v31 = v36;
    }
    v32 = v31 + 24 * v30;
    *(_OWORD *)(v32 + 8) = 0;
    *(_QWORD *)v32 = 0;
    ++v6[1];
    v33 = *(_QWORD *)v32;
    v34 = _mm_loadu_si128((const __m128i *)(v32 + 8));
    *(_QWORD *)v32 = v16[1].m128i_i64[1];
    *(_QWORD *)(v32 + 8) = v16[2].m128i_i64[0];
    *(_QWORD *)(v32 + 16) = v16[2].m128i_i64[1];
    v16[1].m128i_i64[1] = v33;
    v16[2] = v34;
    if ( v16 )
      (*(void (__fastcall **)(__m128i *))(v16->m128i_i64[0] + 8))(v16);
  }
  return 1;
}
