unsigned __int64 __fastcall sub_CD690(__int64 a1)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  __int64 v4; // r12
  __int64 *v5; // r15
  __int64 v6; // r14
  __int64 v7; // r15
  __m128i v8; // xmm0
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // rbx
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rbp
  __int64 (__fastcall ***v26)(); // rsi
  char v27; // bl
  __int64 v28; // r15
  int v29; // ebp
  _QWORD *v30; // r12
  __int64 v31; // r8
  int v32; // r9d
  __int64 *v33; // r12
  __int64 v34; // rdx
  _DWORD *v35; // rcx
  _DWORD *v36; // rax
  __int64 *v37; // rbx
  __int64 v38; // r15
  int v39; // r14d
  __int64 i; // r12
  __int64 v41; // rbx
  __int64 *v42; // rbx
  __int64 v43; // rdx
  _DWORD *v44; // rcx
  _DWORD *v45; // rax
  __int64 v46; // rax
  unsigned __int64 v47; // rdx
  __int64 *v48; // r12
  __int64 v49; // rax
  __int64 v50; // rsi
  unsigned __int64 v51; // rdx
  __int64 *v52; // rbx
  __int64 v53; // rax
  __int64 v54; // rsi
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 *v58; // rsi
  __int64 *v59; // rdi
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  int v63; // r9d
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rax
  int v68; // r12d
  __int64 v69; // rbp
  int v70; // ebx
  __int64 v71; // r14
  __int64 *v72; // r15
  __int64 v73; // rcx
  _DWORD *v74; // rdx
  _DWORD *v75; // rax
  __int64 *v76; // rbx
  __int64 v77; // rcx
  _DWORD *v78; // rdx
  _DWORD *v79; // rax
  __int64 v80; // rdi
  __int64 v81; // r12
  __int64 v82; // rbx
  __int64 *v83; // rbp
  __int64 v84; // rdi
  __int64 *v86; // r15
  __int64 v87; // rax
  __int64 v88; // rsi
  __int64 v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rax
  __int64 *v92; // rbx
  __int64 v93; // rax
  __int64 v94; // rsi
  __int64 v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rax
  __m128i v98; // [rsp+0h] [rbp-198h] BYREF
  __int64 v99; // [rsp+10h] [rbp-188h]
  __int64 *v100; // [rsp+18h] [rbp-180h]
  __int64 v101; // [rsp+20h] [rbp-178h]
  __int64 *v102; // [rsp+28h] [rbp-170h]
  __int64 (__fastcall ***v103)(); // [rsp+30h] [rbp-168h]
  int v104; // [rsp+38h] [rbp-160h]
  int v105; // [rsp+3Ch] [rbp-15Ch]
  __int64 v106; // [rsp+40h] [rbp-158h]
  __int64 v107; // [rsp+48h] [rbp-150h]
  __int64 v108; // [rsp+50h] [rbp-148h]
  __int64 v109; // [rsp+58h] [rbp-140h]
  __int64 v110; // [rsp+60h] [rbp-138h]
  __int64 *v111; // [rsp+68h] [rbp-130h]
  __int64 v112; // [rsp+70h] [rbp-128h]
  __int64 v113; // [rsp+78h] [rbp-120h]
  __int64 v114; // [rsp+80h] [rbp-118h] BYREF
  __int128 v115; // [rsp+88h] [rbp-110h]
  __int64 v116; // [rsp+A0h] [rbp-F8h] BYREF
  __int64 v117[4]; // [rsp+B0h] [rbp-E8h] BYREF
  __int64 v118[2]; // [rsp+D0h] [rbp-C8h] BYREF
  void *v119; // [rsp+E0h] [rbp-B8h] BYREF
  __int128 v120; // [rsp+E8h] [rbp-B0h]
  char v121; // [rsp+F8h] [rbp-A0h]
  __int64 v122; // [rsp+100h] [rbp-98h]
  char v123; // [rsp+108h] [rbp-90h]
  __int64 (__fastcall **v124)(); // [rsp+110h] [rbp-88h] BYREF
  __int128 v125; // [rsp+118h] [rbp-80h] BYREF
  __m128i v126; // [rsp+128h] [rbp-70h] BYREF
  char v127; // [rsp+138h] [rbp-60h]
  __int64 v128; // [rsp+140h] [rbp-58h]
  char v129; // [rsp+148h] [rbp-50h]
  unsigned __int64 v130; // [rsp+158h] [rbp-40h]

  v130 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 48) )
    return v130 - __readfsqword(0x28u);
  v114 = 0;
  v115 = 0;
  v110 = sub_330DE0(a1);
  v104 = v110;
  v113 = a1 + 528;
  sub_673C0(a1 + 528, v110 + 1);
  v112 = (int)v110;
  v111 = &v114;
  sub_C3840(&v114, (int)v110);
  v2 = *(_QWORD *)(a1 + 48);
  if ( (int)v110 > 0 )
  {
    v3 = 0;
    v109 = (unsigned int)(v110 - 1);
    v103 = &v124;
    v4 = 8 * (5 * v109 + 5);
    do
    {
      v5 = (__int64 *)v103;
      sub_127A20(v103, *(_QWORD *)(*(_QWORD *)(a1 + 64) + 520LL), v2, 1);
      v6 = v3 + v114;
      sub_648D0((__int64 *)(v3 + v114), v5);
      v7 = *((_QWORD *)&v125 + 1);
      v8 = _mm_loadu_si128(&v126);
      *((_QWORD *)&v125 + 1) = 0;
      v126 = 0;
      v9 = *(_QWORD *)(v6 + 16);
      if ( v9 )
      {
        *(_QWORD *)(v6 + 24) = 0;
        v98 = v8;
        qfree(v9);
        v8 = _mm_load_si128(&v98);
      }
      *(_QWORD *)(v6 + 16) = v7;
      *(__m128i *)(v6 + 24) = v8;
      if ( *((_QWORD *)&v125 + 1) )
      {
        v126.m128i_i64[0] = 0;
        qfree(*((__int64 *)&v125 + 1));
      }
      qfree((__int64)v124);
      v10 = *(_QWORD *)(a1 + 64);
      v118[0] = (__int64)&off_4DBFF0;
      v118[1] = v10;
      v119 = nullptr;
      v120 = 0u;
      v121 = 0;
      v122 = v3 + v114;
      v123 = 1;
      v100 = v118;
      sub_11E900(v2, v118, v3 + v114, v11, v12, v13);
      v3 += 40;
      v2 = *(_QWORD *)(v2 + 8);
    }
    while ( v4 != v3 );
    v107 = 40;
    v14 = *(_QWORD *)(a1 + 48);
    v101 = 0;
    v106 = v14;
    v98.m128i_i64[0] = (__int64)&v116;
    v99 = 0;
    v102 = v117;
    while ( 1 )
    {
      v15 = v106;
      v16 = v98.m128i_i64[0];
      LODWORD(v108) = v99;
      v105 = v99;
      sub_124680(v98.m128i_i64[0], *(_QWORD *)(*(_QWORD *)(a1 + 64) + 520LL), v106, 1);
      v17 = *(_QWORD *)(a1 + 64);
      v124 = &off_4DBFF0;
      v126 = 0u;
      v127 = 0;
      v128 = v16;
      v129 = 0;
      v125 = v17;
      sub_11E900(v15, v103, v18, v19, v20, v21);
      v22 = v114 + v107 - 40;
      sub_64000(v100, v22);
      v119 = nullptr;
      v120 = 0;
      v25 = *(_QWORD *)(v22 + 24);
      if ( v25 )
      {
        v119 = (void *)qalloc_or_throw(16 * v25, v22, v23, v24);
        *((_QWORD *)&v120 + 1) = v25;
        memcpy(v119, *(const void **)(v22 + 16), 16 * v25);
        *(_QWORD *)&v120 = v25;
      }
      v125 = 0;
      v124 = nullptr;
      v26 = v103;
      v124 = (__int64 (__fastcall **)())qvector_reserve((__int64)v103, 0, 1, 16);
      *(__m128i *)&v124[2 * v125] = _mm_load_si128((const __m128i *)&xmmword_424800);
      *(_QWORD *)&v125 = v125 + 1;
      v27 = sub_317F40(&v119, v26);
      if ( v124 )
      {
        *(_QWORD *)&v125 = 0;
        qfree((__int64)v124);
      }
      if ( v27 )
      {
        v124 = nullptr;
        v126 = 0;
        v125 = 0u;
        *((_QWORD *)&v125 + 1) = qvector_reserve((__int64)&v125 + 8, 0, 1, 16);
        v58 = (__int64 *)v103;
        v59 = v100;
        v60 = 16 * v126.m128i_i64[0];
        *(__m128i *)(*((_QWORD *)&v125 + 1) + v60) = _mm_load_si128((const __m128i *)&xmmword_424800);
        ++v126.m128i_i64[0];
        sub_64640(v59, v58, v60, v61, v62, v63);
        sub_317C60(&v119, (char *)&v125 + 8);
        if ( *((_QWORD *)&v125 + 1) )
        {
          v126.m128i_i64[0] = 0;
          qfree(*((__int64 *)&v125 + 1));
        }
        qfree((__int64)v124);
      }
      v28 = 0;
      v29 = v99;
      if ( v99 )
      {
        do
        {
          v30 = (_QWORD *)(40 * v28 + v114);
          if ( (unsigned __int8)sub_64780(v98.m128i_i64[0], v30) || (unsigned __int8)sub_318470(v102, v30 + 2) )
          {
            v33 = (__int64 *)(*(_QWORD *)(a1 + 576) + v101);
            v34 = v33[1];
            v35 = (_DWORD *)(*v33 + 4 * v34);
            v36 = (_DWORD *)*v33;
            if ( (_DWORD *)*v33 == v35 )
              goto LABEL_41;
            while ( *v36 != (_DWORD)v28 )
            {
              if ( v35 == ++v36 )
                goto LABEL_41;
            }
            if ( v36 == v35 )
            {
LABEL_41:
              v47 = v34 + 1;
              if ( v33[2] < v47 )
              {
                v56 = qvector_reserve(*(_QWORD *)(a1 + 576) + v101, *v33, v47, 4);
                v57 = v33[1];
                *v33 = v56;
                v35 = (_DWORD *)(v56 + 4 * v57);
              }
              *v35 = v28;
              ++v33[1];
              v48 = (__int64 *)(*(_QWORD *)(a1 + 600) + 24 * v28);
              v49 = v48[1];
              v50 = *v48;
              v34 = v49 + 1;
              if ( v48[2] < (unsigned __int64)(v49 + 1) )
              {
                v55 = qvector_reserve(*(_QWORD *)(a1 + 600) + 24 * v28, v50, v34, 4);
                *v48 = v55;
                v50 = v55;
                v49 = v48[1];
              }
              *(_DWORD *)(v50 + 4 * v49) = v105;
              ++v48[1];
            }
          }
          v37 = (__int64 *)(v114 + 40 * v28);
          sub_64640(v37, v100, v34, (__int64)v35, v31, v32);
          sub_317C60(v37 + 2, &v119);
          ++v28;
        }
        while ( v99 != v28 );
      }
      v38 = v107;
      v39 = v108 + 1;
      v108 = v101 + 24;
      for ( i = v101 + 24; v104 > v39; i += 24 )
      {
        v41 = v38 + v114;
        if ( (unsigned __int8)sub_64780(v98.m128i_i64[0], (_QWORD *)(v38 + v114))
          || (unsigned __int8)sub_318470(v102, v41 + 16) )
        {
          v42 = (__int64 *)(i + *(_QWORD *)(a1 + 576));
          v43 = v42[1];
          v44 = (_DWORD *)(*v42 + 4 * v43);
          v45 = (_DWORD *)*v42;
          if ( (_DWORD *)*v42 == v44 )
            goto LABEL_46;
          while ( v29 != *v45 )
          {
            if ( v44 == ++v45 )
              goto LABEL_46;
          }
          if ( v44 == v45 )
          {
LABEL_46:
            v51 = v43 + 1;
            if ( v42[2] < v51 )
            {
              v65 = qvector_reserve(i + *(_QWORD *)(a1 + 576), *v42, v51, 4);
              v66 = v42[1];
              *v42 = v65;
              v44 = (_DWORD *)(v65 + 4 * v66);
            }
            *v44 = v105;
            ++v42[1];
            v52 = (__int64 *)(*(_QWORD *)(a1 + 600) + v101);
            v53 = v52[1];
            v54 = *v52;
            if ( v52[2] < (unsigned __int64)(v53 + 1) )
            {
              v64 = qvector_reserve(*(_QWORD *)(a1 + 600) + v101, v54, v53 + 1, 4);
              *v52 = v64;
              v54 = v64;
              v53 = v52[1];
            }
            *(_DWORD *)(v54 + 4 * v53) = v39;
            ++v52[1];
          }
        }
        ++v39;
        v38 += 40;
      }
      if ( v119 )
      {
        *(_QWORD *)&v120 = 0;
        qfree((__int64)v119);
      }
      qfree(v118[0]);
      if ( v117[0] )
      {
        v117[1] = 0;
        qfree(v117[0]);
      }
      qfree(v116);
      v107 += 40;
      v46 = *(_QWORD *)(v106 + 8);
      v101 = v108;
      v106 = v46;
      if ( v109 == v99 )
        break;
      ++v99;
    }
  }
  if ( *(_DWORD *)(a1 + 76) == 4 || **(_DWORD **)(a1 + 56) == 55 )
  {
    v68 = v110 - 1;
    if ( (int)v110 - 1 <= 0 )
    {
LABEL_70:
      v76 = (__int64 *)(*(_QWORD *)(a1 + 576) + 24 * v112);
      v77 = v76[1];
      v78 = (_DWORD *)(*v76 + 4 * v77);
      if ( (_DWORD *)*v76 == v78 )
        goto LABEL_90;
      v79 = (_DWORD *)*v76;
      while ( v68 != *v79 )
      {
        if ( v78 == ++v79 )
          goto LABEL_90;
      }
      if ( v78 == v79 )
      {
LABEL_90:
        if ( v76[2] < (unsigned __int64)(v77 + 1) )
        {
          v95 = qvector_reserve((__int64)v76, *v76, v77 + 1, 4);
          v96 = v76[1];
          *v76 = v95;
          v78 = (_DWORD *)(v95 + 4 * v96);
        }
        *v78 = v68;
        ++v76[1];
        v92 = (__int64 *)(*(_QWORD *)(a1 + 600) + 24LL * v68);
        v93 = v92[1];
        v94 = *v92;
        if ( v92[2] < (unsigned __int64)(v93 + 1) )
        {
          v97 = qvector_reserve(*(_QWORD *)(a1 + 600) + 24LL * v68, v94, v93 + 1, 4);
          *v92 = v97;
          v94 = v97;
          v93 = v92[1];
        }
        *(_DWORD *)(v94 + 4 * v93) = v110;
        ++v92[1];
      }
      goto LABEL_75;
    }
    v67 = v68;
LABEL_60:
    v69 = 0;
    v70 = 0;
    v71 = 24 * v67;
    do
    {
      if ( !*(_QWORD *)(a1 + 608) || !*(_DWORD *)(*(_QWORD *)(a1 + 600) + v69 + 8) )
      {
        v72 = (__int64 *)(v71 + *(_QWORD *)(a1 + 576));
        v73 = v72[1];
        v74 = (_DWORD *)(*v72 + 4 * v73);
        if ( (_DWORD *)*v72 == v74 )
          goto LABEL_85;
        v75 = (_DWORD *)*v72;
        while ( v70 != *v75 )
        {
          if ( v74 == ++v75 )
            goto LABEL_85;
        }
        if ( v74 == v75 )
        {
LABEL_85:
          if ( v72[2] < (unsigned __int64)(v73 + 1) )
          {
            v89 = qvector_reserve(v71 + *(_QWORD *)(a1 + 576), *v72, v73 + 1, 4);
            v90 = v72[1];
            *v72 = v89;
            v74 = (_DWORD *)(v89 + 4 * v90);
          }
          *v74 = v70;
          ++v72[1];
          v86 = (__int64 *)(v69 + *(_QWORD *)(a1 + 600));
          v87 = v86[1];
          v88 = *v86;
          if ( v86[2] < (unsigned __int64)(v87 + 1) )
          {
            v91 = qvector_reserve(v69 + *(_QWORD *)(a1 + 600), v88, v87 + 1, 4);
            *v86 = v91;
            v88 = v91;
            v87 = v86[1];
          }
          *(_DWORD *)(v88 + 4 * v87) = v68;
          ++v86[1];
        }
      }
      ++v70;
      v69 += 24;
    }
    while ( v70 < v68 );
    if ( (_DWORD)v110 == v68 )
      goto LABEL_75;
    goto LABEL_70;
  }
  if ( *(_DWORD *)(a1 + 72) == *(_DWORD *)(*(_QWORD *)(a1 + 64) + 64LL) - 1 )
    sub_310F00(v113);
  if ( (int)v110 > 0 )
  {
    v67 = v112;
    v68 = v110;
    goto LABEL_60;
  }
LABEL_75:
  v80 = v114;
  if ( v114 )
  {
    v81 = v115;
    if ( (_QWORD)v115 )
    {
      v82 = 0;
      do
      {
        v83 = (__int64 *)(v80 + 40 * v82);
        v84 = v83[2];
        if ( v84 )
        {
          v83[3] = 0;
          qfree(v84);
        }
        ++v82;
        qfree(*v83);
        v80 = v114;
      }
      while ( v81 != v82 );
    }
    *(_QWORD *)&v115 = 0;
    qfree(v80);
  }
  return v130 - __readfsqword(0x28u);
}
