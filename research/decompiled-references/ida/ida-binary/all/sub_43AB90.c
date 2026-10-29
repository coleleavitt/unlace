__int64 __fastcall scan_and_commit_action_t__::vfunc_0(
        double a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 *a10)
{
  double v10; // xmm4_8
  double v11; // xmm5_8
  __int64 v12; // r12
  __int64 v13; // r8
  __int64 v14; // r14
  char *v15; // r15
  __m128i v16; // xmm0
  char *v17; // rax
  const char *v18; // r15
  size_t v19; // rax
  __int64 v20; // r13
  size_t v21; // r12
  unsigned __int64 v22; // rdi
  __m128i v23; // xmm0
  char *v24; // rax
  __m128 v25; // xmm0
  __int64 *v26; // rdi
  const char *v27; // rsi
  __int64 *v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __m128 v32; // xmm4
  __m128 v33; // xmm5
  _QWORD *v34; // rax
  __int64 *v35; // r14
  __int64 (__fastcall *v36)(__int64); // rax
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 (*v39)(); // rdx
  unsigned int v40; // eax
  __int64 v41; // r9
  unsigned __int32 v42; // esi
  __int64 (__fastcall *v43)(__int64 *, unsigned int, __int64, __int64, __int64, __int64); // rax
  __int64 v44; // rdi
  __int64 (*v45)(); // rax
  const char *v46; // rsi
  __int64 v47; // rcx
  char *v48; // rdx
  __int64 *v49; // rcx
  __int64 *v50; // rbx
  char *v51; // rax
  __int64 v52; // rdi
  __int64 v53; // rdx
  __int64 v54; // r12
  __int64 v55; // rbx
  __int64 *v56; // rax
  __int64 v57; // rdi
  __int64 v58; // rdx
  __int64 v59; // r12
  __int64 v60; // rbx
  __int64 *v61; // rax
  __int64 v62; // rdi
  const char *v63; // rdx
  __int64 v64; // r12
  __int64 v65; // rbx
  const char *v66; // rax
  __int64 v67; // rdi
  const char *v69; // rsi
  __int64 v70; // rax
  char *v71; // r14
  _WORD *v72; // rax
  double v73; // xmm4_8
  double v74; // xmm5_8
  char v75; // al
  __int64 v76; // rbx
  __int64 *v77; // rax
  __int64 v78; // rdi
  const char *v79; // rcx
  const char *v80; // r8
  const char *v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  __m128 v85; // xmm4
  __m128 v86; // xmm5
  int v87; // ebx
  char v88; // di
  char v89; // al
  const char *error_string; // rax
  const char *v91; // r12
  size_t v92; // rbx
  __int64 v93; // rsi
  __int64 (__fastcall *v94)(__int64); // rax
  __int64 v95; // rdi
  __int64 v96; // rax
  __int64 (*v97)(void); // rdx
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // r9
  __m128 v102; // xmm4
  __m128 v103; // xmm5
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // r9
  __m128 v107; // xmm4
  __m128 v108; // xmm5
  __int64 v109; // rdx
  const char *v110; // r12
  const char *v111; // rbx
  char v112; // al
  __m128i v113; // [rsp+0h] [rbp-E0h] BYREF
  __int64 *v114; // [rsp+10h] [rbp-D0h]
  __int64 v115; // [rsp+18h] [rbp-C8h]
  unsigned __int16 v116; // [rsp+28h] [rbp-B8h] BYREF
  __int16 v117; // [rsp+2Ah] [rbp-B6h] BYREF
  unsigned int v118; // [rsp+2Ch] [rbp-B4h] BYREF
  const char *v119; // [rsp+30h] [rbp-B0h] BYREF
  __int128 v120; // [rsp+38h] [rbp-A8h]
  __int64 v121; // [rsp+50h] [rbp-90h] BYREF
  __int128 v122; // [rsp+58h] [rbp-88h]
  __int64 v123; // [rsp+70h] [rbp-70h] BYREF
  __int128 v124; // [rsp+78h] [rbp-68h]
  char *v125; // [rsp+90h] [rbp-50h] BYREF
  __m128i v126; // [rsp+98h] [rbp-48h] BYREF
  unsigned __int64 v127; // [rsp+A8h] [rbp-38h]

  v114 = a10;
  v127 = __readfsqword(0x28u);
  v117 = 0;
  v116 = sub_434680();
  if ( (v116 & 0x20) == 0 )
  {
    v125 = nullptr;
    v79 = " Cancel";
    v126 = 0;
    v80 = (const char *)&unk_5C2F25;
    v81 = "* Scan";
    if ( !v114[1] )
    {
      v79 = "* No";
      v80 = "\n\nDo you really want to scan all files?";
      v81 = " Yes";
    }
    sub_169A50(
      (__int64 *)&v125,
      (__int64)"BUTTON YES%s\n"
               "BUTTON NO NONE\n"
               "BUTTON CANCEL%s\n"
               "What files to scan?\n"
               "\n"
               "<Checkout for ~a~dd new files       :C>\n"
               "<Checkout for ~d~elete deleted files:C>\n"
               "<Checkout for ~e~dit modified files :C>>%s\n"
               "\n"
               "<Do not ~s~how this dialog anymore:C>>",
      v81,
      v79,
      v80);
    v87 = sub_1697D0(
            (int)v125,
            (__int64)&v116,
            (__int64)&v117,
            v82,
            v83,
            v84,
            (__m128)0LL,
            a2,
            a3,
            a4,
            v85,
            v86,
            a7,
            a8,
            v113.m128i_i8[0]);
    if ( v125 )
    {
      v126.m128i_i64[0] = 0;
      qfree(v125, (const char *)&v116);
    }
    if ( v87 != 1 )
    {
      LOBYTE(v115) = 0;
      return (unsigned __int8)v115;
    }
    v88 = v116;
    if ( v117 )
    {
      v88 = v116 | 0x20;
      v116 |= 0x20u;
    }
    sub_4347E0(v88);
  }
  v119 = nullptr;
  v120 = 0;
  v12 = v114[1];
  v13 = *v114;
  v115 = *v114 + 48 * v12;
  if ( v115 != v13 )
  {
    v14 = v13;
    do
    {
      while ( 1 )
      {
        v18 = &s1;
        if ( *(_QWORD *)(v14 + 8) )
          v18 = *(const char **)v14;
        v125 = nullptr;
        v126 = 0;
        if ( v18 )
        {
          v19 = strlen(v18);
          v20 = v19 + 1;
          v21 = v19;
          v125 = (char *)qvector_reserve(&v125, 0, v19 + 1, 1);
          v126.m128i_i64[0] = v20;
          memmove(v125, v18, v21);
          v125[v21] = 0;
        }
        v70 = v120;
        v69 = v119;
        v22 = v120 + 1;
        if ( &v125 < (char **)v119 || &v125 >= (char **)&v119[24 * *((_QWORD *)&v120 + 1)] )
          break;
        a3 = 0;
        v15 = v125;
        v16 = _mm_loadl_epi64(&v126);
        v125 = nullptr;
        a2 = (__m128)_mm_loadl_epi64((const __m128i *)&v126.m128i_u64[1]);
        v126 = 0;
        if ( *((_QWORD *)&v120 + 1) < v22 )
        {
          v113.m128i_i64[0] = a2.m128_u64[0];
          v113.m128i_i64[1] = v16.m128i_i64[0];
          v119 = (const char *)qvector_reserve(&v119, v119, v120 + 1, 24);
          v69 = v119;
          a2 = (__m128)_mm_loadl_epi64(&v113);
          v16 = _mm_loadl_epi64((const __m128i *)&v113.m128i_u64[1]);
          v70 = v120;
        }
        v17 = (char *)&v69[24 * v70];
        *(_QWORD *)v17 = v15;
        *(__m128i *)(v17 + 8) = _mm_unpacklo_epi64(v16, (__m128i)a2);
        *(_QWORD *)&v120 = v120 + 1;
        if ( v125 )
        {
          v126.m128i_i64[0] = 0;
          qfree(v125, v69);
        }
        v14 += 48;
        if ( v115 == v14 )
          goto LABEL_18;
      }
      if ( *((_QWORD *)&v120 + 1) < v22 )
      {
        v119 = (const char *)qvector_reserve(&v119, v119, v120 + 1, 24);
        v69 = v119;
        v70 = v120;
      }
      v23 = _mm_loadu_si128(&v126);
      v14 += 48;
      v24 = (char *)&v69[24 * v70];
      *(_QWORD *)v24 = v125;
      *(__m128i *)(v24 + 8) = v23;
      *(_QWORD *)&v120 = v120 + 1;
    }
    while ( v115 != v14 );
LABEL_18:
    v12 = v114[1];
  }
  v25 = 0;
  v123 = 0;
  v121 = 0;
  v122 = 0;
  v124 = 0;
  if ( v12 )
  {
    v26 = v114;
    v27 = (const char *)&v121;
    LOBYTE(v115) = sub_435C20(
                     v114,
                     (const char *)&v121,
                     1,
                     (__int64)&v123,
                     0.0,
                     a2,
                     a3,
                     *(double *)a4.m128_u64,
                     v10,
                     v11,
                     a7,
                     a8);
    goto LABEL_21;
  }
  v125 = nullptr;
  v126 = 0;
  v125 = (char *)qvector_reserve(&v125, 0, 1, 48);
  v25 = 0;
  v71 = &v125[48 * v126.m128i_i64[0]];
  *((_QWORD *)v71 + 3) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)v71 = 0;
  *((_QWORD *)v71 + 4) = 0xFFFFFFFCFFFFFFFCLL;
  v71[40] = 0;
  *(_OWORD *)(v71 + 8) = 0;
  ++v126.m128i_i64[0];
  v72 = (_WORD *)qvector_reserve(v71, *(_QWORD *)v71, 3, 1);
  *(_QWORD *)v71 = v72;
  v27 = (const char *)&v121;
  *((_QWORD *)v71 + 1) = 3;
  v26 = (__int64 *)&v125;
  *v72 = 12079;
  *(_BYTE *)(*(_QWORD *)v71 + 2LL) = 0;
  v75 = sub_435C20(
          (__int64 *)&v125,
          (const char *)&v121,
          1,
          (__int64)&v123,
          0.0,
          a2,
          a3,
          *(double *)a4.m128_u64,
          v73,
          v74,
          a7,
          a8);
  v28 = (__int64 *)v125;
  LOBYTE(v115) = v75;
  if ( !v125 )
  {
LABEL_21:
    if ( (_BYTE)v115 )
      goto LABEL_22;
LABEL_67:
    sub_169700(
      (int)"The current operation was canceled\n",
      (__int64)&v121,
      (__int64)v28,
      v29,
      v30,
      v31,
      v25,
      a2,
      a3,
      a4,
      v32,
      v33,
      a7,
      a8,
      v113.m128i_i8[0]);
LABEL_68:
    LOBYTE(v115) = 0;
    goto LABEL_39;
  }
  v76 = v126.m128i_i64[0];
  if ( v126.m128i_i64[0] )
  {
    do
    {
      v77 = &v28[6 * v12];
      v78 = *v77;
      if ( *v77 )
      {
        v77[1] = 0;
        qfree(v78, (const char *)&v121);
        v28 = (__int64 *)v125;
      }
      ++v12;
    }
    while ( v76 != v12 );
  }
  v26 = v28;
  v126.m128i_i64[0] = 0;
  *(double *)v25.m128_u64 = qfree(v28, (const char *)&v121);
  if ( !(_BYTE)v115 )
    goto LABEL_67;
