void __fastcall sub_135DAD0(__int64 a1)
{
  __m128i *v2; // rdx
  int v3; // eax
  __int64 v4; // rbp
  unsigned __int64 v5; // rcx
  __int64 v6; // rax
  __m128i *v7; // rdx
  __int64 v8; // rax
  _BYTE *v9; // rdi
  __m128i *v10; // rdx
  size_t *v11; // rsi
  size_t i; // rax
  unsigned __int64 v13; // rax
  size_t v14; // r8
  size_t v15; // r9
  char *v16; // rcx
  int v17; // eax
  __int64 v18; // rax
  _DWORD *v19; // rcx
  __int64 v20; // rbp
  __int64 v21; // r14
  int v22; // eax
  __int64 v23; // r13
  __int64 v24; // r15
  unsigned __int64 v25; // r12
  __int64 v26; // rax
  __m128i *v27; // rdx
  _BYTE *v28; // rdi
  __m128i *v29; // rdx
  unsigned __int64 v30; // r12
  __int64 v31; // rax
  _BYTE *v32; // rdi
  __m128i v33; // xmm0
  __m128i si128; // xmm0
  __int64 v35; // [rsp+0h] [rbp-158h]
  unsigned __int64 v36; // [rsp+8h] [rbp-150h]
  size_t v37; // [rsp+10h] [rbp-148h]
  size_t v38; // [rsp+18h] [rbp-140h]
  void *src; // [rsp+50h] [rbp-108h] BYREF
  void *v40[2]; // [rsp+60h] [rbp-F8h] BYREF
  void *v41[2]; // [rsp+70h] [rbp-E8h] BYREF
  __int64 v42; // [rsp+80h] [rbp-D8h] BYREF
  _BYTE v43[24]; // [rsp+C0h] [rbp-98h] BYREF
  __int64 v44; // [rsp+D8h] [rbp-80h]
  __m128i *v45; // [rsp+E0h] [rbp-78h]

  std::_V2::system_category((std::_V2 *)a1);
  sub_227D450((std::_V2 *)v43);
  v2 = v45;
  if ( (unsigned __int64)(v44 - (_QWORD)v45) > 0x18 )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA000);
    v45[1].m128i_i8[8] = 10;
    v2[1].m128i_i64[0] = 0x7B2022736569636ELL;
    *v2 = si128;
    v45 = (__m128i *)((char *)v45 + 25);
  }
  else
  {
    sub_227BF10(v43, "digraph \"dependencies\" {\n", 25);
  }
  v3 = *(_DWORD *)(a1 + 112);
  if ( !v3 )
  {
LABEL_27:
    if ( !*(_DWORD *)(a1 + 128) )
      goto LABEL_28;
    goto LABEL_34;
  }
  v4 = 0;
  v35 = 8LL * (unsigned int)(v3 - 1) + 8;
  do
  {
    while ( 1 )
    {
      sub_227D090(v43, 2);
      v5 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + v4);
      while ( 1 )
      {
        v6 = *(_QWORD *)(v5 + 8);
        if ( !v6 )
          break;
        v5 = v6 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v6 & 4) == 0 || !v5 )
          goto LABEL_9;
      }
      v5 = 0;
