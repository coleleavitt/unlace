__int64 __fastcall sub_18A5E0(__int64 p_src, __int64 a2, __int64 a3, int a4)
{
  _QWORD *exception; // rdi
  _QWORD *v5; // rdi
  _QWORD *v6; // rdi
  _QWORD *v7; // r13
  int *v9; // rcx
  int v10; // eax
  unsigned __int8 v11; // r9
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // r8
  _QWORD *v16; // rcx
  __int64 v17; // r15
  int v18; // r14d
  __int64 v19; // rax
  _QWORD *v20; // rbx
  _QWORD *v21; // r12
  int v22; // ecx
  __int64 v23; // rax
  __int64 v24; // r11
  __int64 v25; // rax
  __int64 v26; // r11
  __int64 v27; // r9
  __int64 v28; // r10
  __int64 v29; // r15
  __int64 v30; // rbx
  int v31; // eax
  __int64 v32; // r14
  int v33; // edi
  _QWORD *v34; // rax
  __int64 v36; // rax
  int v37; // esi
  char v38; // al
  int v39; // eax
  _DWORD *v40; // rbx
  unsigned int v41; // eax
  __int64 v42; // rbp
  unsigned __int8 *v43; // rbx
  unsigned __int8 *v44; // rsi
  __int64 v45; // rdi
  __int64 v46; // rax
  unsigned __int64 v47; // r13
  __int64 v48; // rax
  __int64 v49; // r8
  unsigned __int64 v50; // r15
  __m128i v51; // xmm0
  __int64 v52; // rax
  __int64 v53; // rdx
  unsigned __int64 v54; // rcx
  unsigned __int64 v55; // r12
  __int64 *v56; // r15
  __int64 v57; // r14
  __int64 v58; // rdi
  __m128i v59; // xmm0
  __int64 *v60; // r15
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  int v64; // r9d
  __int64 v65; // rax
  __m128i v66; // xmm1
  void *v67; // rax
  char v68; // r12
  unsigned __int64 v69; // rax
  __int64 v70; // rax
  __m128i v71; // xmm0
  __int64 v72; // rax
  unsigned __int8 **v73; // r15
  __m128i v74; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v75; // [rsp+18h] [rbp-D0h]
  void **v76; // [rsp+20h] [rbp-C8h]
  __int64 *v77; // [rsp+28h] [rbp-C0h]
  __int64 *v78; // [rsp+30h] [rbp-B8h]
  int v79; // [rsp+38h] [rbp-B0h]
  char v80; // [rsp+3Fh] [rbp-A9h]
  __int64 v81; // [rsp+48h] [rbp-A0h] BYREF
  _QWORD v82[2]; // [rsp+50h] [rbp-98h] BYREF
  void *src; // [rsp+60h] [rbp-88h] BYREF
  __int128 v84; // [rsp+68h] [rbp-80h]
  __int64 v85; // [rsp+80h] [rbp-68h] BYREF
  __int128 v86; // [rsp+88h] [rbp-60h] BYREF
  __int128 v87; // [rsp+98h] [rbp-50h]
  unsigned __int64 v88; // [rsp+A8h] [rbp-40h]

  v7 = (_QWORD *)p_src;
  v79 = a4;
  v80 = a4;
  v9 = *(int **)(p_src + 32);
  v88 = __readfsqword(0x28u);
  *(_QWORD *)(p_src + 56) = a2;
  v85 = 0;
  v86 = 0;
  v10 = *v9;
  if ( *v9 == 2 )
  {
    v11 = 1;
    if ( (int *)a2 == v9 + 12 )
      goto LABEL_4;
  }
  else if ( v10 == 1 )
  {
    v11 = a2 == (_QWORD)(v9 + 16);
    goto LABEL_4;
  }
  v11 = (unsigned int)(v10 - 56) <= 1;
LABEL_4:
  v13 = (__int64)&v85;
  v78 = &v85;
  sub_187F40((_QWORD *)p_src, &v85, 0, v9, a2, v11);
  v16 = *(_QWORD **)(p_src + 48);
  if ( *(_BYTE *)a2 == 8 )
  {
    v17 = *(_QWORD *)(a2 + 8);
    if ( *(_QWORD *)(v17 + 32) )
    {
      v18 = 0;
      v19 = 0;
      v77 = &v81;
      p_src = (__int64)&src;
      v76 = &src;
      do
      {
        v14 = *(_QWORD *)(v17 + 24) + 80 * v19;
        if ( *(int *)(v14 + 4) > 1 )
        {
          v20 = v16 + 16;
          if ( *(_BYTE *)v14 != 15 )
          {
            v13 = (__int64)v77;
            v74.m128i_i64[0] = *(_QWORD *)(v17 + 24) + 80 * v19;
            p_src = v74.m128i_i64[0];
            v38 = sub_3297A0(v74.m128i_i64[0], v77);
            v14 = v74.m128i_i64[0];
            if ( v38 )
            {
              v13 = (__int64)v82;
              p_src = (__int64)v20;
              v39 = *(_DWORD *)(v74.m128i_i64[0] + 4) - 1;
              v82[0] = v81 + 1;
              v82[1] = v39;
              sub_3112F0(v20, v82);
            }
            goto LABEL_16;
          }
          v21 = *(_QWORD **)(*(_QWORD *)(v14 + 8) + 8LL);
          if ( v21[1] )
          {
            v13 = -1;
            v22 = 0;
            v23 = 0;
            do
            {
              p_src = 3 * v23;
              v24 = *v21 + 24 * v23;
              if ( *(_DWORD *)v24 == 1 )
              {
                v25 = *(_QWORD *)(v24 + 8);
                v81 = v25;
                if ( !v22 || v25 != v13 )
                {
                  v37 = *(unsigned __int16 *)(v24 + 18);
                  p_src = (__int64)v20;
                  LODWORD(v75) = v22;
                  v74.m128i_i64[0] = v24;
                  src = (void *)(v25 + 1);
                  *(_QWORD *)&v84 = v37 - 1;
                  sub_3112F0(v20, v76);
                  v25 = v81;
                  v22 = v75;
                  v24 = v74.m128i_i64[0];
                }
                v13 = v25 + *(unsigned __int16 *)(v24 + 18);
              }
              v23 = ++v22;
            }
            while ( (unsigned __int64)v22 < v21[1] );
LABEL_16:
            v16 = (_QWORD *)v7[6];
          }
        }
        v19 = ++v18;
      }
      while ( (unsigned __int64)v18 < *(_QWORD *)(v17 + 32) );
    }
  }
  v26 = v86;
  v27 = v85;
  v28 = v16[22];
  v29 = v7[8];
  v30 = v85;
  if ( !(32LL * (_QWORD)v86) )
  {
    if ( v29 <= v16[21] )
      goto LABEL_33;
LABEL_95:
    if ( !under_debugger )
      sub_37CFE0(51521);
    BUG();
  }
  do
  {
    v14 = *(unsigned int *)(v30 + 20);
    v13 = *(unsigned int *)(v30 + 24);
    v31 = *(_DWORD *)(v30 + 16);
    v32 = *(_QWORD *)v30;
    v33 = v13 + v14;
    v15 = (unsigned int)(v31 + v13 + v14);
    if ( v29 <= *(_QWORD *)v30 )
    {
      if ( (_DWORD)v15 != 1 )
        goto LABEL_21;
      if ( (int)v14 > 1 )
      {
        if ( v33 > 1 )
          goto LABEL_21;
        if ( v31 > 1 )
        {
          v13 = (unsigned int)(v31 + v13);
          if ( (int)v13 > 1 )
            goto LABEL_21;
          goto LABEL_28;
        }
        goto LABEL_92;
      }
      if ( v31 <= 1 )
      {
        if ( (int)v14 >= 0 )
        {
LABEL_92:
          v15 = (unsigned int)(v31 + v13);
          if ( (int)(v31 & v15) < 0 )
            goto LABEL_21;
          goto LABEL_64;
        }
        if ( v33 < 0 )
          goto LABEL_21;
        if ( v31 < 0 )
        {
          if ( (int)v13 + v31 < 0 )
            goto LABEL_21;
          goto LABEL_65;
        }
      }
      else
      {
        v15 = (unsigned int)(v31 + v13);
        if ( (int)v15 > 1 || (int)(v14 & v33) < 0 )
          goto LABEL_21;
      }
LABEL_64:
      if ( v31 > v33 )
      {
LABEL_28:
        if ( v32 < v16[21] )
        {
          v16[21] = v32;
          v27 = v85;
          v26 = v86;
        }
        goto LABEL_21;
      }
LABEL_65:
      v14 = (unsigned int)(v31 + v14);
      if ( (int)v14 >= (int)v13 )
        goto LABEL_21;
      goto LABEL_28;
    }
    if ( (_DWORD)v15 != 1 )
      goto LABEL_21;
    if ( (int)v14 <= 1 )
    {
      if ( v31 <= 1 )
      {
        if ( (int)(v14 & v33) < 0 )
          goto LABEL_21;
LABEL_52:
        v15 = (unsigned int)(v31 + v13);
        if ( (int)(v15 & v31) < 0 )
          goto LABEL_21;
      }
      else
      {
        v15 = (unsigned int)(v31 + v13);
        if ( (int)v15 > 1 || (int)(v14 & v33) < 0 )
          goto LABEL_21;
      }
      if ( (int)v14 <= (int)v15 && (int)v14 + v31 >= (int)v13 )
        goto LABEL_21;
      goto LABEL_47;
    }
    if ( v33 > 1 )
      goto LABEL_21;
    if ( v31 <= 1 )
      goto LABEL_52;
    v13 = (unsigned int)(v31 + v13);
    if ( (int)v13 > 1 )
      goto LABEL_21;
LABEL_47:
    v36 = v16[20];
    if ( v32 < v36 )
    {
      if ( v32 < 0 )
      {
        v14 = v16[24];
LABEL_59:
        v13 = v16[19];
        v16[22] = v36;
        v16[25] = *(_QWORD *)(*(_QWORD *)(v13 + 1472) + 40 * v14 + 8);
LABEL_60:
        v27 = v85;
        v26 = v86;
        goto LABEL_21;
      }
      v45 = v16[19];
      v13 = *(_QWORD *)v30;
      v75 = v28;
      v74.m128i_i64[0] = (__int64)v16;
      v46 = sub_1CAE00(v45, v13);
      v16 = (_QWORD *)v74.m128i_i64[0];
      v28 = v75;
      v14 = *(_QWORD *)(v74.m128i_i64[0] + 192);
      if ( v46 != v14 )
      {
        v36 = *(_QWORD *)(v74.m128i_i64[0] + 160);
        goto LABEL_59;
      }
      if ( v32 >= *(_QWORD *)(v74.m128i_i64[0] + 200) )
        goto LABEL_60;
      *(_QWORD *)(v74.m128i_i64[0] + 200) = v32;
      v27 = v85;
      v26 = v86;
    }
    else if ( v32 < v16[22] )
    {
      v16[22] = v32;
      v27 = v85;
      v26 = v86;
    }
LABEL_21:
    v30 += 32;
  }
  while ( v30 != v27 + 32 * v26 );
  v34 = (_QWORD *)v7[6];
  p_src = v7[8];
  if ( v34[21] < p_src )
    goto LABEL_95;
  if ( v28 > v34[22] )
  {
    v14 = *(_QWORD *)(v7[4] + 24LL);
    v34[23] = v14;
  }
LABEL_33:
  if ( v27 )
  {
    *(_QWORD *)&v86 = 0;
    p_src = v27;
    qfree(v27);
  }
  if ( !(_BYTE)v79 )
    return 0;
  if ( *(_BYTE *)a2 == 1 )
  {
    v13 = *(unsigned int *)(a2 + 8);
    p_src = *(_QWORD *)(v7[1] + 1504LL);
    if ( (unsigned __int8)sub_118110(p_src, v13) )
      return 0;
  }
  v40 = (_DWORD *)v7[4];
  src = nullptr;
  v84 = 0;
  v41 = *v40;
  if ( *v40 == 5 )
  {
    v13 = (__int64)&src;
    p_src = (__int64)v7;
    sub_187F40(v7, (__int64 *)&src, 1u, v40, (__int64)(v40 + 8), 1u);
    goto LABEL_74;
  }
  if ( v41 <= 5 )
  {
    if ( v41 != 4 )
      goto LABEL_75;
    v13 = (__int64)&src;
    p_src = (__int64)v7;
    sub_187F40(v7, (__int64 *)&src, 0, v40, (__int64)(v40 + 8), 1u);
LABEL_74:
    v40 = (_DWORD *)v7[4];
    goto LABEL_75;
  }
  if ( v41 - 12 <= 1 )
  {
    sub_187F40(v7, (__int64 *)&src, 0, v40, (__int64)(v40 + 8), 1u);
    v13 = (__int64)&src;
    p_src = (__int64)v7;
    sub_187F40(v7, (__int64 *)&src, *v40 == 13, v40, (__int64)(v40 + 12), 1u);
    goto LABEL_74;
  }
LABEL_75:
  v42 = v7[6];
  v43 = (unsigned __int8 *)(v40 + 16);
  if ( !*(_QWORD *)v42 )
    sub_186D00(p_src, v13, v14, v16, v15);
  v85 = 0;
  v86 = 0u;
  v87 = 0;
  sub_123420(*(_QWORD *)v42, v78, (__int64)v43, 0);
  v44 = (unsigned __int8 *)v78;
  sub_189DC0(v42, v78);
  if ( *((_QWORD *)&v86 + 1) )
  {
    *(_QWORD *)&v87 = 0;
    qfree(*((_QWORD *)&v86 + 1));
  }
  qfree(v85);
  if ( !(_QWORD)v84 )
    goto LABEL_79;
  v47 = *(_QWORD *)(v42 + 8);
  if ( !v47 )
  {
    v65 = qalloc(56);
    v66 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v65, (__m128i)(unsigned __int64)v65);
    if ( !v65 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_QWORD *)(v65 + 48) = 0;
    *(_OWORD *)(v65 + 16) = 0;
    *(_OWORD *)(v65 + 32) = 0;
    *(__m128i *)(v65 + 8) = v66;
    *(_QWORD *)v65 = v65 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *(_QWORD *)(v42 + 8) = v65;
    *(_QWORD *)v65 = v65 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v65 & 3LL;
    *(__m128i *)(*(_QWORD *)(v42 + 8) + 8LL) = _mm_unpacklo_epi64(
                                                 (__m128i)*(unsigned __int64 *)(v42 + 8),
                                                 (__m128i)*(unsigned __int64 *)(v42 + 8));
    **(_QWORD **)(v42 + 8) &= ~1uLL;
    **(_QWORD **)(v42 + 8) |= 2uLL;
    v47 = *(_QWORD *)(v42 + 8);
LABEL_101:
    v48 = qalloc(56);
    v50 = v48;
    if ( !v48 )
    {
      v6 = __cxa_allocate_exception(8u);
      *v6 = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(v6, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_QWORD *)(v48 + 32) = 0;
    *(_OWORD *)(v48 + 16) = 0;
    *(_OWORD *)v48 = 0;
    *(_QWORD *)(v48 + 24) = v43;
    *(_OWORD *)(v48 + 40) = 0;
    *(_QWORD *)v48 = v47 & 0xFFFFFFFFFFFFFFFCLL;
    v51 = _mm_loadl_epi64((const __m128i *)(v42 + 8));
    *(_QWORD *)v48 = v47 & 0xFFFFFFFFFFFFFFFCLL | 1;
    *(__m128i *)(v48 + 8) = _mm_unpacklo_epi64(v51, v51);
    if ( *(_QWORD *)(v42 + 8) != v47 )
      goto LABEL_103;
    goto LABEL_128;
  }
  if ( !*(_QWORD *)(v42 + 16) )
    goto LABEL_101;
  v68 = v79;
  v69 = *(_QWORD *)v47 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v69 & 2) != 0 )
  {
LABEL_119:
    v70 = qalloc(56);
    v50 = v70;
    if ( !v70 )
    {
      v5 = __cxa_allocate_exception(8u);
      *v5 = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(v5, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_QWORD *)(v70 + 32) = 0;
    *(_OWORD *)(v70 + 16) = 0;
    *(_OWORD *)v70 = 0;
    *(_QWORD *)(v70 + 24) = v43;
    *(_OWORD *)(v70 + 40) = 0;
    *(_QWORD *)v70 = v47 & 0xFFFFFFFFFFFFFFFCLL;
    v71 = _mm_loadl_epi64((const __m128i *)(v42 + 8));
    *(_QWORD *)v70 = v47 & 0xFFFFFFFFFFFFFFFCLL | 1;
    *(__m128i *)(v70 + 8) = _mm_unpacklo_epi64(v71, v71);
    if ( *(_QWORD *)(v42 + 8) != v47 )
    {
      if ( !v68 )
      {
        *(_QWORD *)(v47 + 16) = v70;
        v72 = *(_QWORD *)(v42 + 8);
        if ( *(_QWORD *)(v72 + 16) == v47 )
          *(_QWORD *)(v72 + 16) = v50;
LABEL_105:
        v44 = (unsigned __int8 *)v50;
        sub_18A200((_QWORD *)(v42 + 8), (__int64 *)v50);
LABEL_106:
        ++*(_QWORD *)(v42 + 16);
        goto LABEL_107;
      }
LABEL_103:
      *(_QWORD *)(v47 + 8) = v50;
      v52 = *(_QWORD *)(v42 + 8);
      if ( *(_QWORD *)(v52 + 8) == v47 )
        *(_QWORD *)(v52 + 8) = v50;
      goto LABEL_105;
    }
LABEL_128:
    v54 = v50 & 0xFFFFFFFFFFFFFFFCLL;
    *(_QWORD *)v47 = v50 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v47 & 3LL;
    *(_QWORD *)(*(_QWORD *)(v42 + 8) + 8LL) = v50;
    *(_QWORD *)(*(_QWORD *)(v42 + 8) + 16LL) = v50;
    v53 = *(_QWORD *)v50 & 2LL;
    *(_QWORD *)v50 &= ~1uLL;
    *(_QWORD *)v50 = v53 | *(_QWORD *)(v42 + 8) & 0xFFFFFFFFFFFFFFFCLL;
    goto LABEL_106;
  }
  while ( 2 )
  {
    v44 = *(unsigned __int8 **)(v69 + 24);
    v47 = v69;
    v73 = (unsigned __int8 **)(v69 + 24);
    if ( sub_118E80(v43, v44) < 0 )
    {
      v69 = *(_QWORD *)(v47 + 8);
      v68 = v80;
      goto LABEL_126;
    }
    v44 = v43;
    if ( sub_118E80(*v73, v43) < 0 )
    {
      v69 = *(_QWORD *)(v47 + 16);
      v68 = 0;
LABEL_126:
      if ( (*(_BYTE *)v69 & 2) != 0 )
        goto LABEL_119;
      continue;
    }
    break;
  }
  if ( !v47 )
    goto LABEL_119;
  v50 = v47;
LABEL_107:
  v55 = v84;
  v56 = (__int64 *)(v50 + 24);
  v57 = 0;
  if ( (_QWORD)v84 )
  {
    v67 = (void *)qalloc_or_throw(32 * v84);
    v44 = (unsigned __int8 *)src;
    v57 = (__int64)v67;
    memcpy(v67, src, 32 * v55);
  }
  v58 = v56[1];
  v59 = _mm_unpacklo_epi64((__m128i)v55, (__m128i)v55);
  if ( v58 )
  {
    v56[2] = 0;
    v74 = v59;
    qfree(v58);
    v59 = _mm_load_si128(&v74);
  }
  v56[1] = v57;
  *((__m128i *)v56 + 1) = v59;
  if ( !*(_QWORD *)v42 )
    sub_186D00(v58, v44, v53, v54, v49);
  v85 = 0;
  v86 = 0u;
  v87 = 0;
  sub_123420(*(_QWORD *)v42, v78, (__int64)v43, 0);
  v60 = v78;
  sub_5F800((__int64 *)(v42 + 48), v78);
  sub_3113F0(v42 + 64, (char *)&v86 + 8);
  sub_5FBC0((__int64 *)(v42 + 88), v60, v61, v62, v63, v64);
  sub_3123A0(v42 + 104, (char *)&v86 + 8);
  if ( *((_QWORD *)&v86 + 1) )
  {
    *(_QWORD *)&v87 = 0;
    qfree(*((_QWORD *)&v86 + 1));
  }
  qfree(v85);
LABEL_79:
  if ( src )
  {
    *(_QWORD *)&v84 = 0;
    qfree(src);
  }
  return 0;
}
