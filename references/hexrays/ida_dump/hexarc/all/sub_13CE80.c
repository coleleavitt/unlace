__int64 __fastcall sub_13CE80(__int64 *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  bool v6; // zf
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 **v9; // rcx
  __int64 *v10; // r12
  unsigned int v11; // ebp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // r9d
  int v16; // eax
  __int64 v17; // r14
  unsigned __int64 v18; // r13
  void *v19; // r15
  __m128i si128; // xmm0
  __int64 v21; // rdx
  __int64 v22; // rdi
  __int64 v23; // r15
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // r9d
  __int64 i; // r13
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // r9d
  __int64 v34; // r14
  __int64 *v35; // r13
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  int v39; // r9d
  __int64 v40; // rax
  int v41; // edx
  int v42; // esi
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  int v46; // r9d
  __int64 v47; // rax
  int v48; // edx
  int v49; // esi
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  int v53; // r9d
  __int64 *v54; // r14
  unsigned __int64 v55; // r13
  void *v56; // r14
  __m128i v57; // xmm0
  __int64 v58; // rdi
  __int64 *v59; // rax
  __int64 v60; // rax
  __int64 *v61; // r14
  __int64 v62; // r13
  void *v63; // r14
  __int64 v64; // rdi
  __m128i v65; // xmm0
  __int64 v66; // rax
  __int64 *v67; // rax
  unsigned __int64 v68; // r14
  void *v69; // rcx
  __m128i v70; // xmm0
  __int64 v71; // rdi
  __int64 *v72; // rax
  __int64 v73; // rax
  void *v74; // rdi
  void *v76; // rax
  __int64 *v77; // r14
  int v78; // eax
  __int64 v79; // rax
  __m128i v80; // xmm0
  __int64 v81; // rax
  __int64 v82; // rdx
  void *v83; // rax
  __int64 v84; // rdx
  size_t v85[2]; // [rsp+0h] [rbp-1E8h] BYREF
  void **p_src; // [rsp+10h] [rbp-1D8h]
  __int64 *v87; // [rsp+18h] [rbp-1D0h]
  __int64 *v88; // [rsp+20h] [rbp-1C8h]
  __int64 *v89; // [rsp+28h] [rbp-1C0h]
  size_t v90[2]; // [rsp+30h] [rbp-1B8h] BYREF
  __int64 *v91; // [rsp+40h] [rbp-1A8h]
  __int64 v92; // [rsp+48h] [rbp-1A0h]
  __int64 *v93; // [rsp+50h] [rbp-198h]
  void **v94; // [rsp+58h] [rbp-190h]
  __int64 *v95; // [rsp+60h] [rbp-188h]
  __int64 v96; // [rsp+68h] [rbp-180h]
  size_t n[2]; // [rsp+70h] [rbp-178h] BYREF
  __int64 v98; // [rsp+88h] [rbp-160h] BYREF
  __int64 v99; // [rsp+90h] [rbp-158h] BYREF
  __int64 v100; // [rsp+98h] [rbp-150h]
  void *v101; // [rsp+A0h] [rbp-148h] BYREF
  __m128i v102; // [rsp+A8h] [rbp-140h] BYREF
  _QWORD v103[2]; // [rsp+C0h] [rbp-128h] BYREF
  __int64 v104; // [rsp+D0h] [rbp-118h] BYREF
  __int128 v105; // [rsp+D8h] [rbp-110h]
  __int64 v106[2]; // [rsp+F0h] [rbp-F8h] BYREF
  void *v107; // [rsp+100h] [rbp-E8h] BYREF
  __m128i v108; // [rsp+108h] [rbp-E0h]
  __int64 v109[2]; // [rsp+120h] [rbp-C8h] BYREF
  void *src; // [rsp+130h] [rbp-B8h] BYREF
  __int128 v111; // [rsp+138h] [rbp-B0h]
  __int64 v112[2]; // [rsp+150h] [rbp-98h] BYREF
  void *v113; // [rsp+160h] [rbp-88h] BYREF
  __int128 v114; // [rsp+168h] [rbp-80h]
  __int64 v115; // [rsp+180h] [rbp-68h] BYREF
  __int64 v116; // [rsp+188h] [rbp-60h]
  __int64 v117; // [rsp+190h] [rbp-58h] BYREF
  __int128 v118; // [rsp+198h] [rbp-50h]
  unsigned __int64 v119; // [rsp+1A8h] [rbp-40h]

  v6 = *((_BYTE *)a1 + 320) == 0;
  v119 = __readfsqword(0x28u);
  v7 = (__int64)a1;
  v98 = 0;
  if ( !v6 )
  {
    a2 = a1 + 41;
    a1 = &v98;
    v95 = &v98;
    copy_tinfo_t(&v98, a2);
  }
  v8 = *(unsigned int *)(v7 + 64);
  v96 = *(_QWORD *)(v7 + 1504);
  if ( !(_DWORD)v8 )
  {
    v95 = &v98;
    sub_12DFF0(a1, a2, v8, a4, a5, a6);
  }
  v9 = *(__int64 ***)(v7 + 528);
  v89 = *v9;
  v10 = v9[(unsigned int)(v8 - 1)];
  v11 = 0;
  v95 = &v98;
  v91 = v103;
  v88 = &v99;
  v99 = 0;
  v100 = 0;
  v101 = nullptr;
  p_src = &src;
  v102 = 0;
  while ( 1 )
  {
    v103[0] = 0;
    v103[1] = 0;
    v104 = 0;
    v105 = 0;
    sub_132A00(v7, (__int64)v88, v91, v95, -1, 0);
    v16 = *(_DWORD *)v7;
    v106[0] = 0;
    v106[1] = 0;
    v107 = nullptr;
    v108 = 0;
    if ( (v16 & 0x4000) != 0 )
    {
      v87 = v106;
    }
    else
    {
      if ( (v16 & 0x8000) != 0 )
      {
        if ( !under_debugger )
        {
          v87 = v106;
          sub_37B760(50429);
        }
        BUG();
      }
      v17 = *(_QWORD *)(v7 + 1504);
      v87 = v106;
      sub_5E350(v106, (__int64 *)(v17 + 224));
      v18 = *(_QWORD *)(v17 + 248);
      v19 = nullptr;
      if ( v18 )
      {
        v85[0] = 16 * v18;
        v19 = (void *)qalloc_or_throw(16 * v18);
        memcpy(v19, *(const void **)(v17 + 240), v85[0]);
      }
      si128 = _mm_unpacklo_epi64((__m128i)v18, (__m128i)v18);
      if ( v107 )
      {
        *(__m128i *)v85 = si128;
        v108.m128i_i64[0] = 0;
        qfree(v107);
        si128 = _mm_load_si128((const __m128i *)v85);
      }
      v21 = *(_QWORD *)(v7 + 920);
      v22 = *(_QWORD *)(v7 + 1504);
      v107 = v19;
      v108 = si128;
      sub_130D20(v22, v87, v21);
    }
    v23 = v96;
    v90[0] = v96 + 104;
    sub_5E0C0(v88, (__int64 *)(v96 + 104), v12, v13, v14, v15);
    v92 = v23 + 120;
    sub_3108E0(&v101, v23 + 120);
    v6 = *(_BYTE *)(v7 + 320) == 0;
    v109[0] = 0;
    v109[1] = 0;
    src = nullptr;
    v111 = 0;
    if ( !v6 )
      sub_12E6E0(v109, v7, v24, v25, v26, v27);
    for ( i = *(_QWORD *)(v7 + 520); i; i = *(_QWORD *)(i + 8) )
    {
      if ( (*(_DWORD *)(i + 24) & 0x600) != 0x200 )
        v11 += sub_A0ED0(i, 0, v24, v25, v26, v27);
      if ( v10 != (__int64 *)i )
      {
        sub_5DD00(v109, (__int64 *)(i + 120));
        sub_30F930(p_src, i + 136);
      }
    }
    sub_5DD00(v88, v87);
    v94 = &v107;
    sub_30F930(&v101, &v107);
    v93 = v89 + 30;
    if ( sub_11C570((__int64)(v89 + 30), (__int64)v109) )
      break;
    v29 = *(_DWORD *)v7;
    if ( (*(_DWORD *)v7 & 0x4000) != 0 )
      goto LABEL_64;
LABEL_22:
    if ( (v29 & 0x1000) == 0 )
      goto LABEL_64;
    BYTE1(v29) |= 0x40u;
    *(_DWORD *)v7 = v29;
    v85[0] = (size_t)v112;
    sub_5DA80(v112, (__int64)v109);
    v34 = v111;
    v113 = nullptr;
    v114 = 0;
    if ( (_QWORD)v111 )
    {
      n[0] = 16 * v111;
      v113 = (void *)qalloc_or_throw(16 * v111);
      *((_QWORD *)&v114 + 1) = v34;
      memcpy(v113, src, n[0]);
      *(_QWORD *)&v114 = v34;
    }
    sub_5E0C0((__int64 *)v85[0], v91, v30, v31, v32, v33);
    sub_3108E0(&v113, &v104);
    v35 = (__int64 *)v85[0];
    sub_5E0C0((__int64 *)v85[0], (__int64 *)v90[0], v36, v37, v38, v39);
    sub_3108E0(&v113, v92);
    sub_130D20(*(_QWORD *)(v7 + 1504), v35, *(_QWORD *)(v7 + 920));
    v40 = *(_QWORD *)(v7 + 1504);
    v41 = *(_DWORD *)(v40 + 80);
    v42 = *(_DWORD *)(v40 + 64);
    v115 = 0;
    v116 = 0;
    sub_5D900(&v115, v42, v41);
    v117 = 0;
    v118 = 0;
    sub_5E0C0((__int64 *)v85[0], &v115, v43, v44, v45, v46);
    v90[0] = (size_t)&v117;
    sub_3108E0(&v113, &v117);
    if ( v117 )
    {
      *(_QWORD *)&v118 = 0;
      qfree(v117);
    }
    qfree(v115);
    v47 = *(_QWORD *)(v7 + 1504);
    v48 = *(_DWORD *)(v47 + 80);
    v49 = *(_DWORD *)(v47 + 60);
    v115 = 0;
    v116 = 0;
    sub_5D900(&v115, v49, v48);
    v117 = 0;
    v118 = 0;
    sub_5E0C0((__int64 *)v85[0], &v115, v50, v51, v52, v53);
    sub_3108E0(&v113, v90[0]);
    if ( v117 )
    {
      *(_QWORD *)&v118 = 0;
      qfree(v117);
    }
    qfree(v115);
    if ( !(unsigned __int8)sub_5E300((_QWORD *)v85[0]) )
    {
      sub_5DD00(v109, v87);
      sub_30F930(p_src, v94);
      v54 = v93;
      if ( sub_11C570((__int64)v93, (__int64)v109) )
      {
        sub_5E350(v54, v109);
        v55 = v111;
        v56 = nullptr;
        if ( (_QWORD)v111 )
        {
          v90[0] = 16 * v111;
          v56 = (void *)qalloc_or_throw(16 * v111);
          memcpy(v56, src, v90[0]);
        }
        v57 = _mm_unpacklo_epi64((__m128i)v55, (__m128i)v55);
        v58 = v89[32];
        if ( v58 )
        {
          v89[33] = 0;
          *(__m128i *)v90 = v57;
          qfree(v58);
          v57 = _mm_load_si128((const __m128i *)v90);
        }
        v59 = v89;
        v89[32] = (__int64)v56;
        *(__m128i *)(v59 + 33) = v57;
        v60 = *(_QWORD *)(v7 + 784);
        if ( v60 )
          *(_DWORD *)(v60 + 48) = 63;
        ++v11;
      }
      v61 = v88;
      if ( sub_11C570((__int64)(v10 + 20), (__int64)v88) )
      {
        sub_5E350(v10 + 20, v61);
        v62 = v102.m128i_i64[0];
        v63 = nullptr;
        if ( v102.m128i_i64[0] )
        {
          v90[0] = 16 * v102.m128i_i64[0];
          v63 = (void *)qalloc_or_throw(16 * v102.m128i_i64[0]);
          memcpy(v63, v101, v90[0]);
        }
        v64 = v10[22];
        v65 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v62, (__m128i)(unsigned __int64)v62);
        if ( v64 )
        {
          v10[23] = 0;
          *(__m128i *)v90 = v65;
          qfree(v64);
          v65 = _mm_load_si128((const __m128i *)v90);
        }
        v10[22] = (__int64)v63;
        *(__m128i *)(v10 + 23) = v65;
        v66 = *(_QWORD *)(v7 + 784);
        if ( v66 )
          *(_DWORD *)(v66 + 48) = 63;
        ++v11;
      }
      sub_60A20(v7, 1u, (__int64)"before save-restore analysis");
      v67 = (__int64 *)sub_60B60((_QWORD *)v7);
      if ( (unsigned int)sub_13B7C0(v67, (__int64)v87, nullptr) )
      {
        ++v11;
        sub_60A20(v7, 1u, (__int64)"after save-restore analysis");
      }
    }
    if ( v113 )
    {
      *(_QWORD *)&v114 = 0;
      qfree(v113);
    }
    qfree(v112[0]);
    if ( src )
    {
      *(_QWORD *)&v111 = 0;
      qfree(src);
    }
    qfree(v109[0]);
    if ( v107 )
    {
      v108.m128i_i64[0] = 0;
      qfree(v107);
    }
    qfree(v106[0]);
    if ( v104 )
    {
      *(_QWORD *)&v105 = 0;
      qfree(v104);
    }
    qfree(v103[0]);
  }
  sub_5E350(v93, v109);
  v68 = v111;
  v69 = nullptr;
  if ( (_QWORD)v111 )
  {
    v85[0] = 16 * v111;
    v76 = (void *)qalloc_or_throw(16 * v111);
    v69 = memcpy(v76, src, v85[0]);
  }
  v70 = _mm_unpacklo_epi64((__m128i)v68, (__m128i)v68);
  v71 = v89[32];
  if ( v71 )
  {
    v89[33] = 0;
    v85[0] = (size_t)v69;
    *(__m128i *)n = v70;
    qfree(v71);
    v70 = _mm_load_si128((const __m128i *)n);
    v69 = (void *)v85[0];
  }
  v72 = v89;
  v89[32] = (__int64)v69;
  *(__m128i *)(v72 + 33) = v70;
  v73 = *(_QWORD *)(v7 + 784);
  if ( v73 )
    *(_DWORD *)(v73 + 48) = 63;
  v29 = *(_DWORD *)v7;
  ++v11;
  if ( (*(_DWORD *)v7 & 0x4000) == 0 )
    goto LABEL_22;
