__int64 __fastcall sub_3F2350(int a1, __int64 a2)
{
  unsigned int v2; // r15d
  __int64 v5; // rsi
  unsigned int v6; // eax
  char *v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // r10
  __int64 v16; // rbp
  int tinfo_size; // eax
  char *v18; // rsi
  __int64 v19; // r12
  __int64 v20; // rax
  __int64 v21; // rax
  __m128i v22; // xmm0
  __int64 v23; // rdi
  __int64 v24; // r14
  __m128i v25; // xmm0
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 v30; // rax
  __m128i v31; // xmm0
  __int64 v32; // rdi
  _DWORD *v33; // rsi
  _DWORD *v34; // rdi
  bool v35; // zf
  __int64 v36; // rax
  __m128i v37; // [rsp+0h] [rbp-F8h] BYREF
  __int64 *v38; // [rsp+10h] [rbp-E8h]
  _DWORD *v39; // [rsp+18h] [rbp-E0h]
  __int64 v40; // [rsp+20h] [rbp-D8h]
  __int64 v41; // [rsp+28h] [rbp-D0h]
  __m128i v42; // [rsp+30h] [rbp-C8h] BYREF
  char *s1; // [rsp+40h] [rbp-B8h] BYREF
  __int128 v44; // [rsp+48h] [rbp-B0h]
  unsigned __int8 v45[16]; // [rsp+60h] [rbp-98h] BYREF
  __int64 v46; // [rsp+70h] [rbp-88h]
  __int64 v47; // [rsp+78h] [rbp-80h] BYREF
  __int64 v48; // [rsp+80h] [rbp-78h]
  __m128i v49; // [rsp+88h] [rbp-70h] BYREF
  _DWORD v50[4]; // [rsp+98h] [rbp-60h] BYREF
  int v51; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v52; // [rsp+B8h] [rbp-40h]

  v52 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a2 + 32) != 6 )
    return 0;
  v2 = 0;
  if ( !*(_BYTE *)(a2 + 64) )
    return v2;
  v5 = *(_QWORD *)(a2 + 40);
  v44 = 0;
  s1 = nullptr;
  v6 = sub_1D24F0((__int64 *)&s1, v5, 0, 0);
  v7 = s1;
  v2 = v6;
  if ( !(_BYTE)v6 )
    goto LABEL_12;
  v8 = v44;
  if ( (unsigned __int64)v44 <= 1 )
  {
LABEL_11:
    v2 = 0;
    goto LABEL_12;
  }
  if ( ((s1[(_QWORD)v44 - 2] - 52) & 0xFB) != 0 )
    goto LABEL_8;
  v12 = v44 - 1;
  if ( (__int64)v44 - 1 <= 1 )
  {
    if ( !s1 )
    {
LABEL_8:
      v9 = *(_QWORD *)(a2 + 72);
      goto LABEL_9;
    }
    *(_QWORD *)&v44 = 0;
    qfree(s1);
    v9 = *(_QWORD *)(a2 + 72);
    s1 = nullptr;
    *((_QWORD *)&v44 + 1) = 0;
    if ( (_QWORD)v44 )
    {
      v7 = nullptr;
      goto LABEL_9;
    }
    return 0;
  }
  if ( *((_QWORD *)&v44 + 1) < v12 )
  {
    v38 = (__int64 *)(v44 - 1);
    s1 = (char *)qvector_reserve(&s1, s1, v12, 1);
    v12 = v8 - 1;
    v7 = s1;
  }
  *(_QWORD *)&v44 = v12;
  v7[v8 - 2] = 0;
  v7 = s1;
  v9 = *(_QWORD *)(a2 + 72);
  if ( (_QWORD)v44 )
  {
LABEL_9:
    v10 = strcmp(v7, "aeabi_memclr");
    v11 = *(_QWORD *)(v9 + 32);
    if ( !v10 )
    {
      if ( v11 != 2 )
        goto LABEL_11;
      v14 = *(_QWORD *)(v9 + 24);
      if ( *(_QWORD *)(v9 + 40) <= 2u )
      {
        v36 = qvector_reserve(v9 + 24, v14, 3, 80);
        *(_QWORD *)(v9 + 24) = v36;
        v11 = *(_QWORD *)(v9 + 32);
        v14 = v36;
      }
      v15 = v14 + 80 * v11;
      *(__m128i *)(v15 + 16) = _mm_load_si128((const __m128i *)&xmmword_41F8F0);
      *(_QWORD *)v15 = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v15 + 8) = 0;
      *(_QWORD *)(v15 + 32) = 0;
      *(_QWORD *)(v15 + 56) = 0;
      *(_QWORD *)(v15 + 64) = 0;
      *(_DWORD *)(v15 + 72) = 0;
      *(_OWORD *)(v15 + 40) = 0;
      ++*(_QWORD *)(v9 + 32);
      v38 = (__int64 *)v15;
      *(_QWORD *)v45 = 7;
      copy_tinfo_t(v15 + 24, v45);
      clear_tinfo_t(v45);
      v16 = *(_QWORD *)(a2 + 24);
      tinfo_size = get_tinfo_size(0, v38[3], 0);
      sub_120450((__int64)v38, a1, 0, tinfo_size, v16, 0);
      ++*(_DWORD *)(v9 + 8);
      v18 = s1;
      if ( *((_QWORD *)&v44 + 1) <= 0xCu )
      {
        s1 = (char *)qvector_reserve(&s1, s1, 13, 1);
        v18 = s1;
      }
      *(_QWORD *)&v44 = 13;
      qmemcpy(v18, "aeabi_memset", 12);
      v7 = s1;
      s1[12] = 0;
    }
  }
  if ( *(_QWORD *)(v9 + 32) != 3 || !(_QWORD)v44 )
    goto LABEL_11;
  if ( !strcmp(v7, "aeabi_memset") )
  {
    v19 = *(_QWORD *)(v9 + 24);
    v37.m128i_i64[0] = v19 + 80;
    sub_123480((__int64)v45, (unsigned __int8 *)(v19 + 80));
    v20 = *(_QWORD *)(v19 + 96);
    v47 = 0;
    v46 = v20;
    v38 = &v47;
    copy_tinfo_t(&v47, v19 + 104);
    v21 = *(_QWORD *)(v19 + 112);
    v22 = _mm_loadu_si128((const __m128i *)(v19 + 120));
    *(_QWORD *)(v19 + 112) = 0;
    v39 = v50;
    v48 = v21;
    v49 = v22;
    *(_OWORD *)(v19 + 120) = 0;
    v40 = v19 + 136;
    v50[0] = 0;
    copy_argloc(v50, v19 + 136);
    v51 = *(_DWORD *)(v19 + 152);
    v41 = v19 + 160;
    sub_124BC0(v37.m128i_i64[0], (unsigned __int8 *)(v19 + 160));
    *(_QWORD *)(v19 + 96) = *(_QWORD *)(v19 + 176);
    v37.m128i_i64[0] = v19 + 184;
    copy_tinfo_t(v19 + 104, v19 + 184);
    v23 = *(_QWORD *)(v19 + 112);
    v24 = *(_QWORD *)(v19 + 192);
    *(_QWORD *)(v19 + 192) = 0;
    v25 = _mm_loadu_si128((const __m128i *)(v19 + 200));
    *(_OWORD *)(v19 + 200) = 0;
    if ( v23 )
    {
      *(_QWORD *)(v19 + 120) = 0;
      v42 = v25;
      qfree(v23);
      v25 = _mm_load_si128(&v42);
    }
    *(_QWORD *)(v19 + 112) = v24;
    v26 = v40;
    *(__m128i *)(v19 + 120) = v25;
    copy_argloc(v26, v19 + 216);
    v27 = v41;
    *(_DWORD *)(v19 + 152) = *(_DWORD *)(v19 + 232);
    sub_124BC0(v27, v45);
    v28 = (__int64)v38;
    v29 = v37.m128i_i64[0];
    *(_QWORD *)(v19 + 176) = v46;
    copy_tinfo_t(v29, v28);
    v30 = v48;
    v31 = _mm_loadu_si128(&v49);
    v48 = 0;
    v49 = 0;
    v32 = *(_QWORD *)(v19 + 192);
    if ( v32 )
    {
      *(_QWORD *)(v19 + 200) = 0;
      v40 = v30;
      v37 = v31;
      qfree(v32);
      v30 = v40;
      v31 = _mm_load_si128(&v37);
    }
    *(_QWORD *)(v19 + 192) = v30;
    v33 = v39;
    *(__m128i *)(v19 + 200) = v31;
    copy_argloc(v19 + 216, v33);
    v34 = v39;
    *(_DWORD *)(v19 + 232) = v51;
    cleanup_argloc(v34);
    if ( v48 )
    {
      v49.m128i_i64[0] = 0;
      qfree(v48);
    }
    clear_tinfo_t(v38);
    sub_11C7E0((__int64)v45);
    v35 = (_QWORD)v44 == 0;
    v13 = a2 + 32;
    *(_DWORD *)(v9 + 284) = 2;
    if ( v35 )
      v7 = (char *)::s1;
    else
      v7 = s1;
  }
  else if ( !strcmp(v7, "aeabi_memcpy") )
  {
    *(_DWORD *)(v9 + 284) = 5;
    v13 = a2 + 32;
  }
  else
  {
    v13 = a2 + 32;
    if ( strcmp(v7, "aeabi_memmove") )
      goto LABEL_11;
  }
  sub_11CEE0(v13, (__int64)(v7 + 6));
  v7 = s1;
LABEL_12:
  if ( v7 )
  {
    *(_QWORD *)&v44 = 0;
    qfree(v7);
  }
  return v2;
}
