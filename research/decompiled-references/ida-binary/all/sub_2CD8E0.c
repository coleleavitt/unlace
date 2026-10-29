__int64 __fastcall sub_2CD8E0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 v12; // r14
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // ecx
  unsigned int v17; // r13d
  const char *v18; // rdi
  unsigned __int64 v19; // rbp
  unsigned __int64 v20; // r15
  __int64 v21; // rax
  const char *v22; // rdi
  __int64 v23; // rax
  unsigned __int64 v24; // r15
  __int64 v25; // rcx
  __int64 v26; // rsi
  unsigned __int64 v27; // r12
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  size_t v30; // rax
  __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  size_t v33; // r8
  __int64 v35; // rax
  signed __int64 v36; // rdi
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // r9
  unsigned __int64 v39; // rdx
  __int64 v40; // rax
  size_t v41; // r10
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rdx
  char v44; // al
  __int64 v45; // rdx
  double v46; // xmm4_8
  double v47; // xmm5_8
  const char *v48; // rax
  __int16 v49; // bp
  __int64 v50; // rdi
  __int64 v51; // rax
  __m128i v52; // xmm0
  __int64 v53; // rsi
  __m128i v54; // xmm0
  __int64 v55; // rax
  const __m128i *v56; // rax
  __m128i v57; // xmm0
  __int64 v58; // rax
  __int64 v59; // rcx
  double v60; // xmm4_8
  double v61; // xmm5_8
  _QWORD *v62; // rax
  _UNKNOWN **v63; // rdx
  _QWORD *v64; // rdi
  __int64 v65; // rax
  __int64 v66; // [rsp-10h] [rbp-118h]
  __int64 v67; // [rsp-8h] [rbp-110h]
  int v68; // [rsp+Ch] [rbp-FCh]
  unsigned __int64 v69; // [rsp+18h] [rbp-F0h]
  __int64 v70; // [rsp+28h] [rbp-E0h]
  size_t v71; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v72; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v73; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v74; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v75; // [rsp+30h] [rbp-D8h]
  size_t v76; // [rsp+30h] [rbp-D8h]
  unsigned __int64 v77; // [rsp+30h] [rbp-D8h]
  size_t v78; // [rsp+38h] [rbp-D0h]
  unsigned int v79; // [rsp+44h] [rbp-C4h] BYREF
  const char *v80; // [rsp+48h] [rbp-C0h] BYREF
  const char *v81; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v82; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v83; // [rsp+60h] [rbp-A8h] BYREF
  _UNKNOWN **v84; // [rsp+70h] [rbp-98h] BYREF
  int v85; // [rsp+78h] [rbp-90h]
  __m128i v86; // [rsp+80h] [rbp-88h]
  __m128i v87; // [rsp+90h] [rbp-78h] BYREF
  __m128i v88; // [rsp+A0h] [rbp-68h]
  __int64 v89; // [rsp+B0h] [rbp-58h]
  char v90[8]; // [rsp+C0h] [rbp-48h] BYREF
  unsigned __int64 v91; // [rsp+C8h] [rbp-40h]

  v12 = a1 + 384;
  v91 = __readfsqword(0x28u);
  v14 = sub_1EA680(a1 + 384, a2, a3, a4, a5);
  v15 = *(_QWORD *)(v14 + 40);
  v16 = *(__int16 *)(v14 + 28);
  *(_QWORD *)&v83 = -1;
  *((_QWORD *)&v83 + 1) = -1;
  sub_2CABB0(a1, &v83, v15, v16, 0, 0, a5);
  v17 = v83;
  v18 = &s1;
  v19 = SHIDWORD(v83);
  v68 = DWORD2(v83);
  if ( *(_QWORD *)(a1 + 1048) )
    v18 = *(const char **)(a1 + 1040);
  v20 = qustrlen(v18);
  if ( v19 >= v20 || put_utf8_char(v90, (unsigned int)a2) < 0 )
    goto LABEL_15;
  v21 = *(_QWORD *)(a1 + 1048);
  if ( v17 == 1 )
  {
    if ( v21 )
    {
LABEL_8:
      v22 = *(const char **)(a1 + 1040);
LABEL_9:
      v23 = qustrlen(v22);
      if ( v19 >= v20 )
        goto LABEL_15;
      goto LABEL_10;
    }
    v23 = qustrlen(&s1);
  }
  else
  {
    if ( v17 == 2 )
    {
      v19 = v68;
      v22 = &s1;
      if ( !v21 )
        goto LABEL_9;
      goto LABEL_8;
    }
    if ( !v21 )
    {
      v19 = 0;
      v69 = qustrlen(&s1) - 1;
      goto LABEL_11;
    }
    v19 = 0;
    v23 = qustrlen(*(_QWORD *)(a1 + 1040));
  }
