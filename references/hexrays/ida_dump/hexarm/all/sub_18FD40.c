unsigned __int64 __fastcall sub_18FD40(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 v2; // rax
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __m128 v7; // xmm1
  __m128i v8; // xmm0
  unsigned __int64 v9; // rbp
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // r12
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __m128i v18; // xmm0
  __int64 v19; // rax
  __m128i v20; // xmm0
  __int64 v21; // rax
  __m128i v22; // xmm0
  _QWORD *v23; // rdi
  __int64 v24; // rax
  __m128i v25; // xmm0
  __m128i v26; // xmm0
  __int64 v27; // rax
  __m128i v28; // xmm0
  __m128i v29; // xmm0
  __int64 v31; // r12
  __int64 v32; // r14
  __int64 v33; // r15
  __int64 v34; // rax
  unsigned __int64 v35; // rbp
  __int64 v36; // rdx
  __int64 v37; // rax
  __m128i v38; // xmm0
  __int64 v39; // rbp
  __int64 v40; // rdx
  _QWORD *v41; // rax
  const __m128i *v42; // r13
  _QWORD *v43; // rax
  unsigned __int64 v44; // rdx
  __int64 v45; // rax
  _QWORD *v46; // rdx
  unsigned __int64 v47; // rbp
  unsigned __int64 v48; // rbp
  __int64 v49; // rax
  __int64 v50; // r13
  __int64 v51; // r14
  __int64 v52; // rax
  bool v53; // cc
  __int64 v54; // rbp
  __int64 v55; // r12
  unsigned __int64 v56; // r13
  unsigned __int64 v57; // r14
  unsigned __int64 v58; // rbx
  unsigned int i; // eax
  _QWORD *v60; // rdx
  unsigned __int64 v61; // rdx
  int v62; // eax
  int v63; // ebx
  unsigned int v64; // eax
  __int64 v65; // rdi
  __int64 v66; // rbp
  __int64 v67; // rbx
  __int64 v68; // rax
  _QWORD *v69; // rdi
  __int64 v70; // rdi
  __int64 v71; // r12
  __int64 v72; // rbp
  __int64 v73; // rbx
  _QWORD *v74; // rdi
  _QWORD *v76; // rsi
  __int64 v77; // [rsp+0h] [rbp-1C8h] BYREF
  __int64 v78; // [rsp+8h] [rbp-1C0h]
  __int64 v79; // [rsp+10h] [rbp-1B8h]
  _QWORD *v80; // [rsp+18h] [rbp-1B0h]
  __int64 v81; // [rsp+20h] [rbp-1A8h] BYREF
  __int128 v82; // [rsp+28h] [rbp-1A0h]
  __int64 v83; // [rsp+40h] [rbp-188h] BYREF
  __int64 v84; // [rsp+48h] [rbp-180h] BYREF
  __int128 v85; // [rsp+50h] [rbp-178h]
  __int64 v86; // [rsp+60h] [rbp-168h] BYREF
  __int128 v87; // [rsp+68h] [rbp-160h]
  _QWORD *v88; // [rsp+78h] [rbp-150h] BYREF
  __int128 v89; // [rsp+80h] [rbp-148h]
  __m128 v90; // [rsp+90h] [rbp-138h]
  __int64 v91; // [rsp+A0h] [rbp-128h]
  __int128 v92; // [rsp+B0h] [rbp-118h] BYREF
  __int128 v93; // [rsp+C0h] [rbp-108h]
  __int128 v94; // [rsp+D0h] [rbp-F8h] BYREF
  __int64 v95; // [rsp+E0h] [rbp-E8h]
  __int64 v96; // [rsp+E8h] [rbp-E0h]
  __int64 v97; // [rsp+F0h] [rbp-D8h]
  __int128 v98; // [rsp+F8h] [rbp-D0h]
  __int64 v99; // [rsp+108h] [rbp-C0h]
  __int64 v100; // [rsp+110h] [rbp-B8h]
  __int64 v101; // [rsp+118h] [rbp-B0h]
  __int128 v102; // [rsp+120h] [rbp-A8h]
  __int64 v103; // [rsp+130h] [rbp-98h]
  __int128 v104; // [rsp+138h] [rbp-90h]
  __int64 v105; // [rsp+148h] [rbp-80h]
  __m128i v106; // [rsp+150h] [rbp-78h]
  __int64 v107; // [rsp+160h] [rbp-68h]
  __int64 v108; // [rsp+168h] [rbp-60h]
  __int64 v109; // [rsp+170h] [rbp-58h]
  __int64 v110; // [rsp+178h] [rbp-50h]
  char v111; // [rsp+180h] [rbp-48h]
  unsigned __int64 v112; // [rsp+188h] [rbp-40h]

  v1 = *(int *)(a1 + 116);
  v80 = (_QWORD *)a1;
  v112 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 128);
  if ( v2 == v1 )
    return v112 - __readfsqword(0x28u);
  v83 = a1;
  v4 = *(_QWORD *)(a1 + 136);
  v5 = *(_QWORD *)(a1 + 40);
  v6 = *(_QWORD *)(a1 + 1472);
  v84 = 0;
  v77 = v4;
  v86 = 0;
  v88 = nullptr;
  v7 = _mm_loadh_ps((const double *)&v77);
  v91 = v5;
  v93 = 0u;
  v95 = 0;
  v96 = 0;
  v97 = 0;
  v99 = 0;
  v100 = 0;
  v101 = 0;
  v103 = 0;
  v85 = 0;
  v87 = 0;
  v89 = 0;
  v90 = v7;
  v92 = 0;
  v94 = 0;
  v98 = 0;
  v102 = 0;
  v104 = 0;
  v8 = _mm_loadl_epi64((const __m128i *)(v6 + 8));
  v105 = a1;
  v107 = v4;
  v106 = _mm_unpacklo_epi64(v8, (__m128i)v2);
  v108 = v5;
  v9 = *(int *)(a1 + 64);
  v109 = 0;
  v110 = -1;
  v111 = 0;
  if ( v9 )
  {
    v10 = qvector_reserve(&v84, 0, v9, 216);
    v11 = *((_QWORD *)&v85 + 1);
    *((_QWORD *)&v85 + 1) = 0;
    v12 = v84;
    v77 = v11;
    v13 = v85 - 1;
    if ( (__int64)v85 - 1 >= 0 )
    {
      v14 = v10;
      do
      {
        *(_QWORD *)v14 = *(_QWORD *)v12;
        v15 = *(_QWORD *)(v12 + 8);
        *(_QWORD *)(v12 + 8) = 0;
        *(_QWORD *)(v14 + 8) = v15;
        v16 = *(_QWORD *)(v12 + 16);
        *(_QWORD *)(v12 + 16) = 0;
        *(_QWORD *)(v14 + 16) = v16;
        v17 = *(_QWORD *)(v12 + 24);
        v18 = _mm_loadu_si128((const __m128i *)(v12 + 32));
        *(_QWORD *)(v12 + 24) = 0;
        *(_QWORD *)(v14 + 24) = v17;
        *(__m128i *)(v14 + 32) = v18;
        *(_OWORD *)(v12 + 32) = 0;
        v78 = v14 + 48;
        sub_63A00((__int64 *)(v14 + 48), v12 + 48);
        v19 = *(_QWORD *)(v12 + 64);
        v20 = _mm_loadu_si128((const __m128i *)(v12 + 72));
        *(_QWORD *)(v12 + 64) = 0;
        *(_QWORD *)(v14 + 64) = v19;
        *(__m128i *)(v14 + 72) = v20;
        *(_OWORD *)(v12 + 72) = 0;
        sub_63A00((__int64 *)(v14 + 88), v12 + 88);
        v21 = *(_QWORD *)(v12 + 104);
        v22 = _mm_loadu_si128((const __m128i *)(v12 + 112));
        v23 = (_QWORD *)v12;
        *(_QWORD *)(v12 + 104) = 0;
        v14 += 216;
        v12 += 216;
        *(_QWORD *)(v14 - 112) = v21;
        *(__m128i *)(v14 - 104) = v22;
        v24 = *(_QWORD *)(v12 - 88);
        v25 = _mm_loadu_si128((const __m128i *)(v12 - 80));
        *(_OWORD *)(v12 - 104) = 0;
        *(_QWORD *)(v14 - 88) = v24;
        *(__m128i *)(v14 - 80) = v25;
        v26 = _mm_loadu_si128((const __m128i *)(v12 - 64));
        v27 = *(_QWORD *)(v12 - 16);
        *(_QWORD *)(v12 - 88) = 0;
        *(_OWORD *)(v12 - 80) = 0;
        *(__m128i *)(v14 - 64) = v26;
        v28 = _mm_loadu_si128((const __m128i *)(v12 - 48));
        *(_QWORD *)(v14 - 16) = v27;
        LOBYTE(v27) = *(_BYTE *)(v12 - 8);
        *(__m128i *)(v14 - 48) = v28;
        v29 = _mm_loadu_si128((const __m128i *)(v12 - 32));
        *(_BYTE *)(v14 - 8) = v27;
        *(__m128i *)(v14 - 32) = v29;
        sub_18CB10(v23);
      }
      while ( v13-- != 0 );
      v12 = v84;
    }
    qfree(v12);
    v31 = v85;
    v84 = v10;
    *((_QWORD *)&v85 + 1) = v77;
    if ( (unsigned __int64)v85 < v9 )
    {
      v32 = 216 * v85;
      while ( 1 )
      {
        sub_18F8D0(v10 + v32, (__int64 *)&v92);
        ++v31;
        v32 += 216;
        if ( v9 == v31 )
          break;
        v10 = v84;
      }
    }
    *(_QWORD *)&v85 = v9;
  }
  sub_18CB10(&v92);
  v33 = v83;
  v34 = v89;
  v35 = *(_QWORD *)(v83 + 1480);
  if ( (unsigned __int64)v89 < v35 )
  {
    v76 = v88;
    if ( *((_QWORD *)&v89 + 1) < v35 )
    {
      v88 = (_QWORD *)qvector_reserve(&v88, v88, *(_QWORD *)(v83 + 1480), 8);
      v76 = v88;
      v34 = v89;
    }
    memset(&v76[v34], 0, 8 * (v35 - v34));
    *(_QWORD *)&v89 = v35;
    v33 = v83;
  }
  else
  {
    if ( v35 != (_QWORD)v89 )
      *(_QWORD *)&v89 = *(_QWORD *)(v83 + 1480);
    if ( !v35 )
      goto LABEL_18;
  }
  v36 = 0;
  v37 = 0;
  do
  {
    v38 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(v33 + 1472) + v36 + 8));
    v36 += 40;
    v88[v37++] = _mm_add_epi64(v38, _mm_srli_si128(v38, 8)).m128i_u64[0];
    v33 = v83;
  }
  while ( v35 != v37 );
