unsigned __int64 __fastcall sub_399B90(__int64 a1, const __m128i *a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // r10
  const __m128i *v6; // rbx
  signed __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r13
  __int64 v10; // r14
  bool v11; // al
  __int64 v12; // rbp
  bool v13; // al
  __int64 v14; // r8
  __int64 v15; // r10
  bool v16; // al
  __m128 v17; // xmm0
  __int32 *v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rax
  __m128i v21; // xmm0
  const __m128i *v22; // r12
  bool v23; // zf
  __int64 v24; // rax
  __int64 v25; // r14
  __int64 v26; // rbx
  __int64 v27; // r15
  __int64 v28; // rbp
  void *v29; // rdi
  _QWORD *v30; // rax
  __m128 v31; // xmm0
  __int32 *v32; // rdx
  bool v33; // al
  bool v34; // al
  __m128 v35; // xmm0
  __int32 *v36; // rax
  __int64 v37; // rax
  __m128i v38; // xmm0
  __int64 v39; // rax
  __int64 v40; // rbx
  void *v41; // rdi
  __int64 v42; // rax
  __m128 v43; // xmm0
  __int64 v44; // rdx
  __int64 v45; // rax
  _QWORD *v46; // rdx
  __m128 v47; // xmm0
  __int32 *v48; // rcx
  unsigned __int64 i; // r14
  unsigned __int64 v50; // rbp
  __int64 v51; // rax
  unsigned __int64 v52; // rbx
  const __m128i *v53; // r14
  int v54; // r9d
  bool v55; // cf
  int v56; // eax
  int v57; // edx
  __int64 v58; // r13
  __int64 v59; // r15
  __int64 v60; // rax
  unsigned __int64 v61; // r12
  unsigned __int64 v62; // rdx
  unsigned __int64 v63; // rax
  const __m128i *v64; // r8
  unsigned __int64 v65; // r14
  int v66; // r9d
  int v67; // eax
  int v68; // r15d
  unsigned __int64 v69; // r12
  unsigned __int64 v70; // r13
  __int64 v71; // rax
  unsigned __int64 v72; // rcx
  unsigned __int64 v73; // rax
  const __m128i *v74; // r8
  __int64 v75; // rax
  __int32 *v76; // rcx
  __m128i v77; // xmm0
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rbx
  void *v81; // rdi
  _QWORD *v82; // rax
  __m128 v83; // xmm0
  __int32 *v84; // rdx
  __int64 v85; // r10
  __m128i *v86; // r14
  __int64 v87; // rbx
  __int64 v88; // rdx
  __m128 v89; // xmm0
  __int32 *v90; // rcx
  __int64 v91; // rdx
  __m128i v92; // xmm0
  __int64 v93; // r13
  void *v94; // rdi
  __int64 v95; // rdx
  __m128 v96; // xmm0
  __int64 v97; // r15
  __m128i v98; // xmm0
  _QWORD **v99; // r13
  void *v100; // rdi
  _QWORD **v101; // r13
  void *v102; // rdi
  __m128 v104; // xmm0
  __int32 *v105; // rax
  __int64 v106; // rax
  __m128i v107; // xmm0
  __int64 v108; // r12
  __int64 v109; // rax
  __int64 v110; // r15
  __int64 v111; // rbx
  __int64 v112; // rbp
  void *v113; // rdi
  _QWORD *v114; // rax
  __m128 v115; // xmm0
  __int32 *v116; // rdx
  __m128 v117; // xmm0
  __int32 *v118; // rax
  __int64 v119; // rax
  __m128i v120; // xmm0
  __int64 v121; // rax
  __int64 v122; // rbx
  void *v123; // rdi
  __int64 v124; // r12
  const __m128i *v125; // rcx
  __int64 v126; // rbx
  __int64 v127; // r14
  __int64 v128; // rax
  __m128 v129; // xmm0
  __int32 *v130; // rdx
  __int64 v131; // rax
  __m128i v132; // xmm0
  _QWORD *v133; // rdx
  __int64 v134; // rax
  __m128 v135; // xmm0
  __int64 v136; // rax
  __m128i v137; // xmm0
  _QWORD **v138; // r13
  void *v139; // rdi
  _QWORD **v140; // r13
  void *v141; // rdi
  __m128i v142; // xmm0
  __int64 v143; // [rsp+8h] [rbp-130h]
  const __m128i *v144; // [rsp+8h] [rbp-130h]
  __int64 v145; // [rsp+8h] [rbp-130h]
  __int64 v146; // [rsp+10h] [rbp-128h]
  unsigned __int64 v147; // [rsp+10h] [rbp-128h]
  const __m128i *v148; // [rsp+10h] [rbp-128h]
  const __m128i *v149; // [rsp+10h] [rbp-128h]
  unsigned __int64 v150; // [rsp+20h] [rbp-118h]
  const __m128i *v151; // [rsp+20h] [rbp-118h]
  __int64 v152; // [rsp+28h] [rbp-110h]
  unsigned __int64 v153; // [rsp+28h] [rbp-110h]
  __int64 v154; // [rsp+30h] [rbp-108h]
  __int64 v155; // [rsp+38h] [rbp-100h]
  const __m128i *v156; // [rsp+50h] [rbp-E8h]
  __int64 v157; // [rsp+58h] [rbp-E0h]
  __int32 v158; // [rsp+68h] [rbp-D0h] BYREF
  void *v159[2]; // [rsp+70h] [rbp-C8h] BYREF
  __int32 *v160; // [rsp+80h] [rbp-B8h]
  __int64 v161; // [rsp+88h] [rbp-B0h]
  __m128i v162; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v163; // [rsp+A0h] [rbp-98h]
  char v164[8]; // [rsp+B0h] [rbp-88h] BYREF
  __int32 v165; // [rsp+B8h] [rbp-80h] BYREF
  void *v166[2]; // [rsp+C0h] [rbp-78h] BYREF
  __int32 *v167; // [rsp+D0h] [rbp-68h]
  __int64 v168; // [rsp+D8h] [rbp-60h]
  __m128i v169; // [rsp+E0h] [rbp-58h]
  __int64 v170; // [rsp+F0h] [rbp-48h]
  unsigned __int64 v171; // [rsp+F8h] [rbp-40h]

  v171 = __readfsqword(0x28u);
  v3 = (__int64)a2->m128i_i64 - a1;
  if ( (__int64)a2->m128i_i64 - a1 <= 1152 )
    return v171 - __readfsqword(0x28u);
  v4 = a1;
  v6 = a2;
LABEL_3:
  v7 = 0x8E38E38E38E38E39LL * (v3 >> 3);
  v8 = v7 >> 1;
  if ( a3 )
  {
    v146 = v4;
    v9 = a3 - 1;
    v10 = v4 + 72 * v8;
    v143 = v4 + 72;
    v11 = sub_3995A0(v4 + 72, v10);
    v12 = *(_QWORD *)(v146 + 16);
    if ( v11 )
    {
      v13 = sub_3995A0(v10, (__int64)&v6[-5].m128i_i64[1]);
      v14 = v143;
      v15 = v146;
      if ( !v13 )
      {
        v16 = sub_3995A0(v143, (__int64)&v6[-5].m128i_i64[1]);
        v14 = v143;
        v15 = v146;
        if ( v16 )
        {
          if ( v12 )
          {
            v17 = _mm_loadh_ps((const double *)(v146 + 24));
            v165 = *(_DWORD *)(v146 + 8);
            v18 = *(__int32 **)(v146 + 32);
            *(__m128 *)v166 = v17;
            v167 = v18;
            *(_QWORD *)(v12 + 8) = &v165;
            v168 = *(_QWORD *)(v146 + 40);
          }
          else
          {
            v165 = 0;
            v166[0] = nullptr;
            v166[1] = &v165;
            v167 = &v165;
            v168 = 0;
          }
          v19 = v146 + 8;
          v20 = *(_QWORD *)(v146 + 64);
          v21 = _mm_loadu_si128((const __m128i *)(v146 + 48));
          *(_QWORD *)(v146 + 16) = 0;
          *(_QWORD *)(v146 + 24) = v146 + 8;
          v22 = v6 - 4;
          *(_QWORD *)(v146 + 32) = v146 + 8;
          *(_QWORD *)(v146 + 40) = 0;
          v23 = v6[-4].m128i_i64[1] == 0;
          v170 = v20;
          v169 = v21;
          if ( !v23 )
          {
            *(_DWORD *)(v146 + 8) = v6[-4].m128i_i32[0];
            v24 = v6[-4].m128i_i64[1];
            *(_QWORD *)(v146 + 16) = v24;
            *(_QWORD *)(v146 + 24) = v6[-3].m128i_i64[0];
            *(_QWORD *)(v146 + 32) = v6[-3].m128i_i64[1];
            *(_QWORD *)(v24 + 8) = v19;
            *(_QWORD *)(v146 + 40) = v6[-2].m128i_i64[0];
            v6[-4].m128i_i64[1] = 0;
            v6[-3].m128i_i64[0] = (__int64)v22;
            v6[-3].m128i_i64[1] = (__int64)v22;
            v6[-2].m128i_i64[0] = 0;
          }
          *(_QWORD *)(v146 + 48) = v6[-2].m128i_i64[1];
          *(_DWORD *)(v146 + 56) = v6[-1].m128i_i32[0];
          *(_QWORD *)(v146 + 64) = v6[-1].m128i_i64[1];
          if ( !v6[-4].m128i_i64[1] )
            goto LABEL_15;
          v144 = v6;
          v25 = v14;
          v26 = v6[-4].m128i_i64[1];
          v27 = v146;
          v28 = v146 + 8;
          do
          {
            sub_398830(*(_QWORD **)(v26 + 24));
            v29 = (void *)v26;
            v26 = *(_QWORD *)(v26 + 16);
            operator delete(v29, 0x30u);
          }
          while ( v26 );
LABEL_14:
          v6 = v144;
          v14 = v25;
          v15 = v27;
          v19 = v28;
LABEL_15:
          v30 = v166[0];
          v6[-4].m128i_i64[1] = 0;
          v6[-3].m128i_i64[0] = (__int64)v22;
          v6[-3].m128i_i64[1] = (__int64)v22;
          v6[-2].m128i_i64[0] = 0;
          if ( v30 )
          {
            v31 = _mm_loadh_ps((const double *)&v166[1]);
            v6[-4].m128i_i32[0] = v165;
            v32 = v167;
            *(__m128 *)((char *)v6 - 56) = v31;
            v6[-3].m128i_i64[1] = (__int64)v32;
            v30[1] = v22;
            v6[-2].m128i_i64[0] = v168;
          }
          v6[-2].m128i_i64[1] = v169.m128i_i64[0];
          v6[-1].m128i_i32[0] = v169.m128i_i32[2];
          v6[-1].m128i_i64[1] = v170;
          goto LABEL_35;
        }
        goto LABEL_28;
      }
      if ( v12 )
      {
        v104 = _mm_loadh_ps((const double *)(v146 + 24));
        v165 = *(_DWORD *)(v146 + 8);
        v105 = *(__int32 **)(v146 + 32);
        *(__m128 *)v166 = v104;
        v167 = v105;
        *(_QWORD *)(v12 + 8) = &v165;
        v168 = *(_QWORD *)(v146 + 40);
      }
      else
      {
        v165 = 0;
        v166[0] = nullptr;
        v166[1] = &v165;
        v167 = &v165;
        v168 = 0;
      }
      v19 = v146 + 8;
      v106 = *(_QWORD *)(v146 + 64);
      v107 = _mm_loadu_si128((const __m128i *)(v146 + 48));
      *(_QWORD *)(v146 + 16) = 0;
      *(_QWORD *)(v146 + 24) = v146 + 8;
      v108 = v10 + 8;
      *(_QWORD *)(v146 + 32) = v146 + 8;
      *(_QWORD *)(v146 + 40) = 0;
      v23 = *(_QWORD *)(v10 + 16) == 0;
      v170 = v106;
      v169 = v107;
      if ( !v23 )
      {
        *(_DWORD *)(v146 + 8) = *(_DWORD *)(v10 + 8);
        v109 = *(_QWORD *)(v10 + 16);
        *(_QWORD *)(v146 + 16) = v109;
        *(_QWORD *)(v146 + 24) = *(_QWORD *)(v10 + 24);
        *(_QWORD *)(v146 + 32) = *(_QWORD *)(v10 + 32);
        *(_QWORD *)(v109 + 8) = v19;
        *(_QWORD *)(v146 + 40) = *(_QWORD *)(v10 + 40);
        *(_QWORD *)(v10 + 16) = 0;
        *(_QWORD *)(v10 + 24) = v108;
        *(_QWORD *)(v10 + 32) = v108;
        *(_QWORD *)(v10 + 40) = 0;
      }
      *(_QWORD *)(v146 + 48) = *(_QWORD *)(v10 + 48);
      *(_DWORD *)(v146 + 56) = *(_DWORD *)(v10 + 56);
      *(_QWORD *)(v146 + 64) = *(_QWORD *)(v10 + 64);
      if ( *(_QWORD *)(v10 + 16) )
      {
        v110 = v146;
        v148 = v6;
        v111 = *(_QWORD *)(v10 + 16);
        v112 = v15 + 8;
        do
        {
          sub_398830(*(_QWORD **)(v111 + 24));
          v113 = (void *)v111;
          v111 = *(_QWORD *)(v111 + 16);
          operator delete(v113, 0x30u);
        }
        while ( v111 );
LABEL_93:
        v14 = v143;
        v6 = v148;
        v15 = v110;
        v19 = v112;
      }
    }
    else
    {
      v33 = sub_3995A0(v143, (__int64)&v6[-5].m128i_i64[1]);
      v14 = v143;
      v15 = v146;
      if ( v33 )
      {
LABEL_28:
        if ( v12 )
        {
          v165 = *(_DWORD *)(v15 + 8);
          *(__m128 *)v166 = _mm_loadh_ps((const double *)(v15 + 24));
          v167 = *(__int32 **)(v15 + 32);
          *(_QWORD *)(v12 + 8) = &v165;
          v168 = *(_QWORD *)(v15 + 40);
        }
        else
        {
          v165 = 0;
          v166[0] = nullptr;
          v166[1] = &v165;
          v167 = &v165;
          v168 = 0;
        }
        v19 = v15 + 8;
        v169 = _mm_loadu_si128((const __m128i *)(v15 + 48));
        v170 = *(_QWORD *)(v15 + 64);
        v42 = *(_QWORD *)(v15 + 88);
        *(_QWORD *)(v15 + 16) = 0;
        *(_QWORD *)(v15 + 24) = v15 + 8;
        *(_QWORD *)(v15 + 32) = v15 + 8;
        *(_QWORD *)(v15 + 40) = 0;
        if ( v42 )
        {
          v43 = _mm_loadh_ps((const double *)(v15 + 96));
          *(_DWORD *)(v15 + 8) = *(_DWORD *)(v15 + 80);
          v44 = *(_QWORD *)(v15 + 104);
          *(__m128 *)(v15 + 16) = v43;
          *(_QWORD *)(v15 + 32) = v44;
          *(_QWORD *)(v42 + 8) = v19;
          *(_QWORD *)(v15 + 40) = *(_QWORD *)(v15 + 112);
        }
        v45 = *(_QWORD *)(v15 + 120);
        v46 = v166[0];
        *(_QWORD *)(v15 + 88) = 0;
        *(_QWORD *)(v15 + 112) = 0;
        *(_QWORD *)(v15 + 48) = v45;
        *(_DWORD *)(v15 + 56) = *(_DWORD *)(v15 + 128);
        *(_QWORD *)(v15 + 64) = *(_QWORD *)(v15 + 136);
        *(_QWORD *)(v15 + 96) = v15 + 80;
        *(_QWORD *)(v15 + 104) = v15 + 80;
        if ( v46 )
        {
          v47 = _mm_loadh_ps((const double *)&v166[1]);
          *(_DWORD *)(v15 + 80) = v165;
          v48 = v167;
          *(__m128 *)(v15 + 88) = v47;
          *(_QWORD *)(v15 + 104) = v48;
          v46[1] = v15 + 80;
          *(_QWORD *)(v15 + 112) = v168;
        }
        *(_QWORD *)(v15 + 120) = v169.m128i_i64[0];
        *(_DWORD *)(v15 + 128) = v169.m128i_i32[2];
        *(_QWORD *)(v15 + 136) = v170;
        goto LABEL_35;
      }
      v34 = sub_3995A0(v10, (__int64)&v6[-5].m128i_i64[1]);
      v14 = v143;
      v15 = v146;
      if ( v34 )
      {
        if ( v12 )
        {
          v35 = _mm_loadh_ps((const double *)(v146 + 24));
          v165 = *(_DWORD *)(v146 + 8);
          v36 = *(__int32 **)(v146 + 32);
          *(__m128 *)v166 = v35;
          v167 = v36;
          *(_QWORD *)(v12 + 8) = &v165;
          v168 = *(_QWORD *)(v146 + 40);
        }
        else
        {
          v165 = 0;
          v166[0] = nullptr;
          v166[1] = &v165;
          v167 = &v165;
          v168 = 0;
        }
        v19 = v146 + 8;
        v37 = *(_QWORD *)(v146 + 64);
        v38 = _mm_loadu_si128((const __m128i *)(v146 + 48));
        *(_QWORD *)(v146 + 16) = 0;
        *(_QWORD *)(v146 + 24) = v146 + 8;
        v22 = v6 - 4;
        *(_QWORD *)(v146 + 32) = v146 + 8;
        *(_QWORD *)(v146 + 40) = 0;
        v23 = v6[-4].m128i_i64[1] == 0;
        v170 = v37;
        v169 = v38;
        if ( !v23 )
        {
          *(_DWORD *)(v146 + 8) = v6[-4].m128i_i32[0];
          v39 = v6[-4].m128i_i64[1];
          *(_QWORD *)(v146 + 16) = v39;
          *(_QWORD *)(v146 + 24) = v6[-3].m128i_i64[0];
          *(_QWORD *)(v146 + 32) = v6[-3].m128i_i64[1];
          *(_QWORD *)(v39 + 8) = v19;
          *(_QWORD *)(v146 + 40) = v6[-2].m128i_i64[0];
          v6[-4].m128i_i64[1] = 0;
          v6[-3].m128i_i64[0] = (__int64)v22;
          v6[-3].m128i_i64[1] = (__int64)v22;
          v6[-2].m128i_i64[0] = 0;
        }
        *(_QWORD *)(v146 + 48) = v6[-2].m128i_i64[1];
        *(_DWORD *)(v146 + 56) = v6[-1].m128i_i32[0];
        *(_QWORD *)(v146 + 64) = v6[-1].m128i_i64[1];
        if ( !v6[-4].m128i_i64[1] )
          goto LABEL_15;
        v144 = v6;
        v25 = v14;
        v40 = v6[-4].m128i_i64[1];
        v27 = v146;
        v28 = v146 + 8;
        do
        {
          sub_398830(*(_QWORD **)(v40 + 24));
          v41 = (void *)v40;
          v40 = *(_QWORD *)(v40 + 16);
          operator delete(v41, 0x30u);
        }
        while ( v40 );
        goto LABEL_14;
      }
      if ( v12 )
      {
        v117 = _mm_loadh_ps((const double *)(v146 + 24));
        v165 = *(_DWORD *)(v146 + 8);
        v118 = *(__int32 **)(v146 + 32);
        *(__m128 *)v166 = v117;
        v167 = v118;
        *(_QWORD *)(v12 + 8) = &v165;
        v168 = *(_QWORD *)(v146 + 40);
      }
      else
      {
        v165 = 0;
        v166[0] = nullptr;
        v166[1] = &v165;
        v167 = &v165;
        v168 = 0;
      }
      v19 = v146 + 8;
      v119 = *(_QWORD *)(v146 + 64);
      v120 = _mm_loadu_si128((const __m128i *)(v146 + 48));
      *(_QWORD *)(v146 + 16) = 0;
      *(_QWORD *)(v146 + 24) = v146 + 8;
      v108 = v10 + 8;
      *(_QWORD *)(v146 + 32) = v146 + 8;
      *(_QWORD *)(v146 + 40) = 0;
      v23 = *(_QWORD *)(v10 + 16) == 0;
      v170 = v119;
      v169 = v120;
      if ( !v23 )
      {
        *(_DWORD *)(v146 + 8) = *(_DWORD *)(v10 + 8);
        v121 = *(_QWORD *)(v10 + 16);
        *(_QWORD *)(v146 + 16) = v121;
        *(_QWORD *)(v146 + 24) = *(_QWORD *)(v10 + 24);
        *(_QWORD *)(v146 + 32) = *(_QWORD *)(v10 + 32);
        *(_QWORD *)(v121 + 8) = v19;
        *(_QWORD *)(v146 + 40) = *(_QWORD *)(v10 + 40);
        *(_QWORD *)(v10 + 16) = 0;
        *(_QWORD *)(v10 + 24) = v108;
        *(_QWORD *)(v10 + 32) = v108;
        *(_QWORD *)(v10 + 40) = 0;
      }
      *(_QWORD *)(v146 + 48) = *(_QWORD *)(v10 + 48);
      *(_DWORD *)(v146 + 56) = *(_DWORD *)(v10 + 56);
      *(_QWORD *)(v146 + 64) = *(_QWORD *)(v10 + 64);
      if ( *(_QWORD *)(v10 + 16) )
      {
        v110 = v146;
        v148 = v6;
        v122 = *(_QWORD *)(v10 + 16);
        v112 = v15 + 8;
        do
        {
          sub_398830(*(_QWORD **)(v122 + 24));
          v123 = (void *)v122;
          v122 = *(_QWORD *)(v122 + 16);
          operator delete(v123, 0x30u);
        }
        while ( v122 );
        goto LABEL_93;
      }
    }
    v114 = v166[0];
    *(_QWORD *)(v10 + 16) = 0;
    *(_QWORD *)(v10 + 24) = v108;
    *(_QWORD *)(v10 + 32) = v108;
    *(_QWORD *)(v10 + 40) = 0;
    if ( v114 )
    {
      v115 = _mm_loadh_ps((const double *)&v166[1]);
      *(_DWORD *)(v10 + 8) = v165;
      v116 = v167;
      *(__m128 *)(v10 + 16) = v115;
      *(_QWORD *)(v10 + 32) = v116;
      v114[1] = v108;
      *(_QWORD *)(v10 + 40) = v168;
    }
    *(_QWORD *)(v10 + 48) = v169.m128i_i64[0];
    *(_DWORD *)(v10 + 56) = v169.m128i_i32[2];
    *(_QWORD *)(v10 + 64) = v170;
LABEL_35:
    v155 = v15;
    i = (unsigned __int64)v6;
    v156 = v6;
    v157 = v9;
LABEL_36:
    v152 = v14;
    v50 = *(_QWORD *)(*(_QWORD *)(v155 + 24) + 32LL);
    v51 = std::_Rb_tree_decrement(v19);
    v52 = *(_QWORD *)(v155 + 48);
    v150 = i;
    v53 = (const __m128i *)v152;
    v147 = *(_QWORD *)(v51 + 32);
    while ( 1 )
    {
      v58 = v53[1].m128i_i64[1];
      v59 = (__int64)&v53->m128i_i64[1];
      v60 = std::_Rb_tree_decrement(&v53->m128i_u64[1]);
      v61 = *(_QWORD *)(v58 + 32);
      v62 = v53[3].m128i_u64[0];
      v63 = *(_QWORD *)(v60 + 32);
      if ( v62 >= v61 )
      {
        v54 = v63 - v61;
        v55 = v63 < v62;
        v56 = v62 - v61;
        if ( !v55 )
          v56 = v54;
      }
      else
      {
        v56 = v63 - v62;
      }
      v57 = v147 - v52;
      if ( v52 >= v50 )
      {
        v57 = v147 - v50;
        if ( v147 < v52 )
          v57 = v52 - v50;
      }
      if ( v57 <= v56 )
        break;
      v53 = (const __m128i *)((char *)v53 + 72);
    }
    v64 = v53;
    v65 = v150;
    v153 = v58;
    v151 = v64;
    v154 = v59;
    for ( i = v65 - 72; ; i -= 72LL )
    {
      v68 = v147 - v52;
      if ( v52 >= v50 )
      {
        v68 = v147 - v50;
        if ( v147 < v52 )
          v68 = v52 - v50;
      }
      v69 = i + 8;
      v70 = *(_QWORD *)(*(_QWORD *)(i + 24) + 32LL);
      v71 = std::_Rb_tree_decrement(i + 8);
      v72 = *(_QWORD *)(i + 48);
      v73 = *(_QWORD *)(v71 + 32);
      if ( v72 >= v70 )
      {
        v66 = v73 - v70;
        v55 = v73 < v72;
        v67 = v72 - v70;
        if ( !v55 )
          v67 = v66;
        if ( v67 <= v68 )
        {
LABEL_56:
          v74 = v151;
          if ( (unsigned __int64)v151 < i )
          {
            v75 = v151[1].m128i_i64[0];
            if ( v75 )
            {
              v165 = v151->m128i_i32[2];
              v76 = (__int32 *)v151[2].m128i_i64[0];
              *(__m128i *)v166 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v75, (__m128i)v153);
              v167 = v76;
              *(_QWORD *)(v75 + 8) = &v165;
              v168 = v151[2].m128i_i64[1];
            }
            else
            {
              v165 = 0;
              v166[0] = nullptr;
              v166[1] = &v165;
              v167 = &v165;
              v168 = 0;
            }
            v77 = _mm_loadu_si128(v151 + 3);
            v78 = v151[4].m128i_i64[0];
            v151[1].m128i_i64[0] = 0;
            v151[1].m128i_i64[1] = v154;
            v151[2].m128i_i64[0] = v154;
            v151[2].m128i_i64[1] = 0;
            v23 = *(_QWORD *)(i + 16) == 0;
            v170 = v78;
            v169 = v77;
            if ( !v23 )
            {
              v151->m128i_i32[2] = *(_DWORD *)(i + 8);
              v79 = *(_QWORD *)(i + 16);
              v151[1].m128i_i64[0] = v79;
              v151[1].m128i_i64[1] = *(_QWORD *)(i + 24);
              v151[2].m128i_i64[0] = *(_QWORD *)(i + 32);
              *(_QWORD *)(v79 + 8) = v154;
              v151[2].m128i_i64[1] = *(_QWORD *)(i + 40);
              *(_QWORD *)(i + 16) = 0;
              *(_QWORD *)(i + 24) = v69;
              *(_QWORD *)(i + 32) = v69;
              *(_QWORD *)(i + 40) = 0;
            }
            v151[3].m128i_i64[0] = *(_QWORD *)(i + 48);
            v151[3].m128i_i32[2] = *(_DWORD *)(i + 56);
            v151[4].m128i_i64[0] = *(_QWORD *)(i + 64);
            v80 = *(_QWORD *)(i + 16);
            if ( v80 )
            {
              do
              {
                sub_398830(*(_QWORD **)(v80 + 24));
                v81 = (void *)v80;
                v80 = *(_QWORD *)(v80 + 16);
                operator delete(v81, 0x30u);
              }
              while ( v80 );
              v74 = v151;
            }
            v82 = v166[0];
            *(_QWORD *)(i + 16) = 0;
            *(_QWORD *)(i + 24) = v69;
            *(_QWORD *)(i + 32) = v69;
            *(_QWORD *)(i + 40) = 0;
            if ( v82 )
            {
              v83 = _mm_loadh_ps((const double *)&v166[1]);
              *(_DWORD *)(i + 8) = v165;
              v84 = v167;
              *(__m128 *)(i + 16) = v83;
              *(_QWORD *)(i + 32) = v84;
              v82[1] = v69;
              *(_QWORD *)(i + 40) = v168;
            }
            v14 = (__int64)&v74[4].m128i_i64[1];
            *(_QWORD *)(i + 48) = v169.m128i_i64[0];
            *(_DWORD *)(i + 56) = v169.m128i_i32[2];
            *(_QWORD *)(i + 64) = v170;
            goto LABEL_36;
          }
          a3 = v157;
          sub_399B90(v151, v156, v157);
          v4 = v155;
          v3 = (__int64)v151->m128i_i64 - v155;
          if ( (__int64)v151->m128i_i64 - v155 <= 1152 )
            return v171 - __readfsqword(0x28u);
          v6 = v151;
          goto LABEL_3;
        }
      }
      else if ( (int)v73 - (int)v72 <= v68 )
      {
        goto LABEL_56;
      }
    }
  }
  v124 = v8 - 1;
  v125 = v6;
  v145 = v7;
  v126 = v4 + 72 * v8 - 64;
  v149 = v125;
  v127 = v4;
  v128 = *(_QWORD *)(v126 + 8);
  if ( !v128 )
    goto LABEL_114;
