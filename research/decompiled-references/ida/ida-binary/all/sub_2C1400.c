__int64 __fastcall gruser_model_data_t__::vfunc_2(
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
  int *v12; // rdi
  int (*v13)(void); // rax
  __int64 v14; // r12
  __int64 v15; // rbx
  __int64 v16; // r14
  double v17; // xmm0_8
  char v18; // al
  __int64 v19; // rbp
  __int64 (__fastcall *v20)(__int64, __int64, __int64, __int64, _QWORD, __int64, double); // r15
  __int64 v21; // rax
  __m128i *v23; // r15
  __int64 (*v24)(); // rax
  __int64 v25; // rax
  __m128i *v26; // rdx
  __int64 (__fastcall *v27)(__int64); // rax
  int v28; // eax
  __int64 v29; // rbp
  _DWORD *v30; // r12
  __int64 (__fastcall *v31)(__int64, int); // rax
  unsigned __int64 v32; // rsi
  _QWORD *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rdx
  __m128 v36; // xmm0
  __int64 i; // rbx
  __int64 v38; // rax
  __int64 (__fastcall *v39)(__int64, int, int); // rcx
  __int64 v40; // r13
  __int64 (__fastcall *v41)(__int64, int); // rax
  char v42; // al
  __int64 v43; // rsi
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __m128 v48; // xmm4
  __m128 v49; // xmm5
  __int64 v50; // rdx
  __m128i *v51; // rsi
  __m128i *v52; // rbx
  __m128i *v53; // r13
  unsigned __int64 v54; // rcx
  __int64 v55; // rsi
  __int64 v56; // rdi
  __m128i *v57; // r11
  int v58; // ecx
  int v59; // eax
  int v60; // edx
  __int64 v61; // rax
  __int64 (__fastcall *v62)(__int64, int); // rax
  __int64 v63; // rbx
  __int64 v64; // rax
  __int64 (__fastcall *v65)(__int64, int, int); // rcx
  unsigned int v66; // r13d
  __int64 (__fastcall *v67)(__int64, int); // rax
  char v68; // al
  __int64 v69; // rsi
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __m128 v74; // xmm4
  __m128 v75; // xmm5
  __int64 v76; // rdx
  __m128i *v77; // rsi
  __m128i *v78; // rbp
  __int64 v79; // rdx
  __int64 v80; // rcx
  __m128i *v81; // rbx
  unsigned __int64 v82; // rcx
  __int64 v83; // rsi
  int v84; // edi
  int v85; // ecx
  int v86; // eax
  int v87; // edx
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  _DWORD *v91; // rdi
  int (*v92)(void); // rax
  void (__fastcall *v93)(__int64); // rbx
  __int64 (*v94)(void); // rax
  char v95; // [rsp+0h] [rbp-128h]
  __int64 v96; // [rsp+8h] [rbp-120h]
  __int64 v97; // [rsp+8h] [rbp-120h]
  char v98; // [rsp+10h] [rbp-118h]
  __int64 v99; // [rsp+20h] [rbp-108h]
  __int64 v100; // [rsp+20h] [rbp-108h]
  int v102; // [rsp+30h] [rbp-F8h]
  int v103; // [rsp+30h] [rbp-F8h]
  _BOOL4 v104; // [rsp+34h] [rbp-F4h]
  __m128i *v106; // [rsp+50h] [rbp-D8h] BYREF
  unsigned int v107; // [rsp+58h] [rbp-D0h]
  __m128i *v108; // [rsp+60h] [rbp-C8h] BYREF
  __int128 v109; // [rsp+68h] [rbp-C0h]
  char v110[48]; // [rsp+80h] [rbp-A8h] BYREF
  char v111[8]; // [rsp+B0h] [rbp-78h] BYREF
  int v112; // [rsp+B8h] [rbp-70h] BYREF
  _QWORD *v113; // [rsp+C0h] [rbp-68h]
  int *v114; // [rsp+C8h] [rbp-60h]
  int *v115; // [rsp+D0h] [rbp-58h]
  __int64 v116; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v117; // [rsp+E8h] [rbp-40h]

  v98 = a3;
  v117 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 64) )
  {
    if ( !under_debugger )
      interr(40428, a2, a3, a4, a5);
    BUG();
  }
  v12 = *(int **)(a1 + 8);
  v13 = *(int (**)(void))(*(_QWORD *)v12 + 56LL);
  if ( (char *)v13 == (char *)interactive_graph_t__::vfunc_7 )
    v14 = v12[46];
  else
    v14 = v13();
  v15 = 0;
  v16 = 0;
  v17 = (*(double (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 24LL))(a1, v14);
  sub_1E96E0((QT::QObject *)v110, v17, *(_QWORD *)(a2 + 16), 2);
  v18 = 1;
  if ( v14 )
  {
    do
    {
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 80LL) + 4LL * (int)v16) != 0x7FFFFFFF )
      {
        v19 = *(_QWORD *)(a1 + 16) + 2 * v15;
        v18 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)a1 + 32LL))(
                a1,
                v19,
                (unsigned int)v16,
                a2);
        if ( v18 )
        {
          v20 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD, __int64, double))(*(_QWORD *)a1 + 40LL);
          v96 = v15 + *(_QWORD *)(a1 + 40);
          v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 8) + 152LL))(
                  *(_QWORD *)(a1 + 8),
                  (unsigned int)v16);
          v18 = v20(a1, v21, v96, v19, (unsigned int)v16, a2, 1.0);
        }
      }
      ++v16;
      v15 += 12;
    }
    while ( v14 != v16 );
    if ( !v18 )
      goto LABEL_12;
  }
  if ( !v98 && !(unsigned __int8)sub_2C0340(a2, *(int **)(a1 + 8)) )
    goto LABEL_12;
  v112 = 0;
  v113 = nullptr;
  v116 = 0;
  v23 = *(__m128i **)(a1 + 8);
  v114 = &v112;
  v115 = &v112;
  v24 = *(__int64 (**)())(v23->m128i_i64[0] + 264);
  if ( v24 == interactive_graph_t__::vfunc_33 || !((unsigned __int8 (__fastcall *)(__m128i *))v24)(v23) )
    sub_293820((__int64)v111, v23[15].m128i_i64[1]);
  v108 = v23;
  LODWORD(v109) = 0;
  v25 = node_iterator_goup(&v108);
  v26 = *(__m128i **)v25;
  LODWORD(v25) = *(_DWORD *)(v25 + 8);
  v106 = v26;
  v107 = v25;
  while ( 1 )
  {
    v27 = *(__int64 (__fastcall **)(__int64))(v23->m128i_i64[0] + 56);
    v28 = v27 == interactive_graph_t__::vfunc_7 ? v23[11].m128i_i32[2] : v27((__int64)v23);
    v29 = v107;
    if ( v107 == v28 && v23 == v106 )
      break;
    v30 = (_DWORD *)(*(__int64 (__fastcall **)(__m128i *, _QWORD))(v23->m128i_i64[0] + 152))(v23, v107);
    v31 = *(__int64 (__fastcall **)(__int64, int))(v23->m128i_i64[0] + 96);
    if ( v31 == interactive_graph_t__::vfunc_12 )
    {
      v32 = v23[11].m128i_u64[0];
      v102 = *(_DWORD *)(v32 + 24LL * (int)v29 + 8);
      v33 = v113;
      if ( !v113 )
        goto LABEL_95;
    }
    else
    {
      v32 = (unsigned int)v29;
      v102 = v31((__int64)v23, v29);
      v33 = v113;
      if ( !v113 )
      {
LABEL_95:
        v104 = 0;
        goto LABEL_27;
      }
    }
    v32 = (unsigned __int64)&v112;
    do
    {
      while ( 1 )
      {
        v34 = v33[2];
        v35 = v33[3];
        if ( (int)v29 > *((_DWORD *)v33 + 8) )
          break;
        v32 = (unsigned __int64)v33;
        v33 = (_QWORD *)v33[2];
        if ( !v34 )
          goto LABEL_25;
      }
      v33 = (_QWORD *)v33[3];
    }
    while ( v35 );
LABEL_25:
    v104 = 0;
    if ( (int *)v32 != &v112 )
      v104 = (int)v29 >= *(_DWORD *)(v32 + 32);
LABEL_27:
    v36 = 0;
    v108 = nullptr;
    v109 = 0;
    if ( v102 > 0 )
    {
      for ( i = 0; i != v102; ++i )
      {
        while ( 1 )
        {
          v38 = v23->m128i_i64[0];
          v39 = *(__int64 (__fastcall **)(__int64, int, int))(v23->m128i_i64[0] + 112);
          if ( v39 == interactive_graph_t__::vfunc_14 )
          {
            v40 = *(unsigned int *)(*(_QWORD *)(v23[11].m128i_i64[0] + 24LL * (int)v29) + 4 * i);
          }
          else
          {
            v40 = (unsigned int)v39((__int64)v23, v29, i);
            v38 = v23->m128i_i64[0];
          }
          v41 = *(__int64 (__fastcall **)(__int64, int))(v38 + 72);
          if ( v41 == interactive_graph_t__::vfunc_9 )
            v42 = sub_29AC50((__int64)v23, v40);
          else
            v42 = v41((__int64)v23, v40);
          if ( !v42 )
            sub_16B930((__int64)"node %d does not belong to the graph", v40);
          v43 = (unsigned int)v29 | (unsigned __int64)(v40 << 32);
          v46 = (*(__int64 (__fastcall **)(__m128i *, __int64))(v23->m128i_i64[0] + 160))(v23, v43);
          if ( v46 )
            break;
          sub_169700(
            (int)"Coherency check failed: ei != nullptr\n",
            v43,
            v44,
            v45,
            0,
            v47,
            (__m128)0LL,
            a6,
            a7,
            a8,
            v48,
            v49,
            a11,
            a12,
            v95);
          if ( ++i == v102 )
            goto LABEL_41;
        }
        v50 = v109;
        v51 = v108;
        if ( *((_QWORD *)&v109 + 1) < (unsigned __int64)(v109 + 1) )
        {
          v99 = v46;
          v108 = (__m128i *)qvector_reserve(&v108, v108, v109 + 1, 8);
          v50 = v109;
          v51 = v108;
          v46 = v99;
        }
        v51->m128i_i64[v50] = v46;
        *(_QWORD *)&v109 = v109 + 1;
      }
LABEL_41:
      v32 = v109;
      v52 = v108;
      v53 = (__m128i *)((char *)v108 + 8 * v109);
      if ( v108 != v53 )
      {
        v54 = (8 * (__int64)v109) >> 3;
        v55 = -2;
        if ( v54 )
        {
          _BitScanReverse64(&v54, v54);
          v55 = 2LL * (int)v54;
        }
        sub_2C1140(v108, &v108->m128i_i64[v109], v55, (__int64)&v108, 0);
        sub_2B2840(v52->m128i_i8, v53->m128i_i8, (__int64)&v108, 0);
        v32 = v109;
      }
      if ( v32 )
      {
        v56 = 0;
        LODWORD(v32) = 0;
        v57 = v108;
        do
        {
          v58 = (v30[2] - *v30) / 2;
          v59 = (v30[2] - *v30 - 4) / (v104 + v102 + 1);
          if ( v59 > 8 )
          {
            if ( v59 > 20 )
              v59 = 20;
            v60 = v58 + (v104 + v102) / -2 * v59;
            if ( ((v104 + v102) & 1) == 0 )
              v60 += v59 >> 1;
            v58 = v60 + v59 * (v104 + v32);
          }
          v61 = v57->m128i_i64[v56];
          v32 = (unsigned int)(v32 + 1);
          v56 = (int)v32;
          *(_DWORD *)(v61 + 8) = v58;
        }
        while ( (int)v32 < (unsigned __int64)v109 );
      }
    }
    v62 = *(__int64 (__fastcall **)(__int64, int))(v23->m128i_i64[0] + 104);
    if ( v62 == interactive_graph_t__::vfunc_13 )
    {
      v103 = *(_DWORD *)(v23[12].m128i_i64[1] + 24LL * (int)v29 + 8);
    }
    else
    {
      v32 = (unsigned int)v29;
      v103 = v62((__int64)v23, v29);
    }
    if ( v108 )
    {
      *(_QWORD *)&v109 = 0;
      *(double *)v36.m128_u64 = qfree(v108, (const char *)v32);
      v108 = nullptr;
      *((_QWORD *)&v109 + 1) = 0;
    }
    if ( v103 <= 0 )
    {
      v78 = v108;
      v79 = 0;
      v80 = 8 * v109;
      v81 = (__m128i *)((char *)v108 + 8 * v109);
      if ( v81 == v108 )
        goto LABEL_85;
    }
    else
    {
      v63 = 0;
      v97 = v103;
      do
      {
        while ( 1 )
        {
          v64 = v23->m128i_i64[0];
          v65 = *(__int64 (__fastcall **)(__int64, int, int))(v23->m128i_i64[0] + 120);
          if ( v65 == interactive_graph_t__::vfunc_15 )
          {
            v66 = *(_DWORD *)(*(_QWORD *)(v23[12].m128i_i64[1] + 24LL * (int)v29) + 4 * v63);
          }
          else
          {
            v66 = v65((__int64)v23, v29, v63);
            v64 = v23->m128i_i64[0];
          }
          v67 = *(__int64 (__fastcall **)(__int64, int))(v64 + 72);
          if ( v67 == interactive_graph_t__::vfunc_9 )
            v68 = sub_29AC50((__int64)v23, v66);
          else
            v68 = v67((__int64)v23, v66);
          if ( !v68 )
            sub_16B930((__int64)"node %d does not belong to the graph", v66);
          v69 = (v29 << 32) | v66;
          v72 = (*(__int64 (__fastcall **)(__m128i *, __int64))(v23->m128i_i64[0] + 160))(v23, v69);
          if ( v72 )
            break;
          sub_169700(
            (int)"Coherency check failed: ei != nullptr\n",
            v69,
            v70,
            v71,
            0,
            v73,
            v36,
            a6,
            a7,
            a8,
            v74,
            v75,
            a11,
            a12,
            v95);
          if ( ++v63 == v103 )
            goto LABEL_72;
        }
        v76 = v109;
        v77 = v108;
        if ( *((_QWORD *)&v109 + 1) < (unsigned __int64)(v109 + 1) )
        {
          v100 = v72;
          v108 = (__m128i *)qvector_reserve(&v108, v108, v109 + 1, 8);
          v76 = v109;
          v77 = v108;
          v72 = v100;
        }
        ++v63;
        v77->m128i_i64[v76] = v72;
        *(_QWORD *)&v109 = v109 + 1;
      }
      while ( v63 != v103 );
LABEL_72:
      v78 = v108;
      v79 = 0;
      v80 = 8 * v109;
      v81 = (__m128i *)((char *)v108 + 8 * v109);
      if ( v108 == v81 )
        goto LABEL_77;
    }
    v82 = v80 >> 3;
    LOBYTE(v79) = 1;
    v83 = -2;
    if ( v82 )
    {
      _BitScanReverse64(&v82, v82);
      v83 = 2LL * (int)v82;
    }
    sub_2C1140(v78, v81->m128i_i64, v83, (__int64)&v108, v79);
    v32 = (unsigned __int64)v81;
    sub_2B2840(v78->m128i_i8, v81->m128i_i8, (__int64)&v108, 1);
    v81 = v108;
    if ( v103 > 0 )
    {
      v97 = v103;
LABEL_77:
      v84 = v104;
      v32 = (unsigned __int64)v81;
      do
      {
        v85 = (v30[2] - *v30) / 2;
        v86 = (v30[2] - *v30 - 4) / (v104 + v103 + 1);
        if ( v86 > 8 )
        {
          if ( v86 > 20 )
            v86 = 20;
          v87 = v85 + v86 * ((v104 + v103) / -2);
          if ( ((v104 + v103) & 1) == 0 )
            v87 += v86 >> 1;
          v85 = v84 * v86 + v87;
        }
        v88 = *(_QWORD *)v32;
        v32 += 8LL;
        ++v84;
        *(_DWORD *)(v88 + 12) = v85;
      }
      while ( (__m128i *)v32 != (__m128i *)((char *)v81 + 8 * v97) );
    }
LABEL_85:
    if ( v81 )
    {
      *(_QWORD *)&v109 = 0;
      qfree(v81, (const char *)v32);
    }
    ++v107;
    node_iterator_goup(&v106);
  }
  sub_2B3510(v113);
  sub_2BB620(a2, *(_QWORD *)(a1 + 8), v89, v90);
  v91 = *(_DWORD **)(a1 + 8);
  v92 = *(int (**)(void))(*(_QWORD *)v91 + 56LL);
  if ( (char *)v92 == (char *)interactive_graph_t__::vfunc_7 )
  {
    if ( *(_QWORD *)(a1 + 48) != v91[46] )
    {
      v93 = *(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL);
      goto LABEL_92;
    }
  }
  else if ( v92() != *(_QWORD *)(a1 + 48) )
  {
    v93 = *(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL);
    v94 = *(__int64 (**)(void))(**(_QWORD **)(a1 + 8) + 56LL);
    if ( (char *)v94 != (char *)interactive_graph_t__::vfunc_7 )
      v94();
LABEL_92:
    v93(a1);
  }
LABEL_12:
  *(_BYTE *)(a1 + 64) = 1;
  sub_1E98C0((QT::QObject *)v110);
  return 1;
}