LABEL_18:
  v39 = *(int *)(v33 + 64);
  v40 = 0;
  v81 = 0;
  v82 = 0;
  if ( v39 )
  {
    v81 = qvector_reserve(&v81, 0, v39, 32);
    memset((void *)(v81 + 32 * v82), 0, 32 * (v39 - v82));
    *(_QWORD *)&v82 = v39;
    v40 = v81;
    v33 = v83;
  }
  v41 = *(_QWORD **)(v33 + 520);
  if ( v41 )
  {
    do
    {
      v40 += 32;
      *(_QWORD *)(v40 - 32) = v41[42];
      *(_QWORD *)(v40 - 24) = v41[41];
      *(_QWORD *)(v40 - 16) = v41[65];
      *(_QWORD *)(v40 - 8) = v41[64];
      v41 = (_QWORD *)v41[1];
    }
    while ( v41 );
    v33 = v83;
    v42 = *(const __m128i **)(v83 + 520);
    if ( v42 )
    {
      do
      {
        v43 = (_QWORD *)sub_18B320(&v83, v42);
        if ( v43[21] < v90.m128_i64[0] )
          v90.m128_u64[0] = v43[21];
        if ( v43[22] < v90.m128_i64[1] )
        {
          v90.m128_u64[1] = v43[22];
          v91 = v43[23];
        }
        v44 = v43[24];
        if ( v44 )
        {
          if ( v44 >= (unsigned __int64)v89 )
          {
            if ( !under_debugger )
              sub_3835A0(52722);
LABEL_88:
            BUG();
          }
          v45 = v43[25];
          v46 = &v88[v44];
          if ( *v46 > v45 )
            *v46 = v45;
        }
        v47 = v90.m128_u64[1];
        if ( v90.m128_u64[1] )
        {
          while ( (unsigned __int8)sub_317400(&v86, v47) )
          {
            if ( !--v47 )
              goto LABEL_81;
          }
        }
        else
        {
LABEL_81:
          v47 = 0;
        }
        v90.m128_u64[1] = v47;
        v42 = (const __m128i *)v42->m128i_i64[1];
      }
      while ( v42 );
      v33 = v83;
    }
  }
  v48 = *(int *)(v33 + 64);
  *((_QWORD *)&v92 + 1) = 0;
  *(_QWORD *)&v92 = &unk_4E7D80;
  v94 = 0u;
  LODWORD(v95) = v48;
  v96 = 0;
  v97 = 0;
  LODWORD(v98) = v48;
  DWORD2(v98) = 1;
  v93 = 0;
  if ( v48 )
  {
    v49 = qvector_reserve((char *)&v92 + 8, 0, v48, 24);
    v50 = v93;
    *((_QWORD *)&v92 + 1) = v49;
    if ( (unsigned __int64)v93 < v48 )
    {
      while ( 1 )
      {
        v51 = v49 + 24 * v50;
        sub_63A00((__int64 *)v51, (__int64)&v94);
        ++v50;
        *(_DWORD *)(v51 + 16) = v95;
        if ( v48 == v50 )
          break;
        v49 = *((_QWORD *)&v92 + 1);
      }
    }
    *(_QWORD *)&v93 = v48;
  }
  *(_QWORD *)&v92 = &off_4D87A0;
  v52 = sub_66AE0((_QWORD *)v33);
  sub_311B20(v52, &v92);
  v53 = *(_DWORD *)(v33 + 64) <= 1;
  v78 = 0;
  v77 = 0;
  v79 = v81;
  if ( !v53 )
  {
    while ( 1 )
    {
      v54 = *(_QWORD *)(*(_QWORD *)(v33 + 528) + v78);
      v55 = *((_QWORD *)&v92 + 1) + 3 * v78;
      v56 = *(_QWORD *)(v54 + 336);
      v57 = *(_QWORD *)(v54 + 328);
      v58 = *(_QWORD *)(v54 + 520);
      for ( i = sub_64360((_QWORD *)v55, 0); i != *(_DWORD *)(v55 + 8); i = sub_64360((_QWORD *)v55, i + 1) )
      {
        if ( i >= *(_DWORD *)(v33 + 64) )
        {
          if ( !under_debugger )
            sub_3835A0(52719);
          goto LABEL_88;
        }
        v60 = *(_QWORD **)(*(_QWORD *)(v33 + 528) + 8LL * i);
        if ( v56 > v60[42] )
          v56 = v60[42];
        if ( v57 > v60[41] )
          v57 = v60[41];
        if ( *(_QWORD *)(v54 + 512) == v60[64] )
        {
          v61 = v60[65];
          if ( v58 > v61 )
            v58 = v61;
        }
      }
      if ( v56 != *(_QWORD *)(v79 + 4 * v78) || v57 != *(_QWORD *)(v79 + 4 * v78 + 8) )
      {
        v62 = *(_DWORD *)(v54 + 24);
        BYTE1(v62) &= ~2u;
        LOBYTE(v62) = v62 | 0x80;
        *(_DWORD *)(v54 + 24) = v62;
      }
      *(_QWORD *)(v54 + 520) = v58;
      v63 = v77;
      *(_QWORD *)(v54 + 336) = v56;
      *(_QWORD *)(v54 + 328) = v57;
      v64 = *(_DWORD *)(v33 + 64);
      if ( (int)v64 <= v63 + 2 )
        break;
      ++v77;
      v78 += 8;
      if ( (unsigned int)v77 >= v64 )
      {
        if ( !under_debugger )
          sub_3835A0(52719);
        goto LABEL_88;
      }
    }
  }
  *(_QWORD *)&v92 = &unk_4E7D80;
  qfree(v96);
  qfree(v94);
  v65 = *((_QWORD *)&v92 + 1);
  if ( *((_QWORD *)&v92 + 1) )
  {
    v66 = v93;
    if ( (_QWORD)v93 )
    {
      v67 = 0;
      do
      {
        v68 = 3 * v67++;
        qfree(*(_QWORD *)(v65 + 8 * v68));
        v65 = *((_QWORD *)&v92 + 1);
      }
      while ( v66 != v67 );
    }
    *(_QWORD *)&v93 = 0;
    qfree(v65);
  }
  if ( v81 )
  {
    *(_QWORD *)&v82 = 0;
    qfree(v81);
  }
  v69 = v80;
  *v88 = v90.m128_u64[1];
  sub_18D140(v69, &v88, v90.m128_i64[0]);
  if ( v88 )
  {
    *(_QWORD *)&v89 = 0;
    qfree(v88);
  }
  if ( v86 )
  {
    *(_QWORD *)&v87 = 0;
    qfree(v86);
  }
  v70 = v84;
  if ( v84 )
  {
    v71 = v85;
    if ( (_QWORD)v85 )
    {
      v72 = 0;
      v73 = 0;
      do
      {
        v74 = (_QWORD *)(v72 + v70);
        ++v73;
        v72 += 216;
        sub_18CB10(v74);
        v70 = v84;
      }
      while ( v71 != v73 );
    }
    *(_QWORD *)&v85 = 0;
    qfree(v70);
  }
  return v112 - __readfsqword(0x28u);
}