LABEL_22:
  v34 = sub_426230(v26, (const char *)&v121);
  v35 = (__int64 *)sub_417080((__int64)v34);
  v36 = *(__int64 (__fastcall **)(__int64))(*v35 + 256);
  if ( v36 == vault_with_events_t__::vfunc_32 )
  {
    v37 = v35[1];
    if ( v37 )
    {
      v38 = *(_QWORD *)v37;
      v39 = *(__int64 (**)())(*(_QWORD *)v37 + 480LL);
      if ( v39 == sub_178B60 )
      {
LABEL_25:
        v40 = (*(__int64 (__fastcall **)(__int64, unsigned int *, _QWORD))(v38 + 224))(v37, &v118, 0);
        goto LABEL_26;
      }
      if ( !(unsigned __int8)v39() )
      {
        v37 = v35[1];
        v38 = *(_QWORD *)v37;
        goto LABEL_25;
      }
    }
    v40 = 52;
    goto LABEL_96;
  }
  v40 = ((__int64 (__fastcall *)(__int64 *, unsigned int *, _QWORD))v36)(v35, &v118, 0);
LABEL_26:
  if ( v40 )
  {
LABEL_96:
    v27 = "Failed to add worklist";
    sub_4168C0(v40, (__int64)"Failed to add worklist");
    goto LABEL_68;
  }
  v41 = v116;
  v42 = v118;
  v43 = *(__int64 (__fastcall **)(__int64 *, unsigned int, __int64, __int64, __int64, __int64))(*v35 + 400);
  if ( v43 == vault_with_events_t__::vfunc_50 )
  {
    v44 = v35[1];
    if ( !v44
      || (v45 = *(__int64 (**)())(*(_QWORD *)v44 + 480LL), v45 != sub_178B60)
      && (v113.m128i_i32[2] = v118,
          LODWORD(v114) = v116,
          v89 = v45(),
          v41 = (unsigned int)v114,
          v42 = v113.m128i_u32[2],
          v89) )
    {
      v113.m128i_i32[2] = 52;
LABEL_79:
      error_string = (const char *)get_error_string(0);
      v125 = nullptr;
      v91 = error_string;
      v126 = 0;
      if ( error_string )
      {
        v92 = strlen(error_string);
        v114 = (__int64 *)(v92 + 1);
        v125 = (char *)qvector_reserve(&v125, 0, v92 + 1, 1);
        v126.m128i_i64[0] = (__int64)v114;
        memmove(v125, v91, v92);
        v125[v92] = 0;
      }
      v93 = v118;
      v94 = *(__int64 (__fastcall **)(__int64))(*v35 + 264);
      if ( v94 == vault_with_events_t__::vfunc_33 )
      {
        v95 = v35[1];
        if ( v95 )
        {
          v96 = *(_QWORD *)v95;
          v97 = *(__int64 (**)(void))(*(_QWORD *)v95 + 480LL);
          if ( v97 != sub_178B60 )
          {
            LODWORD(v114) = v118;
            v112 = v97();
            v93 = (unsigned int)v114;
            if ( v112 )
              goto LABEL_85;
            v95 = v35[1];
            v96 = *(_QWORD *)v95;
          }
          (*(void (__fastcall **)(__int64, __int64))(v96 + 232))(v95, v93);
        }
      }
      else
      {
        ((void (__fastcall *)(__int64 *, _QWORD))v94)(v35, v118);
      }
LABEL_85:
      v27 = v125;
      set_error_string(0, v125);
      if ( v113.m128i_i32[2] == 48 )
      {
        if ( (_QWORD)v120 )
        {
          sub_169700(
            (int)"The selected file(s) are up-to-date:\n",
            (__int64)v27,
            v98,
            v99,
            v100,
            v101,
            (__m128)0LL,
            a2,
            a3,
            a4,
            v102,
            v103,
            a7,
            a8,
            v113.m128i_i8[0]);
          v109 = (__int64)v119;
          v110 = v119;
          v111 = &v119[24 * v120];
          if ( v111 != v119 )
          {
            do
            {
              v27 = &s1;
              if ( *((_QWORD *)v110 + 1) )
                v27 = *(const char **)v110;
              sub_169700(
                (int)"  %s\n",
                (__int64)v27,
                v109,
                v104,
                v105,
                v106,
                (__m128)0LL,
                a2,
                a3,
                a4,
                v107,
                v108,
                a7,
                a8,
                v113.m128i_i8[0]);
              v110 += 24;
            }
            while ( v111 != v110 );
          }
          sub_169630(
            (int)"The selected file(s) are up-to-date.",
            (__int64)v27,
            v109,
            v104,
            v105,
            v106,
            (__m128)0LL,
            a2,
            a3,
            a4,
            v107,
            v108,
            a7,
            a8,
            v113.m128i_i8[0]);
        }
        else
        {
          sub_169630(
            (int)"All files are up-to-date.",
            (__int64)v27,
            v98,
            v99,
            v100,
            v101,
            (__m128)0LL,
            a2,
            a3,
            a4,
            v102,
            v103,
            a7,
            a8,
            v113.m128i_i8[0]);
        }
      }
      else
      {
        v27 = "Scan failed";
        sub_4168C0(v113.m128i_u32[2], (__int64)"Scan failed");
        LOBYTE(v115) = 0;
      }
      if ( v125 )
      {
        v126.m128i_i64[0] = 0;
        qfree(v125, v27);
      }
      goto LABEL_39;
    }
    v126 = 0;
    v125 = nullptr;
    v113.m128i_i32[2] = (*(__int64 (__fastcall **)(__int64, char **, _QWORD, const char **, __int64 *, __int64 *, __int64))(*(_QWORD *)v35[1] + 376LL))(
                          v35[1],
                          &v125,
                          v42,
                          &v119,
                          &v121,
                          &v123,
                          v41);
    v46 = (const char *)v113.m128i_u32[2];
    (*(void (__fastcall **)(__int64 *, _QWORD, char **, __int64))(*v35 + 24))(v35, v113.m128i_u32[2], &v125, v47);
    v48 = v125;
    if ( v125 )
    {
      v49 = (__int64 *)v126.m128i_i64[0];
      if ( v126.m128i_i64[0] )
      {
        v50 = nullptr;
        do
        {
          v51 = &v48[32 * (_QWORD)v50];
          v52 = *((_QWORD *)v51 + 1);
          if ( v52 )
          {
            *((_QWORD *)v51 + 2) = 0;
            v114 = v49;
            qfree(v52, v46);
            v48 = v125;
            v49 = v114;
          }
          v50 = (__int64 *)((char *)v50 + 1);
        }
        while ( v49 != v50 );
      }
      v126.m128i_i64[0] = 0;
      qfree(v48, v46);
    }
  }
  else
  {
    v113.m128i_i32[2] = v43(v35, v118, (__int64)&v119, (__int64)&v121, (__int64)&v123, v116);
  }
  if ( v113.m128i_i32[2] )
    goto LABEL_79;
  v27 = (const char *)v118;
  LOBYTE(v115) = sub_4344A0(v35, v118);
