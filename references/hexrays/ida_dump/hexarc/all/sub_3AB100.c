unsigned __int64 __fastcall sub_3AB100(_QWORD **a1, __m128i *a2, __int64 *a3)
{
  _QWORD *v3; // rbp
  unsigned __int64 v7; // r14
  int v9; // eax
  char v10; // al
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 *v13; // r14
  _QWORD *v14; // rsi
  const __m128i *v15; // r8
  _QWORD *v16; // rcx
  _QWORD *v17; // rax
  _QWORD *v18; // rdi
  _BYTE *v19; // r9
  _QWORD *v20; // rdx
  __int64 v21; // r10
  __int64 v22; // r11
  unsigned __int64 v23; // r9
  __int64 v24; // rdi
  size_t v25; // r8
  char *v26; // rsi
  const __m128i *v27; // r8
  __int64 v28; // r10
  unsigned __int64 i; // r9
  __m128i v30; // xmm0
  __int64 v31; // rax
  unsigned __int64 v32; // rax
  void *v33; // rdi
  __m128i v34; // xmm0
  __int64 v35; // rax
  unsigned __int64 *v36; // rsi
  __int64 *v37; // rdi
  __int64 *v39; // rdx
  void *v40; // rax
  void *v41; // rax
  __int64 *v42; // rax
  __int64 v43; // rdx
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rax
  char v46; // cl
  unsigned __int64 v47; // rdx
  _BYTE *v48; // rdx
  char v49; // dl
  int v50; // r14d
  int v51; // r15d
  __int64 *v52; // r14
  __int64 v53; // rdi
  __int64 v54; // r12
  __int64 v55; // rax
  __int64 v56; // rax
  __m128i v57; // xmm1
  __int64 v58; // rax
  _QWORD *exception; // rdi
  __int64 *v60; // [rsp+0h] [rbp-118h]
  int v61; // [rsp+0h] [rbp-118h]
  char v62; // [rsp+17h] [rbp-101h]
  __int64 v63; // [rsp+18h] [rbp-100h]
  _QWORD *v64; // [rsp+20h] [rbp-F8h]
  _QWORD *v65; // [rsp+20h] [rbp-F8h]
  size_t n; // [rsp+28h] [rbp-F0h]
  __int64 nb; // [rsp+28h] [rbp-F0h]
  size_t na; // [rsp+28h] [rbp-F0h]
  __m128i v69; // [rsp+30h] [rbp-E8h] BYREF
  const __m128i *v70; // [rsp+40h] [rbp-D8h]
  unsigned __int64 v71; // [rsp+48h] [rbp-D0h]
  const __m128i *v72[3]; // [rsp+58h] [rbp-C0h] BYREF
  __int128 v73; // [rsp+70h] [rbp-A8h]
  __int64 v74; // [rsp+80h] [rbp-98h] BYREF
  const __m128i *v75; // [rsp+90h] [rbp-88h] BYREF
  void *v76; // [rsp+98h] [rbp-80h]
  __m128i v77; // [rsp+A0h] [rbp-78h]
  __int64 v78; // [rsp+B0h] [rbp-68h]
  _QWORD v80[3]; // [rsp+C0h] [rbp-58h]
  unsigned __int64 v81; // [rsp+D8h] [rbp-40h]

  v81 = __readfsqword(0x28u);
  v3 = *a1;
  if ( !*a1 )
    return v81 - __readfsqword(0x28u);
  v7 = *v3 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v7 )
  {
    v3 = nullptr;
    goto LABEL_11;
  }
  if ( (*(_BYTE *)v7 & 2) != 0 )
    return v81 - __readfsqword(0x28u);
  do
  {
    v9 = lexcompare_tinfo(*(_QWORD *)(v7 + 32), a3[1], 0);
    if ( v9 )
    {
      if ( v9 >= 0 )
        goto LABEL_8;
    }
    else
    {
      v10 = *(_BYTE *)(v7 + 40);
      if ( v10 == *((_BYTE *)a3 + 16) )
      {
        if ( *(_QWORD *)(v7 + 24) >= *a3 )
        {
LABEL_8:
          v3 = (_QWORD *)v7;
          v7 = *(_QWORD *)(v7 + 8);
          continue;
        }
      }
      else if ( !v10 )
      {
        goto LABEL_8;
      }
    }
    v7 = *(_QWORD *)(v7 + 16);
  }
  while ( (*(_BYTE *)v7 & 2) == 0 );
  if ( *a1 == v3 )
    return v81 - __readfsqword(0x28u);
