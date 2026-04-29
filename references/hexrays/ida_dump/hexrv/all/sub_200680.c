__int64 __fastcall sub_200680(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5, __int64 a6, char a7)
{
  bool v7; // zf
  __int64 v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // r13
  __int64 v12; // r13
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rbp
  __int64 v16; // rbp
  int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // r9d
  void *v22; // rdi
  __int64 v24; // rbx
  __int64 v25; // r13
  __int64 v26; // rbx
  __m128i si128; // xmm3
  __int64 v28; // r12
  void *v29; // r13
  __m128i v30; // xmm0
  __int64 v31; // rbp
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  int v35; // r9d
  __int64 v36; // rdx
  __m128i v37; // xmm0
  __m128i v38; // xmm1
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  int v43; // r9d
  _QWORD *v44; // rbp
  int v45; // ebx
  __int64 v46; // [rsp+8h] [rbp-210h]
  size_t n[2]; // [rsp+10h] [rbp-208h] BYREF
  _QWORD *v48; // [rsp+20h] [rbp-1F8h]
  int v49; // [rsp+28h] [rbp-1F0h]
  int v50; // [rsp+2Ch] [rbp-1ECh]
  __int64 *v51; // [rsp+30h] [rbp-1E8h]
  __int64 v52; // [rsp+38h] [rbp-1E0h]
  __int64 v53; // [rsp+40h] [rbp-1D8h]
  _QWORD *v54; // [rsp+48h] [rbp-1D0h]
  __int64 v55; // [rsp+50h] [rbp-1C8h]
  size_t v56; // [rsp+58h] [rbp-1C0h]
  __int64 v57; // [rsp+60h] [rbp-1B8h]
  __int64 v58; // [rsp+68h] [rbp-1B0h]
  __int64 v59[2]; // [rsp+70h] [rbp-1A8h] BYREF
  void *v60; // [rsp+80h] [rbp-198h] BYREF
  __m128i v61; // [rsp+88h] [rbp-190h]
  __int64 v62; // [rsp+A0h] [rbp-178h] BYREF
  __int64 v63; // [rsp+A8h] [rbp-170h]
  void *src; // [rsp+B0h] [rbp-168h]
  __m128i v65; // [rsp+B8h] [rbp-160h] BYREF
  __int64 v66[2]; // [rsp+D0h] [rbp-148h] BYREF
  void *v67; // [rsp+E0h] [rbp-138h] BYREF
  __int128 v68; // [rsp+E8h] [rbp-130h]
  _QWORD v69[2]; // [rsp+100h] [rbp-118h] BYREF
  __int64 v70; // [rsp+110h] [rbp-108h]
  __m128i v71; // [rsp+118h] [rbp-100h]
  char v72; // [rsp+128h] [rbp-F0h]
  __int64 v73; // [rsp+130h] [rbp-E8h]
  _QWORD *v74; // [rsp+138h] [rbp-E0h]
  __int64 v75; // [rsp+140h] [rbp-D8h]
  __int64 v76; // [rsp+148h] [rbp-D0h]
  __int64 v77; // [rsp+150h] [rbp-C8h]
  __int128 v78; // [rsp+158h] [rbp-C0h]
  __int64 v79; // [rsp+168h] [rbp-B0h] BYREF
  __int64 v80; // [rsp+170h] [rbp-A8h]
  void *v81; // [rsp+178h] [rbp-A0h] BYREF
  __m128i v82; // [rsp+180h] [rbp-98h] BYREF
  _QWORD v83[2]; // [rsp+190h] [rbp-88h] BYREF
  __int64 v84; // [rsp+1A0h] [rbp-78h]
  __int128 v85; // [rsp+1A8h] [rbp-70h]
  __int64 v86; // [rsp+1B8h] [rbp-60h]
  __int64 v87; // [rsp+1C0h] [rbp-58h]
  char v88; // [rsp+1C8h] [rbp-50h]
  char v89; // [rsp+1C9h] [rbp-4Fh]
  unsigned __int64 v90; // [rsp+1D8h] [rbp-40h]

  v7 = *(_QWORD *)(a2 + 48) == 0;
  v53 = a1;
  v57 = a3;
  v54 = a4;
  v58 = a5;
  v52 = a6;
  v90 = __readfsqword(0x28u);
  if ( v7 )
    return 0;
  v9 = *(_QWORD *)(a2 + 64);
  v10 = *(int *)(a6 + 44);
  v11 = **(_QWORD **)(a1 + 64);
  v73 = a3;
  v69[0] = off_4B18E8;
  v71 = 0u;
  v72 = 0;
  v74 = a4;
  v75 = a5;
  v76 = a6;
  v77 = 0;
  v79 = 0;
  v80 = 0;
  v81 = nullptr;
  v83[0] = 0;
  v83[1] = 0;
  v84 = 0;
  v86 = a1;
  v87 = 0xFFFFFFFFLL;
  v88 = 0;
  v89 = a7;
  v69[1] = v9;
  v70 = a2;
  v78 = 0;
  v82 = 0;
  v85 = 0;
  sub_FF8A0(a6, v9, (__int64)v83);
  v12 = v11 + 104 * v10;
  v13 = *(_DWORD *)(v12 + 24);
  if ( (v13 & 0x2000000) == 0
    && *(_DWORD *)(v12 + 88) > *(_DWORD *)(v52 + 40)
    && (*(_BYTE *)(v52 + 48) & 1) != 0
    && (v13 & 0x100) == 0
    && *(_DWORD *)(v53 + 40) == 58
    && !(unsigned __int8)sub_1E9E60(*(unsigned __int8 **)(v53 + 56))
    && *(int *)(v52 + 40) < (unsigned __int64)get_tinfo_property(*(_QWORD *)(v12 + 80), 15) )
  {
    if ( !under_debugger )
      sub_37DDE0(50357);
    BUG();
  }
  v14 = *(_QWORD *)(a2 + 480);
  v59[0] = 0;
  v59[1] = 0;
  *(_QWORD *)(v14 + 872) = v53;
  v60 = nullptr;
  v61 = 0;
  if ( (*(_BYTE *)(v12 + 27) & 2) != 0 )
    sub_FF8A0(v52, *(_QWORD *)(v53 + 56), (__int64)v59);
  else
    sub_1BEB30(v12, v59, *(_DWORD *)(v12 + 88), *(_QWORD *)(*(_QWORD *)(a2 + 64) + 1440LL), nullptr);
  if ( (*(_BYTE *)(v52 + 48) & 0x20) != 0 && !a7 )
  {
    v44 = (_QWORD *)(*v54 + 24LL * *(int *)(a2 + 72));
    sub_5FC80(v66, (__int64)v59);
    v67 = nullptr;
    v68 = 0;
    if ( v61.m128i_i64[0] )
    {
      v46 = v61.m128i_i64[0];
      n[0] = 16 * v61.m128i_i64[0];
      v67 = (void *)qalloc_or_throw(16 * v61.m128i_i64[0]);
      *((_QWORD *)&v68 + 1) = v46;
      memcpy(v67, v60, n[0]);
      *(_QWORD *)&v68 = v46;
    }
    v48 = v69;
    sub_200360((__int64)v69, v66, v44);
    if ( v67 )
    {
      *(_QWORD *)&v68 = 0;
      qfree(v67);
    }
    qfree(v66[0]);
  }
  LOBYTE(n[0]) = 0;
  if ( (*(_BYTE *)(v12 + 27) & 2) != 0 )
    LOBYTE(n[0]) = *(_DWORD *)(v12 + 92) == *(_DWORD *)(a2 + 72);
  v51 = &v62;
  sub_5FC80(&v62, (__int64)v59);
  v15 = v61.m128i_i64[0];
  src = nullptr;
  v65 = 0;
  if ( v61.m128i_i64[0] )
  {
    src = (void *)qalloc_or_throw(16 * v61.m128i_i64[0]);
    v65.m128i_i64[1] = v15;
    memcpy(src, v60, 16 * v15);
    v65.m128i_i64[0] = v15;
  }
  if ( a7 )
  {
    sub_60380(v59, (__int64 *)(a2 + 240));
    v48 = v69;
    sub_312FC0(&v60, a2 + 256);
    v31 = *(_QWORD *)(a2 + 56);
    if ( v31 )
    {
      v49 = 0;
      v17 = 0;
      do
      {
        if ( *(char *)(v31 + 4) >= 0 )
        {
          v48 = v69;
          v88 = 1;
          HIDWORD(v87) = 0;
          v71 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v31, (__m128i)(unsigned __int64)v31);
          v17 = sub_11A440((_BYTE *)v31, (__int64)v69);
          if ( v17 < 0 )
            break;
          v17 = HIDWORD(v87);
          if ( v87 < 0 )
            break;
          v49 += HIDWORD(v87);
          sub_123560((__int64)v66, a2, v31, 0x81u);
          sub_602C0(v59, v66, v32, v33, v34, v35);
          sub_312B60(&v60, &v67);
          if ( v67 )
          {
            *(_QWORD *)&v68 = 0;
            qfree(v67);
          }
          qfree(v66[0]);
          if ( (unsigned __int8)sub_60500(v59) )
          {
            if ( !v61.m128i_i64[0] )
              break;
          }
        }
        v31 = *(_QWORD *)(v31 + 16);
      }
      while ( v31 );
      v50 = 0;
      if ( LOBYTE(n[0]) )
      {
LABEL_59:
        *(_QWORD *)(*(_QWORD *)(a2 + 480) + 872LL) = 0;
        if ( v17 < 0 )
          goto LABEL_31;
LABEL_30:
        v17 = v50 + v49;
        goto LABEL_31;
      }
    }
    else
    {
      if ( LOBYTE(n[0]) )
        goto LABEL_95;
      v49 = 0;
      v17 = 0;
    }
    v36 = v62;
    v50 = 0;
    v22 = v81;
    v37 = _mm_load_si128(&v82);
    v62 = v79;
    v38 = _mm_loadu_si128(&v65);
    v79 = v36;
    v39 = v63;
    v63 = v80;
    v82 = v38;
    v80 = v39;
    v81 = src;
    src = v22;
    v65 = v37;
    if ( v17 < 0 )
    {
      *(_QWORD *)(*(_QWORD *)(a2 + 480) + 872LL) = 0;
      goto LABEL_32;
    }
    while ( 1 )
    {
      if ( v31 )
      {
        if ( *(char *)(v31 + 4) >= 0 )
        {
          v48 = v69;
          sub_123560((__int64)v66, a2, v31, 0x81u);
          sub_602C0(&v79, v66, v40, v41, v42, v43);
          sub_312B60(&v81, &v67);
          if ( v67 )
          {
            *(_QWORD *)&v68 = 0;
            qfree(v67);
          }
          qfree(v66[0]);
        }
        v31 = *(_QWORD *)(v31 + 8);
        if ( !v31 )
        {
LABEL_29:
          *(_QWORD *)(*(_QWORD *)(a2 + 480) + 872LL) = 0;
          goto LABEL_30;
        }
      }
      else
      {
        v31 = *(_QWORD *)(a2 + 48);
      }
      v88 = 0;
      v48 = v69;
      HIDWORD(v87) = 0;
      v71 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v31, (__m128i)(unsigned __int64)v31);
      v17 = sub_11A440((_BYTE *)v31, (__int64)v69);
      if ( v17 < 0 || (v17 = HIDWORD(v87), v87 < 0) )
      {
LABEL_61:
        *(_QWORD *)(*(_QWORD *)(a2 + 480) + 872LL) = 0;
        goto LABEL_31;
      }
      v50 += HIDWORD(v87);
    }
  }
  v16 = *(_QWORD *)(a2 + 48);
  if ( !v16 )
  {
LABEL_95:
    v17 = 0;
    *(_QWORD *)(*(_QWORD *)(a2 + 480) + 872LL) = 0;
    goto LABEL_31;
  }
  v50 = 0;
  v17 = 0;
  v49 = 0;
  while ( *(char *)(v16 + 4) < 0 )
  {
LABEL_57:
    v16 = *(_QWORD *)(v16 + 8);
    if ( !v16 )
    {
      if ( !v50 )
        goto LABEL_59;
      goto LABEL_92;
    }
  }
  v88 = 0;
  HIDWORD(v87) = 0;
  v48 = v69;
  *(__m128i *)n = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v16, (__m128i)(unsigned __int64)v16);
  v71 = *(__m128i *)n;
  v17 = sub_11A440((_BYTE *)v16, (__int64)v69);
  if ( v17 < 0 )
    goto LABEL_61;
  v17 = HIDWORD(v87);
  if ( v87 < 0 )
    goto LABEL_61;
  v49 += HIDWORD(v87);
  sub_123560((__int64)v66, a2, v16, 0x81u);
  sub_602C0(v59, v66, v18, v19, v20, v21);
  sub_312B60(&v60, &v67);
  if ( v67 )
  {
    *(_QWORD *)&v68 = 0;
    qfree(v67);
  }
  qfree(v66[0]);
  if ( (unsigned __int8)sub_60500(v59) && !v61.m128i_i64[0] )
    goto LABEL_29;
  if ( !v17 )
    goto LABEL_50;
  v24 = v70;
  v25 = *(_QWORD *)(v16 + 8);
  sub_5FC80(v66, (__int64)v59);
  v67 = nullptr;
  v68 = 0;
  if ( v61.m128i_i64[0] )
  {
    v55 = v61.m128i_i64[0];
    v56 = 16 * v61.m128i_i64[0];
    v67 = (void *)qalloc_or_throw(16 * v61.m128i_i64[0]);
    *((_QWORD *)&v68 + 1) = v55;
    memcpy(v67, v60, v56);
    *(_QWORD *)&v68 = v55;
  }
  v26 = sub_A58D0(v24, v66, v25, 0, 1u);
  if ( v67 )
  {
    *(_QWORD *)&v68 = 0;
    qfree(v67);
  }
  qfree(v66[0]);
  if ( v26 )
  {
LABEL_50:
    si128 = _mm_load_si128((const __m128i *)n);
    v88 = 1;
    HIDWORD(v87) = 0;
    v71 = si128;
    v17 = sub_11A440((_BYTE *)v16, (__int64)v69);
    if ( v17 < 0 )
      goto LABEL_61;
    v17 = HIDWORD(v87);
    if ( v87 < 0 )
      goto LABEL_61;
    v50 += HIDWORD(v87);
    sub_60550(v59, v51);
    v28 = v65.m128i_i64[0];
    v29 = nullptr;
    if ( v65.m128i_i64[0] )
    {
      n[0] = 16 * v65.m128i_i64[0];
      v29 = (void *)qalloc_or_throw(16 * v65.m128i_i64[0]);
      memcpy(v29, src, n[0]);
    }
    v30 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v28, (__m128i)(unsigned __int64)v28);
    if ( v60 )
    {
      *(__m128i *)n = v30;
      v61.m128i_i64[0] = 0;
      qfree(v60);
      v30 = _mm_load_si128((const __m128i *)n);
    }
    v60 = v29;
    v61 = v30;
    goto LABEL_57;
  }
  if ( !v50 )
  {
    v17 = v49;
    *(_QWORD *)(*(_QWORD *)(a2 + 480) + 872LL) = 0;
    goto LABEL_31;
  }
  if ( !sub_A55E0(v70, v59, v16, 0, 0x81u) )
  {
LABEL_92:
    v48 = v69;
    v17 = sub_201910(v53, a2, v57, v54, v58, v52);
    goto LABEL_59;
  }
  v45 = v49;
  *(_QWORD *)(*(_QWORD *)(a2 + 480) + 872LL) = 0;
  v17 = v50 + v45;
LABEL_31:
  v22 = src;
LABEL_32:
  if ( v22 )
  {
    v65.m128i_i64[0] = 0;
    qfree(v22);
  }
  qfree(v62);
  if ( v60 )
  {
    v61.m128i_i64[0] = 0;
    qfree(v60);
  }
  qfree(v59[0]);
  v69[0] = off_4B18E8;
  if ( v84 )
  {
    *(_QWORD *)&v85 = 0;
    qfree(v84);
  }
  qfree(v83[0]);
  if ( v81 )
  {
    v82.m128i_i64[0] = 0;
    qfree(v81);
  }
  qfree(v79);
  if ( v77 )
  {
    *(_QWORD *)&v78 = 0;
    qfree(v77);
  }
  return (unsigned int)v17;
}
