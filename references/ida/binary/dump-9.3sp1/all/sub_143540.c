__int64 __fastcall sub_143540(__int64 *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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
  __int64 v18; // rcx
  unsigned __int64 v19; // r13
  void *v20; // r15
  __m128i si128; // xmm0
  __int64 v22; // rdx
  __int64 v23; // rdi
  __int64 v24; // r15
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // r9d
  __int64 i; // r13
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  int v34; // r9d
  __int64 v35; // r14
  __int64 *v36; // r13
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  int v40; // r9d
  __int64 v41; // rax
  int v42; // edx
  int v43; // esi
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  int v47; // r9d
  __int64 v48; // rax
  int v49; // edx
  int v50; // esi
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  int v54; // r9d
  __int64 *v55; // r14
  __int64 v56; // rcx
  unsigned __int64 v57; // r13
  void *v58; // r14
  __m128i v59; // xmm0
  __int64 v60; // rdi
  __int64 *v61; // rax
  __int64 v62; // rax
  __int64 *v63; // r14
  __int64 v64; // rsi
  __int64 v65; // rcx
  __int64 v66; // r13
  void *v67; // r14
  __int64 v68; // rdi
  __m128i v69; // xmm0
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  unsigned __int64 *v73; // rax
  unsigned __int64 v74; // r14
  void *v75; // rcx
  __m128i v76; // xmm0
  __int64 v77; // rdi
  __int64 *v78; // rax
  __int64 v79; // rax
  void *v80; // rdi
  void *v82; // rax
  __int64 *v83; // r14
  int v84; // eax
  __int64 v85; // rax
  __m128i v86; // xmm0
  __int64 v87; // rax
  __int64 v88; // rdx
  void *v89; // rax
  __int64 v90; // rdx
  size_t v91[2]; // [rsp+0h] [rbp-1E8h] BYREF
  void **p_src; // [rsp+10h] [rbp-1D8h]
  __int64 *v93; // [rsp+18h] [rbp-1D0h]
  __int64 *v94; // [rsp+20h] [rbp-1C8h]
  __int64 *v95; // [rsp+28h] [rbp-1C0h]
  size_t v96[2]; // [rsp+30h] [rbp-1B8h] BYREF
  __int64 *v97; // [rsp+40h] [rbp-1A8h]
  __int64 v98; // [rsp+48h] [rbp-1A0h]
  __int64 *v99; // [rsp+50h] [rbp-198h]
  __int64 *v100; // [rsp+58h] [rbp-190h]
  __int64 *v101; // [rsp+60h] [rbp-188h]
  __int64 v102; // [rsp+68h] [rbp-180h]
  size_t n[2]; // [rsp+70h] [rbp-178h] BYREF
  __int64 v104; // [rsp+88h] [rbp-160h] BYREF
  __int64 v105; // [rsp+90h] [rbp-158h] BYREF
  __int64 v106; // [rsp+98h] [rbp-150h]
  void *v107; // [rsp+A0h] [rbp-148h] BYREF
  __m128i v108; // [rsp+A8h] [rbp-140h] BYREF
  __int64 v109[2]; // [rsp+C0h] [rbp-128h] BYREF
  __int64 v110; // [rsp+D0h] [rbp-118h] BYREF
  __int128 v111; // [rsp+D8h] [rbp-110h]
  __int64 v112[2]; // [rsp+F0h] [rbp-F8h] BYREF
  __int64 v113; // [rsp+100h] [rbp-E8h] BYREF
  __m128i v114; // [rsp+108h] [rbp-E0h]
  __int64 v115[2]; // [rsp+120h] [rbp-C8h] BYREF
  void *src; // [rsp+130h] [rbp-B8h] BYREF
  __int128 v117; // [rsp+138h] [rbp-B0h]
  __int64 v118[2]; // [rsp+150h] [rbp-98h] BYREF
  void *v119; // [rsp+160h] [rbp-88h] BYREF
  __int128 v120; // [rsp+168h] [rbp-80h]
  __int64 v121; // [rsp+180h] [rbp-68h] BYREF
  __int64 v122; // [rsp+188h] [rbp-60h]
  __int64 v123; // [rsp+190h] [rbp-58h] BYREF
  __int128 v124; // [rsp+198h] [rbp-50h]
  unsigned __int64 v125; // [rsp+1A8h] [rbp-40h]

  v6 = *((_BYTE *)a1 + 320) == 0;
  v125 = __readfsqword(0x28u);
  v7 = (__int64)a1;
  v104 = 0;
  if ( !v6 )
  {
    a2 = a1 + 41;
    a1 = &v104;
    v101 = &v104;
    copy_tinfo_t();
  }
  v8 = *(unsigned int *)(v7 + 64);
  v102 = *(_QWORD *)(v7 + 1504);
  if ( !(_DWORD)v8 )
  {
    v101 = &v104;
    sub_1346B0(a1, a2, v8, a4, a5, a6);
  }
  v9 = *(__int64 ***)(v7 + 528);
  v95 = *v9;
  v10 = v9[(unsigned int)(v8 - 1)];
  v11 = 0;
  v101 = &v104;
  v97 = v109;
  v94 = &v105;
  v105 = 0;
  v106 = 0;
  v107 = nullptr;
  p_src = &src;
  v108 = 0;
  while ( 1 )
  {
    v109[0] = 0;
    v109[1] = 0;
    v110 = 0;
    v111 = 0;
    sub_1390C0(v7, (__int64)v94, v97, (__int64)v101, -1, 0);
    v16 = *(_DWORD *)v7;
    v112[0] = 0;
    v112[1] = 0;
    v113 = 0;
    v114 = 0;
    if ( (v16 & 0x4000) != 0 )
    {
      v93 = v112;
    }
    else
    {
      if ( (v16 & 0x8000) != 0 )
      {
        if ( !under_debugger )
        {
          v93 = v112;
          sub_383060(50429);
        }
        BUG();
      }
      v17 = *(_QWORD *)(v7 + 1504);
      v93 = v112;
      sub_648D0(v112, (__int64 *)(v17 + 224));
      v19 = *(_QWORD *)(v17 + 248);
      v20 = nullptr;
      if ( v19 )
      {
        v91[0] = 16 * v19;
        v20 = (void *)qalloc_or_throw(16 * v19, v17 + 224, 16 * v19, v18);
        memcpy(v20, *(const void **)(v17 + 240), v91[0]);
      }
      si128 = _mm_unpacklo_epi64((__m128i)v19, (__m128i)v19);
      if ( v113 )
      {
        *(__m128i *)v91 = si128;
        v114.m128i_i64[0] = 0;
        qfree(v113);
        si128 = _mm_load_si128((const __m128i *)v91);
      }
      v22 = *(_QWORD *)(v7 + 920);
      v23 = *(_QWORD *)(v7 + 1504);
      v113 = (__int64)v20;
      v114 = si128;
      sub_1373E0(v23, v93, v22);
    }
    v24 = v102;
    v96[0] = v102 + 104;
    sub_64640(v94, (__int64 *)(v102 + 104), v12, v13, v14, v15);
    v98 = v24 + 120;
    sub_317C60(&v107, v24 + 120);
    v6 = *(_BYTE *)(v7 + 320) == 0;
    v115[0] = 0;
    v115[1] = 0;
    src = nullptr;
    v117 = 0;
    if ( !v6 )
      sub_134DA0(v115, v7, v25, v26, v27, v28);
    for ( i = *(_QWORD *)(v7 + 520); i; i = *(_QWORD *)(i + 8) )
    {
      if ( (*(_DWORD *)(i + 24) & 0x600) != 0x200 )
        v11 += sub_A7590(i, 0, v25, v26, v27, v28);
      if ( v10 != (__int64 *)i )
      {
        sub_64280(v115, (__int64 *)(i + 120));
        sub_316CB0(p_src, i + 136);
      }
    }
    sub_64280(v94, v93);
    v100 = &v113;
    sub_316CB0(&v107, &v113);
    v99 = v95 + 30;
    if ( sub_122C30((__int64)(v95 + 30), (__int64)v115) )
      break;
    v30 = *(_DWORD *)v7;
    if ( (*(_DWORD *)v7 & 0x4000) != 0 )
      goto LABEL_64;
LABEL_22:
    if ( (v30 & 0x1000) == 0 )
      goto LABEL_64;
    BYTE1(v30) |= 0x40u;
    *(_DWORD *)v7 = v30;
    v91[0] = (size_t)v118;
    sub_64000(v118, (__int64)v115);
    v35 = v117;
    v119 = nullptr;
    v120 = 0;
    if ( (_QWORD)v117 )
    {
      n[0] = 16 * v117;
      v119 = (void *)qalloc_or_throw(16 * v117, (__int64)v115, 16 * v117, v32);
      *((_QWORD *)&v120 + 1) = v35;
      memcpy(v119, src, n[0]);
      *(_QWORD *)&v120 = v35;
    }
    sub_64640((__int64 *)v91[0], v97, v31, v32, v33, v34);
    sub_317C60(&v119, &v110);
    v36 = (__int64 *)v91[0];
    sub_64640((__int64 *)v91[0], (__int64 *)v96[0], v37, v38, v39, v40);
    sub_317C60(&v119, v98);
    sub_1373E0(*(_QWORD *)(v7 + 1504), v36, *(_QWORD *)(v7 + 920));
    v41 = *(_QWORD *)(v7 + 1504);
    v42 = *(_DWORD *)(v41 + 80);
    v43 = *(_DWORD *)(v41 + 64);
    v121 = 0;
    v122 = 0;
    sub_63E80(&v121, v43, v42);
    v123 = 0;
    v124 = 0;
    sub_64640((__int64 *)v91[0], &v121, v44, v45, v46, v47);
    v96[0] = (size_t)&v123;
    sub_317C60(&v119, &v123);
    if ( v123 )
    {
      *(_QWORD *)&v124 = 0;
      qfree(v123);
    }
    qfree(v121);
    v48 = *(_QWORD *)(v7 + 1504);
    v49 = *(_DWORD *)(v48 + 80);
    v50 = *(_DWORD *)(v48 + 60);
    v121 = 0;
    v122 = 0;
    sub_63E80(&v121, v50, v49);
    v123 = 0;
    v124 = 0;
    sub_64640((__int64 *)v91[0], &v121, v51, v52, v53, v54);
    sub_317C60(&v119, v96[0]);
    if ( v123 )
    {
      *(_QWORD *)&v124 = 0;
      qfree(v123);
    }
    qfree(v121);
    if ( !(unsigned __int8)sub_64880((_QWORD *)v91[0]) )
    {
      sub_64280(v115, v93);
      sub_316CB0(p_src, v100);
      v55 = v99;
      if ( sub_122C30((__int64)v99, (__int64)v115) )
      {
        sub_648D0(v55, v115);
        v57 = v117;
        v58 = nullptr;
        if ( (_QWORD)v117 )
        {
          v96[0] = 16 * v117;
          v58 = (void *)qalloc_or_throw(16 * v117, (__int64)v115, 16 * v117, v56);
          memcpy(v58, src, v96[0]);
        }
        v59 = _mm_unpacklo_epi64((__m128i)v57, (__m128i)v57);
        v60 = v95[32];
        if ( v60 )
        {
          v95[33] = 0;
          *(__m128i *)v96 = v59;
          qfree(v60);
          v59 = _mm_load_si128((const __m128i *)v96);
        }
        v61 = v95;
        v95[32] = (__int64)v58;
        *(__m128i *)(v61 + 33) = v59;
        v62 = *(_QWORD *)(v7 + 784);
        if ( v62 )
          *(_DWORD *)(v62 + 48) = 63;
        ++v11;
      }
      v63 = v94;
      if ( sub_122C30((__int64)(v10 + 20), (__int64)v94) )
      {
        v64 = (__int64)v63;
        sub_648D0(v10 + 20, v63);
        v66 = v108.m128i_i64[0];
        v67 = nullptr;
        if ( v108.m128i_i64[0] )
        {
          v96[0] = 16 * v108.m128i_i64[0];
          v67 = (void *)qalloc_or_throw(16 * v108.m128i_i64[0], v64, 16 * v108.m128i_i64[0], v65);
          memcpy(v67, v107, v96[0]);
        }
        v68 = v10[22];
        v69 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v66, (__m128i)(unsigned __int64)v66);
        if ( v68 )
        {
          v10[23] = 0;
          *(__m128i *)v96 = v69;
          qfree(v68);
          v69 = _mm_load_si128((const __m128i *)v96);
        }
        v10[22] = (__int64)v67;
        *(__m128i *)(v10 + 23) = v69;
        v70 = *(_QWORD *)(v7 + 784);
        if ( v70 )
          *(_DWORD *)(v70 + 48) = 63;
        ++v11;
      }
      sub_66FA0(v7, 1u, (__int64)"before save-restore analysis");
      v73 = (unsigned __int64 *)sub_670E0((_QWORD *)v7, 1, v71, v72);
      if ( (unsigned int)sub_141E80(v73, (__int64)v93, nullptr) )
      {
        ++v11;
        sub_66FA0(v7, 1u, (__int64)"after save-restore analysis");
      }
    }
    if ( v119 )
    {
      *(_QWORD *)&v120 = 0;
      qfree((__int64)v119);
    }
    qfree(v118[0]);
    if ( src )
    {
      *(_QWORD *)&v117 = 0;
      qfree((__int64)src);
    }
    qfree(v115[0]);
    if ( v113 )
    {
      v114.m128i_i64[0] = 0;
      qfree(v113);
    }
    qfree(v112[0]);
    if ( v110 )
    {
      *(_QWORD *)&v111 = 0;
      qfree(v110);
    }
    qfree(v109[0]);
  }
  sub_648D0(v99, v115);
  v74 = v117;
  v75 = nullptr;
  if ( (_QWORD)v117 )
  {
    v91[0] = 16 * v117;
    v82 = (void *)qalloc_or_throw(16 * v117, (__int64)v115, 16 * v117, 0);
    v75 = memcpy(v82, src, v91[0]);
  }
  v76 = _mm_unpacklo_epi64((__m128i)v74, (__m128i)v74);
  v77 = v95[32];
  if ( v77 )
  {
    v95[33] = 0;
    v91[0] = (size_t)v75;
    *(__m128i *)n = v76;
    qfree(v77);
    v76 = _mm_load_si128((const __m128i *)n);
    v75 = (void *)v91[0];
  }
  v78 = v95;
  v95[32] = (__int64)v75;
  *(__m128i *)(v78 + 33) = v76;
  v79 = *(_QWORD *)(v7 + 784);
  if ( v79 )
    *(_DWORD *)(v79 + 48) = 63;
  v30 = *(_DWORD *)v7;
  ++v11;
  if ( (*(_DWORD *)v7 & 0x4000) == 0 )
    goto LABEL_22;