LABEL_10:
  v69 = v23 - 1;
LABEL_11:
  v80 = *(const char **)(a1 + 1040);
  v24 = skip_utf8(&v80, v19);
  if ( v24 )
    goto LABEL_15;
  v25 = *(_QWORD *)(a1 + 1040);
  v81 = v80;
  v26 = v25;
  v27 = (unsigned __int64)&v80[-v25];
  if ( !*v80 )
  {
    v28 = *(_QWORD *)(a1 + 1048);
    v29 = v28 - 1;
    if ( v28 )
    {
LABEL_14:
      v75 = v29;
      v70 = v25;
      v30 = strlen(v90);
      v31 = v70;
      v32 = v75;
      v33 = v30;
LABEL_30:
      v41 = v32 + v33;
      v24 = v32;
      v26 = v31;
      v42 = v32 + v33 + 1;
      if ( *(_QWORD *)(a1 + 1056) >= v42 )
        goto LABEL_31;
      v50 = a1 + 1040;
LABEL_46:
      v78 = v41;
      v76 = v33;
      v72 = v42;
      v51 = qvector_reserve(v50, v26, v42, 1);
      v41 = v78;
      v33 = v76;
      *(_QWORD *)(a1 + 1040) = v51;
      v42 = v72;
      v26 = v51;
LABEL_31:
      *(_QWORD *)(a1 + 1048) = v42;
      *(_BYTE *)(v26 + v41) = 0;
      if ( v27 < v24 )
      {
        v43 = v24;
        v71 = v33;
        v24 = v27;
        memmove((void *)(v27 + *(_QWORD *)(a1 + 1040) + v33), (const void *)(v27 + *(_QWORD *)(a1 + 1040)), v43 - v27);
        v33 = v71;
      }
      goto LABEL_33;
    }
    goto LABEL_40;
  }
  if ( skip_utf8(&v81, 1) )
  {
LABEL_15:
    sub_1C7D20(nullptr);
    return 0;
  }
  v26 = *(_QWORD *)(a1 + 1040);
  v35 = *(_QWORD *)(a1 + 1048);
  v25 = v26;
  if ( !v35 )
  {
LABEL_40:
    v33 = strlen(v90);
    goto LABEL_41;
  }
  v29 = v35 - 1;
  v36 = v81 - v80;
  if ( v27 >= v35 - 1 || !v36 )
    goto LABEL_14;
  v37 = v27 + v36;
  v38 = v27;
  if ( v27 + v36 < v29 )
  {
    v74 = v29 - v37;
    memmove((void *)(v26 + v27), (const void *)(v26 + v37), v29 - v37);
    v26 = *(_QWORD *)(a1 + 1040);
    v38 = v27 + v74;
  }
  v39 = v38 + 1;
  if ( *(_QWORD *)(a1 + 1056) < v38 + 1 )
  {
    v77 = v38;
    v73 = v38 + 1;
    v65 = qvector_reserve(a1 + 1040, v26, v39, 1);
    v38 = v77;
    v39 = v73;
    *(_QWORD *)(a1 + 1040) = v65;
    v26 = v65;
  }
  *(_QWORD *)(a1 + 1048) = v39;
  *(_BYTE *)(v26 + v38) = 0;
  v33 = strlen(v90);
  v40 = *(_QWORD *)(a1 + 1048);
  if ( v40 )
  {
    v31 = *(_QWORD *)(a1 + 1040);
    v32 = v40 - 1;
    goto LABEL_30;
  }
  v26 = *(_QWORD *)(a1 + 1040);