LABEL_9:
      v7 = v45;
      if ( (unsigned __int64)(v44 - (_QWORD)v45) > 6 )
      {
        v45->m128i_i32[0] = 1684104552;
        v9 = v43;
        v7->m128i_i16[2] = 29285;
        v7->m128i_i8[6] = 95;
        v45 = (__m128i *)((char *)v45 + 7);
      }
      else
      {
        v36 = v5;
        v8 = sub_227BF10(v43, "header_", 7);
        v5 = v36;
        v9 = (_BYTE *)v8;
      }
      sub_227B910(v9, *(unsigned int *)(v5 + 72));
      v10 = v45;
      if ( (unsigned __int64)(v44 - (_QWORD)v45) > 0x16 )
      {
        v33 = _mm_load_si128((const __m128i *)&xmmword_23AA010);
        v45[1].m128i_i32[0] = 1700946284;
        v10[1].m128i_i16[2] = 15724;
        *v10 = v33;
        v10[1].m128i_i8[6] = 34;
        v45 = (__m128i *)((char *)v45 + 23);
      }
      else
      {
        sub_227BF10(v43, " [ shape=\"box\", label=\"", 23);
      }
      v11 = *(size_t **)(*(_QWORD *)(a1 + 104) + v4);
      for ( i = v11[1]; i; i = *(_QWORD *)(v13 + 8) )
      {
        if ( (i & 4) == 0 )
          break;
        v13 = i & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v13 )
          break;
        v11 = (size_t *)v13;
      }
      v14 = *v11;
      v15 = *(_QWORD *)(a1 + 56);
      v16 = (char *)(v11 + 4);
      if ( v15 <= *v11 )
      {
        if ( !v15
          || (v38 = *v11,
              v37 = *(_QWORD *)(a1 + 56),
              v17 = memcmp(v16, *(const void **)(a1 + 48), v37),
              v16 = (char *)(v11 + 4),
              v15 = v37,
              v14 = v38,
              !v17) )
        {
          v14 -= v15;
          v16 += v15;
        }
      }
      src = v40;
      sub_1359180(&src, v16, (__int64)&v16[v14]);
      sub_2227770(v41, &src);
      v18 = sub_227BF10(v43, v41[0], v41[1]);
      v19 = *(_DWORD **)(v18 + 32);
      if ( *(_QWORD *)(v18 + 24) - (_QWORD)v19 > 3u )
      {
        *v19 = 171662626;
        *(_QWORD *)(v18 + 32) += 4LL;
      }
      else
      {
        sub_227BF10(v18, "\"];\n", 4);
      }
      if ( v41[0] != &v42 )
        operator delete(v41[0]);
      if ( src == v40 )
        break;
      operator delete(src);
      v4 += 8;
      if ( v4 == v35 )
        goto LABEL_27;
    }
    v4 += 8;
  }
  while ( v35 != v4 );
  if ( *(_DWORD *)(a1 + 128) )
  {
LABEL_34:
    v20 = *(_QWORD *)(a1 + 120);
    v21 = v20 + 40LL * *(unsigned int *)(a1 + 136);
    if ( v20 != v21 )
    {
      while ( *(_QWORD *)v20 == -4096 || *(_QWORD *)v20 == -8192 )
      {
        v20 += 40;
        if ( v21 == v20 )
          goto LABEL_28;
      }
      while ( v21 != v20 )
      {
        v22 = *(_DWORD *)(v20 + 16);
        if ( v22 )
        {
          v23 = 0;
          v24 = 8LL * (unsigned int)(v22 - 1) + 8;
          do
          {
            while ( 1 )
            {
              sub_227D090(v43, 2);
              v25 = *(_QWORD *)v20;
              while ( 1 )
              {
                v26 = *(_QWORD *)(v25 + 8);
                if ( !v26 )
                  break;
                v25 = v26 & 0xFFFFFFFFFFFFFFF8LL;
                if ( (v26 & 4) == 0 || !v25 )
                  goto LABEL_44;
              }
              v25 = 0;
LABEL_44:
              v27 = v45;
              if ( (unsigned __int64)(v44 - (_QWORD)v45) > 6 )
              {
                v45->m128i_i32[0] = 1684104552;
                v27->m128i_i16[2] = 29285;
                v28 = v43;
                v27->m128i_i8[6] = 95;
                v45 = (__m128i *)((char *)v45 + 7);
              }
              else
              {
                v28 = (_BYTE *)sub_227BF10(v43, "header_", 7);
              }
              sub_227B910(v28, *(unsigned int *)(v25 + 72));
              if ( (unsigned __int64)(v44 - (_QWORD)v45) > 3 )
              {
                v45->m128i_i32[0] = 540945696;
                v29 = (__m128i *)((char *)v45->m128i_i64 + 4);
                v45 = (__m128i *)((char *)v45 + 4);
              }
              else
              {
                sub_227BF10(v43, " -> ", 4);
                v29 = v45;
              }
              v30 = *(_QWORD *)(*(_QWORD *)(v20 + 8) + v23);
              while ( 1 )
              {
                v31 = *(_QWORD *)(v30 + 8);
                if ( !v31 )
                  break;
                v30 = v31 & 0xFFFFFFFFFFFFFFF8LL;
                if ( (v31 & 4) == 0 || !v30 )
                  goto LABEL_52;
              }
              v30 = 0;
LABEL_52:
              if ( (unsigned __int64)(v44 - (_QWORD)v29) > 6 )
              {
                v29->m128i_i32[0] = 1684104552;
                v32 = v43;
                v29->m128i_i16[2] = 29285;
                v29->m128i_i8[6] = 95;
                v45 = (__m128i *)((char *)v45 + 7);
              }
              else
              {
                v32 = (_BYTE *)sub_227BF10(v43, "header_", 7);
              }
              sub_227B910(v32, *(unsigned int *)(v30 + 72));
              if ( (unsigned __int64)(v44 - (_QWORD)v45) > 1 )
                break;
              v23 += 8;
              sub_227BF10(v43, ";\n", 2);
              if ( v23 == v24 )
                goto LABEL_56;
            }
            v23 += 8;
            v45->m128i_i16[0] = 2619;
            v45 = (__m128i *)((char *)v45 + 2);
          }
          while ( v23 != v24 );
        }
LABEL_56:
        v20 += 40;
        if ( v20 == v21 )
          break;
        while ( *(_QWORD *)v20 == -4096 || *(_QWORD *)v20 == -8192 )
        {
          v20 += 40;
          if ( v21 == v20 )
            goto LABEL_28;
        }
      }
    }
  }
LABEL_28:
  if ( (unsigned __int64)(v44 - (_QWORD)v45) > 1 )
  {
    v45->m128i_i16[0] = 2685;
    v45 = (__m128i *)((char *)v45 + 2);
  }
  else
  {
    sub_227BF10(v43, "}\n", 2);
  }
  sub_227B600(v43);
}
