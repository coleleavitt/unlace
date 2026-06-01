unsigned __int64 __fastcall sub_1ACC50(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  const char *v15; // rbx
  __int64 module_data; // rax
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __m128 v22; // xmm4
  __m128 v23; // xmm5
  const char *v24; // rsi
  __int64 v25; // rcx
  __int64 best_fit_member; // rax
  __int64 v27; // rdi
  _QWORD *v28; // rdi
  __int64 v29; // rdx
  const char *v30; // rsi
  __int64 v31; // rdi
  __int64 v32; // r15
  __int64 v33; // r13
  _QWORD *v34; // r14
  __int64 v35; // rdi
  __int64 v36; // rdi
  __int64 v37; // r13
  __int64 v38; // r15
  _QWORD *v39; // r14
  __int64 v40; // rdi
  __int64 v41; // rdi
  __int64 tinfo_size; // rax
  bool v43; // zf
  __int64 *v44; // rbx
  unsigned __int64 v45; // r12
  void *v46; // r14
  __int64 v47; // rdx
  __int64 v48; // rsi
  __int64 v49; // rax
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rax
  unsigned __int64 v54; // r15
  __int64 v55; // r13
  __int64 v56; // rax
  const __m128i *v57; // r14
  __int64 tinfo_property4; // r8
  __int64 v59; // rax
  _QWORD *v60; // rsi
  size_t v61; // r8
  void *v62; // r14
  char *v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 *v66; // [rsp+0h] [rbp-C8h]
  size_t n; // [rsp+10h] [rbp-B8h]
  size_t nb; // [rsp+10h] [rbp-B8h]
  __int64 na; // [rsp+10h] [rbp-B8h]
  size_t v70; // [rsp+18h] [rbp-B0h]
  __int64 v71; // [rsp+28h] [rbp-A0h] BYREF
  const char *v72; // [rsp+30h] [rbp-98h] BYREF
  __int128 v73; // [rsp+38h] [rbp-90h]
  __int64 v74; // [rsp+50h] [rbp-78h] BYREF
  __int128 v75; // [rsp+58h] [rbp-70h]
  __int128 v76; // [rsp+68h] [rbp-60h]
  __int64 v77; // [rsp+78h] [rbp-50h]
  int v78; // [rsp+80h] [rbp-48h]
  unsigned __int64 v79; // [rsp+88h] [rbp-40h]

  v79 = __readfsqword(0x28u);
  v71 = 0;
  v66 = &v71;
  copy_tinfo_t(&v71, a3, a3);
  if ( (get_tinfo_property(v71, 2) & 0x2F) != 0xD )
  {
    clear_tinfo_t(&v71);
    return v79 - __readfsqword(0x28u);
  }
  v15 = (const char *)(*(_QWORD *)(a1 + 16) + a4);
  module_data = get_module_data((unsigned int)dword_8CD7F0);
  if ( v15 || !sub_1ACBD0(module_data, *(_DWORD *)(a2 + 8), &v71, *(_QWORD *)(a1 + 16)) )
  {
    while ( 1 )
    {
      if ( !*(_BYTE *)(a1 + 24) && !v15 && *(_QWORD *)(a2 + 8) != 1 )
        goto LABEL_48;
      v17 = v71;
      v72 = nullptr;
      v73 = 0;
      if ( (v71 & 0x100) != 0 )
      {
        get_tinfo_pdata(&v72, v71, 0);
        v17 = v71;
      }
      v74 = 0;
      v75 = 0;
      v77 = 0;
      v78 = 1;
      v76 = 0;
      if ( !(unsigned __int8)get_tinfo_details(v17, 13, &v74) )
      {
        v24 = &s1;
        if ( (_QWORD)v73 )
          v24 = v72;
        sub_169700(
          (int)"%s: failed to calculate the structure layout\n",
          (__int64)v24,
          v18,
          v19,
          v20,
          v21,
          a5,
          a6,
          (__m128)0LL,
          (__m128)0LL,
          v22,
          v23,
          a11,
          a12,
          (char)&v71);
        goto LABEL_28;
      }
      v24 = (_BYTE *)(&dword_0 + 2);
      if ( (get_tinfo_property(v71, 2) & 0x3F) == 0x1D )
        break;
      v24 = v15;
      best_fit_member = udt_type_data_t__get_best_fit_member(&v74, v15);
      v27 = v74;
      if ( best_fit_member < 0 )
        goto LABEL_29;
      v28 = (_QWORD *)(144 * best_fit_member + v74);
      if ( !HIBYTE(v78) )
        v15 -= *v28 >> 3;
      v24 = (_BYTE *)(&dword_0 + 2);
      if ( (get_tinfo_property(v28[8], 2) & 0x2F) != 0xD )
        goto LABEL_28;
      v30 = (const char *)(v28 + 8);
      copy_tinfo_t(&v71, v28 + 8, v29);
      v31 = v74;
      if ( v74 )
      {
        v32 = v75;
        if ( (_QWORD)v75 )
        {
          v33 = 0;
          do
          {
            v34 = (_QWORD *)(v31 + 144 * v33);
            clear_tinfo_t(v34 + 8);
            v35 = v34[5];
            if ( v35 )
            {
              v34[6] = 0;
              qfree(v35, v30);
            }
            v36 = v34[2];
            if ( v36 )
            {
              v34[3] = 0;
              qfree(v36, v30);
            }
            ++v33;
            v31 = v74;
          }
          while ( v32 != v33 );
        }
        *(_QWORD *)&v75 = 0;
        qfree(v31, v30);
      }
      if ( v72 )
      {
        *(_QWORD *)&v73 = 0;
        qfree(v72, v30);
      }
    }
    if ( (_QWORD)v75 )
    {
      v52 = a1 + 32;
      v53 = a1 + 56;
      if ( !v15 )
        v53 = a1 + 32;
      v54 = 0;
      v55 = v53;
      do
      {
        v57 = (const __m128i *)(v74 + 144 * v54);
        if ( *(_QWORD *)(a2 + 8) > 0x1Fu )
        {
          if ( !under_debugger )
            interr(40255, v24, v52, v25, *(double *)a5.m128_u64);
          BUG();
        }
        tinfo_property4 = get_tinfo_property4(v71, 297, v54, 0, 0, 0);
        v59 = *(_QWORD *)(a2 + 8);
        v60 = *(_QWORD **)a2;
        if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(v59 + 1) )
        {
          n = tinfo_property4;
          v64 = qvector_reserve(a2, v60, v59 + 1, 8);
          *(_QWORD *)a2 = v64;
          v60 = (_QWORD *)v64;
          tinfo_property4 = n;
          v59 = *(_QWORD *)(a2 + 8);
        }
        v60[v59] = tinfo_property4;
        v24 = (_BYTE *)(&dword_0 + 2);
        ++*(_QWORD *)(a2 + 8);
        if ( (get_tinfo_property(v57[4].m128i_i64[0], 2) & 0x2F) == 0xD )
        {
          v24 = (const char *)a2;
          sub_1ACC50(a1, a2, &v57[4], &v15[-*(_QWORD *)(a1 + 16)]);
        }
        else
        {
          a5 = (__m128)_mm_loadu_si128(v57);
          v25 = 8LL * (_QWORD)v15;
          a5.m128_u64[0] = _mm_add_epi64((__m128i)a5, _mm_srli_si128((__m128i)a5, 8)).m128i_u64[0];
          if ( a5.m128_u64[0] >= 8 * (__int64)v15 )
          {
            v61 = *(_QWORD *)(a2 + 8);
            v62 = nullptr;
            if ( v61 )
            {
              v70 = *(_QWORD *)(a2 + 8);
              na = 8 * v61;
              v62 = (void *)qalloc_or_throw(8 * v61);
              memcpy(v62, *(const void **)a2, na);
              v61 = v70;
            }
            v52 = *(_QWORD *)(v55 + 8);
            v24 = *(const char **)v55;
            if ( *(_QWORD *)(v55 + 16) < (unsigned __int64)(v52 + 1) )
            {
              nb = v61;
              v65 = qvector_reserve(v55, v24, v52 + 1, 24);
              v52 = *(_QWORD *)(v55 + 8);
              v61 = nb;
              *(_QWORD *)v55 = v65;
              v24 = (const char *)v65;
            }
            v63 = (char *)&v24[24 * v52];
            a5 = (__m128)_mm_unpacklo_epi64((__m128i)v61, (__m128i)v61);
            *(_QWORD *)v63 = v62;
            *(__m128 *)(v63 + 8) = a5;
            ++*(_QWORD *)(v55 + 8);
          }
        }
        v56 = *(_QWORD *)(a2 + 8);
        if ( v56 )
          *(_QWORD *)(a2 + 8) = v56 - 1;
        ++v54;
      }
      while ( v54 < (unsigned __int64)v75 );
LABEL_28:
      v27 = v74;
LABEL_29:
      if ( v27 )
      {
        v37 = v75;
        if ( (_QWORD)v75 )
        {
          v38 = 0;
          do
          {
            v39 = (_QWORD *)(v27 + 144 * v38);
            clear_tinfo_t(v39 + 8);
            v40 = v39[5];
            if ( v40 )
            {
              v39[6] = 0;
              qfree(v40, v24);
            }
            v41 = v39[2];
            if ( v41 )
            {
              v39[3] = 0;
              qfree(v41, v24);
            }
            ++v38;
            v27 = v74;
          }
          while ( v37 != v38 );
        }
        goto LABEL_37;
      }
    }
    else
    {
      v27 = v74;
      if ( v74 )
      {
LABEL_37:
        *(_QWORD *)&v75 = 0;
        qfree(v27, v24);
      }
    }
    if ( v72 )
    {
      *(_QWORD *)&v73 = 0;
      qfree(v72, v24);
    }
    goto LABEL_40;
  }
