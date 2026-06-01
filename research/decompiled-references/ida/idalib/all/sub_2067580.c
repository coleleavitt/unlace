_QWORD *__fastcall sub_2067580(_QWORD *a1, __int64 a2, _BYTE *a3, signed __int64 a4)
{
  size_t *v7; // rax
  size_t *v8; // rdi
  size_t v9; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdx
  __m128i v21; // xmm2
  __m128i v22; // xmm3
  __m128i v23; // xmm4
  void **p_src; // rsi
  char v25; // al
  __m128i v26; // xmm1
  __m128i v27; // xmm5
  __m128i v28; // xmm0
  __m128i v29; // xmm7
  char *v30; // rcx
  __m128i v31; // xmm2
  __m128i v32; // xmm3
  __m128i v33; // xmm6
  __m128i v34; // xmm7
  __m128i v35; // xmm6
  __int64 v36; // r13
  __m128i v37; // kr00_16
  __int64 v38; // r8
  __int64 v39; // rsi
  __int64 v40; // rdx
  unsigned __int64 v41; // rax
  void *v42; // rbp
  __int64 v43; // r15
  size_t v44; // rdx
  unsigned int *v45; // r14
  unsigned int *v46; // rbp
  unsigned int v47; // esi
  _DWORD *v48; // r10
  _DWORD *v49; // rdi
  __int64 v50; // r8
  __int64 v51; // rax
  __int64 v52; // rdx
  unsigned int *v53; // rcx
  unsigned int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // r13
  unsigned int v57; // ebp
  __m128i *v58; // rax
  __m128i si128; // xmm0
  _QWORD *v60; // rdi
  __m128i v61; // xmm4
  __m128i v62; // xmm5
  __m128i v63; // xmm4
  __m128i *v64; // [rsp+0h] [rbp-188h] BYREF
  _QWORD *v65; // [rsp+8h] [rbp-180h]
  void *v66[2]; // [rsp+10h] [rbp-178h] BYREF
  _QWORD v67[2]; // [rsp+20h] [rbp-168h] BYREF
  unsigned int *v68; // [rsp+30h] [rbp-158h] BYREF
  __int64 v69; // [rsp+38h] [rbp-150h]
  _BYTE v70[32]; // [rsp+40h] [rbp-148h] BYREF
  char v71[8]; // [rsp+60h] [rbp-128h] BYREF
  __m128i v72; // [rsp+68h] [rbp-120h] BYREF
  __m128i v73; // [rsp+78h] [rbp-110h] BYREF
  __m128i v74; // [rsp+88h] [rbp-100h] BYREF
  char v75[8]; // [rsp+A0h] [rbp-E8h] BYREF
  __m128i v76; // [rsp+A8h] [rbp-E0h] BYREF
  __m128i v77; // [rsp+B8h] [rbp-D0h] BYREF
  __m128i v78; // [rsp+C8h] [rbp-C0h] BYREF
  void *src; // [rsp+E0h] [rbp-A8h] BYREF
  size_t n[2]; // [rsp+E8h] [rbp-A0h] BYREF
  __m128i v81; // [rsp+F8h] [rbp-90h] BYREF
  __m128i v82; // [rsp+108h] [rbp-80h] BYREF
  char v83; // [rsp+118h] [rbp-70h] BYREF
  __m128i v84; // [rsp+120h] [rbp-68h] BYREF
  __m128i v85; // [rsp+130h] [rbp-58h] BYREF
  __m128i v86; // [rsp+140h] [rbp-48h] BYREF

  v65 = a1;
  src = &n[1];
  if ( &a3[a4] && !a3 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)a4 > 0xF )
  {
    if ( a4 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v7 = (size_t *)operator new(a4 + 1);
    n[1] = a4;
    src = v7;
LABEL_19:
    memcpy(v7, a3, a4);
    v7 = (size_t *)src;
    goto LABEL_6;
  }
  if ( a4 == 1 )
  {
    LOBYTE(n[1]) = *a3;
    v7 = &n[1];
    goto LABEL_6;
  }
  v7 = &n[1];
  if ( a4 )
    goto LABEL_19;
LABEL_6:
  n[0] = a4;
  *((_BYTE *)v7 + a4) = 0;
  v8 = *(size_t **)(a2 + 448);
  if ( src == &n[1] )
  {
    v44 = n[0];
    if ( n[0] )
    {
      if ( n[0] == 1 )
        *(_BYTE *)v8 = n[1];
      else
        memcpy(v8, src, n[0]);
      v44 = n[0];
      v8 = *(size_t **)(a2 + 448);
    }
    *(_QWORD *)(a2 + 456) = v44;
    *((_BYTE *)v8 + v44) = 0;
    v8 = (size_t *)src;
  }
  else
  {
    if ( v8 == (size_t *)(a2 + 464) )
    {
      v64 = (__m128i *)n[1];
      *(_QWORD *)(a2 + 448) = src;
      *(__m128 *)(a2 + 456) = _mm_loadh_ps((const double *)&v64);
    }
    else
    {
      v64 = (__m128i *)n[1];
      v9 = *(_QWORD *)(a2 + 464);
      *(_QWORD *)(a2 + 448) = src;
      *(__m128 *)(a2 + 456) = _mm_loadh_ps((const double *)&v64);
      if ( v8 )
      {
        src = v8;
        n[1] = v9;
        goto LABEL_10;
      }
    }
    v8 = &n[1];
    src = &n[1];
  }
LABEL_10:
  n[0] = 0;
  *(_BYTE *)v8 = 0;
  if ( src != &n[1] )
    operator delete(src);
  if ( !a4 )
  {
    *v65 = 0;
    return v65;
  }
  v77.m128i_i64[0] = (__int64)a3;
  v68 = (unsigned int *)v70;
  v69 = 0x800000000LL;
  v75[0] = 45;
  v76 = 0u;
  v77.m128i_i64[1] = a4;
  v78.m128i_i64[0] = (__int64)v75;
  v78.m128i_i64[1] = 1;
  v11 = sub_2246AB0(&v77, v75, 1, 0);
  if ( v11 == -1 )
  {
    v11 = v77.m128i_u64[1];
    v14 = v77.m128i_i64[0];
    v13 = 0;
    v15 = 0;
  }
  else
  {
    v12 = v11 + 1;
    if ( v11 + 1 > v77.m128i_i64[1] )
    {
      v12 = v77.m128i_i64[1];
      v13 = 0;
    }
    else
    {
      v13 = v77.m128i_i64[1] - v12;
    }
    v14 = v77.m128i_i64[0];
    v15 = v77.m128i_i64[0] + v12;
    if ( v11 > v77.m128i_i64[1] )
      v11 = v77.m128i_u64[1];
  }
  v71[0] = 45;
  v76.m128i_i64[0] = v14;
  v77.m128i_i64[0] = v15;
  v77.m128i_i64[1] = v13;
  v76.m128i_i64[1] = v11;
  v72 = 0u;
  v73 = 0u;
  v74.m128i_i64[0] = (__int64)v71;
  v74.m128i_i64[1] = 1;
  v16 = sub_2246AB0(&v73, v71, 1, 0);
  if ( v16 == -1 )
  {
    v16 = v73.m128i_u64[1];
    v19 = v73.m128i_i64[0];
    v18 = 0;
    v20 = 0;
  }
  else
  {
    v17 = v16 + 1;
    if ( v16 + 1 > v73.m128i_i64[1] )
    {
      v17 = v73.m128i_i64[1];
      v18 = 0;
    }
    else
    {
      v18 = v73.m128i_i64[1] - v17;
    }
    v19 = v73.m128i_i64[0];
    v20 = v73.m128i_i64[0] + v17;
    if ( v16 > v73.m128i_i64[1] )
      v16 = v73.m128i_u64[1];
  }
  v21 = _mm_loadu_si128(&v76);
  v73.m128i_i64[0] = v20;
  v22 = _mm_loadu_si128(&v77);
  v72.m128i_i64[0] = v19;
  v23 = _mm_loadu_si128(&v78);
  v72.m128i_i64[1] = v16;
  v73.m128i_i64[1] = v18;
  LOBYTE(src) = v75[0];
  *(__m128i *)n = v21;
  v81 = v22;
  v82 = v23;
  if ( (char *)v78.m128i_i64[0] == v75 )
  {
    v82.m128i_i64[0] = (__int64)&src;
    p_src = &src;
    v82.m128i_i64[1] = 1;
  }
  else
  {
    p_src = (void **)v82.m128i_i64[0];
  }
  v25 = v71[0];
  v26 = _mm_loadu_si128(&v72);
  v27 = _mm_loadu_si128(&v74);
  v28 = _mm_loadu_si128(&v73);
  v83 = v71[0];
  v84 = v26;
  v85 = v28;
  v86 = v27;
  if ( (char *)v74.m128i_i64[0] == v71 )
  {
    v61 = _mm_loadu_si128((const __m128i *)n);
    v30 = &v83;
    v62 = _mm_loadu_si128(&v81);
    v86.m128i_i64[1] = 1;
    v86.m128i_i64[0] = (__int64)&v83;
    v72 = v61;
    v63 = _mm_loadu_si128(&v82);
    v71[0] = v75[0];
    v73 = v62;
    v74 = v63;
    if ( p_src != &src )
    {
      v75[0] = v25;
      v76 = v26;
      v77 = v28;
      goto LABEL_80;
    }
  }
  else
  {
    v29 = _mm_loadu_si128((const __m128i *)n);
    v30 = (char *)v86.m128i_i64[0];
    v71[0] = v75[0];
    v31 = _mm_loadu_si128(&v81);
    v32 = _mm_loadu_si128(&v82);
    v72 = v29;
    v73 = v31;
    v74 = v32;
    if ( p_src != &src )
      goto LABEL_34;
  }
  v74.m128i_i64[0] = (__int64)v71;
  v74.m128i_i64[1] = 1;
LABEL_34:
  v33 = _mm_load_si128(&v84);
  v34 = _mm_load_si128(&v85);
  v75[0] = v25;
  v76 = v33;
  v35 = _mm_load_si128(&v86);
  v77 = v34;
  v78 = v35;
  if ( v30 == &v83 )
  {
LABEL_80:
    v78.m128i_i64[0] = (__int64)v75;
    v78.m128i_i64[1] = 1;
  }
  v36 = v76.m128i_i64[0];
  if ( v72.m128i_i64[0] == v76.m128i_i64[0] )
  {
LABEL_57:
    v45 = v68;
    v46 = &v68[(unsigned int)v69];
    if ( v68 != v46 )
    {
      do
      {
        v47 = *v45;
        v48 = *(_DWORD **)(a2 + 272);
        if ( *v45 )
        {
          v49 = *(_DWORD **)(a2 + 272);
          v50 = 5LL * *(unsigned int *)(a2 + 280);
          v51 = *(unsigned int *)(a2 + 280);
          if ( v50 * 4 )
          {
            do
            {
              while ( 1 )
              {
                v52 = v51 >> 1;
                v53 = &v49[5 * (v51 >> 1)];
                if ( v47 <= *v53 )
                  break;
                v49 = v53 + 5;
                v51 = v51 - v52 - 1;
                if ( v51 <= 0 )
                  goto LABEL_62;
              }
              v51 >>= 1;
            }
            while ( v52 );
          }
LABEL_62:
          if ( v49 != &v48[v50] && v47 == *v49 )
            v48 = v49;
        }
        ++v45;
        sub_2065F30(a2, v47, v48[1], *((_BYTE *)v48 + 8), *((_BYTE *)v48 + 9), v48[3], 1);
      }
      while ( v46 != v45 );
      v46 = v68;
    }
    *v65 = 0;
  }
  else
  {
    v37 = v72;
    v64 = &v73;
    if ( v72.m128i_i64[1] )
    {
      while ( 1 )
      {
        sub_20665F0((__m128i **)v66, a2, v37.m128i_i64[0], v37.m128i_u64[1], (__int64)&v68);
        v42 = v66[0];
        if ( v66[0] )
          break;
        v43 = v74.m128i_i64[1];
        v41 = sub_2246AB0(v64, v74.m128i_i64[0], v74.m128i_i64[1], 0);
        if ( v41 == -1 )
        {
          v41 = v73.m128i_u64[1];
          v40 = v73.m128i_i64[0];
          v39 = 0;
        }
        else
        {
          v38 = v43 + v41;
          if ( v43 + v41 > v73.m128i_i64[1] )
          {
            v38 = v73.m128i_i64[1];
            v39 = 0;
          }
          else
          {
            v39 = v73.m128i_i64[1] - v38;
          }
          v40 = v73.m128i_i64[0];
          if ( v41 > v73.m128i_i64[1] )
            v41 = v73.m128i_u64[1];
          v42 = (void *)(v73.m128i_i64[0] + v38);
        }
        v72.m128i_i64[0] = v40;
        v72.m128i_i64[1] = v41;
        v73.m128i_i64[0] = (__int64)v42;
        v73.m128i_i64[1] = v39;
        if ( v36 == v40 )
          goto LABEL_57;
        v37 = v72;
        if ( !v41 )
          goto LABEL_74;
      }
      *v65 = v66[0];
    }
    else
    {
LABEL_74:
      v54 = sub_2220490();
      v56 = v55;
      v57 = v54;
      v66[0] = v67;
      v58 = (__m128i *)operator new(0x23u);
      si128 = _mm_load_si128((const __m128i *)&xmmword_23AB110);
      v60 = v65;
      strcpy(v58[2].m128i_i8, "ed");
      *v58 = si128;
      v66[0] = v58;
      v58[1] = _mm_load_si128(xmmword_23AB120);
      v67[0] = 34;
      v66[1] = &qword_20 + 2;
      sub_22205D0(v60, v66, v57, v56);
      if ( v66[0] != v67 )
        operator delete(v66[0]);
    }
    v46 = v68;
  }
  if ( v46 != (unsigned int *)v70 )
    free(v46);
  return v65;
}
