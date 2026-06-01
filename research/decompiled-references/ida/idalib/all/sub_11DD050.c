__int64 __fastcall sub_11DD050(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  char *v5; // r13
  size_t v6; // rax
  __int64 v7; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  std::_V2 *v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdx
  __m128i v21; // xmm3
  __m128i v22; // xmm4
  __m128i v23; // xmm5
  void **v24; // rsi
  char v25; // dl
  __m128i v26; // xmm1
  __m128i v27; // xmm0
  __m128i v28; // xmm6
  __m128i v29; // xmm4
  __int64 v30; // rcx
  __m128i v31; // xmm5
  __m128i v32; // xmm6
  __m128i v33; // xmm7
  __m128i v34; // xmm3
  __m128i v35; // xmm7
  _BYTE *v36; // rsi
  __int64 v37; // r13
  unsigned __int64 i; // rax
  __int64 v39; // r8
  __int64 v40; // rcx
  __int64 v41; // r8
  void **v42; // r13
  __m128i *v43; // rdx
  unsigned __int64 v44; // rsi
  __m128i *v45; // rax
  _BYTE *v46; // rdi
  __int64 v47; // r15
  _BYTE *v48; // rdi
  size_t v49; // rdx
  void **v50; // r15
  __int64 v51; // rax
  void **v52; // r14
  __int64 v53; // r12
  void *v54; // r13
  size_t v55; // rax
  __int64 v56; // rax
  void **v57; // r13
  void **v58; // r12
  __int64 v59; // rsi
  __m128i v60; // xmm2
  __m128i v61; // xmm7
  __m128i v62; // xmm2
  size_t v63; // rdx
  __int64 *v64; // [rsp+0h] [rbp-1C8h] BYREF
  void **p_src; // [rsp+8h] [rbp-1C0h]
  void ***v66; // [rsp+10h] [rbp-1B8h]
  __int64 *v67; // [rsp+18h] [rbp-1B0h]
  __int64 v68; // [rsp+20h] [rbp-1A8h] BYREF
  char v69; // [rsp+28h] [rbp-1A0h]
  void *dest; // [rsp+30h] [rbp-198h] BYREF
  __m128 v71; // [rsp+38h] [rbp-190h] BYREF
  void *v72[2]; // [rsp+50h] [rbp-178h] BYREF
  _BYTE v73[16]; // [rsp+60h] [rbp-168h] BYREF
  void **v74; // [rsp+70h] [rbp-158h] BYREF
  __int64 v75; // [rsp+78h] [rbp-150h]
  char v76; // [rsp+80h] [rbp-148h] BYREF
  char v77; // [rsp+A0h] [rbp-128h] BYREF
  __m128i v78; // [rsp+A8h] [rbp-120h] BYREF
  __m128i v79; // [rsp+B8h] [rbp-110h] BYREF
  __m128i v80; // [rsp+C8h] [rbp-100h] BYREF
  __int64 v81; // [rsp+E0h] [rbp-E8h] BYREF
  __m128i v82; // [rsp+E8h] [rbp-E0h] BYREF
  __m128i v83; // [rsp+F8h] [rbp-D0h] BYREF
  __m128i v84; // [rsp+108h] [rbp-C0h] BYREF
  void *src; // [rsp+120h] [rbp-A8h] BYREF
  size_t n[2]; // [rsp+128h] [rbp-A0h] BYREF
  __m128i v87; // [rsp+138h] [rbp-90h] BYREF
  __m128i v88; // [rsp+148h] [rbp-80h] BYREF
  char v89; // [rsp+158h] [rbp-70h]
  __m128i v90; // [rsp+160h] [rbp-68h] BYREF
  __m128i v91; // [rsp+170h] [rbp-58h] BYREF
  __m128i v92; // [rsp+180h] [rbp-48h] BYREF

  v71.m128_i8[8] = 0;
  v71.m128_u64[0] = 0;
  dest = &v71.m128_u16[4];
  v4 = sub_10DCD30(a3, 0xC06u);
  if ( v4 )
  {
    v5 = **(char ***)(v4 + 48);
    v6 = strlen(v5);
    sub_99BDC0(&dest, 0, v71.m128_u64[0], v5, v6);
    goto LABEL_3;
  }
  p_src = &src;
  sub_112D530(&src, a2, "nvptx-arch");
  v48 = dest;
  if ( src == &n[1] )
  {
    v63 = n[0];
    if ( n[0] )
    {
      if ( n[0] == 1 )
        *(_BYTE *)dest = n[1];
      else
        memcpy(dest, src, n[0]);
      v63 = n[0];
      v48 = dest;
    }
    v71.m128_u64[0] = v63;
    v48[v63] = 0;
    v48 = src;
    goto LABEL_45;
  }
  if ( dest == &v71.m128_u16[4] )
  {
    v64 = (__int64 *)n[1];
    dest = src;
    v71 = _mm_loadh_ps((const double *)&v64);
  }
  else
  {
    v64 = (__int64 *)n[1];
    v49 = v71.m128_u64[1];
    dest = src;
    v71 = _mm_loadh_ps((const double *)&v64);
    if ( v48 )
    {
      src = v48;
      n[1] = v49;
      goto LABEL_45;
    }
  }
  v48 = p_src + 2;
  src = p_src + 2;
LABEL_45:
  v50 = p_src;
  n[0] = 0;
  *v48 = 0;
  if ( src != v50 + 2 )
    operator delete(src);
LABEL_3:
  v64 = &v68;
  sub_1133AC0((__int64)&v68, a2, (__int64)dest, v71.m128_i64[0]);
  if ( (v69 & 1) != 0 )
  {
    v7 = v68;
    *(_BYTE *)(a1 + 48) |= 1u;
    v68 = 0;
    *(_QWORD *)a1 = v7;
    goto LABEL_5;
  }
  v66 = &v74;
  v74 = (void **)&v76;
  v75 = 0x100000000LL;
  v9 = *(_QWORD *)(v68 + 8);
  v10 = *(_QWORD *)(v68 + 16);
  v84.m128i_i64[0] = (__int64)"\n";
  v82 = 0u;
  v83.m128i_i64[0] = v9;
  v83.m128i_i64[1] = v10 - v9;
  v84.m128i_i64[1] = 1;
  v67 = &v81;
  v11 = sub_2246AB0(&v83, "\n", 1, 0);
  if ( v11 == -1 )
  {
    v11 = v83.m128i_u64[1];
    v14 = v83.m128i_i64[0];
    v13 = 0;
    v15 = 0;
  }
  else
  {
    v12 = v11 + 1;
    if ( v11 + 1 > v83.m128i_i64[1] )
    {
      v12 = v83.m128i_i64[1];
      v13 = 0;
    }
    else
    {
      v13 = v83.m128i_i64[1] - v12;
    }
    v14 = v83.m128i_i64[0];
    v15 = v83.m128i_i64[0] + v12;
    if ( v11 > v83.m128i_i64[1] )
      v11 = v83.m128i_u64[1];
  }
  v82.m128i_i64[0] = v14;
  v83.m128i_i64[0] = v15;
  v83.m128i_i64[1] = v13;
  v82.m128i_i64[1] = v11;
  v78 = 0u;
  v79 = 0u;
  v80.m128i_i64[0] = (__int64)"\n";
  v80.m128i_i64[1] = 1;
  v16 = sub_2246AB0(&v79, "\n", 1, 0);
  if ( v16 == -1 )
  {
    v16 = v79.m128i_u64[1];
    v19 = v79.m128i_i64[0];
    v18 = nullptr;
    v20 = 0;
  }
  else
  {
    v17 = v16 + 1;
    if ( v16 + 1 > v79.m128i_i64[1] )
    {
      v17 = v79.m128i_i64[1];
      v18 = nullptr;
    }
    else
    {
      v18 = (std::_V2 *)(v79.m128i_i64[1] - v17);
    }
    v19 = v79.m128i_i64[0];
    v20 = v79.m128i_i64[0] + v17;
    if ( v16 > v79.m128i_i64[1] )
      v16 = v79.m128i_u64[1];
  }
  v78.m128i_i64[1] = v16;
  v21 = _mm_loadu_si128(&v82);
  v78.m128i_i64[0] = v19;
  v22 = _mm_loadu_si128(&v83);
  v79.m128i_i64[0] = v20;
  v23 = _mm_loadu_si128(&v84);
  v79.m128i_i64[1] = (__int64)v18;
  LOBYTE(src) = v81;
  *(__m128i *)n = v21;
  v87 = v22;
  v88 = v23;
  if ( (__int64 *)v84.m128i_i64[0] == v67 )
  {
    v88.m128i_i64[1] = 1;
    p_src = &src;
    v24 = &src;
    v88.m128i_i64[0] = (__int64)&src;
  }
  else
  {
    v24 = (void **)v88.m128i_i64[0];
    p_src = &src;
  }
  v25 = v77;
  v26 = _mm_loadu_si128(&v78);
  v27 = _mm_loadu_si128(&v79);
  v28 = _mm_loadu_si128(&v80);
  v89 = v77;
  v90 = v26;
  v91 = v27;
  v92 = v28;
  if ( (char *)v80.m128i_i64[0] == &v77 )
  {
    v60 = _mm_loadu_si128((const __m128i *)n);
    v18 = (std::_V2 *)p_src;
    v92.m128i_i64[1] = 1;
    v61 = _mm_loadu_si128(&v88);
    v77 = v81;
    v78 = v60;
    v30 = (__int64)(p_src + 7);
    v62 = _mm_loadu_si128(&v87);
    v92.m128i_i64[0] = (__int64)(p_src + 7);
    v79 = v62;
    v80 = v61;
    if ( v24 != p_src )
    {
      LOBYTE(v81) = v25;
      v82 = v26;
      v83 = v27;
      goto LABEL_75;
    }
  }
  else
  {
    v29 = _mm_loadu_si128((const __m128i *)n);
    v30 = v92.m128i_i64[0];
    v77 = v81;
    v31 = _mm_loadu_si128(&v87);
    v32 = _mm_loadu_si128(&v88);
    v78 = v29;
    v79 = v31;
    v80 = v32;
    if ( v24 != p_src )
      goto LABEL_22;
  }
  v80.m128i_i64[0] = (__int64)&v77;
  v80.m128i_i64[1] = 1;
LABEL_22:
  v33 = _mm_load_si128(&v90);
  LOBYTE(v81) = v25;
  v34 = _mm_load_si128(&v92);
  v82 = v33;
  v35 = _mm_load_si128(&v91);
  v84 = v34;
  v83 = v35;
  if ( (void **)v30 == p_src + 7 )
  {
LABEL_75:
    v84.m128i_i64[1] = 1;
    v84.m128i_i64[0] = (__int64)v67;
  }
  v36 = (_BYTE *)v78.m128i_i64[0];
  v37 = v82.m128i_i64[0];
  for ( i = v78.m128i_u64[1]; (_BYTE *)v37 != v36; v79.m128i_i64[1] = v40 )
  {
    if ( i )
    {
      if ( v36 )
      {
        v72[0] = v73;
        sub_11D7980(v72, v36, (__int64)&v36[i]);
      }
      else
      {
        v73[0] = 0;
        v72[0] = v73;
        v72[1] = nullptr;
      }
      v42 = v74;
      v43 = (__m128i *)v72;
      v44 = (unsigned int)v75 + 1LL;
      v45 = (__m128i *)&v74[4 * (unsigned int)v75];
      if ( v44 > HIDWORD(v75) )
      {
        if ( v74 > v72 || v45 <= (__m128i *)v72 )
        {
          sub_A8C1F0((__int64)v66, v44);
          v43 = (__m128i *)v72;
          v45 = (__m128i *)&v74[4 * (unsigned int)v75];
        }
        else
        {
          sub_A8C1F0((__int64)v66, v44);
          v43 = (__m128i *)((char *)v74 + (char *)v72 - (char *)v42);
          v45 = (__m128i *)&v74[4 * (unsigned int)v75];
        }
      }
      v45->m128i_i64[0] = (__int64)v45[1].m128i_i64;
      if ( (__m128i *)v43->m128i_i64[0] == &v43[1] )
      {
        v45[1] = _mm_loadu_si128(v43 + 1);
      }
      else
      {
        v45->m128i_i64[0] = v43->m128i_i64[0];
        v45[1].m128i_i64[0] = v43[1].m128i_i64[0];
      }
      v45->m128i_i64[1] = v43->m128i_i64[1];
      v43->m128i_i64[0] = (__int64)v43[1].m128i_i64;
      v46 = v72[0];
      v43->m128i_i64[1] = 0;
      v43[1].m128i_i8[0] = 0;
      LODWORD(v75) = v75 + 1;
      if ( v46 != v73 )
        operator delete(v46);
      v37 = v82.m128i_i64[0];
    }
    v47 = v80.m128i_i64[1];
    v18 = (std::_V2 *)&v79;
    i = sub_2246AB0(&v79, v80.m128i_i64[0], v80.m128i_i64[1], 0);
    if ( i == -1 )
    {
      i = v79.m128i_u64[1];
      v36 = (_BYTE *)v79.m128i_i64[0];
      v40 = 0;
      v41 = 0;
    }
    else
    {
      v39 = i + v47;
      if ( i + v47 > v79.m128i_i64[1] )
      {
        v39 = v79.m128i_i64[1];
        v40 = 0;
      }
      else
      {
        v40 = v79.m128i_i64[1] - v39;
      }
      v36 = (_BYTE *)v79.m128i_i64[0];
      v41 = v79.m128i_i64[0] + v39;
      if ( i > v79.m128i_i64[1] )
        i = v79.m128i_u64[1];
    }
    v78.m128i_i64[0] = (__int64)v36;
    v78.m128i_i64[1] = i;
    v79.m128i_i64[0] = v41;
  }
  if ( (_DWORD)v75 )
  {
    *(_BYTE *)(a1 + 48) &= ~1u;
    v59 = (__int64)v66;
    *(_QWORD *)a1 = a1 + 16;
    *(_QWORD *)(a1 + 8) = 0x100000000LL;
    sub_CEFDD0(a1, v59);
  }
  else
  {
    v51 = std::_V2::system_category(v18);
    v52 = p_src;
    v53 = v51;
    v54 = p_src + 2;
    src = p_src + 2;
    v55 = j__strlen("No NVIDIA GPU detected in the system");
    sub_11D7980(v52, "No NVIDIA GPU detected in the system", (__int64)&aNoNvidiaGpuDet[v55]);
    sub_22205D0(v67, v52, 0, v53);
    if ( src != v54 )
      operator delete(src);
    v56 = v81;
    *(_BYTE *)(a1 + 48) |= 1u;
    *(_QWORD *)a1 = v56;
  }
  v57 = v74;
  v58 = &v74[4 * (unsigned int)v75];
  if ( v74 != v58 )
  {
    do
    {
      while ( 1 )
      {
        v58 -= 4;
        if ( *v58 == v58 + 2 )
          break;
        operator delete(*v58);
        if ( v57 == v58 )
          goto LABEL_60;
      }
    }
    while ( v57 != v58 );
LABEL_60:
    v58 = v74;
  }
  if ( v58 != (void **)(v66 + 2) )
    free(v58);
LABEL_5:
  sub_111E0C0(v64);
  if ( dest != &v71.m128_u16[4] )
    operator delete(dest);
  return a1;
}
