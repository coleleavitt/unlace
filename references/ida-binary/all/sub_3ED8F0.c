__int64 __fastcall sub_3ED8F0(
        __int64 a1,
        __m128i *a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  double v11; // xmm0_8
  __m128i *v13; // rsi
  __m128 v14; // xmm2
  const char *v15; // rdx
  __m128i v16; // xmm0
  __m128 v17; // xmm1
  __int64 v18; // r8
  __int64 v19; // r9
  const char *v20; // rax
  int *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __m128 si128; // xmm5
  __int64 v25; // rax
  __int64 v26; // r12
  __int64 v27; // rax
  __int64 v28; // r12
  __m128i *v30; // rbx
  __int64 v31; // rdi
  char v32; // al
  __m128 v33; // [rsp+0h] [rbp-228h] BYREF
  __m128i *v34; // [rsp+10h] [rbp-218h]
  _BYTE *v35; // [rsp+18h] [rbp-210h]
  __int64 v36; // [rsp+28h] [rbp-200h] BYREF
  __int64 v37; // [rsp+30h] [rbp-1F8h] BYREF
  char v38; // [rsp+38h] [rbp-1F0h]
  const char *v39; // [rsp+40h] [rbp-1E8h] BYREF
  __int128 v40; // [rsp+48h] [rbp-1E0h]
  __int64 v41; // [rsp+60h] [rbp-1C8h] BYREF
  __int128 v42; // [rsp+68h] [rbp-1C0h]
  __m128i v43; // [rsp+80h] [rbp-1A8h] BYREF
  const char *v44; // [rsp+90h] [rbp-198h]
  __int128 v45; // [rsp+98h] [rbp-190h]
  __int64 v46; // [rsp+A8h] [rbp-180h]
  __int128 v47; // [rsp+B0h] [rbp-178h]
  __int128 v48[3]; // [rsp+C0h] [rbp-168h] BYREF
  __int64 v49; // [rsp+F0h] [rbp-138h]
  int v50; // [rsp+F8h] [rbp-130h]
  __int64 v51; // [rsp+100h] [rbp-128h]
  char v52; // [rsp+108h] [rbp-120h]
  __int64 (__fastcall **v53)(); // [rsp+110h] [rbp-118h] BYREF
  __int64 v54; // [rsp+118h] [rbp-110h]
  __int128 v55; // [rsp+120h] [rbp-108h]
  __int64 v56; // [rsp+130h] [rbp-F8h]
  __m128i *v57; // [rsp+138h] [rbp-F0h]
  int v58; // [rsp+140h] [rbp-E8h]
  __m128i v59; // [rsp+148h] [rbp-E0h] BYREF
  int v60; // [rsp+158h] [rbp-D0h]
  _BYTE v61[72]; // [rsp+160h] [rbp-C8h] BYREF
  char v62; // [rsp+1A8h] [rbp-80h] BYREF
  int v63; // [rsp+1C0h] [rbp-68h] BYREF
  __m128 v64; // [rsp+1C8h] [rbp-60h]
  __int64 v65; // [rsp+1D8h] [rbp-50h]
  __int16 v66; // [rsp+1E0h] [rbp-48h]
  unsigned __int64 v67; // [rsp+1E8h] [rbp-40h]

  v67 = __readfsqword(0x28u);
  if ( !a1 || a2 == (__m128i *)-1LL )
    return -1;
  v11 = 0.0;
  v36 = 0;
  v13 = &v43;
  v44 = nullptr;
  v46 = 0;
  v49 = 1;
  v50 = -1;
  v51 = 0;
  v52 = 0;
  v34 = &v43;
  v43 = 0;
  v45 = 0;
  v47 = 0;
  v48[0] = 0;
  v14 = (__m128)_mm_unpacklo_epi64(
                  (__m128i)(unsigned __int64)&xref_chooser_t___vtable_at__184,
                  (__m128i)(unsigned __int64)&v41);
  v33 = v14;
  if ( get_udm_by_tid(&v36, &v43, a2) != -1 )
  {
    v15 = &s1;
    v39 = nullptr;
    v40 = 0;
    if ( (_QWORD)v45 )
      v15 = v44;
    sub_169A50((__int64 *)&v39, (__int64)"xrefs to %s", v15);
    v41 = 0;
    v42 = 0;
    v16 = _mm_load_si128(&v43);
    v17 = (__m128)_mm_add_epi64(_mm_srli_si128(v16, 8), v16);
    build_stkvar_xrefs(&v41, a1, (unsigned __int64)v16.m128i_i64[0] >> 3, v17.m128_u64[0] >> 3);
    v20 = &s1;
    if ( (_QWORD)v40 )
      v20 = v39;
    v57 = (__m128i *)v20;
    v55 = -1;
    v21 = (int *)v61;
    v53 = (__int64 (__fastcall **)())&stru_86F6A0;
    v54 = 0x20003FF000004LL;
    v56 = 0;
    v58 = 4;
    v60 = -1;
    v35 = v61;
    v59 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_86A468), (__m128i)(unsigned __int64)&off_86A440);
    v11 = 0.0;
    do
    {
      *(_QWORD *)v21 = 0;
      v21 += 6;
      *((_OWORD *)v21 - 1) = 0;
    }
    while ( &v63 != v21 );
    v22 = HIDWORD(v54);
    v63 = 0;
    v23 = ((HIDWORD(v54) >> 19) & 0x3F) - 1;
    if ( ((HIDWORD(v54) >> 19) & 0x3F) != 0 )
    {
      if ( BYTE3(v54) != 0xFF )
      {
        if ( !under_debugger )
          interr(3449, a1, HIDWORD(v54), v23, 0.0);
        BUG();
      }
      v22 = HIDWORD(v54) & 0xFE07FFFF;
      BYTE3(v54) = ((HIDWORD(v54) >> 19) & 0x3F) - 1;
      HIDWORD(v54) &= 0xFE07FFFF;
    }
    si128 = (__m128)_mm_load_si128((const __m128i *)&v33);
    v53 = xref_chooser_t___vtable;
    v60 = 55;
    v63 = 2;
    v65 = -1;
    v66 = 0;
    v64 = si128;
    if ( (_QWORD)v42 )
    {
      v13 = a2;
      v25 = sub_3EBDF0((__int64)&v53);
      if ( v25 >= 0 && (unsigned __int64)v25 < *(_QWORD *)(v64.m128_u64[1] + 8) )
      {
        v26 = *(_QWORD *)v64.m128_u64[1] + 16 * v25;
        if ( v25 )
        {
          v32 = *(_BYTE *)(v26 + 9);
          v13 = (__m128i *)&v37;
          v37 = *(_QWORD *)v26;
          v38 = v32;
          set_xrefpos(a2, &v37, 0.0);
        }
        else
        {
          v27 = ea2node(a2);
          v13 = (__m128i *)(&off_18 + 3);
          netnode_supdel(v27, 27, 83);
        }
        v28 = *(_QWORD *)v26;
LABEL_22:
        v64.m128_u64[0] = (unsigned __int64)&xref_chooser_t___vtable_at__184;
        v30 = (__m128i *)&v62;
        v53 = (__int64 (__fastcall **)())&stru_86F6A0;
        do
        {
          v31 = v30->m128i_i64[0];
          if ( v30->m128i_i64[0] )
          {
            v30->m128i_i64[1] = 0;
            v11 = qfree(v31, v13->m128i_i8, v11);
          }
          v30 = (__m128i *)((char *)v30 - 24);
        }
        while ( &v59 != v30 );
        if ( v41 )
        {
          *(_QWORD *)&v42 = 0;
          v11 = qfree(v41, v13->m128i_i8, v11);
        }
        if ( v39 )
        {
          *(_QWORD *)&v40 = 0;
          v11 = qfree(v39, v13->m128i_i8, v11);
        }
        goto LABEL_30;
      }
    }
    else
    {
      v13 = v57;
      sub_169630(
        (int)"There are no %s",
        (__int64)v57,
        v22,
        v23,
        v18,
        v19,
        (__m128)0LL,
        v17,
        v14,
        (__m128)(unsigned __int64)&v41,
        (__m128)(unsigned __int64)&off_86A440,
        si128,
        a9,
        a10,
        v33.m128_i8[0]);
    }
    v28 = -1;
    goto LABEL_22;
  }
  v28 = -1;
LABEL_30:
  clear_tinfo_t(v48);
  if ( v46 )
  {
    *(_QWORD *)&v47 = 0;
    v11 = qfree(v46, v13->m128i_i8, v11);
  }
  if ( v44 )
  {
    *(_QWORD *)&v45 = 0;
    qfree(v44, v13->m128i_i8, v11);
  }
  clear_tinfo_t(&v36);
  return v28;
}
