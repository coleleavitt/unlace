__int64 __fastcall sub_7F7BE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rdi
  __int64 v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // r15
  const __m128i **v12; // rbx
  __m128i *v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rdx
  char v16; // al
  __int64 v17; // rbp
  int v18; // eax
  __int64 v19; // rcx
  __m128i v20; // xmm0
  __int64 v21; // rdx
  __int128 si128; // xmm1
  __int128 v23; // xmm0
  int v24; // eax
  _BOOL8 v25; // r8
  __int64 v26; // r9
  __m128i v27; // xmm0
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  const __m128i *v30; // rbp
  __int64 v31; // rax
  __int64 v32; // rsi
  char *v33; // rbp
  __int64 v35; // r15
  __int16 v36; // ax
  unsigned int v37; // eax
  __int32 v38; // ebx
  __int64 v39; // r14
  __int64 v40; // rax
  __int64 v41; // rax
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // rdx
  const __m128i *v44; // rbx
  __int64 v45; // rsi
  __m128i *v46; // rax
  char *v47; // rbx
  __int64 v48; // [rsp+38h] [rbp-100h]
  __m128i v50; // [rsp+50h] [rbp-E8h] BYREF
  __m128i v51; // [rsp+60h] [rbp-D8h] BYREF
  int v52; // [rsp+70h] [rbp-C8h] BYREF
  __m128i v53; // [rsp+78h] [rbp-C0h] BYREF
  __int64 v54; // [rsp+90h] [rbp-A8h]
  __int128 v55; // [rsp+A0h] [rbp-98h] BYREF
  __int128 v56; // [rsp+B0h] [rbp-88h] BYREF
  __int64 v57; // [rsp+C0h] [rbp-78h]
  int v58; // [rsp+D0h] [rbp-68h] BYREF
  __m128i v59; // [rsp+D8h] [rbp-60h]

  v8 = *(_QWORD *)(a2 + 24);
  if ( a2 != *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL) )
  {
    v9 = a3 + 8 * ((4 * ((*(_BYTE *)(a2 + 19) >> 2) + 2 * ((*(_WORD *)(a2 + 18) >> 3) & 0x7Fu)) + 23) >> 3) + 8;
    v10 = sub_B1AFD0(v8);
    if ( !(unsigned __int8)sub_7EEDC0(
                             a1,
                             *(_QWORD *)(a2 + 24),
                             v10 * ((v9 != 0) + (v9 - (unsigned __int64)(v9 != 0)) / v10)) )
      return 0;
  }
  if ( ((*(_WORD *)(a2 + 18) >> 3) & 0x7F) != 0 )
  {
    v11 = a3 + 8LL * (((*(_WORD *)(a2 + 18) >> 3) & 0x7Fu) - 1) + 32;
    v12 = (const __m128i **)(a3 + 24);
    do
    {
      v17 = *(_QWORD *)a1;
      v50 = _mm_unpacklo_epi64(_mm_loadl_epi64(*v12), (__m128i)(unsigned __int64)&(*v12)->m128i_u64[1]);
      v18 = sub_7214D0(v50.m128i_i64);
      v20 = _mm_load_si128(&v50);
      v52 = v18;
      v53 = v20;
      v21 = v20.m128i_i64[0];
      si128 = (__int128)_mm_load_si128((const __m128i *)&v52);
      v51 = v20;
      v23 = (__int128)_mm_load_si128((const __m128i *)&v53.m128i_u64[1]);
      v57 = v54;
      v55 = si128;
      v56 = v23;
      if ( v21 )
      {
        sub_7DE380(a1, v17 + 24, v21, v19, a5, a6, si128, v23, v54);
        v24 = sub_7214D0(v51.m128i_i64);
        v27 = _mm_load_si128(&v51);
        v28 = *(unsigned int *)(a1 + 20);
        v29 = *(_QWORD *)(a1 + 8);
        v30 = (const __m128i *)&v58;
        v58 = v24;
        v31 = *(unsigned int *)(a1 + 16);
        v59 = v27;
        v32 = v31 + 1;
        if ( v28 < v31 + 1 )
        {
          v30 = (const __m128i *)&v58;
          if ( (unsigned __int64)&v58 < v29 || (unsigned __int64)&v58 >= v29 + 40 * v31 )
          {
            sub_25D6060(a1 + 8, a1 + 24, v32, 40);
            v29 = *(_QWORD *)(a1 + 8);
            v31 = *(unsigned int *)(a1 + 16);
          }
          else
          {
            v33 = (char *)&v58 - v29;
            sub_25D6060(a1 + 8, a1 + 24, v32, 40);
            v29 = *(_QWORD *)(a1 + 8);
            v31 = *(unsigned int *)(a1 + 16);
            v30 = (const __m128i *)&v33[v29];
          }
        }
        v13 = (__m128i *)(v29 + 40 * v31);
        *v13 = _mm_loadu_si128(v30);
        v14 = v50.m128i_i64[0];
        v13[1] = _mm_loadu_si128(v30 + 1);
        v13[2].m128i_i64[0] = v30[2].m128i_i64[0];
        v15 = v50.m128i_i64[1];
        ++*(_DWORD *)(a1 + 16);
        v16 = sub_7EE840((__int64 *)a1, v14, v15, v28, v25, v26);
        --*(_DWORD *)(a1 + 16);
        if ( !v16 )
          return 0;
      }
      ++v12;
    }
    while ( v12 != (const __m128i **)v11 );
  }
  if ( (*(_BYTE *)(a2 + 19) & 0xFC) != 0 )
  {
    v35 = 0;
    v48 = 4LL * (*(_BYTE *)(a2 + 19) >> 2);
    do
    {
      v36 = *(_WORD *)(a2 + 18);
      LODWORD(v55) = 1043;
      v37 = v36 & 0x3F8;
      v38 = *(_DWORD *)(v35 + a3 + v37 + 24);
      v39 = *(_QWORD *)(v37 + a2 + 2 * v35 + 48);
      v40 = *(_QWORD *)a1;
      LODWORD(v56) = v38;
      *((_QWORD *)&v55 + 1) = v39;
      sub_7DE380(
        a1,
        v40 + 24,
        v57,
        a3,
        a5,
        a6,
        (__int128)_mm_load_si128((const __m128i *)&v55),
        (__int128)_mm_load_si128((const __m128i *)&v56),
        v57);
      v41 = *(unsigned int *)(a1 + 16);
      v42 = *(unsigned int *)(a1 + 20);
      v59.m128i_i32[2] = v38;
      v59.m128i_i64[0] = v39;
      v43 = *(_QWORD *)(a1 + 8);
      v44 = (const __m128i *)&v58;
      v58 = 1043;
      v45 = v41 + 1;
      if ( v42 < v41 + 1 )
      {
        if ( (unsigned __int64)&v58 < v43 || (unsigned __int64)&v58 >= v43 + 40 * v41 )
        {
          sub_25D6060(a1 + 8, a1 + 24, v45, 40);
          v43 = *(_QWORD *)(a1 + 8);
          v41 = *(unsigned int *)(a1 + 16);
        }
        else
        {
          v47 = (char *)&v58 - v43;
          sub_25D6060(a1 + 8, a1 + 24, v45, 40);
          v43 = *(_QWORD *)(a1 + 8);
          v41 = *(unsigned int *)(a1 + 16);
          v44 = (const __m128i *)&v47[v43];
        }
      }
      v35 += 4;
      v46 = (__m128i *)(v43 + 40 * v41);
      *v46 = _mm_loadu_si128(v44);
      v46[1] = _mm_loadu_si128(v44 + 1);
      v46[2].m128i_i64[0] = v44[2].m128i_i64[0];
    }
    while ( v35 != v48 );
  }
  return 1;
}

