__int64 __fastcall sub_18F1A0(__int64 p_src, __int64 a2, __int64 a3, int a4)
{
  _QWORD *exception; // rdi
  _QWORD *v5; // rdi
  _QWORD *v6; // rdi
  _QWORD *v7; // r13
  int *v9; // rcx
  int v10; // eax
  _BOOL4 v11; // r9d
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
  int v50; // r9d
  unsigned __int64 v51; // r15
  __m128i v52; // xmm0
  __int64 v53; // rax
  __int64 v54; // rdx
  unsigned __int64 v55; // rcx
  unsigned __int64 v56; // r12
  __int64 *v57; // r15
  __int64 v58; // r14
  __int64 v59; // rdi
  __m128i v60; // xmm0
  __int64 *v61; // r15
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  int v65; // r9d
  __int64 v66; // rax
  __m128i v67; // xmm1
  void *v68; // rax
  char v69; // r12
  unsigned __int64 v70; // rax
  __int64 v71; // rax
  __m128i v72; // xmm0
  __int64 v73; // rax
  unsigned __int8 **v74; // r15
  __m128i v75; // [rsp+0h] [rbp-E8h] BYREF
  int v76; // [rsp+10h] [rbp-D8h]
  __int64 v77; // [rsp+18h] [rbp-D0h]
  void **v78; // [rsp+20h] [rbp-C8h]
  __int64 *v79; // [rsp+28h] [rbp-C0h]
  unsigned __int8 *v80; // [rsp+30h] [rbp-B8h]
  int v81; // [rsp+38h] [rbp-B0h]
  char v82; // [rsp+3Fh] [rbp-A9h]
  __int64 v83; // [rsp+48h] [rbp-A0h] BYREF
  _QWORD v84[2]; // [rsp+50h] [rbp-98h] BYREF
  void *src; // [rsp+60h] [rbp-88h] BYREF
  __int128 v86; // [rsp+68h] [rbp-80h]
  __int64 v87; // [rsp+80h] [rbp-68h] BYREF
  __int128 v88; // [rsp+88h] [rbp-60h] BYREF
  __int128 v89; // [rsp+98h] [rbp-50h]
  unsigned __int64 v90; // [rsp+A8h] [rbp-40h]

  v7 = (_QWORD *)p_src;
  v81 = a4;
  v82 = a4;
  v9 = *(int **)(p_src + 32);
  v90 = __readfsqword(0x28u);
  *(_QWORD *)(p_src + 56) = a2;
  v87 = 0;
  v88 = 0;
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
  v13 = (__int64)&v87;
  v80 = (unsigned __int8 *)&v87;
  sub_18CB00((_QWORD *)p_src, &v87, 0, v9, a2, v11);
  v16 = *(_QWORD **)(p_src + 48);
  if ( *(_BYTE *)a2 == 8 )
  {
    v17 = *(_QWORD *)(a2 + 8);
    if ( *(_QWORD *)(v17 + 32) )
    {
      v18 = 0;
      v19 = 0;
      v79 = &v83;
      p_src = (__int64)&src;
      v78 = &src;
      do
      {
        v14 = *(_QWORD *)(v17 + 24) + 80 * v19;
        if ( *(int *)(v14 + 4) > 1 )
        {
          v20 = v16 + 16;
          if ( *(_BYTE *)v14 != 15 )
          {
            v13 = (__int64)v79;
            v75.m128i_i64[0] = *(_QWORD *)(v17 + 24) + 80 * v19;
            p_src = v75.m128i_i64[0];
            v38 = sub_32F330(v75.m128i_i64[0], v79);
            v14 = v75.m128i_i64[0];
            if ( v38 )
            {
              v13 = (__int64)v84;
              p_src = (__int64)v20;
              v39 = *(_DWORD *)(v75.m128i_i64[0] + 4) - 1;
              v84[0] = v83 + 1;
              v84[1] = v39;
              sub_316BB0(v20, v84);
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
                v83 = v25;
                if ( !v22 || v25 != v13 )
                {
                  v37 = *(unsigned __int16 *)(v24 + 18);
                  p_src = (__int64)v20;
                  LODWORD(v77) = v22;
                  v75.m128i_i64[0] = v24;
                  src = (void *)(v25 + 1);
                  *(_QWORD *)&v86 = v37 - 1;
                  sub_316BB0(v20, v78);
                  v25 = v83;
                  v22 = v77;
                  v24 = v75.m128i_i64[0];
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
  v26 = v88;
  v27 = v87;
  v28 = v16[22];
  v29 = v7[8];
  v30 = v87;
  if ( !(32LL * (_QWORD)v88) )
  {
    if ( v29 <= v16[21] )
      goto LABEL_33;
LABEL_95:
    if ( !under_debugger )
      sub_383060(51521);
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
          v27 = v87;
          v26 = v88;
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
        v27 = v87;
        v26 = v88;
        goto LABEL_21;
      }
      v45 = v16[19];
      v13 = *(_QWORD *)v30;
      v77 = v28;
      v75.m128i_i64[0] = (__int64)v16;
      v46 = sub_1CFC80(v45, v13);
      v16 = (_QWORD *)v75.m128i_i64[0];
      v28 = v77;
      v14 = *(_QWORD *)(v75.m128i_i64[0] + 192);
      if ( v46 != v14 )
      {
        v36 = *(_QWORD *)(v75.m128i_i64[0] + 160);
        goto LABEL_59;
      }
      if ( v32 >= *(_QWORD *)(v75.m128i_i64[0] + 200) )
        goto LABEL_60;
      *(_QWORD *)(v75.m128i_i64[0] + 200) = v32;
      v27 = v87;
      v26 = v88;
    }
    else if ( v32 < v16[22] )
    {
      v16[22] = v32;
      v27 = v87;
      v26 = v88;
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
    *(_QWORD *)&v88 = 0;
    p_src = v27;
    qfree(v27);
  }
  if ( !(_BYTE)v81 )
    return 0;
  if ( *(_BYTE *)a2 == 1 )
  {
    v13 = *(unsigned int *)(a2 + 8);
    p_src = *(_QWORD *)(v7[1] + 1504LL);
    if ( (unsigned __int8)sub_11CCD0(p_src, v13) )
      return 0;
  }
  v40 = (_DWORD *)v7[4];
  src = nullptr;
  v86 = 0;
  v41 = *v40;
  if ( *v40 == 5 )
  {
    v13 = (__int64)&src;
    p_src = (__int64)v7;
    sub_18CB00(v7, (__int64 *)&src, 1u, v40, (__int64)(v40 + 8), 1);
    goto LABEL_74;
  }
  if ( v41 <= 5 )
  {
    if ( v41 != 4 )
      goto LABEL_75;
    v13 = (__int64)&src;
    p_src = (__int64)v7;
    sub_18CB00(v7, (__int64 *)&src, 0, v40, (__int64)(v40 + 8), 1);
LABEL_74:
    v40 = (_DWORD *)v7[4];
    goto LABEL_75;
  }
  if ( v41 - 12 <= 1 )
  {
    sub_18CB00(v7, (__int64 *)&src, 0, v40, (__int64)(v40 + 8), 1);
    v13 = (__int64)&src;
    p_src = (__int64)v7;
    sub_18CB00(v7, (__int64 *)&src, *v40 == 13, v40, (__int64)(v40 + 12), 1);
    goto LABEL_74;
  }
LABEL_75:
  v42 = v7[6];
  v43 = (unsigned __int8 *)(v40 + 16);
  if ( !*(_QWORD *)v42 )
    sub_18B8C0(p_src, v13, v14, v16, v15);
  v87 = 0;
  v88 = 0u;
  v89 = 0;
  sub_127FE0(
    *(_QWORD *)v42,
    (__int64)v80,
    (__int64)v43,
    0,
    v15,
    v27,
    v75.m128i_i32[0],
    v75.m128i_i32[2],
    v76,
    v77,
    (__int64)v78);
  v44 = v80;
  sub_18E980(v42, (__int64 *)v80);
  if ( *((_QWORD *)&v88 + 1) )
  {
    *(_QWORD *)&v89 = 0;
    qfree(*((__int64 *)&v88 + 1));
  }
  qfree(v87);
  if ( !(_QWORD)v86 )
    goto LABEL_79;
  v47 = *(_QWORD *)(v42 + 8);
  if ( !v47 )
  {
    v66 = qalloc();
    v67 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v66, (__m128i)(unsigned __int64)v66);
    if ( !v66 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_QWORD *)(v66 + 48) = 0;
    *(_OWORD *)(v66 + 16) = 0;
    *(_OWORD *)(v66 + 32) = 0;
    *(__m128i *)(v66 + 8) = v67;
    *(_QWORD *)v66 = v66 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *(_QWORD *)(v42 + 8) = v66;
    *(_QWORD *)v66 = v66 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v66 & 3LL;
    *(__m128i *)(*(_QWORD *)(v42 + 8) + 8LL) = _mm_unpacklo_epi64(
                                                 (__m128i)*(unsigned __int64 *)(v42 + 8),
                                                 (__m128i)*(unsigned __int64 *)(v42 + 8));
    **(_QWORD **)(v42 + 8) &= ~1uLL;
    **(_QWORD **)(v42 + 8) |= 2uLL;
    v47 = *(_QWORD *)(v42 + 8);
LABEL_101:
    v48 = qalloc();
    v51 = v48;
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
    v52 = _mm_loadl_epi64((const __m128i *)(v42 + 8));
    *(_QWORD *)v48 = v47 & 0xFFFFFFFFFFFFFFFCLL | 1;
    *(__m128i *)(v48 + 8) = _mm_unpacklo_epi64(v52, v52);
    if ( *(_QWORD *)(v42 + 8) != v47 )
      goto LABEL_103;
    goto LABEL_128;
  }
  if ( !*(_QWORD *)(v42 + 16) )
    goto LABEL_101;
  v69 = v81;
  v70 = *(_QWORD *)v47 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v70 & 2) != 0 )
  {
LABEL_119:
    v71 = qalloc();
    v51 = v71;
    if ( !v71 )
    {
      v5 = __cxa_allocate_exception(8u);
      *v5 = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(v5, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_QWORD *)(v71 + 32) = 0;
    *(_OWORD *)(v71 + 16) = 0;
    *(_OWORD *)v71 = 0;
    *(_QWORD *)(v71 + 24) = v43;
    *(_OWORD *)(v71 + 40) = 0;
    *(_QWORD *)v71 = v47 & 0xFFFFFFFFFFFFFFFCLL;
    v72 = _mm_loadl_epi64((const __m128i *)(v42 + 8));
    *(_QWORD *)v71 = v47 & 0xFFFFFFFFFFFFFFFCLL | 1;
    *(__m128i *)(v71 + 8) = _mm_unpacklo_epi64(v72, v72);
    if ( *(_QWORD *)(v42 + 8) != v47 )
    {
      if ( !v69 )
      {
        *(_QWORD *)(v47 + 16) = v71;
        v73 = *(_QWORD *)(v42 + 8);
        if ( *(_QWORD *)(v73 + 16) == v47 )
          *(_QWORD *)(v73 + 16) = v51;
LABEL_105:
        v44 = (unsigned __int8 *)v51;
        sub_18EDC0((_QWORD *)(v42 + 8), (__int64 *)v51);
LABEL_106:
        ++*(_QWORD *)(v42 + 16);
        goto LABEL_107;
      }
LABEL_103:
      *(_QWORD *)(v47 + 8) = v51;
      v53 = *(_QWORD *)(v42 + 8);
      if ( *(_QWORD *)(v53 + 8) == v47 )
        *(_QWORD *)(v53 + 8) = v51;
      goto LABEL_105;
    }
LABEL_128:
    v55 = v51 & 0xFFFFFFFFFFFFFFFCLL;
    *(_QWORD *)v47 = v51 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v47 & 3LL;
    *(_QWORD *)(*(_QWORD *)(v42 + 8) + 8LL) = v51;
    *(_QWORD *)(*(_QWORD *)(v42 + 8) + 16LL) = v51;
    v54 = *(_QWORD *)v51 & 2LL;
    *(_QWORD *)v51 &= ~1uLL;
    *(_QWORD *)v51 = v54 | *(_QWORD *)(v42 + 8) & 0xFFFFFFFFFFFFFFFCLL;
    goto LABEL_106;
  }
  while ( 2 )
  {
    v44 = *(unsigned __int8 **)(v70 + 24);
    v47 = v70;
    v74 = (unsigned __int8 **)(v70 + 24);
    if ( sub_11DA40(v43, v44) < 0 )
    {
      v70 = *(_QWORD *)(v47 + 8);
      v69 = v82;
      goto LABEL_126;
    }
    v44 = v43;
    if ( sub_11DA40(*v74, v43) < 0 )
    {
      v70 = *(_QWORD *)(v47 + 16);
      v69 = 0;
LABEL_126:
      if ( (*(_BYTE *)v70 & 2) != 0 )
        goto LABEL_119;
      continue;
    }
    break;
  }
  if ( !v47 )
    goto LABEL_119;
  v51 = v47;
LABEL_107:
  v56 = v86;
  v57 = (__int64 *)(v51 + 24);
  v58 = 0;
  if ( (_QWORD)v86 )
  {
    v68 = (void *)qalloc_or_throw(32 * v86, (__int64)v44, v54, v55);
    v44 = (unsigned __int8 *)src;
    v58 = (__int64)v68;
    memcpy(v68, src, 32 * v56);
  }
  v59 = v57[1];
  v60 = _mm_unpacklo_epi64((__m128i)v56, (__m128i)v56);
  if ( v59 )
  {
    v57[2] = 0;
    v75 = v60;
    qfree(v59);
    v60 = _mm_load_si128(&v75);
  }
  v57[1] = v58;
  *((__m128i *)v57 + 1) = v60;
  if ( !*(_QWORD *)v42 )
    sub_18B8C0(v59, v44, v54, v55, v49);
  v87 = 0;
  v88 = 0u;
  v89 = 0;
  sub_127FE0(
    *(_QWORD *)v42,
    (__int64)v80,
    (__int64)v43,
    0,
    v49,
    v50,
    v75.m128i_i32[0],
    v75.m128i_i32[2],
    v76,
    v77,
    (__int64)v78);
  v61 = (__int64 *)v80;
  sub_64280((__int64 *)(v42 + 48), (__int64 *)v80);
  sub_316CB0(v42 + 64, (char *)&v88 + 8);
  sub_64640((__int64 *)(v42 + 88), v61, v62, v63, v64, v65);
  sub_317C60(v42 + 104, (char *)&v88 + 8);
  if ( *((_QWORD *)&v88 + 1) )
  {
    *(_QWORD *)&v89 = 0;
    qfree(*((__int64 *)&v88 + 1));
  }
  qfree(v87);
LABEL_79:
  if ( src )
  {
    *(_QWORD *)&v86 = 0;
    qfree((__int64)src);
  }
  return 0;
}