LABEL_106:
  v129 = _mm_loadh_ps((const double *)(v126 + 16));
  v158 = *(_DWORD *)v126;
  v130 = *(__int32 **)(v126 + 24);
  *(__m128 *)v159 = v129;
  v160 = v130;
  *(_QWORD *)(v128 + 8) = &v158;
  v131 = *(_QWORD *)(v126 + 32);
  v132 = _mm_loadu_si128((const __m128i *)(v126 + 40));
  v133 = v159[0];
  *(_QWORD *)(v126 + 8) = 0;
  v161 = v131;
  v134 = *(_QWORD *)(v126 + 56);
  *(_QWORD *)(v126 + 16) = v126;
  *(_QWORD *)(v126 + 24) = v126;
  *(_QWORD *)(v126 + 32) = 0;
  v163 = v134;
  v162 = v132;
  if ( v133 )
  {
    v135 = _mm_loadh_ps((const double *)&v159[1]);
    v165 = v158;
    *(__m128 *)v166 = v135;
    v167 = v160;
    v133[1] = &v165;
    v136 = v161;
    v159[0] = nullptr;
    v159[1] = &v158;
    v160 = &v158;
    v161 = 0;
    v168 = v136;
    v134 = v163;
    goto LABEL_108;
  }
  while ( 1 )
  {
    v165 = 0;
    v166[0] = nullptr;
    v166[1] = &v165;
    v167 = &v165;
    v168 = 0;
LABEL_108:
    v137 = _mm_load_si128(&v162);
    v170 = v134;
    v169 = v137;
    sub_399630(v127, v124, v145, (__int64)v164);
    v138 = (_QWORD **)v166[0];
    if ( v166[0] )
    {
      do
      {
        sub_398830(v138[3]);
        v139 = v138;
        v138 = (_QWORD **)v138[2];
        operator delete(v139, 0x30u);
      }
      while ( v138 );
    }
    v140 = (_QWORD **)v159[0];
    if ( !v124 )
      break;
    --v124;
    if ( v159[0] )
    {
      do
      {
        sub_398830(v140[3]);
        v141 = v140;
        v140 = (_QWORD **)v140[2];
        operator delete(v141, 0x30u);
      }
      while ( v140 );
    }
    v128 = *(_QWORD *)(v126 - 64);
    v126 -= 72;
    if ( v128 )
      goto LABEL_106;
LABEL_114:
    v134 = *(_QWORD *)(v126 + 56);
    v142 = _mm_loadu_si128((const __m128i *)(v126 + 40));
    v158 = 0;
    v159[0] = nullptr;
    v159[1] = &v158;
    v160 = &v158;
    v161 = 0;
    v163 = v134;
    v162 = v142;
  }
  sub_398830((_QWORD *)v159[0]);
  v85 = v127;
  v86 = (__m128i *)&v149[-4];
  if ( (__int64)v149->m128i_i64 - v85 > 72 )
  {
    v87 = v85;
    do
    {
      v88 = v86->m128i_i64[1];
      if ( v88 )
      {
        v89 = _mm_loadh_ps((const double *)v86[1].m128i_i64);
        v158 = v86->m128i_i32[0];
        v90 = (__int32 *)v86[1].m128i_i64[1];
        *(__m128 *)v159 = v89;
        v160 = v90;
        *(_QWORD *)(v88 + 8) = &v158;
        v91 = v86[2].m128i_i64[0];
        v86->m128i_i64[1] = 0;
        v161 = v91;
        v86[1].m128i_i64[0] = (__int64)v86;
        v86[1].m128i_i64[1] = (__int64)v86;
        v86[2].m128i_i64[0] = 0;
      }
      else
      {
        v158 = 0;
        v159[0] = nullptr;
        v159[1] = &v158;
        v160 = &v158;
        v161 = 0;
      }
      v92 = _mm_loadu_si128((__m128i *)((char *)v86 + 40));
      v93 = v86->m128i_i64[1];
      v163 = v86[3].m128i_i64[1];
      v162 = v92;
      while ( v93 )
      {
        sub_398830(*(_QWORD **)(v93 + 24));
        v94 = (void *)v93;
        v93 = *(_QWORD *)(v93 + 16);
        operator delete(v94, 0x30u);
      }
      v86->m128i_i64[1] = 0;
      v86[1].m128i_i64[0] = (__int64)v86;
      v86[1].m128i_i64[1] = (__int64)v86;
      v86[2].m128i_i64[0] = 0;
      if ( *(_QWORD *)(v87 + 16) )
      {
        v86->m128i_i32[0] = *(_DWORD *)(v87 + 8);
        v95 = *(_QWORD *)(v87 + 16);
        v86->m128i_i64[1] = v95;
        v86[1].m128i_i64[0] = *(_QWORD *)(v87 + 24);
        v86[1].m128i_i64[1] = *(_QWORD *)(v87 + 32);
        *(_QWORD *)(v95 + 8) = v86;
        v86[2].m128i_i64[0] = *(_QWORD *)(v87 + 40);
        *(_QWORD *)(v87 + 16) = 0;
        *(_QWORD *)(v87 + 24) = v87 + 8;
        *(_QWORD *)(v87 + 32) = v87 + 8;
        *(_QWORD *)(v87 + 40) = 0;
      }
      v86[2].m128i_i64[1] = *(_QWORD *)(v87 + 48);
      v86[3].m128i_i32[0] = *(_DWORD *)(v87 + 56);
      v86[3].m128i_i64[1] = *(_QWORD *)(v87 + 64);
      if ( v159[0] )
      {
        v96 = _mm_loadh_ps((const double *)&v159[1]);
        v165 = v158;
        *(__m128 *)v166 = v96;
        v167 = v160;
        *((_QWORD *)v159[0] + 1) = &v165;
        v159[0] = nullptr;
        v168 = v161;
        v159[1] = &v158;
        v160 = &v158;
        v161 = 0;
      }
      else
      {
        v165 = 0;
        v166[0] = nullptr;
        v166[1] = &v165;
        v167 = &v165;
        v168 = 0;
      }
      v97 = (__int64)&v86[-1].m128i_i64[1] - v87;
      v98 = _mm_load_si128(&v162);
      v170 = v163;
      v169 = v98;
      sub_399630(v87, 0, 0x8E38E38E38E38E39LL * (v97 >> 3), (__int64)v164);
      v99 = (_QWORD **)v166[0];
      if ( v166[0] )
      {
        do
        {
          sub_398830(v99[3]);
          v100 = v99;
          v99 = (_QWORD **)v99[2];
          operator delete(v100, 0x30u);
        }
        while ( v99 );
      }
      v101 = (_QWORD **)v159[0];
      if ( v159[0] )
      {
        do
        {
          sub_398830(v101[3]);
          v102 = v101;
          v101 = (_QWORD **)v101[2];
          operator delete(v102, 0x30u);
        }
        while ( v101 );
      }
      v86 = (__m128i *)((char *)v86 - 72);
    }
    while ( v97 > 72 );
  }
  return v171 - __readfsqword(0x28u);
}