LABEL_39:
  v53 = v123;
  if ( v123 )
  {
    v54 = v124;
    if ( (_QWORD)v124 )
    {
      v55 = 0;
      do
      {
        v56 = (__int64 *)(v53 + 24 * v55);
        v57 = *v56;
        if ( *v56 )
        {
          v56[1] = 0;
          qfree(v57, v27);
          v53 = v123;
        }
        ++v55;
      }
      while ( v54 != v55 );
    }
    *(_QWORD *)&v124 = 0;
    qfree(v53, v27);
  }
  v58 = v121;
  if ( v121 )
  {
    v59 = v122;
    if ( (_QWORD)v122 )
    {
      v60 = 0;
      do
      {
        v61 = (__int64 *)(v58 + 24 * v60);
        v62 = *v61;
        if ( *v61 )
        {
          v61[1] = 0;
          qfree(v62, v27);
          v58 = v121;
        }
        ++v60;
      }
      while ( v59 != v60 );
    }
    *(_QWORD *)&v122 = 0;
    qfree(v58, v27);
  }
  v63 = v119;
  if ( v119 )
  {
    v64 = v120;
    if ( (_QWORD)v120 )
    {
      v65 = 0;
      do
      {
        v66 = &v63[24 * v65];
        v67 = *(_QWORD *)v66;
        if ( *(_QWORD *)v66 )
        {
          *((_QWORD *)v66 + 1) = 0;
          qfree(v67, v27);
          v63 = v119;
        }
        ++v65;
      }
      while ( v64 != v65 );
    }
    *(_QWORD *)&v120 = 0;
    qfree(v63, v27);
  }
  return (unsigned __int8)v115;
}
