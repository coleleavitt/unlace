unsigned __int64 __fastcall sub_1B6B20(__int64 a1, __int64 *a2, double a3, double a4, double a5, __m128 a6)
{
  int v7; // r12d
  int v9; // r11d
  __int64 *v10; // rax
  int v11; // r13d
  const char *v12; // r9
  __int64 v13; // rsi
  __int64 v14; // r12
  __int64 v15; // r13
  __int64 *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r13
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __m128i v25; // xmm1
  __int64 *v26; // r14
  __int64 v27; // rax
  __m128i si128; // xmm0
  __int64 v29; // r12
  __int64 v30; // rax
  __int64 v31; // rsi
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rdi
  __m128i v34; // xmm0
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rsi
  __int64 v38; // rdi
  __m128i v40; // xmm0
  __m128i v41; // xmm1
  __int64 v42; // rax
  __int64 v43; // rdi
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r13
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r13
  __m128 v50; // xmm0
  __int64 v51; // rdx
  __int64 v52; // rsi
  __int64 v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rsi
  __int64 v56; // r12
  __int64 v57; // r13
  __int64 *v58; // rax
  __int64 v59; // rcx
  __int64 v60; // r13
  __int64 v61; // rdx
  __int64 v62; // rsi
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rsi
  __m128 v66; // xmm0
  __int64 v67; // rax
  __int64 v68; // r13
  __int64 v69; // rax
  unsigned __int64 v70; // rdx
  __int64 v71; // r8
  __int64 *v72; // rax
  _QWORD *v73; // rax
  __int64 v74; // r8
  bool v75; // zf
  int v76; // edx
  int v77; // esi
  __int64 v78; // r9
  unsigned __int64 v79; // rdx
  __int64 v80; // rsi
  __int64 v81; // rax
  void *v82; // rax
  const void *v83; // rsi
  void *v84; // rax
  const void *v85; // rsi
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  char *v89; // r12
  char *v90; // r13
  __int64 v91; // rsi
  __int64 *v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rsi
  __int64 v95; // rax
  __int64 v96; // rcx
  __int64 v97; // rdx
  __m128i v98; // xmm0
  __int64 v99; // rax
  __int64 v100; // [rsp+0h] [rbp-C0h]
  __m128i v101; // [rsp+8h] [rbp-B8h] BYREF
  __int64 *v102; // [rsp+18h] [rbp-A8h]
  __int64 v103; // [rsp+20h] [rbp-A0h] BYREF
  __m128i v104; // [rsp+28h] [rbp-98h]
  __int64 v105; // [rsp+40h] [rbp-80h] BYREF
  __int128 v106; // [rsp+48h] [rbp-78h]
  _BYTE v107[24]; // [rsp+60h] [rbp-60h] BYREF
  __int128 v108; // [rsp+78h] [rbp-48h]
  unsigned __int64 v109; // [rsp+88h] [rbp-38h]

  v7 = *(_DWORD *)(a1 + 72);
  v109 = __readfsqword(0x28u);
  v104 = 0;
  v103 = 0;
  if ( !v7 )
  {
    sub_6B870(&v103);
    v61 = a2[1];
    v62 = *a2;
    if ( a2[2] < (unsigned __int64)(v61 + 1) )
    {
      v86 = qvector_reserve((__int64)a2, v62, v61 + 1, 24);
      *a2 = v86;
      v61 = a2[1];
      v62 = v86;
    }
    v63 = v62 + 24 * v61;
    *(_QWORD *)v63 = 0;
    v64 = v103;
    *(_OWORD *)(v63 + 8) = 0;
    ++a2[1];
    v65 = *(_QWORD *)v63;
    *(_QWORD *)v63 = v64;
    v66 = (__m128)_mm_loadu_si128((const __m128i *)(v63 + 8));
    v103 = v65;
    *(__m128i *)(v63 + 8) = v104;
    v67 = *(_QWORD *)(a1 + 64);
    v104 = (__m128i)v66;
    v68 = *(_QWORD *)(v67 + 920);
    if ( v68 && *(_QWORD *)(v68 + 16) )
    {
      v102 = (__int64 *)v66.m128_u64[0];
      if ( v66.m128_u64[0] )
      {
        v71 = v66.m128_u64[0] + 14;
        v70 = v66.m128_u64[0] + 15;
        v102 = (__int64 *)(v66.m128_u64[0] - 1);
      }
      else
      {
        v70 = 16;
        v71 = 15;
      }
      if ( _mm_movehl_ps(a6, v66).m128_u64[0] < v70 )
      {
        v101.m128i_i64[0] = v71;
        v101.m128i_i64[1] = v70;
        v103 = qvector_reserve((__int64)&v103, v65, v70, 1);
        v71 = v101.m128i_i64[0];
        v65 = v103;
        v70 = v101.m128i_u64[1];
      }
      v104.m128i_i64[0] = v70;
      v72 = v102;
      *(_BYTE *)(v65 + v71) = 0;
      v73 = (__int64 *)((char *)v72 + v103);
      v74 = 0;
      *v73 = 0x45564153203B0301LL;
      *(_QWORD *)((char *)v73 + 7) = 0x203A534745524445LL;
      v75 = *(_QWORD *)(v68 + 16) == 0;
      v102 = (__int64 *)v107;
      if ( !v75 )
      {
        while ( 1 )
        {
          v76 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL) + 80LL);
          v77 = *(_DWORD *)(*(_QWORD *)(v68 + 8) + 4 * v74);
          *(_OWORD *)v107 = 0u;
          sub_63E80(v102, v77, v76);
          sub_64DF0((__int64)v102, (__int64)&v103);
          ++v7;
          qfree(*(__int64 *)v107);
          v74 = v7;
          if ( (unsigned __int64)v7 >= *(_QWORD *)(v68 + 16) )
            break;
          v78 = v104.m128i_i64[0];
          v79 = 2;
          if ( v104.m128i_i64[0] )
          {
            v79 = v104.m128i_i64[0] + 1;
            v78 = v104.m128i_i64[0] - 1;
          }
          v80 = v103;
          if ( v104.m128i_i64[1] < v79 )
          {
            v100 = v78;
            v101.m128i_i64[0] = v7;
            v101.m128i_i64[1] = v79;
            v103 = qvector_reserve((__int64)&v103, v103, v79, 1);
            v78 = v100;
            v80 = v103;
            v74 = v7;
            v79 = v101.m128i_u64[1];
          }
          v104.m128i_i64[0] = v79;
          *(_BYTE *)(v80 + v78) = 44;
          *(_BYTE *)(v103 + v78 + 1) = 0;
        }
      }
      v102 = (__int64 *)v104.m128i_i64[0];
      if ( v104.m128i_i64[0] )
      {
        v90 = (char *)v102 + 1;
        v89 = (char *)v102 + 2;
        v102 = (__int64 *)((char *)v102 - 1);
      }
      else
      {
        v89 = (_BYTE *)(&word_2 + 1);
        v90 = (char *)&word_2;
      }
      v91 = v103;
      if ( v104.m128i_i64[1] < (unsigned __int64)v89 )
      {
        v103 = qvector_reserve((__int64)&v103, v103, (__int64)v89, 1);
        v91 = v103;
      }
      v104.m128i_i64[0] = (__int64)v89;
      v92 = v102;
      v90[v91] = 0;
      *(_WORD *)((char *)v92 + v103) = 770;
      v93 = a2[1];
      v94 = *a2;
      if ( a2[2] < (unsigned __int64)(v93 + 1) )
      {
        v99 = qvector_reserve((__int64)a2, v94, v93 + 1, 24);
        *a2 = v99;
        v93 = a2[1];
        v94 = v99;
      }
      v95 = v94 + 24 * v93;
      *(_QWORD *)v95 = 0;
      v96 = v103;
      *(_OWORD *)(v95 + 8) = 0;
      ++a2[1];
      v97 = *(_QWORD *)v95;
      *(_QWORD *)v95 = v96;
      v98 = _mm_loadu_si128((const __m128i *)(v95 + 8));
      v103 = v97;
      *(__m128i *)(v95 + 8) = v104;
      v104 = v98;
    }
  }
  v9 = *(_DWORD *)(a1 + 24);
  v10 = (__int64 *)" EXTFRAME";
  v11 = *(_DWORD *)(a1 + 76);
  if ( (v9 & 0x40000) == 0 )
    v10 = (__int64 *)&unk_418793;
  v12 = " COMB";
  v102 = v10;
  if ( (v9 & 0x40) == 0 )
    v12 = (const char *)&unk_418793;
  v101.m128i_i64[1] = (__int64)v12;
  v101.m128i_i32[0] = v11 - 1;
  sub_6B870(&v103);
  if ( *(_DWORD *)(a1 + 352) )
  {
    v102 = (__int64 *)v104.m128i_i64[0];
    if ( v104.m128i_i64[0] )
    {
      v57 = v104.m128i_i64[0] + 9;
      v56 = v104.m128i_i64[0] + 10;
      v55 = v103;
      v102 = (__int64 *)(v104.m128i_i64[0] - 1);
      if ( v104.m128i_i64[1] >= (unsigned __int64)(v104.m128i_i64[0] + 10) )
        goto LABEL_57;
    }
    else
    {
      v55 = v103;
      v56 = 11;
      v57 = 10;
      if ( v104.m128i_i64[1] >= 0xBuLL )
        goto LABEL_57;
    }
    v103 = qvector_reserve((__int64)&v103, v55, v56, 1);
    v55 = v103;
LABEL_57:
    v104.m128i_i64[0] = v56;
    v58 = v102;
    *(_BYTE *)(v55 + v57) = 0;
    qmemcpy((char *)v58 + v103, " INBOUNDS:", 10);
    if ( *(int *)(a1 + 352) > 0 )
    {
      v59 = 0;
      do
      {
        v60 = v59;
        sub_FAAD0(&v103);
        v59 = v60 + 1;
      }
      while ( *(_DWORD *)(a1 + 352) > (int)v60 + 1 );
    }
  }
  if ( !*(_DWORD *)(a1 + 376) )
    goto LABEL_13;
  v102 = (__int64 *)v104.m128i_i64[0];
  if ( v104.m128i_i64[0] )
  {
    v15 = v104.m128i_i64[0] + 10;
    v14 = v104.m128i_i64[0] + 11;
    v13 = v103;
    v102 = (__int64 *)(v104.m128i_i64[0] - 1);
    if ( v104.m128i_i64[1] >= (unsigned __int64)(v104.m128i_i64[0] + 11) )
      goto LABEL_10;
  }
  else
  {
    v13 = v103;
    v14 = 12;
    v15 = 11;
    if ( v104.m128i_i64[1] >= 0xCuLL )
      goto LABEL_10;
  }
  v103 = qvector_reserve((__int64)&v103, v13, v14, 1);
  v13 = v103;