LABEL_48:
  v15 = nullptr;
LABEL_40:
  tinfo_size = get_tinfo_size(0, v71, 0);
  if ( !v15 || (v43 = v15 == (const char *)tinfo_size, v44 = (__int64 *)(a1 + 56), v43) )
  {
    v44 = (__int64 *)(a1 + 32);
    v45 = *(_QWORD *)(a2 + 8);
    v46 = nullptr;
    if ( !v45 )
      goto LABEL_43;
LABEL_50:
    v46 = (void *)qalloc_or_throw(8 * v45);
    memcpy(v46, *(const void **)a2, 8 * v45);
    goto LABEL_43;
  }
  v45 = *(_QWORD *)(a2 + 8);
  v46 = nullptr;
  if ( v45 )
    goto LABEL_50;
LABEL_43:
  v47 = v44[1];
  v48 = *v44;
  if ( v44[2] < (unsigned __int64)(v47 + 1) )
  {
    v51 = qvector_reserve(v44, v48, v47 + 1, 24);
    *v44 = v51;
    v47 = v44[1];
    v48 = v51;
  }
  v49 = v48 + 24 * v47;
  *(_QWORD *)v49 = v46;
  *(__m128i *)(v49 + 8) = _mm_unpacklo_epi64((__m128i)v45, (__m128i)v45);
  ++v44[1];
  clear_tinfo_t(v66);
  return v79 - __readfsqword(0x28u);
}