LABEL_41:
  v42 = v33 + 1;
  v50 = a1 + 1040;
  v41 = v33;
  if ( *(_QWORD *)(a1 + 1056) < v33 + 1 )
    goto LABEL_46;
  *(_QWORD *)(a1 + 1048) = v42;
  *(_BYTE *)(v26 + v33) = 0;
LABEL_33:
  memmove((void *)(v24 + *(_QWORD *)(a1 + 1040)), v90, v33);
  *(_BYTE *)(a1 + 1082) = 1;
  if ( v17 == 2 )
  {
    v62 = *(_QWORD **)(a1 + 1152);
    v63 = (_UNKNOWN **)(*(_QWORD *)(a1 + 1064) + v68);
    v64 = (_QWORD *)(a1 + 1144);
    v84 = v63;
    if ( !v62 )
      goto LABEL_57;
    do
    {
      if ( v62[4] >= (unsigned __int64)v63 )
      {
        v64 = v62;
        v62 = (_QWORD *)v62[2];
      }
      else
      {
        v62 = (_QWORD *)v62[3];
      }
    }
    while ( v62 );
    if ( v64 == (_QWORD *)(a1 + 1144) || (unsigned __int64)v63 < v64[4] )
    {
LABEL_57:
      v87.m128i_i64[0] = (__int64)&v84;
      v64 = sub_2C8600((_QWORD *)(a1 + 1136), v64, (unsigned __int64 **)&v87);
    }
    v64[5] = 1;
  }
  v44 = sub_2CCB20(a1, &v82);
  if ( v19 < v69 || v44 )
  {
    sub_2CB300(a1, 1, v45, v69, a5, a6, a7, a8, v46, v47, a11, a12);
  }
  else
  {
    v48 = &s1;
    if ( *(_QWORD *)(a1 + 1048) )
      v48 = *(const char **)(a1 + 1040);
    v49 = v82;
    v80 = v48;
    if ( !skip_utf8(&v80, v82) )
    {
      v52 = _mm_loadl_epi64((const __m128i *)(a1 + 1064));
      v53 = *(_QWORD *)(a1 + 728);
      v84 = &hexplace_t___vtable;
      v54 = _mm_unpacklo_epi64(v52, v52);
      v85 = 0;
      v86 = v54;
      hexplace_t__adjust(&v84, v53);
      v55 = *(_QWORD *)(a1 + 728);
      v86.m128i_i64[0] = *(_QWORD *)(a1 + 1064);
      if ( (unsigned __int8)sub_2CA720(
                              (_DWORD *)(v55 + 16),
                              &v79,
                              nullptr,
                              (__int64)&v84,
                              v86.m128i_u64[0],
                              v17,
                              *(double *)v54.m128i_i64,
                              0) )
      {
        v56 = (const __m128i *)sub_1EA6A0(v12, (__int64)&v79, v66, v67, *(double *)v54.m128i_i64);
        v87 = _mm_loadu_si128(v56);
        v57 = _mm_loadu_si128(v56 + 1);
        v88 = v57;
        v58 = v56[2].m128i_i64[0];
        v88.m128i_i16[6] = v79 + v49;
        v89 = v58;
        sub_2004D0(a1, v87.m128i_i8, 0, v59, *(double *)v57.m128i_i64, a6, a7, a8, v60, v61, a11, a12);
      }
    }
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 664LL))(a1);
  return 1;
}
