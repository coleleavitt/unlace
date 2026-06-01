__int64 sub_DCF40()
{
  int v0; // eax
  __int64 v1; // rbx
  __int64 v2; // rbp
  __int64 v3; // r13
  __int64 v4; // rbx
  void **v5; // r12
  __int64 v6; // rax
  int v7; // eax
  size_t v8; // rbp
  size_t v9; // r13
  void *v10; // r14
  void *v11; // rdi
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // r12
  __int64 v17; // rbp
  __int64 v18; // rax
  __m128i v19; // xmm0
  __int64 v20; // rax
  __m128i v21; // xmm0
  __int64 v22; // rax
  __m128i v23; // xmm0
  __m128i v24; // xmm0
  __int64 v25; // rax
  __int64 v26; // rax
  __m128i v27; // xmm0
  __int64 v28; // rax
  __m128i v29; // xmm0
  __int64 v30; // rax
  __m128i v31; // xmm0
  __int64 v32; // rax
  __m128i v33; // xmm0
  __int64 v34; // rdi
  __int64 v35; // r14
  __int64 i; // r15
  __int64 v37; // rax
  __int64 v38; // rdi
  __int64 v39; // r14
  __int64 j; // r15
  __int64 v41; // rax
  __int64 v43; // rsi
  __m128i v44; // xmm0
  void *v45; // rdi
  __m128i v46; // xmm0
  unsigned __int64 v47; // rax
  __int64 v48; // rdx
  const char *v49; // rax
  const char *v50; // rbp
  size_t v51; // rax
  size_t v52; // r13
  __int64 v53; // rax
  void *v54; // rdi
  size_t v55; // r14
  __int64 v56; // rax
  __m128i v57; // [rsp+0h] [rbp-68h] BYREF
  void *src; // [rsp+10h] [rbp-58h] BYREF
  __m128i v59; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v60; // [rsp+28h] [rbp-40h]

  v60 = __readfsqword(0x28u);
  v0 = HIDWORD(qword_251320);
  if ( !HIDWORD(qword_251320) )
    return 0;
  v2 = *((_QWORD *)&xmmword_251418 + 1);
  v1 = xmmword_251418;
  if ( *((_QWORD *)&xmmword_251418 + 1) < (unsigned __int64)(xmmword_251418 + 1) )
  {
    v13 = qvector_reserve();
    v14 = qword_251410;
    v3 = v13;
    v15 = *((_QWORD *)&xmmword_251418 + 1);
    *((_QWORD *)&xmmword_251418 + 1) = v2;
    v57.m128i_i64[0] = v15;
    v16 = xmmword_251418 - 1;
    if ( (__int64)xmmword_251418 - 1 >= 0 )
    {
      v17 = v3;
      do
      {
        *(_DWORD *)v17 = *(_DWORD *)v14;
        v18 = *(_QWORD *)(v14 + 8);
        v19 = _mm_loadu_si128((const __m128i *)(v14 + 16));
        *(_QWORD *)(v14 + 8) = 0;
        *(_QWORD *)(v17 + 8) = v18;
        *(__m128i *)(v17 + 16) = v19;
        LOWORD(v18) = *(_WORD *)(v14 + 32);
        *(_OWORD *)(v14 + 16) = 0;
        *(_WORD *)(v17 + 32) = v18;
        *(_BYTE *)(v17 + 34) = *(_BYTE *)(v14 + 34);
        *(_DWORD *)(v17 + 36) = *(_DWORD *)(v14 + 36);
        v20 = *(_QWORD *)(v14 + 40);
        v21 = _mm_loadu_si128((const __m128i *)(v14 + 48));
        *(_QWORD *)(v14 + 40) = 0;
        *(_QWORD *)(v17 + 40) = v20;
        *(__m128i *)(v17 + 48) = v21;
        v22 = *(_QWORD *)(v14 + 64);
        v23 = _mm_loadu_si128((const __m128i *)(v14 + 72));
        *(_OWORD *)(v14 + 48) = 0;
        *(_QWORD *)(v17 + 64) = v22;
        *(__m128i *)(v17 + 72) = v23;
        v24 = _mm_loadu_si128((const __m128i *)(v14 + 96));
        v25 = *(_QWORD *)(v14 + 88);
        *(_QWORD *)(v14 + 64) = 0;
        *(_OWORD *)(v14 + 72) = 0;
        *(_QWORD *)(v14 + 88) = 0;
        *(__m128i *)(v17 + 96) = v24;
        *(_QWORD *)(v17 + 88) = v25;
        *(_OWORD *)(v14 + 96) = 0;
        *(_BYTE *)(v17 + 112) = *(_BYTE *)(v14 + 112);
        v26 = *(_QWORD *)(v14 + 120);
        v27 = _mm_loadu_si128((const __m128i *)(v14 + 128));
        *(_QWORD *)(v14 + 120) = 0;
        *(_QWORD *)(v17 + 120) = v26;
        *(__m128i *)(v17 + 128) = v27;
        v28 = *(_QWORD *)(v14 + 144);
        v29 = _mm_loadu_si128((const __m128i *)(v14 + 160));
        *(_OWORD *)(v14 + 128) = 0;
        *(_QWORD *)(v17 + 144) = v28;
        LOWORD(v28) = *(_WORD *)(v14 + 152);
        *(__m128i *)(v17 + 160) = v29;
        *(_WORD *)(v17 + 152) = v28;
        *(_WORD *)(v17 + 154) = *(_WORD *)(v14 + 154);
        *(_BYTE *)(v17 + 156) = *(_BYTE *)(v14 + 156);
        v30 = *(_QWORD *)(v14 + 176);
        v31 = _mm_loadu_si128((const __m128i *)(v14 + 184));
        *(_QWORD *)(v14 + 176) = 0;
        *(_QWORD *)(v17 + 176) = v30;
        *(__m128i *)(v17 + 184) = v31;
        v32 = *(_QWORD *)(v14 + 200);
        v33 = _mm_loadu_si128((const __m128i *)(v14 + 216));
        *(_QWORD *)(v14 + 192) = 0;
        *(_QWORD *)(v17 + 200) = v32;
        LOBYTE(v32) = *(_BYTE *)(v14 + 208);
        *(__m128i *)(v17 + 216) = v33;
        *(_BYTE *)(v17 + 208) = v32;
        if ( *(_QWORD *)(v14 + 176) )
        {
          *(_QWORD *)(v14 + 184) = 0;
          qfree();
        }
        if ( *(_QWORD *)(v14 + 120) )
        {
          *(_QWORD *)(v14 + 128) = 0;
          qfree();
        }
        if ( *(_QWORD *)(v14 + 88) )
        {
          *(_QWORD *)(v14 + 96) = 0;
          qfree();
        }
        v34 = *(_QWORD *)(v14 + 64);
        if ( v34 )
        {
          v35 = *(_QWORD *)(v14 + 72);
          if ( v35 )
          {
            for ( i = 0; i != v35; ++i )
            {
              v37 = v34 + 32 * i;
              if ( *(int *)v37 >= -1 && *(_QWORD *)(v37 + 8) )
              {
                *(_QWORD *)(v37 + 16) = 0;
                qfree();
                v34 = *(_QWORD *)(v14 + 64);
              }
            }
          }
          *(_QWORD *)(v14 + 72) = 0;
          qfree();
        }
        v38 = *(_QWORD *)(v14 + 40);
        if ( v38 )
        {
          v39 = *(_QWORD *)(v14 + 48);
          if ( v39 )
          {
            for ( j = 0; j != v39; ++j )
            {
              v41 = v38 + 32 * j;
              if ( *(int *)v41 >= -1 && *(_QWORD *)(v41 + 8) )
              {
                *(_QWORD *)(v41 + 16) = 0;
                qfree();
                v38 = *(_QWORD *)(v14 + 40);
              }
            }
          }
          *(_QWORD *)(v14 + 48) = 0;
          qfree();
        }
        if ( *(_QWORD *)(v14 + 8) )
        {
          *(_QWORD *)(v14 + 16) = 0;
          qfree();
        }
        v14 += 232;
        v17 += 232;
      }
      while ( v16-- != 0 );
    }
    qfree();
    qword_251410 = v3;
    v1 = xmmword_251418;
    *((_QWORD *)&xmmword_251418 + 1) = v57.m128i_i64[0];
    v0 = HIDWORD(qword_251320);
  }
  else
  {
    v3 = qword_251410;
  }
  HIDWORD(qword_2511A0) = 0;
  v4 = v3 + 232 * v1;
  *(_QWORD *)(v4 + 8) = 0;
  v5 = (void **)(v4 + 8);
  *(_QWORD *)&xmmword_251418 = xmmword_251418 + 1;
  *(_DWORD *)v4 = v0;
  *(_WORD *)(v4 + 32) = 0;
  v6 = dbg;
  *(_WORD *)(v4 + 152) = 1;
  *(_QWORD *)(v4 + 40) = 0;
  *(_QWORD *)(v4 + 64) = 0;
  *(_QWORD *)(v4 + 88) = 0;
  *(_QWORD *)(v4 + 120) = 0;
  *(_QWORD *)(v4 + 176) = 0;
  *(_DWORD *)(v4 + 36) = -1;
  *(_BYTE *)(v4 + 34) = 0;
  *(_BYTE *)(v4 + 208) = 0;
  *(_QWORD *)(v4 + 144) = 0;
  *(_OWORD *)(v4 + 16) = 0;
  *(_OWORD *)(v4 + 48) = 0;
  *(_OWORD *)(v4 + 72) = 0;
  *(_OWORD *)(v4 + 96) = 0;
  *(_OWORD *)(v4 + 128) = 0;
  *(_OWORD *)(v4 + 184) = 0;
  *(_OWORD *)(v4 + 216) = 0;
  sub_A7EC0((__int64 *)(v4 + 40), *(int *)(v6 + 64));
  *(_WORD *)(v4 + 154) = 0;
  *(_BYTE *)(v4 + 156) = 0;
  *(_QWORD *)(v4 + 200) = 0xFFFFFFFF00000000LL;
  *(_OWORD *)(v4 + 160) = -1;
  get_eah();
  v7 = qword_251330 & 0xFFFFFFF;
  if ( (qword_251330 & 0xFFFFFFF) != 1 )
  {
    if ( v7 == 3 || v7 == 9 || v7 == 10 )
    {
      src = nullptr;
      v8 = qword_25133C;
      if ( qword_25133C <= 1 )
      {
        v59 = 0;
        get_ea_name();
        if ( v5 != &src )
        {
          v8 = v59.m128i_i64[0];
          if ( v59.m128i_i64[0] )
          {
            v9 = v59.m128i_i64[0] - 1;
            if ( v59.m128i_i64[0] != 1 )
              goto LABEL_10;
          }
          *(_QWORD *)(v4 + 16) = 0;
        }
      }
      else
      {
        v9 = qword_25133C - 1;
        v59.m128i_i64[1] = qword_25133C;
        src = (void *)qalloc_or_throw();
        memcpy(src, *(const void **)((char *)&qword_251330 + 4), v8);
        v59.m128i_i64[0] = v8;
        if ( v5 != &src )
        {
LABEL_10:
          v10 = src;
          v11 = *(void **)(v4 + 8);
          if ( *(_QWORD *)(v4 + 24) < v8 )
          {
            v53 = qvector_reserve();
            *(_QWORD *)(v4 + 8) = v53;
            v11 = (void *)v53;
          }
          *(_QWORD *)(v4 + 16) = v8;
          memmove(v11, v10, v9);
          *(_BYTE *)(*(_QWORD *)(v4 + 8) + v9) = 0;
        }
      }
      if ( src )
      {
        v59.m128i_i64[0] = 0;
        qfree();
      }
      goto LABEL_15;
    }
LABEL_71:
    sub_B7DC0();
  }
  v43 = (unsigned int)qword_251328;
  v59 = 0;
  get_ea_name();
  v44 = _mm_loadu_si128(&v59);
  src = nullptr;
  v59 = 0;
  v45 = *(void **)(v4 + 8);
  if ( v45 )
  {
    *(_QWORD *)(v4 + 16) = 0;
    v57 = v44;
    qfree();
    v45 = src;
    v46 = _mm_load_si128(&v57);
    *(_QWORD *)(v4 + 8) = 0;
    *(__m128i *)(v4 + 16) = v46;
    if ( v45 )
    {
      v59.m128i_i64[0] = 0;
      qfree();
    }
  }
  else
  {
    *(_QWORD *)(v4 + 8) = 0;
    *(__m128i *)(v4 + 16) = v44;
  }
  if ( *(_QWORD *)(v4 + 16) > 1u )
    goto LABEL_16;
  v47 = qword_251330 & 0xFFFFFFF;
  if ( (unsigned int)v47 > 0xB || (v48 = 2306, !_bittest64(&v48, v47)) )
  {
    sub_B7D80(v45, v43);
    goto LABEL_71;
  }
  v49 = (const char *)qbasename();
  v50 = v49;
  if ( !v49 || (v51 = strlen(v49), (v52 = v51) == 0) )
  {
    *(_QWORD *)(v4 + 16) = 0;
    goto LABEL_60;
  }
  v54 = *(void **)(v4 + 8);
  v55 = v51 + 1;
  if ( *(_QWORD *)(v4 + 24) < v51 + 1 )
  {
    v56 = qvector_reserve();
    *(_QWORD *)(v4 + 8) = v56;
    v54 = (void *)v56;
  }
  *(_QWORD *)(v4 + 16) = v55;
  memmove(v54, v50, v52);
  *(_BYTE *)(*(_QWORD *)(v4 + 8) + v52) = 0;
LABEL_15:
  if ( *(_QWORD *)(v4 + 16) <= 1u )
LABEL_60:
    sub_94360((__int64 *)(v4 + 8));
LABEL_16:
  if ( dword_251530 != -1 )
  {
    sub_CCBE0(v4, dword_251530, 6, nullptr, 0, 0);
    dword_251530 = -1;
  }
  mark_builtin_widgets();
  if ( !dword_251408 )
    dword_251408 = HIDWORD(qword_251320);
  sub_C0300();
  return v4;
}