LABEL_11:
  v11 = a3[1];
  v80[0] = *a3;
  if ( (get_tinfo_property(v11, 2) & 0x3F) == 0x2D
    && !*((_BYTE *)a3 + 16)
    && (v50 = *((_DWORD *)a3 + 5) & 0xF) != 0
    && v50 < (unsigned __int64)get_tinfo_size(0, a3[1], 0) )
  {
    v51 = v50;
    v52 = a3;
    v53 = *a3;
    v54 = 0;
    v61 = 2;
    v55 = sub_323690(v53, v51, 0);
LABEL_86:
    v80[v54++] = v55;
    while ( v61 != 1 )
    {
      v61 = 1;
      v55 = sub_323690(*v52, v51, 1);
      if ( !v54 || v80[v54 - 1] != v55 )
        goto LABEL_86;
    }
    v63 = v54;
    a3 = v52;
  }
  else
  {
    v63 = 1;
  }
  if ( v3 == *a1 )
    return v81 - __readfsqword(0x28u);
  while ( 2 )
  {
    v62 = compare_tinfo(v3[4], a3[1], 0);
    if ( !v62 )
      return v81 - __readfsqword(0x28u);
    if ( !*((_BYTE *)a3 + 16) )
    {
      v12 = v3[3];
      if ( v80[0] != v12 && (v63 == 1 || v12 != v80[1]) )
      {
        if ( *((_BYTE *)v3 + 40) )
          goto LABEL_21;
        return v81 - __readfsqword(0x28u);
      }
    }
    v60 = (__int64 *)v3[6];
    if ( !v60 )
      goto LABEL_21;
    if ( !v3[7] )
      goto LABEL_21;
    v13 = (__int64 *)v60[1];
    if ( v60 == v13 )
      goto LABEL_21;
    v14 = (_QWORD *)a2->m128i_i64[0];
    v15 = (const __m128i *)v13[3];
    v16 = v13 + 3;
    if ( !a2->m128i_i64[0] )
      goto LABEL_45;
    while ( 2 )
    {
      v17 = (_QWORD *)(*v14 & 0xFFFFFFFFFFFFFFFCLL);
      if ( v17 )
      {
        if ( (*(_BYTE *)(*v14 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
          goto LABEL_45;
        v18 = (_QWORD *)v17[1];
        v19 = (_BYTE *)v17[2];
        v20 = v14;
        if ( v17[3] < (unsigned __int64)v15 )
          goto LABEL_34;
        while ( 1 )
        {
          v20 = v17;
          if ( (*(_BYTE *)v18 & 2) != 0 )
            break;
          while ( 1 )
          {
            v17 = v18;
            v18 = (_QWORD *)v18[1];
            v19 = (_BYTE *)v17[2];
            if ( v17[3] >= (unsigned __int64)v15 )
              break;
LABEL_34:
            v18 = v19;
            if ( (*v19 & 2) != 0 )
              goto LABEL_35;
          }
        }
LABEL_35:
        if ( v14 == v20 )
          goto LABEL_45;
      }
      else
      {
        v20 = nullptr;
      }
      v21 = (__int64)(v20 + 3);
      if ( v15 == (const __m128i *)v20[3] )
      {
        v22 = 40LL * v16[2];
        v23 = 0xCCCCCCCCCCCCCCCDLL * (v22 >> 3);
        if ( !v23 )
          goto LABEL_58;
        v24 = v20[5];
        v25 = v16[1];
        v26 = (char *)v20[4];
        if ( v20[6] < v23 + v24 )
        {
          v69.m128i_i64[0] = 0xCCCCCCCCCCCCCCCDLL * ((40LL * v16[2]) >> 3);
          v70 = (const __m128i *)v22;
          na = v25;
          v65 = v20 + 3;
          v58 = qvector_reserve(v20 + 4, v26, v23 + v24, 40);
          v21 = (__int64)v65;
          v23 = v69.m128i_i64[0];
          v22 = (__int64)v70;
          v25 = na;
          v26 = (char *)v58;
          v65[1] = v58;
          v24 = v65[2];
        }
        v71 = v23;
        v69.m128i_i64[0] = v21;
        v70 = (const __m128i *)v25;
        n = v25 + v22;
        memmove(&v26[v22], v26, 40 * v24);
        v27 = v70;
        v28 = v69.m128i_i64[0];
        for ( i = v71; (const __m128i *)n != v27; *((_QWORD *)v26 - 1) = v27[-1].m128i_i64[1] )
        {
          v30 = _mm_loadu_si128(v27);
          v27 = (const __m128i *)((char *)v27 + 40);
          v26 += 40;
          *(__m128i *)(v26 - 40) = v30;
          *(__m128i *)(v26 - 24) = _mm_loadu_si128((const __m128i *)((char *)v27 - 24));
        }
        *(_QWORD *)(v28 + 16) += i;
        v31 = *v13;
        if ( (*v13 & 2) != 0 )
          goto LABEL_43;
LABEL_59:
        v39 = (__int64 *)v13[2];
        if ( (*(_BYTE *)v39 & 2) != 0 )
        {
          v42 = (__int64 *)(v31 & 0xFFFFFFFFFFFFFFFCLL);
          v43 = *v42;
          if ( (*v42 & 2) == 0 )
          {
            while ( v13 == (__int64 *)v42[2] )
            {
              v13 = v42;
              v44 = v43 & 0xFFFFFFFFFFFFFFFCLL;
              v43 = *(_QWORD *)(v43 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v43 & 2) != 0 )
              {
                v13 = (__int64 *)v44;
                if ( v60 != (__int64 *)v44 )
                  goto LABEL_44;
                goto LABEL_21;
              }
              v42 = (__int64 *)v44;
            }
          }
          v13 = v42;
          if ( v60 != v42 )
            goto LABEL_44;
        }
        else
        {
          do
          {
            v13 = v39;
            v39 = (__int64 *)v39[1];
          }
          while ( (*(_BYTE *)v39 & 2) == 0 );
          if ( v60 != v13 )
            goto LABEL_44;
        }
        break;
      }
LABEL_45:
      v32 = v16[2];
      v72[1] = v15;
      v33 = nullptr;
      v34 = _mm_unpacklo_epi64((__m128i)v32, (__m128i)v32);
      if ( v32 )
      {
        v70 = v15;
        v69 = v34;
        v64 = v16;
        nb = 40 * v32;
        v40 = (void *)qalloc_or_throw(40 * v32);
        v41 = memcpy(v40, (const void *)v64[1], nb);
        v34 = _mm_load_si128(&v69);
        v15 = v70;
        v16 = v64;
        v33 = v41;
      }
      v35 = v16[4];
      v75 = v15;
      v76 = v33;
      v74 = v35;
      v77 = v34;
      if ( v35 )
      {
        *(_DWORD *)(v35 + 104) += 2;
        v78 = v35;
      }
      else
      {
        v78 = 0;
      }
      v36 = (unsigned __int64 *)a2->m128i_i64[0];
      v72[0] = (const __m128i *)&v75;
      if ( !v36 )
      {
        v56 = qalloc(64);
        v57 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v56, (__m128i)(unsigned __int64)v56);
        if ( !v56 )
        {
          exception = __cxa_allocate_exception(8u);
          *exception = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            exception,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        *(_OWORD *)(v56 + 16) = 0;
        *(_OWORD *)(v56 + 32) = 0;
        *(_OWORD *)(v56 + 48) = 0;
        *(_QWORD *)v56 = v56 & 0xFFFFFFFFFFFFFFFCLL | 2;
        *(__m128i *)(v56 + 8) = v57;
        a2->m128i_i64[0] = v56;
        *(_QWORD *)v56 = v56 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v56 & 3LL;
        *(__m128i *)(a2->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a2->m128i_u64[0], (__m128i)a2->m128i_u64[0]);
        *(_QWORD *)a2->m128i_i64[0] &= ~1uLL;
        *(_QWORD *)a2->m128i_i64[0] |= 2uLL;
        v36 = (unsigned __int64 *)a2->m128i_i64[0];
LABEL_51:
        sub_3AAF60(a2, v36, 1, v72);
        goto LABEL_52;
      }
      if ( !a2->m128i_i64[1] )
        goto LABEL_51;
      v45 = *v36 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v45 & 2) != 0 )
      {
        v49 = 1;
LABEL_81:
        sub_3AAF60(a2, v36, v49, v72);
        goto LABEL_52;
      }
      v46 = v62;
      while ( 2 )
      {
        v47 = *(_QWORD *)(v45 + 24);
        if ( (unsigned __int64)v15 < v47 )
        {
          v48 = *(_BYTE **)(v45 + 8);
          v46 = v62;
          if ( (*v48 & 2) != 0 )
            goto LABEL_76;
LABEL_92:
          v45 = (unsigned __int64)v48;
          continue;
        }
        break;
      }
      if ( v47 < (unsigned __int64)v15 )
      {
        v48 = *(_BYTE **)(v45 + 16);
        v46 = 0;
        if ( (*v48 & 2) != 0 )
          goto LABEL_76;
        goto LABEL_92;
      }
      if ( !v45 )
      {
LABEL_76:
        v49 = v46;
        v36 = (unsigned __int64 *)v45;
        goto LABEL_81;
      }
LABEL_52:
      v37 = (__int64 *)v78;
      if ( v78 )
      {
        if ( (*(_DWORD *)(v78 + 104))-- == 1 )
          sub_3A18B0(v37);
      }
      if ( v76 )
      {
        v77.m128i_i64[0] = 0;
        qfree(v76);
      }
      v72[2] = nullptr;
      v73 = 0;
      sub_139A80(&v74, (__int64)v36);
LABEL_58:
      v31 = *v13;
      if ( (*v13 & 2) == 0 )
        goto LABEL_59;
LABEL_43:
      if ( v60 != v13 )
      {
LABEL_44:
        v14 = (_QWORD *)a2->m128i_i64[0];
        v15 = (const __m128i *)v13[3];
        v16 = v13 + 3;
        if ( a2->m128i_i64[0] )
          continue;
        goto LABEL_45;
      }
      break;
    }
LABEL_21:
    v3 = sub_3A9D50(v3);
    if ( *a1 != v3 )
      continue;
    return v81 - __readfsqword(0x28u);
  }
}