LABEL_10:
  v104.m128i_i64[0] = v14;
  v16 = v102;
  *(_BYTE *)(v13 + v15) = 0;
  qmemcpy((char *)v16 + v103, " OUTBOUNDS:", 11);
  if ( *(int *)(a1 + 376) > 0 )
  {
    v17 = 0;
    do
    {
      v18 = v17;
      sub_FAAD0(&v103);
      v17 = v18 + 1;
    }
    while ( *(_DWORD *)(a1 + 376) > (int)v18 + 1 );
  }
LABEL_13:
  v19 = *(_QWORD *)(a1 + 64);
  v101 = *(__m128i *)(a1 + 328);
  v102 = (__int64 *)v107;
  sub_1B6370((__int64)v107, v19);
  sub_1B6370((__int64)&v105, *(_QWORD *)(a1 + 64));
  sub_FAAD0(&v103);
  if ( v105 )
  {
    *(_QWORD *)&v106 = 0;
    qfree(v105);
  }
  if ( *(_QWORD *)v107 )
  {
    *(_QWORD *)&v107[8] = 0;
    qfree(*(__int64 *)v107);
  }
  if ( (*(_BYTE *)(a1 + 26) & 4) != 0 )
    sub_FAAD0(&v103);
  v20 = a2[1];
  v21 = *a2;
  if ( a2[2] < (unsigned __int64)(v20 + 1) )
  {
    v54 = qvector_reserve((__int64)a2, v21, v20 + 1, 24);
    *a2 = v54;
    v20 = a2[1];
    v21 = v54;
  }
  v22 = v21 + 24 * v20;
  *(_QWORD *)v22 = 0;
  v23 = v103;
  *(_OWORD *)(v22 + 8) = 0;
  ++a2[1];
  v24 = *(_QWORD *)v22;
  *(_QWORD *)v22 = v23;
  v25 = _mm_loadu_si128((const __m128i *)(v22 + 8));
  v103 = v24;
  *(__m128i *)(v22 + 8) = v104;
  LODWORD(v22) = *(_DWORD *)(a1 + 24);
  v104 = v25;
  if ( (v22 & 0x600) == 0x200 )
  {
    sub_64000(v102, a1 + 160);
    v46 = *(_QWORD *)(a1 + 184);
    *(_QWORD *)&v107[16] = 0;
    v108 = 0;
    if ( v46 )
    {
      v84 = (void *)qalloc_or_throw(16 * v46, a1 + 160, v44, v45);
      v85 = *(const void **)(a1 + 176);
      *(_QWORD *)&v107[16] = v84;
      *((_QWORD *)&v108 + 1) = v46;
      memcpy(v84, v85, 16 * v46);
      *(_QWORD *)&v108 = v46;
    }
    sub_1B67E0(a2, (__int64)&unk_418774, (__int64 *)(a1 + 120), v102);
    if ( *(_QWORD *)&v107[16] )
    {
      *(_QWORD *)&v108 = 0;
      qfree(*(__int64 *)&v107[16]);
    }
    qfree(*(__int64 *)v107);
    sub_64000(v102, a1 + 240);
    v49 = *(_QWORD *)(a1 + 264);
    *(_QWORD *)&v107[16] = 0;
    v108 = 0;
    if ( v49 )
    {
      v82 = (void *)qalloc_or_throw(16 * v49, a1 + 240, v47, v48);
      v83 = *(const void **)(a1 + 256);
      *(_QWORD *)&v107[16] = v82;
      *((_QWORD *)&v108 + 1) = v49;
      memcpy(v82, v83, 16 * v49);
      *(_QWORD *)&v108 = v49;
    }
    sub_1B67E0(a2, (__int64)&unk_418778, (__int64 *)(a1 + 200), v102);
    if ( *(_QWORD *)&v107[16] )
    {
      *(_QWORD *)&v108 = 0;
      qfree(*(__int64 *)&v107[16]);
    }
    qfree(*(__int64 *)v107);
    if ( !(unsigned __int8)sub_64880((_QWORD *)(a1 + 280)) || *(_QWORD *)(a1 + 304) )
    {
      v105 = 0;
      v106 = 0;
      v50 = _mm_loadh_ps((const double *)(get_module_data() + 1344));
      *(_QWORD *)&v107[16] = 0;
      *(__m128 *)v107 = v50;
      sub_1B3C00((_QWORD *)(a1 + 280), &v105, (__int64)v102);
      v51 = a2[1];
      v52 = *a2;
      if ( a2[2] < (unsigned __int64)(v51 + 1) )
      {
        v88 = qvector_reserve((__int64)a2, v52, v51 + 1, 24);
        *a2 = v88;
        v51 = a2[1];
        v52 = v88;
      }
      v53 = v52 + 24 * v51;
      *(_QWORD *)v53 = 0;
      *(_OWORD *)(v53 + 8) = 0;
      ++a2[1];
      sub_6B870((__int64 *)v53);
      if ( v105 )
      {
        *(_QWORD *)&v106 = 0;
        qfree(v105);
      }
    }
  }
  else
  {
    v26 = v102;
    memset(v107, 0, sizeof(v107));
    v27 = qvector_reserve((__int64)v102, 0, 34, 1);
    *(_QWORD *)v107 = v27;
    *(_QWORD *)&v107[8] = 34;
    *(__m128i *)v27 = _mm_load_si128((const __m128i *)&xmmword_424830);
    si128 = _mm_load_si128((const __m128i *)&xmmword_424840);
    *(_BYTE *)(v27 + 32) = 3;
    *(__m128i *)(v27 + 16) = si128;
    v29 = *(_QWORD *)v107;
    *(_BYTE *)(*(_QWORD *)v107 + 33LL) = 0;
    v30 = a2[1];
    v31 = *a2;
    v32 = a2[2];
    v33 = v30 + 1;
    if ( (unsigned __int64)v26 < *a2 || (unsigned __int64)v102 >= v31 + 24 * v32 )
    {
      if ( v32 < v33 )
      {
        v81 = qvector_reserve((__int64)a2, v31, v30 + 1, 24);
        *a2 = v81;
        v31 = v81;
        v29 = *(_QWORD *)v107;
        v30 = a2[1];
      }
      v34 = _mm_loadu_si128((const __m128i *)&v107[8]);
      v35 = v31 + 24 * v30;
      *(_QWORD *)v35 = v29;
      *(__m128i *)(v35 + 8) = v34;
      ++a2[1];
    }
    else
    {
      v40 = _mm_loadl_epi64((const __m128i *)&v107[8]);
      v41 = _mm_loadl_epi64((const __m128i *)&v107[16]);
      memset(v107, 0, sizeof(v107));
      if ( v32 < v33 )
      {
        v101.m128i_i64[0] = v41.m128i_i64[0];
        v101.m128i_i64[1] = v40.m128i_i64[0];
        v87 = qvector_reserve((__int64)a2, v31, v30 + 1, 24);
        v41 = _mm_loadl_epi64(&v101);
        *a2 = v87;
        v31 = v87;
        v40 = _mm_loadl_epi64((const __m128i *)&v101.m128i_u64[1]);
        v30 = a2[1];
      }
      v42 = v31 + 24 * v30;
      *(_QWORD *)v42 = v29;
      *(__m128i *)(v42 + 8) = _mm_unpacklo_epi64(v40, v41);
      v43 = *(_QWORD *)v107;
      ++a2[1];
      if ( v43 )
      {
        *(_QWORD *)&v107[8] = 0;
        qfree(v43);
      }
    }
  }
  if ( !*(_BYTE *)(a1 + 440) && *(_QWORD *)(a1 + 432) )
  {
    memset(v107, 0, sizeof(v107));
    sub_1B04A0((__int64 *)(a1 + 416), v102);
    v36 = a2[1];
    v37 = *a2;
    if ( a2[2] < (unsigned __int64)(v36 + 1) )
    {
      v69 = qvector_reserve((__int64)a2, v37, v36 + 1, 24);
      *a2 = v69;
      v36 = a2[1];
      v37 = v69;
    }
    v38 = v37 + 24 * v36;
    *(_QWORD *)v38 = 0;
    *(_OWORD *)(v38 + 8) = 0;
    ++a2[1];
    sub_6B870((__int64 *)v38);
    if ( *(_QWORD *)v107 )
    {
      *(_QWORD *)&v107[8] = 0;
      qfree(*(__int64 *)v107);
    }
  }
  if ( v103 )
  {
    v104.m128i_i64[0] = 0;
    qfree(v103);
  }
  return v109 - __readfsqword(0x28u);
}
