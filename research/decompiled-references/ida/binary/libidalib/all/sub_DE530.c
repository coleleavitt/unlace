__int64 sub_DE530()
{
  int v0; // eax
  __int64 v1; // rbx
  __int64 v2; // rbp
  __int64 v3; // r13
  __int64 v4; // rbx
  void **v5; // r12
  __int64 v6; // rax
  __int64 eah; // rax
  int v8; // edx
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // rbp
  __int64 v15; // rax
  __m128i v16; // xmm0
  __int64 v17; // rax
  __m128i v18; // xmm0
  __int64 v19; // rax
  __m128i v20; // xmm0
  __m128i v21; // xmm0
  __int64 v22; // rax
  __int64 v23; // rax
  __m128i v24; // xmm0
  __int64 v25; // rax
  __m128i v26; // xmm0
  __m128i v27; // xmm1
  __int64 v28; // rax
  __m128i v29; // xmm0
  __int64 v30; // rdi
  __int64 v31; // r14
  __int64 i; // r15
  __int64 v33; // rax
  __int64 v34; // rdi
  __int64 v35; // r14
  __int64 j; // r15
  __int64 v37; // rax
  bool v38; // cf
  size_t v39; // rbp
  void *v40; // r13
  size_t v41; // r14
  const char *v42; // rax
  const char *v43; // rbp
  size_t v44; // rax
  size_t v45; // r13
  void *v46; // rdi
  __m128i v47; // xmm0
  void *v48; // rdi
  unsigned __int64 v49; // rax
  __int64 v50; // rdx
  void *v51; // rdi
  size_t v52; // r14
  __int64 v53; // rax
  __int64 v54; // rax
  __m128i v55; // [rsp+0h] [rbp-68h] BYREF
  void *src; // [rsp+10h] [rbp-58h] BYREF
  __m128i v57; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v58; // [rsp+28h] [rbp-40h]

  v58 = __readfsqword(0x28u);
  v0 = HIDWORD(qword_2524A0);
  if ( !HIDWORD(qword_2524A0) )
    return 0;
  v2 = *((_QWORD *)&xmmword_252598 + 1);
  v1 = xmmword_252598;
  if ( *((_QWORD *)&xmmword_252598 + 1) < (unsigned __int64)(xmmword_252598 + 1) )
  {
    v10 = qvector_reserve();
    v11 = qword_252590;
    v3 = v10;
    v12 = *((_QWORD *)&xmmword_252598 + 1);
    *((_QWORD *)&xmmword_252598 + 1) = v2;
    v55.m128i_i64[0] = v12;
    v13 = xmmword_252598 - 1;
    if ( (__int64)xmmword_252598 - 1 >= 0 )
    {
      v14 = v3;
      do
      {
        *(_DWORD *)v14 = *(_DWORD *)v11;
        v15 = *(_QWORD *)(v11 + 8);
        v16 = _mm_loadu_si128((const __m128i *)(v11 + 16));
        *(_QWORD *)(v11 + 8) = 0;
        *(_QWORD *)(v14 + 8) = v15;
        *(__m128i *)(v14 + 16) = v16;
        LOWORD(v15) = *(_WORD *)(v11 + 32);
        *(_OWORD *)(v11 + 16) = 0;
        *(_WORD *)(v14 + 32) = v15;
        *(_BYTE *)(v14 + 34) = *(_BYTE *)(v11 + 34);
        *(_DWORD *)(v14 + 36) = *(_DWORD *)(v11 + 36);
        v17 = *(_QWORD *)(v11 + 40);
        v18 = _mm_loadu_si128((const __m128i *)(v11 + 48));
        *(_QWORD *)(v11 + 40) = 0;
        *(_QWORD *)(v14 + 40) = v17;
        *(__m128i *)(v14 + 48) = v18;
        v19 = *(_QWORD *)(v11 + 64);
        v20 = _mm_loadu_si128((const __m128i *)(v11 + 72));
        *(_OWORD *)(v11 + 48) = 0;
        *(_QWORD *)(v14 + 64) = v19;
        *(__m128i *)(v14 + 72) = v20;
        v21 = _mm_loadu_si128((const __m128i *)(v11 + 96));
        v22 = *(_QWORD *)(v11 + 88);
        *(_QWORD *)(v11 + 64) = 0;
        *(_OWORD *)(v11 + 72) = 0;
        *(_QWORD *)(v11 + 88) = 0;
        *(__m128i *)(v14 + 96) = v21;
        *(_QWORD *)(v14 + 88) = v22;
        *(_OWORD *)(v11 + 96) = 0;
        *(_BYTE *)(v14 + 112) = *(_BYTE *)(v11 + 112);
        v23 = *(_QWORD *)(v11 + 120);
        v24 = _mm_loadu_si128((const __m128i *)(v11 + 128));
        *(_QWORD *)(v11 + 120) = 0;
        *(_QWORD *)(v14 + 120) = v23;
        *(__m128i *)(v14 + 128) = v24;
        v25 = *(_QWORD *)(v11 + 144);
        v26 = _mm_loadu_si128((const __m128i *)(v11 + 176));
        *(_OWORD *)(v11 + 128) = 0;
        v27 = _mm_loadu_si128((const __m128i *)(v11 + 160));
        *(_QWORD *)(v14 + 144) = v25;
        LOWORD(v25) = *(_WORD *)(v11 + 152);
        *(__m128i *)(v14 + 160) = v27;
        *(_WORD *)(v14 + 152) = v25;
        LOWORD(v25) = *(_WORD *)(v11 + 154);
        *(__m128i *)(v14 + 176) = v26;
        *(_WORD *)(v14 + 154) = v25;
        *(_BYTE *)(v14 + 156) = *(_BYTE *)(v11 + 156);
        v28 = *(_QWORD *)(v11 + 192);
        v29 = _mm_loadu_si128((const __m128i *)(v11 + 200));
        *(_QWORD *)(v11 + 192) = 0;
        *(_QWORD *)(v14 + 192) = v28;
        *(__m128i *)(v14 + 200) = v29;
        LODWORD(v28) = *(_DWORD *)(v11 + 216);
        *(_QWORD *)(v11 + 208) = 0;
        *(_DWORD *)(v14 + 216) = v28;
        *(_QWORD *)(v14 + 224) = *(_QWORD *)(v11 + 224);
        *(_BYTE *)(v14 + 232) = *(_BYTE *)(v11 + 232);
        *(__m128i *)(v14 + 240) = _mm_loadu_si128((const __m128i *)(v11 + 240));
        if ( *(_QWORD *)(v11 + 192) )
        {
          *(_QWORD *)(v11 + 200) = 0;
          qfree();
        }
        if ( *(_QWORD *)(v11 + 120) )
        {
          *(_QWORD *)(v11 + 128) = 0;
          qfree();
        }
        if ( *(_QWORD *)(v11 + 88) )
        {
          *(_QWORD *)(v11 + 96) = 0;
          qfree();
        }
        v30 = *(_QWORD *)(v11 + 64);
        if ( v30 )
        {
          v31 = *(_QWORD *)(v11 + 72);
          if ( v31 )
          {
            for ( i = 0; i != v31; ++i )
            {
              v33 = v30 + 32 * i;
              if ( *(int *)v33 >= -1 && *(_QWORD *)(v33 + 8) )
              {
                *(_QWORD *)(v33 + 16) = 0;
                qfree();
                v30 = *(_QWORD *)(v11 + 64);
              }
            }
          }
          *(_QWORD *)(v11 + 72) = 0;
          qfree();
        }
        v34 = *(_QWORD *)(v11 + 40);
        if ( v34 )
        {
          v35 = *(_QWORD *)(v11 + 48);
          if ( v35 )
          {
            for ( j = 0; j != v35; ++j )
            {
              v37 = v34 + 32 * j;
              if ( *(int *)v37 >= -1 && *(_QWORD *)(v37 + 8) )
              {
                *(_QWORD *)(v37 + 16) = 0;
                qfree();
                v34 = *(_QWORD *)(v11 + 40);
              }
            }
          }
          *(_QWORD *)(v11 + 48) = 0;
          qfree();
        }
        if ( *(_QWORD *)(v11 + 8) )
        {
          *(_QWORD *)(v11 + 16) = 0;
          qfree();
        }
        v11 += 256;
        v14 += 256;
        v38 = v13-- == 0;
      }
      while ( !v38 );
    }
    qfree();
    qword_252590 = v3;
    v1 = xmmword_252598;
    *((_QWORD *)&xmmword_252598 + 1) = v55.m128i_i64[0];
    v0 = HIDWORD(qword_2524A0);
  }
  else
  {
    v3 = qword_252590;
  }
  HIDWORD(qword_252280) = 0;
  v4 = v3 + (v1 << 8);
  *(_QWORD *)(v4 + 8) = 0;
  v5 = (void **)(v4 + 8);
  *(_QWORD *)&xmmword_252598 = xmmword_252598 + 1;
  *(_DWORD *)v4 = v0;
  *(_WORD *)(v4 + 32) = 0;
  v6 = dbg;
  *(_WORD *)(v4 + 152) = 1;
  *(_QWORD *)(v4 + 40) = 0;
  *(_QWORD *)(v4 + 64) = 0;
  *(_QWORD *)(v4 + 88) = 0;
  *(_QWORD *)(v4 + 120) = 0;
  *(_QWORD *)(v4 + 192) = 0;
  *(_DWORD *)(v4 + 36) = -1;
  *(_BYTE *)(v4 + 34) = 0;
  *(_BYTE *)(v4 + 232) = 0;
  *(_QWORD *)(v4 + 144) = 0;
  *(_OWORD *)(v4 + 16) = 0;
  *(_OWORD *)(v4 + 48) = 0;
  *(_OWORD *)(v4 + 72) = 0;
  *(_OWORD *)(v4 + 96) = 0;
  *(_OWORD *)(v4 + 128) = 0;
  *(_OWORD *)(v4 + 200) = 0;
  *(_OWORD *)(v4 + 240) = 0;
  sub_A8480((__int64 *)(v4 + 40), *(int *)(v6 + 64));
  *(_BYTE *)(v4 + 156) = 0;
  *(_WORD *)(v4 + 154) = 0;
  *(_DWORD *)(v4 + 216) = 0;
  *(_QWORD *)(v4 + 224) = -1;
  *(_OWORD *)(v4 + 160) = -1;
  *(_OWORD *)(v4 + 176) = -1;
  eah = get_eah();
  v8 = HIDWORD(qword_2524B0) & 0xFFFFFFF;
  if ( (HIDWORD(qword_2524B0) & 0xFFFFFFF) != 1 )
  {
    if ( v8 != 3 && v8 != 9 && v8 != 10 )
      sub_B8330();
    v39 = (size_t)*(&xmmword_2524B8 + 1);
    if ( (unsigned __int64)*(&xmmword_2524B8 + 1) > 1 )
    {
      v57.m128i_i64[1] = (__int64)*(&xmmword_2524B8 + 1);
      src = (void *)qalloc_or_throw();
      memcpy(src, xmmword_2524B8, v39);
      v57.m128i_i64[0] = v39;
      if ( v5 == &src )
      {
LABEL_66:
        v40 = src;
LABEL_56:
        if ( v40 )
        {
          v57.m128i_i64[0] = 0;
          qfree();
        }
        goto LABEL_49;
      }
      v40 = src;
      v41 = v39 - 1;
    }
    else
    {
      v38 = *(_QWORD *)(eah + 16) < (unsigned __int64)qword_2524A8;
      src = nullptr;
      v57 = 0;
      if ( v38 )
      {
        if ( !*(&xmmword_2524B8 + 1) )
        {
          if ( v5 != &src )
            *(_QWORD *)(v4 + 16) = 0;
          goto LABEL_49;
        }
        v57.m128i_i64[1] = 1;
        src = (void *)qalloc_or_throw();
        *(_BYTE *)src = *(_BYTE *)xmmword_2524B8;
        v40 = src;
        v57.m128i_i64[0] = 1;
        if ( v5 == &src )
          goto LABEL_66;
LABEL_55:
        *(_QWORD *)(v4 + 16) = 0;
        goto LABEL_56;
      }
      get_ea_name();
      v40 = src;
      if ( v5 == &src )
        goto LABEL_56;
      v39 = v57.m128i_i64[0];
      if ( !v57.m128i_i64[0] )
        goto LABEL_55;
      v41 = v57.m128i_i64[0] - 1;
      if ( v57.m128i_i64[0] == 1 )
        goto LABEL_55;
    }
    v46 = *(void **)(v4 + 8);
    if ( *(_QWORD *)(v4 + 24) < v39 )
    {
      v53 = qvector_reserve();
      *(_QWORD *)(v4 + 8) = v53;
      v46 = (void *)v53;
    }
    *(_QWORD *)(v4 + 16) = v39;
    memmove(v46, v40, v41);
    *(_BYTE *)(*(_QWORD *)(v4 + 8) + v41) = 0;
    goto LABEL_66;
  }
  if ( *(_QWORD *)(eah + 16) >= (unsigned __int64)qword_2524A8 )
  {
    v57 = 0;
    get_ea_name();
    v47 = _mm_loadu_si128(&v57);
    src = nullptr;
    v57 = 0;
    if ( !*(_QWORD *)(v4 + 8) )
      goto LABEL_74;
    *(_QWORD *)(v4 + 16) = 0;
    v55 = v47;
    qfree();
    v48 = src;
    v47 = _mm_load_si128(&v55);
    *(_QWORD *)(v4 + 8) = 0;
    *(__m128i *)(v4 + 16) = v47;
    if ( v48 )
    {
      v57.m128i_i64[0] = 0;
      qfree();
    }
    while ( *(_QWORD *)(v4 + 16) <= 1u )
    {
      v49 = HIDWORD(qword_2524B0) & 0xFFFFFFF;
      if ( (unsigned int)v49 <= 0xB )
      {
        v50 = 2306;
        if ( _bittest64(&v50, v49) )
          goto LABEL_58;
      }
      sub_B82F0();
LABEL_74:
      *(_QWORD *)(v4 + 8) = 0;
      *(__m128i *)(v4 + 16) = v47;
    }
    goto LABEL_7;
  }
  if ( *(_QWORD *)(v4 + 16) <= 1u )
  {
LABEL_58:
    v42 = (const char *)qbasename();
    v43 = v42;
    if ( !v42 || (v44 = strlen(v42), (v45 = v44) == 0) )
    {
      *(_QWORD *)(v4 + 16) = 0;
      goto LABEL_50;
    }
    v51 = *(void **)(v4 + 8);
    v52 = v44 + 1;
    if ( *(_QWORD *)(v4 + 24) < v44 + 1 )
    {
      v54 = qvector_reserve();
      *(_QWORD *)(v4 + 8) = v54;
      v51 = (void *)v54;
    }
    *(_QWORD *)(v4 + 16) = v52;
    memmove(v51, v43, v45);
    *(_BYTE *)(*(_QWORD *)(v4 + 8) + v45) = 0;
LABEL_49:
    if ( *(_QWORD *)(v4 + 16) > 1u )
      goto LABEL_7;
LABEL_50:
    sub_94440((__int64 *)(v4 + 8));
  }
LABEL_7:
  if ( qword_2526B0 != -1 )
  {
    sub_CE160(v4, qword_2526B0, 6, nullptr, 0, 0);
    qword_2526B0 = -1;
  }
  mark_builtin_widgets();
  if ( !dword_252588 )
    dword_252588 = HIDWORD(qword_2524A0);
  sub_C14A0();
  return v4;
}

