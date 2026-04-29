__int64 __fastcall sub_414E70(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  char v4; // al
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rax
  int *v8; // rbx
  __int64 v9; // rax
  int *v10; // r15
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // r13
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  char *v26; // r12
  size_t v27; // r13
  size_t v28; // r13
  __int64 v29; // rsi
  __int64 v30; // rax
  char *v31; // r15
  void *v32; // rax
  __m128i v33; // xmm0
  void *v34; // rax
  __m128i v35; // xmm1
  __int64 v36; // r12
  __int64 v37; // [rsp+20h] [rbp-128h]
  __int64 *v38; // [rsp+28h] [rbp-120h]
  __int64 v39; // [rsp+30h] [rbp-118h] BYREF
  __int64 v40; // [rsp+38h] [rbp-110h] BYREF
  int *v41; // [rsp+40h] [rbp-108h] BYREF
  __int128 v42; // [rsp+48h] [rbp-100h]
  _QWORD v43[2]; // [rsp+60h] [rbp-E8h] BYREF
  void *v44; // [rsp+70h] [rbp-D8h]
  size_t v45[2]; // [rsp+78h] [rbp-D0h]
  void *src; // [rsp+88h] [rbp-C0h]
  size_t n[2]; // [rsp+90h] [rbp-B8h]
  __int64 v48; // [rsp+A0h] [rbp-A8h] BYREF
  int v49; // [rsp+A8h] [rbp-A0h]
  __int128 v50; // [rsp+B0h] [rbp-98h] BYREF
  void *v51; // [rsp+C0h] [rbp-88h] BYREF
  __m128i v52; // [rsp+C8h] [rbp-80h] BYREF
  void *v53; // [rsp+D8h] [rbp-70h]
  __m128i v54; // [rsp+E0h] [rbp-68h] BYREF
  __int64 v55; // [rsp+F0h] [rbp-58h] BYREF
  int v56; // [rsp+F8h] [rbp-50h]
  unsigned __int64 v57; // [rsp+108h] [rbp-40h]

  v57 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 120) )
    return 1;
  if ( (*(_DWORD *)(a2 + 16) & 0x40) != 0 )
    return 0;
  v3 = *(_DWORD *)(a2 + 16) & 1;
  if ( v3 )
    return 0;
  v4 = *(_BYTE *)(a1 + 176);
  *(_DWORD *)(a1 + 116) = 0;
  *(_BYTE *)(a1 + 176) = v4 & 0xF | 0x70;
  v5 = *(_DWORD *)(a2 + 16);
  if ( (v5 & 8) == 0 )
  {
    v13 = *(_QWORD *)(a1 + 96);
    v14 = *(_QWORD *)(a1 + 88);
    if ( *(_QWORD *)(a1 + 104) < (unsigned __int64)(v13 + 1) )
    {
      v24 = qvector_reserve(a1 + 88, v14, v13 + 1, 80);
      *(_QWORD *)(a1 + 88) = v24;
      v14 = v24;
      v13 = *(_QWORD *)(a1 + 96);
    }
    v15 = 0;
    v16 = v14 + 80 * v13;
    *(_DWORD *)v16 = 0;
    *(_QWORD *)(v16 + 8) = 0;
    *(_QWORD *)(v16 + 16) = 0;
    *(_QWORD *)(v16 + 40) = 0;
    *(_QWORD *)(v16 + 64) = 0;
    *(_DWORD *)(v16 + 72) = 0;
    *(_OWORD *)(v16 + 24) = 0;
    *(_OWORD *)(v16 + 48) = 0;
    ++*(_QWORD *)(a1 + 96);
    v17 = *(unsigned __int8 *)(a2 + 12);
    if ( (unsigned __int8)v17 <= 0xFu )
      v15 = byte_435880[v17];
    *(_QWORD *)&v50 = v15;
    copy_tinfo_t(v16 + 64, &v50);
    clear_tinfo_t(&v50);
    if ( !*(_BYTE *)(v16 + 64) )
      return 0;
    v5 = *(_DWORD *)(a2 + 16);
    if ( (v5 & 0x2A) == 0 )
    {
      v19 = *(_QWORD *)(a1 + 96);
      v20 = *(_QWORD *)(a1 + 88);
      if ( *(_QWORD *)(a1 + 104) < (unsigned __int64)(v19 + 1) )
      {
        v25 = qvector_reserve(a1 + 88, v20, v19 + 1, 80);
        *(_QWORD *)(a1 + 88) = v25;
        v20 = v25;
        v19 = *(_QWORD *)(a1 + 96);
      }
      v21 = v20 + 80 * v19;
      *(_DWORD *)v21 = 0;
      *(_QWORD *)(v21 + 8) = 0;
      *(_QWORD *)(v21 + 16) = 0;
      *(_QWORD *)(v21 + 40) = 0;
      *(_QWORD *)(v21 + 64) = 0;
      *(_DWORD *)(v21 + 72) = 0;
      *(_OWORD *)(v21 + 24) = 0;
      *(_OWORD *)(v21 + 48) = 0;
      ++*(_QWORD *)(a1 + 96);
      if ( (*(_BYTE *)(a2 + 16) & 0x28) != 0 )
      {
        if ( !under_debugger )
          sub_383060(0xCA0Eu, v20, 0.0);
        BUG();
      }
      v22 = 18;
      if ( (unsigned int)(*(_DWORD *)(a2 + 8) - 22) > 2 )
      {
        v23 = *(unsigned __int8 *)(a2 + 12);
        if ( (unsigned __int8)v23 <= 0xFu )
          v22 = byte_435880[v23];
        else
          v22 = 0;
      }
      *(_QWORD *)&v50 = v22;
      copy_tinfo_t(v21 + 64, &v50);
      clear_tinfo_t(&v50);
      if ( !*(_BYTE *)(v21 + 64) )
        return 0;
      v5 = *(_DWORD *)(a2 + 16);
    }
  }
  if ( (v5 & 0x100) != 0 && !*(_DWORD *)(a2 + 8) )
  {
    *(_QWORD *)&v50 = 23;
  }
  else
  {
    v6 = *(unsigned __int8 *)(a2 + 13);
    if ( (unsigned __int8)v6 <= 0xFu )
      v7 = byte_435880[v6];
    else
      v7 = 0;
    *(_QWORD *)&v50 = v7;
  }
  v37 = a1 + 120;
  copy_tinfo_t(a1 + 120, &v50);
  clear_tinfo_t(&v50);
  if ( !*(_BYTE *)(a1 + 120) )
    return 0;
  v38 = (__int64 *)(a1 + 88);
  v41 = nullptr;
  v42 = 0;
  if ( sub_CFF70(0x7DCu, &v41, a1 + 88) == 1 )
  {
    v8 = v41;
    v9 = v42;
    v10 = &v41[v42];
    if ( v10 != v41 )
    {
      do
      {
        v11 = *v8;
        if ( (int)v11 >= 0 )
        {
          v40 = 0;
          v12 = *(_QWORD *)(a1 + 88) + 80 * v11;
          v43[0] = 0;
          v50 = 0;
          copy_tinfo_t((char *)&v50 + 8, v43);
          v51 = nullptr;
          copy_tinfo_t(&v51, &v40);
          v52.m128i_i32[0] = 0;
          v52.m128i_i16[2] = 0;
          clear_tinfo_t(v43);
          clear_tinfo_t(&v40);
          copy_tinfo_t(&v50, v12 + 64);
          create_tinfo(v12 + 64, 10, 10, &v50);
          clear_tinfo_t(&v51);
          clear_tinfo_t((char *)&v50 + 8);
          clear_tinfo_t(&v50);
          *(_DWORD *)(v12 + 72) |= 4u;
        }
        ++v8;
      }
      while ( v10 != v8 );
      v9 = v42;
    }
    if ( v9 && *v41 < 0 )
    {
      LODWORD(v43[0]) = 0;
      v43[1] = 0;
      v44 = nullptr;
      src = nullptr;
      v48 = 0;
      v49 = 0;
      v39 = 0;
      v40 = 0;
      *(_OWORD *)v45 = 0;
      *(_OWORD *)n = 0;
      v50 = 0;
      copy_tinfo_t((char *)&v50 + 8, &v40);
      v51 = nullptr;
      copy_tinfo_t(&v51, &v39);
      v52.m128i_i32[0] = 0;
      v52.m128i_i16[2] = 0;
      clear_tinfo_t(&v40);
      clear_tinfo_t(&v39);
      copy_tinfo_t(&v50, v37);
      create_tinfo(&v48, 10, 10, &v50);
      clear_tinfo_t(&v51);
      clear_tinfo_t((char *)&v50 + 8);
      clear_tinfo_t(&v50);
      v49 = 6;
      if ( *v41 == -2 )
      {
        sub_414B90(v38, (__int64)v43);
      }
      else
      {
        v26 = *(char **)(a1 + 88);
        LODWORD(v50) = 0;
        copy_argloc(&v50, v43);
        v27 = v45[0];
        v51 = nullptr;
        v52 = 0;
        if ( v45[0] )
        {
          v51 = (void *)qalloc_or_throw(v45[0]);
          v52.m128i_i64[1] = v27;
          memcpy(v51, v44, v27);
          v52.m128i_i64[0] = v27;
        }
        v28 = n[0];
        v53 = nullptr;
        v54 = 0;
        if ( n[0] )
        {
          v53 = (void *)qalloc_or_throw(n[0]);
          v54.m128i_i64[1] = v28;
          memcpy(v53, src, v28);
          v54.m128i_i64[0] = v28;
        }
        v55 = 0;
        copy_tinfo_t(&v55, &v48);
        v29 = *(_QWORD *)(a1 + 88);
        v56 = v49;
        v30 = *(_QWORD *)(a1 + 96);
        v31 = &v26[-v29];
        if ( *(_QWORD *)(a1 + 104) < (unsigned __int64)(v30 + 1) )
        {
          v36 = qvector_reserve(v38, v29, v30 + 1, 80);
          *(_QWORD *)(a1 + 88) = v36;
          v30 = *(_QWORD *)(a1 + 96);
          v26 = &v31[v36];
        }
        memmove(v26 + 80, v26, 80 * v30 - (_QWORD)v31);
        *(_DWORD *)v26 = 0;
        copy_argloc(v26, &v50);
        v32 = v51;
        v33 = _mm_loadu_si128(&v52);
        v51 = nullptr;
        *(__m128i *)(v26 + 24) = v33;
        *((_QWORD *)v26 + 2) = v32;
        v34 = v53;
        v35 = _mm_load_si128(&v54);
        v52 = 0;
        v53 = nullptr;
        v54 = 0;
        *((_QWORD *)v26 + 5) = v34;
        *((_QWORD *)v26 + 8) = 0;
        *((__m128i *)v26 + 3) = v35;
        copy_tinfo_t(v26 + 64, &v55);
        *((_DWORD *)v26 + 18) = v56;
        ++*(_QWORD *)(a1 + 96);
        clear_tinfo_t(&v55);
        if ( v53 )
        {
          v54.m128i_i64[0] = 0;
          qfree(v53);
        }
        if ( v51 )
        {
          v52.m128i_i64[0] = 0;
          qfree(v51);
        }
        cleanup_argloc(&v50);
      }
      if ( *v41 == -3 )
      {
        *(_QWORD *)&v50 = 1;
        copy_tinfo_t(v37, &v50);
        clear_tinfo_t(&v50);
      }
      else
      {
        copy_tinfo_t(v37, &v48);
      }
      clear_tinfo_t(&v48);
      if ( src )
      {
        n[0] = 0;
        qfree(src);
      }
      if ( v44 )
      {
        v45[0] = 0;
        qfree(v44);
      }
      cleanup_argloc(v43);
    }
    v3 = calc_arglocs(v38);
  }
  if ( v41 )
  {
    *(_QWORD *)&v42 = 0;
    qfree(v41);
  }
  return v3;
}
