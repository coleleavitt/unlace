__int64 __fastcall sub_4A8420(const __m128i *a1)
{
  __int64 v2; // rbx
  __int64 v3; // r13
  __int64 v4; // rbx
  char v5; // cl
  bool v6; // zf
  __int64 v7; // r12
  __m128i v8; // xmm0
  size_t v9; // r15
  size_t v10; // r15
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  __int32 v17; // r12d
  __int64 v18; // r14
  size_t v19; // r9
  __int64 v20; // r14
  size_t v21; // r9
  char v22; // al
  __int64 v23; // rax
  int v24; // edx
  __int64 v25; // rax
  void *v26; // rax
  void *v27; // r10
  void *v28; // rdi
  const void *v29; // r10
  void *v30; // rax
  __int64 v31; // rbx
  __int64 v32; // r13
  __int64 v33; // rdi
  __int64 v34; // r13
  __int64 v35; // rbx
  __int64 v36; // r13
  __int64 v37; // rax
  __int64 v38; // r15
  _QWORD *v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rsi
  __int64 v43; // rax
  __int64 v44; // r14
  __int64 v45; // rbx
  __int64 v46; // r12
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rdx
  __int64 v49; // rbx
  unsigned __int64 v50; // rbx
  _QWORD *v51; // rdx
  __int64 v52; // rdi
  __int64 v53; // r12
  _QWORD *v54; // rax
  __int64 v55; // r12
  __m128i v56; // xmm1
  __m128i v57; // xmm0
  __int32 v58; // eax
  __int8 v59; // dl
  _QWORD *v60; // rdi
  void *v61; // rbp
  void *v62; // rbx
  __int64 v63; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  void *v67; // rax
  __int64 v68; // rbx
  size_t v69; // [rsp+0h] [rbp-118h]
  size_t v70; // [rsp+0h] [rbp-118h]
  void *v71; // [rsp+8h] [rbp-110h]
  void *v72; // [rsp+8h] [rbp-110h]
  __int64 v73; // [rsp+18h] [rbp-100h] BYREF
  void *v74; // [rsp+20h] [rbp-F8h] BYREF
  __int128 v75; // [rsp+28h] [rbp-F0h]
  void *v76[3]; // [rsp+40h] [rbp-D8h] BYREF
  __m128i v77; // [rsp+58h] [rbp-C0h]
  void *src; // [rsp+68h] [rbp-B0h] BYREF
  __int128 v79; // [rsp+70h] [rbp-A8h]
  __int64 v80; // [rsp+80h] [rbp-98h] BYREF
  __m128i v81; // [rsp+88h] [rbp-90h] BYREF
  __m128i v82; // [rsp+98h] [rbp-80h] BYREF
  __m128i v83; // [rsp+A8h] [rbp-70h] BYREF
  __int64 v84; // [rsp+B8h] [rbp-60h]
  __int64 v85; // [rsp+C0h] [rbp-58h]
  char v86; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v87; // [rsp+D8h] [rbp-40h]

  v87 = __readfsqword(0x28u);
  switch_dbctx(a1->m128i_i32[2]);
  v2 = a1[2].m128i_i64[1];
  v3 = v2 + 184 * a1[3].m128i_i64[0];
  if ( v2 == v3 )
    return switch_dbctx(a1->m128i_i32[2]);
  v4 = v2 + 40;
  v5 = 0;
  while ( 1 )
  {
    v23 = *(_QWORD *)(v4 + 120);
    if ( v23 == -1 )
      v23 = *(_QWORD *)(v4 - 40);
    v24 = *(_DWORD *)(v4 + 132);
    v25 = 3 * v23;
    if ( v24 == -1 )
    {
      *(_QWORD *)(v4 + 104) = a1->m128i_i32[3] + v25;
    }
    else
    {
      v6 = *(_BYTE *)(v4 + 136) == 0;
      *(_QWORD *)(v4 + 104) = v24 + v25;
      if ( v6 || *(_QWORD *)(v4 + 112) )
      {
        if ( a1->m128i_i32[3] == v24 )
        {
          if ( !under_debugger )
            interr(2165);
          goto LABEL_85;
        }
        switch_dbctx(*(int *)(a1[2].m128i_i64[0] + 4LL * v24 + 16));
        v7 = *(_QWORD *)(v4 + 112);
        v8 = _mm_loadu_si128((const __m128i *)v7);
        v76[2] = nullptr;
        *(__m128i *)v76 = v8;
        v77 = 0;
        v9 = *(_QWORD *)(v7 + 24);
        if ( v9 )
        {
          v26 = (void *)qalloc_or_throw(*(_QWORD *)(v7 + 24));
          v77.m128i_i64[1] = v9;
          v76[2] = v26;
          memcpy(v26, *(const void **)(v7 + 16), v9);
          v77.m128i_i64[0] = v9;
        }
        src = nullptr;
        v79 = 0;
        v10 = *(_QWORD *)(v7 + 48);
        if ( v10 )
        {
          src = (void *)qalloc_or_throw(*(_QWORD *)(v7 + 48));
          *((_QWORD *)&v79 + 1) = v10;
          memcpy(src, *(const void **)(v7 + 40), v10);
          *(_QWORD *)&v79 = v10;
        }
        v80 = 0;
        copy_tinfo_t(&v80);
        v11 = a1[2].m128i_i64[0];
        v12 = a1->m128i_u32[3];
        v13 = *(_QWORD *)(v7 + 120);
        v14 = *(_QWORD *)(v7 + 128);
        v81 = _mm_loadu_si128((const __m128i *)(v7 + 72));
        v15 = _mm_loadu_si128((const __m128i *)(v7 + 88));
        v84 = v13;
        LOBYTE(v13) = *(_BYTE *)(v7 + 136);
        v82 = v15;
        v16 = _mm_loadu_si128((const __m128i *)(v7 + 104));
        v86 = v13;
        v85 = v14;
        v83 = v16;
        (*(void (__fastcall **)(__int64, __int64 *, _QWORD, __int64, __int64))(*(_QWORD *)v11 + 32LL))(
          v11,
          &v80,
          *(unsigned int *)(v4 + 132),
          v12,
          1);
        v17 = a1->m128i_i32[3];
        *(void **)(v4 - 40) = v76[0];
        *(void **)(v4 - 32) = v76[1];
        if ( (void **)(v4 - 24) != &v76[2] )
        {
          v18 = v77.m128i_i64[0];
          if ( v77.m128i_i64[0] && (v19 = v77.m128i_i64[0] - 1, v77.m128i_i64[0] != 1) )
          {
            v29 = v76[2];
            v30 = *(void **)(v4 - 24);
            if ( *(_QWORD *)(v4 - 8) < v77.m128i_i64[0] )
            {
              v71 = v76[2];
              v69 = v77.m128i_i64[0] - 1;
              v30 = (void *)qvector_reserve(v4 - 24, *(_QWORD *)(v4 - 24), v77.m128i_i64[0], 1);
              v29 = v71;
              v19 = v69;
              *(_QWORD *)(v4 - 24) = v30;
            }
            *(_QWORD *)(v4 - 16) = v18;
            memmove(v30, v29, v19);
            *(_BYTE *)(*(_QWORD *)(v4 - 24) + v18 - 1) = 0;
          }
          else
          {
            *(_QWORD *)(v4 - 16) = 0;
          }
        }
        if ( (void **)v4 != &src )
        {
          v20 = v79;
          if ( (_QWORD)v79 && (v21 = v79 - 1, (_QWORD)v79 != 1) )
          {
            v27 = src;
            v28 = *(void **)v4;
            if ( *(_QWORD *)(v4 + 16) < (unsigned __int64)v79 )
            {
              v72 = src;
              v70 = v79 - 1;
              v66 = qvector_reserve(v4, *(_QWORD *)v4, v79, 1);
              v27 = v72;
              v21 = v70;
              *(_QWORD *)v4 = v66;
              v28 = (void *)v66;
            }
            *(_QWORD *)(v4 + 8) = v20;
            memmove(v28, v27, v21);
            *(_BYTE *)(*(_QWORD *)v4 + v20 - 1) = 0;
          }
          else
          {
            *(_QWORD *)(v4 + 8) = 0;
          }
        }
        copy_tinfo_t(v4 + 24);
        *(__m128i *)(v4 + 32) = _mm_loadu_si128(&v81);
        *(__m128i *)(v4 + 48) = _mm_loadu_si128(&v82);
        *(__m128i *)(v4 + 64) = _mm_loadu_si128(&v83);
        *(_DWORD *)(v4 + 80) = v84;
        *(_QWORD *)(v4 + 88) = v85;
        v22 = v86;
        *(_DWORD *)(v4 + 128) = v17;
        *(_BYTE *)(v4 + 96) = v22;
        *(_BYTE *)(v4 + 136) = 1;
        clear_tinfo_t(&v80);
        if ( src )
        {
          *(_QWORD *)&v79 = 0;
          qfree(src);
        }
        if ( v76[2] )
        {
          v77.m128i_i64[0] = 0;
          qfree(v76[2]);
        }
      }
      else
      {
        *(_BYTE *)(v4 + 136) = 0;
        *(_QWORD *)(v4 + 120) = -1;
        *(_QWORD *)(v4 + 128) = -1;
        *(_QWORD *)(v4 + 104) = -1;
      }
      v5 = 1;
    }
    if ( v3 == v4 + 144 )
      break;
    v4 += 184;
  }
  if ( !v5 )
    return switch_dbctx(a1->m128i_i32[2]);
  v31 = a1[5].m128i_i64[0];
  v32 = 0;
  v74 = nullptr;
  v75 = 0;
  if ( v31 )
  {
    do
    {
      v33 = 9 * v32++;
      sub_379560((_QWORD *)(a1[4].m128i_i64[1] + 16 * v33));
    }
    while ( v31 != v32 );
  }
  v34 = 184 * a1[3].m128i_i64[0];
  v35 = a1[2].m128i_i64[1];
  a1[5].m128i_i64[0] = 0;
  v36 = v35 + v34;
  if ( v36 != v35 )
  {
    do
    {
      while ( !*(_BYTE *)(v35 + 176) )
      {
        v35 += 184;
        if ( v36 == v35 )
          goto LABEL_48;
      }
      v37 = v75;
      v38 = *(_QWORD *)(v35 + 144);
      v39 = v74;
      if ( *((_QWORD *)&v75 + 1) < (unsigned __int64)(v75 + 1) )
      {
        v74 = (void *)qvector_reserve(&v74, v74, v75 + 1, 8);
        v39 = v74;
        v37 = v75;
      }
      v39[v37] = v38;
      v40 = a1[5].m128i_i64[0];
      *(_QWORD *)&v75 = v75 + 1;
      *(_QWORD *)v35 = v40;
      sub_495840((__int64)v76, v35);
      v41 = a1[5].m128i_i64[0];
      v42 = a1[4].m128i_i64[1];
      if ( a1[5].m128i_i64[1] < (unsigned __int64)(v41 + 1) )
      {
        v65 = qvector_reserve(&a1[4].m128i_u64[1], v42, v41 + 1, 144);
        a1[4].m128i_i64[1] = v65;
        v42 = v65;
        v41 = a1[5].m128i_i64[0];
      }
      sub_49A3E0(v42 + 144 * v41, (__int64)v76);
      ++a1[5].m128i_i64[0];
      v35 += 184;
      sub_379560(v76);
    }
    while ( v36 != v35 );
LABEL_48:
    v43 = a1[5].m128i_i64[0];
    v44 = a1[4].m128i_i64[1];
    v45 = 144 * v43;
    v46 = v44 + 144 * v43;
    if ( v44 == v46 )
      goto LABEL_54;
    v47 = 0x8E38E38E38E38E39LL * (v45 >> 4);
    if ( v47 )
    {
      _BitScanReverse64(&v48, v47);
      sub_4A7E80((_QWORD *)a1[4].m128i_i64[1], v46, 2LL * (int)v48, (__int64 *)&v74);
      if ( v45 > 2304 )
      {
        v49 = v44 + 2304;
        sub_4A4440(v44, v44 + 2304, (__int64 *)&v74);
        do
        {
          sub_4A4070(v49, (__int64 *)&v74);
          v49 += 144;
        }
        while ( v46 != v49 );
        v43 = a1[5].m128i_i64[0];
        goto LABEL_54;
      }
    }
    else
    {
      sub_4A7E80((_QWORD *)a1[4].m128i_i64[1], v46, -2, (__int64 *)&v74);
    }
    sub_4A4440(v44, v46, (__int64 *)&v74);
    v43 = a1[5].m128i_i64[0];
LABEL_54:
    if ( !v43 )
      goto LABEL_58;
    v50 = 0;
    while ( 1 )
    {
      v51 = (_QWORD *)(a1[4].m128i_i64[1] + 144 * v50);
      *v51 = 0;
      v52 = a1[2].m128i_i64[1];
      v53 = v52 + 184 * a1[3].m128i_i64[0];
      v54 = (_QWORD *)sub_4A02B0(v52, v53, (__int64)v51);
      if ( v54 == (_QWORD *)v53 )
        break;
      *v54 = v50++;
      if ( v50 >= a1[5].m128i_i64[0] )
        goto LABEL_58;
    }
    if ( !under_debugger )
      interr(2495);
LABEL_85:
    BUG();
  }
LABEL_58:
  if ( v74 )
  {
    *(_QWORD *)&v75 = 0;
    qfree(v74);
  }
  switch_dbctx(a1->m128i_i32[2]);
  v73 = 0;
  sub_497A70(a1[4].m128i_i64);
  v55 = a1[5].m128i_i64[0];
  memset(v76, 0, sizeof(v76));
  if ( v55 )
  {
    v67 = (void *)qalloc_or_throw(144 * v55);
    v76[0] = v67;
    v68 = 0;
    v76[2] = (void *)v55;
    while ( 1 )
    {
      sub_495840((__int64)v67 + 144 * v68, 144 * v68 + a1[4].m128i_i64[1]);
      if ( v55 == ++v68 )
        break;
      v67 = v76[0];
    }
    v76[1] = (void *)v55;
  }
  v56 = _mm_loadu_si128(a1 + 6);
  v57 = _mm_loadl_epi64(a1 + 7);
  v58 = a1[7].m128i_i32[2];
  v59 = a1[7].m128i_i8[11];
  v77 = v56;
  LODWORD(v79) = v58;
  src = (void *)v57.m128i_i64[0];
  if ( v55
    && (_mm_cvtsi128_si32(_mm_shuffle_epi32(v57, 229)) & 0x400) != 0
    && v56.m128i_i64[0] < (unsigned __int64)(*((_QWORD *)v76[0] + 18 * v55 - 18)
                                           + *((_QWORD *)v76[0] + 18 * v55 - 17)
                                           + 7LL) >> 3 )
  {
    v77.m128i_i64[0] = (unsigned __int64)(*((_QWORD *)v76[0] + 18 * v55 - 18) + *((_QWORD *)v76[0] + 18 * v55 - 17) + 7LL) >> 3;
  }
  if ( !(unsigned __int8)create_tinfo(&v73, v59 == 0 ? 13 : 29, 13, v76) )
  {
    if ( !under_debugger )
      interr(2162);
    goto LABEL_85;
  }
  sub_493D10((const __m128i *)a1[4].m128i_i64, (__int64)&v73);
  v60 = v76[0];
  if ( v76[0] )
  {
    v61 = v76[1];
    if ( v76[1] )
    {
      v62 = nullptr;
      do
      {
        v63 = 9LL * (_QWORD)v62;
        v62 = (char *)v62 + 1;
        sub_379560(&v60[2 * v63]);
        v60 = v76[0];
      }
      while ( v61 != v62 );
    }
    v76[1] = nullptr;
    qfree(v60);
  }
  clear_tinfo_t(&v73);
  return v87 - __readfsqword(0x28u);
}
