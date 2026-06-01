__int64 __fastcall sub_205280(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5, __int64 a6, char a7)
{
  bool v7; // zf
  __int64 v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // r13
  __int64 v12; // r13
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbp
  __int64 v18; // rbp
  int v19; // ebx
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // r9d
  void *v26; // rdi
  __int64 v28; // rbx
  __int64 v29; // r13
  __int64 v30; // rbx
  __m128i si128; // xmm3
  __int64 *v32; // rsi
  __int64 v33; // rcx
  __int64 v34; // r12
  void *v35; // r13
  __m128i v36; // xmm0
  int v37; // r8d
  int v38; // r9d
  __int64 v39; // rbp
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  int v43; // r9d
  __int64 v44; // rdx
  __m128i v45; // xmm0
  __m128i v46; // xmm1
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  int v51; // r9d
  _QWORD *v52; // rbp
  int v53; // ebx
  __int64 v54; // [rsp+8h] [rbp-210h]
  size_t n[2]; // [rsp+10h] [rbp-208h] BYREF
  _QWORD *v56; // [rsp+20h] [rbp-1F8h]
  int v57; // [rsp+28h] [rbp-1F0h]
  int v58; // [rsp+2Ch] [rbp-1ECh]
  __int64 *v59; // [rsp+30h] [rbp-1E8h]
  __int64 v60; // [rsp+38h] [rbp-1E0h]
  __int64 v61; // [rsp+40h] [rbp-1D8h]
  _QWORD *v62; // [rsp+48h] [rbp-1D0h]
  __int64 v63; // [rsp+50h] [rbp-1C8h]
  size_t v64; // [rsp+58h] [rbp-1C0h]
  __int64 v65; // [rsp+60h] [rbp-1B8h]
  __int64 v66; // [rsp+68h] [rbp-1B0h]
  __int64 v67[2]; // [rsp+70h] [rbp-1A8h] BYREF
  void *v68; // [rsp+80h] [rbp-198h] BYREF
  __m128i v69; // [rsp+88h] [rbp-190h]
  __int64 v70; // [rsp+A0h] [rbp-178h] BYREF
  __int64 v71; // [rsp+A8h] [rbp-170h]
  void *src; // [rsp+B0h] [rbp-168h]
  __m128i v73; // [rsp+B8h] [rbp-160h] BYREF
  __int64 v74[2]; // [rsp+D0h] [rbp-148h] BYREF
  void *v75; // [rsp+E0h] [rbp-138h] BYREF
  __int128 v76; // [rsp+E8h] [rbp-130h]
  _QWORD v77[2]; // [rsp+100h] [rbp-118h] BYREF
  __int64 v78; // [rsp+110h] [rbp-108h]
  __m128i v79; // [rsp+118h] [rbp-100h]
  char v80; // [rsp+128h] [rbp-F0h]
  __int64 v81; // [rsp+130h] [rbp-E8h]
  _QWORD *v82; // [rsp+138h] [rbp-E0h]
  __int64 v83; // [rsp+140h] [rbp-D8h]
  __int64 v84; // [rsp+148h] [rbp-D0h]
  __int64 v85; // [rsp+150h] [rbp-C8h]
  __int128 v86; // [rsp+158h] [rbp-C0h]
  __int64 v87; // [rsp+168h] [rbp-B0h] BYREF
  __int64 v88; // [rsp+170h] [rbp-A8h]
  void *v89; // [rsp+178h] [rbp-A0h] BYREF
  __m128i v90; // [rsp+180h] [rbp-98h] BYREF
  __int64 v91[2]; // [rsp+190h] [rbp-88h] BYREF
  __int64 v92; // [rsp+1A0h] [rbp-78h]
  __int128 v93; // [rsp+1A8h] [rbp-70h]
  __int64 v94; // [rsp+1B8h] [rbp-60h]
  __int64 v95; // [rsp+1C0h] [rbp-58h]
  char v96; // [rsp+1C8h] [rbp-50h]
  char v97; // [rsp+1C9h] [rbp-4Fh]
  unsigned __int64 v98; // [rsp+1D8h] [rbp-40h]

  v7 = *(_QWORD *)(a2 + 48) == 0;
  v61 = a1;
  v65 = a3;
  v62 = a4;
  v66 = a5;
  v60 = a6;
  v98 = __readfsqword(0x28u);
  if ( v7 )
    return 0;
  v9 = *(_QWORD *)(a2 + 64);
  v10 = *(int *)(a6 + 44);
  v11 = **(_QWORD **)(a1 + 64);
  v81 = a3;
  v77[0] = off_4DEEA8;
  v79 = 0u;
  v80 = 0;
  v82 = a4;
  v83 = a5;
  v84 = a6;
  v85 = 0;
  v87 = 0;
  v88 = 0;
  v89 = nullptr;
  v91[0] = 0;
  v91[1] = 0;
  v92 = 0;
  v94 = a1;
  v95 = 0xFFFFFFFFLL;
  v96 = 0;
  v97 = a7;
  v77[1] = v9;
  v78 = a2;
  v86 = 0;
  v90 = 0;
  v93 = 0;
  sub_103D60(a6, v9, (__int64)v91);
  v12 = v11 + 104 * v10;
  v13 = *(_DWORD *)(v12 + 24);
  if ( (v13 & 0x2000000) == 0
    && *(_DWORD *)(v12 + 88) > *(_DWORD *)(v60 + 40)
    && (*(_BYTE *)(v60 + 48) & 1) != 0
    && (v13 & 0x100) == 0
    && *(_DWORD *)(v61 + 40) == 58
    && !(unsigned __int8)sub_1EEA60(*(unsigned __int8 **)(v61 + 56))
    && *(int *)(v60 + 40) < (unsigned __int64)get_tinfo_property() )
  {
    if ( !under_debugger )
      sub_383060(50357);
    BUG();
  }
  v14 = *(_QWORD *)(a2 + 480);
  v67[0] = 0;
  v67[1] = 0;
  *(_QWORD *)(v14 + 872) = v61;
  v68 = nullptr;
  v69 = 0;
  if ( (*(_BYTE *)(v12 + 27) & 2) != 0 )
    sub_103D60(v60, *(_QWORD *)(v61 + 56), (__int64)v67);
  else
    sub_1C31B0(v12, (__int64)v67, *(_DWORD *)(v12 + 88), *(_QWORD *)(*(_QWORD *)(a2 + 64) + 1440LL), 0);
  if ( (*(_BYTE *)(v60 + 48) & 0x20) != 0 && !a7 )
  {
    v52 = (_QWORD *)(*v62 + 24LL * *(int *)(a2 + 72));
    sub_64000(v74, (__int64)v67);
    v75 = nullptr;
    v76 = 0;
    if ( v69.m128i_i64[0] )
    {
      v54 = v69.m128i_i64[0];
      n[0] = 16 * v69.m128i_i64[0];
      v75 = (void *)qalloc_or_throw(16 * v69.m128i_i64[0], (__int64)v67, 16 * v69.m128i_i64[0], v69.m128i_i64[0]);
      *((_QWORD *)&v76 + 1) = v54;
      memcpy(v75, v68, n[0]);
      *(_QWORD *)&v76 = v54;
    }
    v56 = v77;
    sub_204F60((__int64)v77, v74, v52);
    if ( v75 )
    {
      *(_QWORD *)&v76 = 0;
      qfree((__int64)v75);
    }
    qfree(v74[0]);
  }
  LOBYTE(n[0]) = 0;
  if ( (*(_BYTE *)(v12 + 27) & 2) != 0 )
    LOBYTE(n[0]) = *(_DWORD *)(v12 + 92) == *(_DWORD *)(a2 + 72);
  v59 = &v70;
  sub_64000(&v70, (__int64)v67);
  v17 = v69.m128i_i64[0];
  src = nullptr;
  v73 = 0;
  if ( v69.m128i_i64[0] )
  {
    src = (void *)qalloc_or_throw(16 * v69.m128i_i64[0], (__int64)v67, v15, v16);
    v73.m128i_i64[1] = v17;
    memcpy(src, v68, 16 * v17);
    v73.m128i_i64[0] = v17;
  }
  if ( a7 )
  {
    sub_64700(v67, (__int64 *)(a2 + 240));
    v56 = v77;
    sub_3180C0(&v68, a2 + 256);
    v39 = *(_QWORD *)(a2 + 56);
    if ( v39 )
    {
      v57 = 0;
      v19 = 0;
      do
      {
        if ( *(char *)(v39 + 4) >= 0 )
        {
          v56 = v77;
          v96 = 1;
          HIDWORD(v95) = 0;
          v79 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v39, (__m128i)(unsigned __int64)v39);
          v19 = sub_11E900((_BYTE *)v39, (__int64)v77);
          if ( v19 < 0 )
            break;
          v19 = HIDWORD(v95);
          if ( v95 < 0 )
            break;
          v57 += HIDWORD(v95);
          sub_127A20((__int64)v74, a2, v39, 129, v37, v38);
          sub_64640(v67, v74, v40, v41, v42, v43);
          sub_317C60(&v68, &v75);
          if ( v75 )
          {
            *(_QWORD *)&v76 = 0;
            qfree((__int64)v75);
          }
          qfree(v74[0]);
          if ( (unsigned __int8)sub_64880(v67) )
          {
            if ( !v69.m128i_i64[0] )
              break;
          }
        }
        v39 = *(_QWORD *)(v39 + 16);
      }
      while ( v39 );
      v58 = 0;
      if ( LOBYTE(n[0]) )
      {
LABEL_59:
        *(_QWORD *)(*(_QWORD *)(a2 + 480) + 872LL) = 0;
        if ( v19 < 0 )
          goto LABEL_31;
LABEL_30:
        v19 = v58 + v57;
        goto LABEL_31;
      }
    }
    else
    {
      if ( LOBYTE(n[0]) )
        goto LABEL_95;
      v57 = 0;
      v19 = 0;
    }
    v44 = v70;
    v58 = 0;
    v26 = v89;
    v45 = _mm_load_si128(&v90);
    v70 = v87;
    v46 = _mm_loadu_si128(&v73);
    v87 = v44;
    v47 = v71;
    v71 = v88;
    v90 = v46;
    v88 = v47;
    v89 = src;
    src = v26;
    v73 = v45;
    if ( v19 < 0 )
    {
      *(_QWORD *)(*(_QWORD *)(a2 + 480) + 872LL) = 0;
      goto LABEL_32;
    }
    while ( 1 )
    {
      if ( v39 )
      {
        if ( *(char *)(v39 + 4) >= 0 )
        {
          v56 = v77;
          sub_127A20((__int64)v74, a2, v39, 129, v37, v38);
          sub_64640(&v87, v74, v48, v49, v50, v51);
          sub_317C60(&v89, &v75);
          if ( v75 )
          {
            *(_QWORD *)&v76 = 0;
            qfree((__int64)v75);
          }
          qfree(v74[0]);
        }
        v39 = *(_QWORD *)(v39 + 8);
        if ( !v39 )
        {
LABEL_29:
          *(_QWORD *)(*(_QWORD *)(a2 + 480) + 872LL) = 0;
          goto LABEL_30;
        }
      }
      else
      {
        v39 = *(_QWORD *)(a2 + 48);
      }
      v96 = 0;
      v56 = v77;
      HIDWORD(v95) = 0;
      v79 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v39, (__m128i)(unsigned __int64)v39);
      v19 = sub_11E900((_BYTE *)v39, (__int64)v77);
      if ( v19 < 0 || (v19 = HIDWORD(v95), v95 < 0) )
      {
LABEL_61:
        *(_QWORD *)(*(_QWORD *)(a2 + 480) + 872LL) = 0;
        goto LABEL_31;
      }
      v58 += HIDWORD(v95);
    }
  }
  v18 = *(_QWORD *)(a2 + 48);
  if ( !v18 )
  {
LABEL_95:
    v19 = 0;
    *(_QWORD *)(*(_QWORD *)(a2 + 480) + 872LL) = 0;
    goto LABEL_31;
  }
  v58 = 0;
  v19 = 0;
  v57 = 0;
  while ( *(char *)(v18 + 4) < 0 )
  {
LABEL_57:
    v18 = *(_QWORD *)(v18 + 8);
    if ( !v18 )
    {
      if ( !v58 )
        goto LABEL_59;
      goto LABEL_92;
    }
  }
  v96 = 0;
  HIDWORD(v95) = 0;
  v56 = v77;
  *(__m128i *)n = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v18, (__m128i)(unsigned __int64)v18);
  v79 = *(__m128i *)n;
  v19 = sub_11E900((_BYTE *)v18, (__int64)v77);
  if ( v19 < 0 )
    goto LABEL_61;
  v19 = HIDWORD(v95);
  if ( v95 < 0 )
    goto LABEL_61;
  v57 += HIDWORD(v95);
  sub_127A20((__int64)v74, a2, v18, 129, v20, v21);
  sub_64640(v67, v74, v22, v23, v24, v25);
  sub_317C60(&v68, &v75);
  if ( v75 )
  {
    *(_QWORD *)&v76 = 0;
    qfree((__int64)v75);
  }
  qfree(v74[0]);
  if ( (unsigned __int8)sub_64880(v67) && !v69.m128i_i64[0] )
    goto LABEL_29;
  if ( !v19 )
    goto LABEL_50;
  v28 = v78;
  v29 = *(_QWORD *)(v18 + 8);
  sub_64000(v74, (__int64)v67);
  v75 = nullptr;
  v76 = 0;
  if ( v69.m128i_i64[0] )
  {
    v63 = v69.m128i_i64[0];
    v64 = 16 * v69.m128i_i64[0];
    v75 = (void *)qalloc_or_throw(16 * v69.m128i_i64[0], (__int64)v67, 16 * v69.m128i_i64[0], v69.m128i_i64[0]);
    *((_QWORD *)&v76 + 1) = v63;
    memcpy(v75, v68, v64);
    *(_QWORD *)&v76 = v63;
  }
  v30 = sub_A9D90(v28, v74, v29, 0, 1u);
  if ( v75 )
  {
    *(_QWORD *)&v76 = 0;
    qfree((__int64)v75);
  }
  qfree(v74[0]);
  if ( v30 )
  {
LABEL_50:
    si128 = _mm_load_si128((const __m128i *)n);
    v96 = 1;
    HIDWORD(v95) = 0;
    v79 = si128;
    v19 = sub_11E900((_BYTE *)v18, (__int64)v77);
    if ( v19 < 0 )
      goto LABEL_61;
    v19 = HIDWORD(v95);
    if ( v95 < 0 )
      goto LABEL_61;
    v32 = v59;
    v58 += HIDWORD(v95);
    sub_648D0(v67, v59);
    v34 = v73.m128i_i64[0];
    v35 = nullptr;
    if ( v73.m128i_i64[0] )
    {
      n[0] = 16 * v73.m128i_i64[0];
      v35 = (void *)qalloc_or_throw(16 * v73.m128i_i64[0], (__int64)v32, 16 * v73.m128i_i64[0], v33);
      memcpy(v35, src, n[0]);
    }
    v36 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v34, (__m128i)(unsigned __int64)v34);
    if ( v68 )
    {
      *(__m128i *)n = v36;
      v69.m128i_i64[0] = 0;
      qfree((__int64)v68);
      v36 = _mm_load_si128((const __m128i *)n);
    }
    v68 = v35;
    v69 = v36;
    goto LABEL_57;
  }
  if ( !v58 )
  {
    v19 = v57;
    *(_QWORD *)(*(_QWORD *)(a2 + 480) + 872LL) = 0;
    goto LABEL_31;
  }
  if ( !sub_A9AA0(v78, v67, v18, 0, 0x81u) )
  {
LABEL_92:
    v56 = v77;
    v19 = sub_206510(v61, a2, v65, v62, v66, v60);
    goto LABEL_59;
  }
  v53 = v57;
  *(_QWORD *)(*(_QWORD *)(a2 + 480) + 872LL) = 0;
  v19 = v58 + v53;
LABEL_31:
  v26 = src;
LABEL_32:
  if ( v26 )
  {
    v73.m128i_i64[0] = 0;
    qfree((__int64)v26);
  }
  qfree(v70);
  if ( v68 )
  {
    v69.m128i_i64[0] = 0;
    qfree((__int64)v68);
  }
  qfree(v67[0]);
  v77[0] = off_4DEEA8;
  if ( v92 )
  {
    *(_QWORD *)&v93 = 0;
    qfree(v92);
  }
  qfree(v91[0]);
  if ( v89 )
  {
    v90.m128i_i64[0] = 0;
    qfree((__int64)v89);
  }
  qfree(v87);
  if ( v85 )
  {
    *(_QWORD *)&v86 = 0;
    qfree(v85);
  }
  return (unsigned int)v19;
}