LABEL_64:
  if ( src )
  {
    *(_QWORD *)&v111 = 0;
    qfree(src);
  }
  qfree(v109[0]);
  if ( v107 )
  {
    v108.m128i_i64[0] = 0;
    qfree(v107);
  }
  qfree(v106[0]);
  if ( v104 )
  {
    *(_QWORD *)&v105 = 0;
    qfree(v104);
  }
  qfree(v103[0]);
  if ( *(char *)(v7 + 1) >= 0 )
  {
    v77 = v88;
    sub_130D20(*(_QWORD *)(v7 + 1504), v88, *(_QWORD *)(v7 + 920));
    v78 = sub_11C570((__int64)(v10 + 20), (__int64)v77);
    v74 = v101;
    if ( v78 )
    {
      v79 = v10[20];
      v80 = _mm_loadu_si128(&v102);
      v10[20] = v99;
      v99 = v79;
      v81 = v10[21];
      v10[21] = v100;
      v82 = v10[24];
      v100 = v81;
      v83 = (void *)v10[22];
      v102.m128i_i64[1] = v82;
      v10[22] = (__int64)v74;
      *(__m128i *)(v10 + 23) = v80;
      v84 = *(_QWORD *)(v7 + 784);
      v101 = v83;
      if ( v84 )
        *(_DWORD *)(v84 + 48) = 63;
      ++v11;
      v74 = v83;
    }
  }
  else
  {
    v74 = v101;
  }
  if ( v74 )
  {
    v102.m128i_i64[0] = 0;
    qfree(v74);
  }
  qfree(v99);
  clear_tinfo_t(v95);
  return v11;
}