LABEL_64:
  if ( src )
  {
    *(_QWORD *)&v117 = 0;
    qfree((__int64)src);
  }
  qfree(v115[0]);
  if ( v113 )
  {
    v114.m128i_i64[0] = 0;
    qfree(v113);
  }
  qfree(v112[0]);
  if ( v110 )
  {
    *(_QWORD *)&v111 = 0;
    qfree(v110);
  }
  qfree(v109[0]);
  if ( *(char *)(v7 + 1) >= 0 )
  {
    v83 = v94;
    sub_1373E0(*(_QWORD *)(v7 + 1504), v94, *(_QWORD *)(v7 + 920));
    v84 = sub_122C30((__int64)(v10 + 20), (__int64)v83);
    v80 = v107;
    if ( v84 )
    {
      v85 = v10[20];
      v86 = _mm_loadu_si128(&v108);
      v10[20] = v105;
      v105 = v85;
      v87 = v10[21];
      v10[21] = v106;
      v88 = v10[24];
      v106 = v87;
      v89 = (void *)v10[22];
      v108.m128i_i64[1] = v88;
      v10[22] = (__int64)v80;
      *(__m128i *)(v10 + 23) = v86;
      v90 = *(_QWORD *)(v7 + 784);
      v107 = v89;
      if ( v90 )
        *(_DWORD *)(v90 + 48) = 63;
      ++v11;
      v80 = v89;
    }
  }
  else
  {
    v80 = v107;
  }
  if ( v80 )
  {
    v108.m128i_i64[0] = 0;
    qfree((__int64)v80);
  }
  qfree(v105);
  clear_tinfo_t();
  return v11;
}
