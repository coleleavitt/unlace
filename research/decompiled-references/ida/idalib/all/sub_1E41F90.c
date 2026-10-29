__int64 __fastcall sub_1E41F90(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __m128 a4,
        __m128 a5,
        __m128i a6,
        __m128i a7,
        double a8,
        double a9,
        __m128 a10,
        __m128i a11)
{
  unsigned __int64 v13; // rbx
  __int64 v14; // r12
  unsigned int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // r12
  unsigned int *v21; // r15
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // r13
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // r15
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rdx
  double v34; // xmm4_8
  double v35; // xmm5_8
  _BYTE *v37; // rdi
  __int64 v38; // rax
  int v39; // r8d
  int v40; // r8d
  int v41; // r9d
  unsigned int i; // edx
  __int64 v43; // rdi
  unsigned int v44; // edx
  __int64 v45; // rdx
  __int64 v46; // rcx
  int v47; // r15d
  unsigned __int64 v48; // rax
  __int64 v49; // r13
  unsigned __int64 v50; // xmm4_8
  __int64 v51; // xmm5_8^8
  __int64 v52; // rax
  _QWORD *v53; // r13
  _QWORD *v54; // r12
  _QWORD *v55; // r13
  _QWORD *v56; // r12
  __m128 *v57; // rdi
  __m128 *v58; // rsi
  __m128 si128; // xmm0
  __int64 j; // rcx
  __m128 v61; // [rsp+0h] [rbp-188h] BYREF
  unsigned __int64 v62; // [rsp+10h] [rbp-178h]
  int v63; // [rsp+1Ch] [rbp-16Ch]
  __m128 v64; // [rsp+20h] [rbp-168h] BYREF
  __m128i v65; // [rsp+30h] [rbp-158h] BYREF
  __m128i v66; // [rsp+40h] [rbp-148h] BYREF
  __m128i v67; // [rsp+50h] [rbp-138h] BYREF
  __m128i v68; // [rsp+60h] [rbp-128h] BYREF
  __m128i v69; // [rsp+70h] [rbp-118h] BYREF
  __m128i v70; // [rsp+80h] [rbp-108h] BYREF
  __int64 v71; // [rsp+90h] [rbp-F8h]
  __int64 v72; // [rsp+B8h] [rbp-D0h]
  __m128 v73; // [rsp+D0h] [rbp-B8h] BYREF
  __m128 v74; // [rsp+E0h] [rbp-A8h]
  __m128 v75; // [rsp+F0h] [rbp-98h]
  unsigned __int64 v76; // [rsp+100h] [rbp-88h]
  __m128 v77; // [rsp+108h] [rbp-80h]
  __int64 v78; // [rsp+118h] [rbp-70h]
  __m128 v79; // [rsp+120h] [rbp-68h]
  __m128i v80; // [rsp+130h] [rbp-58h]
  __int64 v81; // [rsp+140h] [rbp-48h]

  v13 = a2;
  *(_BYTE *)(a2 + 29) = *(_BYTE *)(a3 + 29) & 2 | *(_BYTE *)(a2 + 29) & 0xFD;
  v14 = *(_QWORD *)(*a1 + 248);
  v15 = sub_A8BD70(v14, a3, 0);
  sub_AB9320(v14, a2, v15, v16, v17, v18);
  v20 = *a1;
  v21 = (unsigned int *)(*(_QWORD *)(*a1 + 11312) + ((unsigned __int64)*(unsigned int *)(*a1 + 11320) << 6) - 64);
  if ( *v21 - 3 <= 1 )
  {
    v37 = *((_BYTE **)v21 + 2);
    if ( (v37[28] & 0x7F) == 0x47 )
    {
      v38 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v37 + 32LL))(v37);
      v39 = *(_DWORD *)(v20 + 12368);
      v19 = *v21;
      a2 = *(_QWORD *)(v20 + 12352);
      if ( v39 )
      {
        v40 = v39 - 1;
        v41 = 1;
        for ( i = v40
                & (((0xBF58476D1CE4E5B9LL
                   * ((unsigned int)(37 * v19)
                    | ((unsigned __int64)(((unsigned int)v38 >> 9) ^ ((unsigned int)v38 >> 4)) << 32))) >> 31)
                 ^ (756364221 * v19)); ; i = v40 & v44 )
        {
          v43 = a2 + 16LL * i;
          if ( v38 == *(_QWORD *)v43 && (_DWORD)v19 == *(_DWORD *)(v43 + 8) )
            break;
          if ( *(_QWORD *)v43 == -4096 && *(_DWORD *)(v43 + 8) == -1 )
            goto LABEL_27;
          v44 = v41 + i;
          ++v41;
        }
        *(_QWORD *)v43 = -8192;
        *(_DWORD *)(v43 + 8) = -2;
        --*(_DWORD *)(v20 + 12360);
        ++*(_DWORD *)(v20 + 12364);
      }
LABEL_27:
      v53 = *(_QWORD **)(*a1 + 12616);
      v54 = *(_QWORD **)(*a1 + 12608);
      for ( v61.m128_u64[0] = *a1; v53 != v54; ++v54 )
      {
        if ( *v54 )
        {
          a2 = v61.m128_u64[0];
          (*(void (__fastcall **)(_QWORD, unsigned __int64, unsigned int *, __int64))(*(_QWORD *)*v54 + 40LL))(
            *v54,
            v61.m128_u64[0],
            v21,
            v19);
        }
      }
      *v21 = 0;
      *((_QWORD *)v21 + 2) = v13;
      v55 = *(_QWORD **)(*a1 + 12616);
      v56 = *(_QWORD **)(*a1 + 12608);
      for ( v61.m128_u64[0] = *a1; v55 != v56; ++v56 )
      {
        if ( *v56 )
        {
          a2 = v61.m128_u64[0];
          (*(void (__fastcall **)(_QWORD, unsigned __int64, unsigned int *, __int64))(*(_QWORD *)*v56 + 32LL))(
            *v56,
            v61.m128_u64[0],
            v21,
            v19);
        }
      }
    }
  }
  v22 = *(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL;
  v23 = *(_QWORD *)v22;
  if ( *(_BYTE *)(*(_QWORD *)v22 + 16LL) != 26 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v23 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 26 )
      BUG();
    v23 = sub_F63050(v23, a2, v23, v19);
  }
  if ( (*(_BYTE *)(v23 + 19) & 0x1E) != 0 || (*(_BYTE *)(v23 + 21) & 1) != 0 )
  {
    v24 = v23;
    v61.m128_u64[0] = v23;
    sub_A5E110(&v73, v23);
    v25 = *a1;
    v26 = v61.m128_u64[0];
    if ( (*(_BYTE *)(*(_QWORD *)(*a1 + 232) + 1LL) & 0x10) == 0 || v74.m128_i32[2] <= 1u || v74.m128_i32[2] == 5 )
    {
LABEL_8:
      v27 = *(_QWORD *)(v25 + 9944);
      v28 = *(_QWORD *)(v25 + 512);
      *(_QWORD *)(v25 + 512) = 0;
      v29 = *(_QWORD *)(v25 + 544);
      *(_QWORD *)(v25 + 9944) = 0;
      v72 = v27;
      *(_QWORD *)(v25 + 544) = v13 + 72;
      LODWORD(v27) = *(_DWORD *)(v25 + 40);
      v61.m128_u64[0] = v28;
      LODWORD(v28) = *(_DWORD *)(v25 + 80);
      *(_DWORD *)(v25 + 80) = v27;
      LODWORD(v27) = *(_DWORD *)(v25 + 3688);
      LODWORD(v62) = v28;
      LODWORD(v28) = *(_DWORD *)(v25 + 2632);
      *(_DWORD *)(v25 + 2632) = v27;
      v30 = a1[4];
      v31 = *a1;
      v63 = v28;
      sub_1DE2C90(v31, v13, v26, v30);
      if ( v29 )
      {
        v32 = v61.m128_u64[0];
        v33 = v72;
        *(_QWORD *)(v25 + 544) = v29;
        *(_QWORD *)(v25 + 512) = v32;
        LODWORD(v32) = v62;
        *(_QWORD *)(v25 + 9944) = v33;
        *(_DWORD *)(v25 + 80) = v32;
        *(_DWORD *)(v25 + 2632) = v63;
      }
      goto LABEL_10;
    }
    if ( (unsigned __int8)sub_B8E290(a3) )
    {
      v25 = *a1;
      v26 = v61.m128_u64[0];
      goto LABEL_8;
    }
    v47 = v74.m128_i32[2];
    if ( v74.m128_i32[2] == 10 )
    {
      v61.m128_u64[0] = v77.m128_u64[1];
    }
    else
    {
      v61.m128_u64[0] = a3;
      if ( v74.m128_i32[2] != 9 )
        v47 = 10;
    }
    v48 = *(_QWORD *)(v13 + 48) & 0xFFFFFFFFFFFFFFF0LL;
    v49 = *(_QWORD *)v48;
    if ( *(_BYTE *)(*(_QWORD *)v48 + 16LL) != 26 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v49 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 26 )
      {
        v62 = v13;
        v61 = _mm_loadh_ps((const double *)v61.m128_u64);
        sub_A5E110(&v64, 0);
        v57 = &v73;
        v58 = &v64;
        si128 = (__m128)_mm_load_si128((const __m128i *)&v61);
        for ( j = 30; j; --j )
        {
          v57->m128_i32[0] = v58->m128_i32[0];
          v58 = (__m128 *)((char *)v58 + 4);
          v57 = (__m128 *)((char *)v57 + 4);
        }
        v74.m128_i32[2] = v47;
        v77 = si128;
        BUG();
      }
      v49 = sub_F63050(v49, v24, v45, v46);
    }
    v62 = v13;
    v61 = _mm_loadh_ps((const double *)v61.m128_u64);
    sub_A5E110(&v64, v49);
    a4 = (__m128)_mm_load_si128((const __m128i *)&v61);
    a5 = (__m128)_mm_loadu_si128((const __m128i *)&v64);
    a6 = _mm_loadu_si128(&v65);
    v81 = v71;
    a7 = _mm_loadu_si128(&v66);
    v50 = _mm_loadu_si128(&v67).m128i_u64[0];
    v51 = _mm_loadu_si128(&v68).m128i_i64[1];
    v74 = (__m128)a6;
    a10 = (__m128)_mm_loadu_si128(&v69);
    v52 = *a1;
    v73 = a5;
    a11 = _mm_loadu_si128(&v70);
    v76 = v50;
    v78 = v51;
    v75 = (__m128)a7;
    v79 = a10;
    v80 = a11;
    v74.m128_i32[2] = v47;
    v77 = a4;
    *(_QWORD *)(v13 + 48) = sub_A73610(
                              *(_QWORD *)(v52 + 248),
                              *(_QWORD *)(v49 + 24),
                              (__int64 *)(v49 + 48),
                              *(unsigned __int16 *)(v49 + 22),
                              (const __m128i *)&v73,
                              0);
  }
LABEL_10:
  v73.m128_u64[0] = a3;
  sub_B7D390(a3, (__int64)&v73, 0, v19);
  sub_1E40A90(
    *a1,
    (__int64 *)a1[4],
    v73.m128_i64[0],
    v13,
    a1[5],
    (_BYTE *)a1[6],
    a4,
    a5,
    *(double *)a6.m128i_i64,
    *(double *)a7.m128i_i64,
    v34,
    v35,
    a10,
    a11);
  return 0;
}
