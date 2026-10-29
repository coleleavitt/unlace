unsigned __int64 __fastcall sub_CC7D0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rbx
  __int64 v3; // r13
  __int64 *v4; // r15
  __int64 v5; // r14
  __int64 v6; // r15
  __m128i v7; // xmm0
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // rbx
  int v15; // r13d
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rbx
  __int64 v22; // rbp
  unsigned __int64 v23; // rbp
  unsigned __int64 v24; // r15
  __int64 v25; // rdx
  __int64 v26; // rcx
  char v27; // bp
  __int64 v28; // r8
  int v29; // r9d
  __int64 v30; // r14
  int v31; // ebp
  _QWORD *v32; // r15
  __int64 v33; // r8
  int v34; // r9d
  __int64 *v35; // r15
  __int64 v36; // rdx
  _DWORD *v37; // rcx
  _DWORD *v38; // rax
  __int64 *v39; // rbx
  __int64 v40; // r14
  int v41; // r13d
  __int64 i; // r15
  __int64 v43; // rbx
  __int64 *v44; // rbx
  __int64 v45; // rdx
  _DWORD *v46; // rcx
  _DWORD *v47; // rax
  __int64 v48; // rax
  __int64 *v49; // r15
  __int64 v50; // rax
  __int64 v51; // rsi
  __int64 *v52; // rbx
  __int64 v53; // rax
  __int64 v54; // rsi
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rdx
  unsigned __int64 v58; // rbp
  unsigned __int64 v59; // rbx
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rax
  int v64; // r13d
  __int64 v65; // rbp
  int v66; // ebx
  __int64 v67; // r14
  __int64 *v68; // r15
  __int64 v69; // rcx
  _DWORD *v70; // rdx
  _DWORD *v71; // rax
  __int64 *v72; // rbx
  __int64 v73; // rcx
  _DWORD *v74; // rdx
  _DWORD *v75; // rax
  __int64 v76; // rdi
  __int64 v77; // r12
  __int64 v78; // rbx
  __int64 v79; // rbp
  __int64 *v81; // r15
  __int64 v82; // rax
  __int64 v83; // rsi
  __int64 v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rax
  __int64 *v87; // rbx
  __int64 v88; // rax
  __int64 v89; // rsi
  __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rax
  __m128i v93; // [rsp+0h] [rbp-1A8h] BYREF
  __int64 v94; // [rsp+18h] [rbp-190h]
  __int64 *v95; // [rsp+20h] [rbp-188h]
  __int64 v96; // [rsp+28h] [rbp-180h]
  void **v97; // [rsp+30h] [rbp-178h]
  _QWORD *v98; // [rsp+38h] [rbp-170h]
  __int64 *v99; // [rsp+40h] [rbp-168h]
  int v100; // [rsp+48h] [rbp-160h]
  int v101; // [rsp+4Ch] [rbp-15Ch]
  __int64 v102; // [rsp+50h] [rbp-158h]
  __int64 v103; // [rsp+58h] [rbp-150h]
  __int64 v104; // [rsp+60h] [rbp-148h]
  __int64 v105; // [rsp+68h] [rbp-140h]
  __int64 v106; // [rsp+70h] [rbp-138h]
  __int64 *v107; // [rsp+78h] [rbp-130h]
  __int64 v108; // [rsp+80h] [rbp-128h]
  __int64 v109; // [rsp+88h] [rbp-120h]
  __int64 v110; // [rsp+90h] [rbp-118h] BYREF
  __int128 v111; // [rsp+98h] [rbp-110h]
  __int64 v112; // [rsp+B0h] [rbp-F8h] BYREF
  _QWORD v113[4]; // [rsp+C0h] [rbp-E8h] BYREF
  _QWORD v114[2]; // [rsp+E0h] [rbp-C8h] BYREF
  void *v115; // [rsp+F0h] [rbp-B8h] BYREF
  __int128 v116; // [rsp+F8h] [rbp-B0h]
  char v117; // [rsp+108h] [rbp-A0h]
  __int64 v118; // [rsp+110h] [rbp-98h]
  char v119; // [rsp+118h] [rbp-90h]
  __int64 (__fastcall **v120)(); // [rsp+120h] [rbp-88h] BYREF
  __int128 v121; // [rsp+128h] [rbp-80h] BYREF
  __m128i v122; // [rsp+138h] [rbp-70h] BYREF
  char v123; // [rsp+148h] [rbp-60h]
  __int64 v124; // [rsp+150h] [rbp-58h]
  char v125; // [rsp+158h] [rbp-50h]
  unsigned __int64 v126; // [rsp+168h] [rbp-40h]

  v126 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 48) )
    return v126 - __readfsqword(0x28u);
  v110 = 0;
  v111 = 0;
  v106 = sub_32D940(a1);
  v100 = v106;
  v109 = a1 + 528;
  sub_66AC0(a1 + 528, v106 + 1);
  v108 = (int)v106;
  v107 = &v110;
  sub_C29C0(&v110, (int)v106);
  v1 = *(_QWORD *)(a1 + 48);
  if ( (int)v106 > 0 )
  {
    v2 = 0;
    v105 = (unsigned int)(v106 - 1);
    v99 = (__int64 *)&v120;
    v3 = 8 * (5 * v105 + 5);
    do
    {
      v4 = v99;
      sub_125510(v99, *(_QWORD *)(*(_QWORD *)(a1 + 64) + 520LL), v1, 1);
      v5 = v2 + v110;
      sub_63FD0((__int64 *)(v2 + v110), v4);
      v6 = *((_QWORD *)&v121 + 1);
      v7 = _mm_loadu_si128(&v122);
      *((_QWORD *)&v121 + 1) = 0;
      v122 = 0;
      if ( *(_QWORD *)(v5 + 16) )
      {
        *(_QWORD *)(v5 + 24) = 0;
        v93 = v7;
        qfree();
        v7 = _mm_load_si128(&v93);
      }
      *(_QWORD *)(v5 + 16) = v6;
      *(__m128i *)(v5 + 24) = v7;
      if ( *((_QWORD *)&v121 + 1) )
      {
        v122.m128i_i64[0] = 0;
        qfree();
      }
      qfree();
      v8 = *(_QWORD *)(a1 + 64);
      v114[0] = off_4DB7F0;
      v114[1] = v8;
      v115 = 0;
      v116 = 0u;
      v117 = 0;
      v118 = v2 + v110;
      v119 = 1;
      v95 = v114;
      sub_11C4C0(v1, v114, v2 + v110, v9, v10, v11);
      v2 += 40;
      v1 = *(_QWORD *)(v1 + 8);
    }
    while ( v3 != v2 );
    v103 = 40;
    v12 = *(_QWORD *)(a1 + 48);
    v96 = 0;
    v102 = v12;
    v93.m128i_i64[0] = (__int64)&v112;
    v97 = &v115;
    v94 = 0;
    v98 = v113;
    while ( 1 )
    {
      v13 = v102;
      v14 = v93.m128i_i64[0];
      v101 = v94;
      v15 = v94;
      sub_122180(v93.m128i_i64[0], *(_QWORD *)(*(_QWORD *)(a1 + 64) + 520LL), v102, 1);
      v16 = *(_QWORD *)(a1 + 64);
      v120 = off_4DB7F0;
      v122 = 0u;
      v123 = 0;
      v124 = v14;
      v125 = 0;
      v121 = v16;
      sub_11C4C0(v13, v99, v17, v18, v19, v20);
      v21 = v110 + v103 - 40;
      sub_63700(v95, v21);
      v115 = 0;
      v116 = 0;
      v22 = *(_QWORD *)(v21 + 24);
      if ( v22 )
      {
        v115 = (void *)qalloc_or_throw();
        *((_QWORD *)&v116 + 1) = v22;
        memcpy(v115, *(const void **)(v21 + 16), 16 * v22);
        *(_QWORD *)&v116 = v22;
      }
      v120 = 0;
      v121 = 0;
      v23 = xmmword_4ED7D0;
      v24 = *((_QWORD *)&xmmword_4ED7D0 + 1);
      if ( (unsigned __int64)xmmword_4ED7D0 + v24 - 1 >= (unsigned __int64)xmmword_4ED7D0 )
      {
        v120 = (__int64 (__fastcall **)())qvector_reserve();
        *(__m128i *)&v120[2 * v121] = _mm_unpacklo_epi64((__m128i)v23, (__m128i)v24);
        *(_QWORD *)&v121 = v121 + 1;
      }
      v27 = sub_3149F0(v97, v99);
      if ( v120 )
      {
        *(_QWORD *)&v121 = 0;
        qfree();
      }
      if ( v27 )
      {
        v58 = xmmword_4ED7D0;
        v59 = *((_QWORD *)&xmmword_4ED7D0 + 1);
        v120 = 0;
        v121 = 0u;
        v122 = 0;
        if ( (unsigned __int64)xmmword_4ED7D0 + v59 - 1 >= (unsigned __int64)xmmword_4ED7D0 )
        {
          *((_QWORD *)&v121 + 1) = qvector_reserve();
          v25 = 16 * v122.m128i_i64[0];
          *(__m128i *)(*((_QWORD *)&v121 + 1) + 16 * v122.m128i_i64[0]++) = _mm_unpacklo_epi64(
                                                                              (__m128i)v58,
                                                                              (__m128i)v59);
        }
        sub_63D40(v95, v99, v25, v26, v28, v29);
        sub_314710(v97, (char *)&v121 + 8);
        if ( *((_QWORD *)&v121 + 1) )
        {
          v122.m128i_i64[0] = 0;
          qfree();
        }
        qfree();
      }
      v30 = 0;
      v31 = v94;
      if ( v94 )
      {
        do
        {
          v32 = (_QWORD *)(40 * v30 + v110);
          if ( (unsigned __int8)sub_63E80(v93.m128i_i64[0], v32) || (unsigned __int8)sub_314F20(v98, v32 + 2) )
          {
            v35 = (__int64 *)(*(_QWORD *)(a1 + 576) + v96);
            v36 = v35[1];
            v37 = (_DWORD *)(*v35 + 4 * v36);
            v38 = (_DWORD *)*v35;
            if ( (_DWORD *)*v35 == v37 )
              goto LABEL_43;
            while ( *v38 != (_DWORD)v30 )
            {
              if ( v37 == ++v38 )
                goto LABEL_43;
            }
            if ( v37 == v38 )
            {
LABEL_43:
              if ( v35[2] < (unsigned __int64)(v36 + 1) )
              {
                v56 = qvector_reserve();
                v57 = v35[1];
                *v35 = v56;
                v37 = (_DWORD *)(v56 + 4 * v57);
              }
              *v37 = v30;
              ++v35[1];
              v49 = (__int64 *)(*(_QWORD *)(a1 + 600) + 24 * v30);
              v50 = v49[1];
              v51 = *v49;
              v36 = v50 + 1;
              if ( v49[2] < (unsigned __int64)(v50 + 1) )
              {
                v55 = qvector_reserve();
                *v49 = v55;
                v51 = v55;
                v50 = v49[1];
              }
              *(_DWORD *)(v51 + 4 * v50) = v101;
              ++v49[1];
            }
          }
          v39 = (__int64 *)(v110 + 40 * v30);
          sub_63D40(v39, v95, v36, (__int64)v37, v33, v34);
          sub_314710(v39 + 2, v97);
          ++v30;
        }
        while ( v94 != v30 );
      }
      v40 = v103;
      v41 = v15 + 1;
      v104 = v96 + 24;
      for ( i = v96 + 24; v100 > v41; i += 24 )
      {
        v43 = v40 + v110;
        if ( (unsigned __int8)sub_63E80(v93.m128i_i64[0], (_QWORD *)(v40 + v110))
          || (unsigned __int8)sub_314F20(v98, v43 + 16) )
        {
          v44 = (__int64 *)(i + *(_QWORD *)(a1 + 576));
          v45 = v44[1];
          v46 = (_DWORD *)(*v44 + 4 * v45);
          v47 = (_DWORD *)*v44;
          if ( (_DWORD *)*v44 == v46 )
            goto LABEL_48;
          while ( v31 != *v47 )
          {
            if ( v46 == ++v47 )
              goto LABEL_48;
          }
          if ( v47 == v46 )
          {
LABEL_48:
            if ( v44[2] < (unsigned __int64)(v45 + 1) )
            {
              v61 = qvector_reserve();
              v62 = v44[1];
              *v44 = v61;
              v46 = (_DWORD *)(v61 + 4 * v62);
            }
            *v46 = v101;
            ++v44[1];
            v52 = (__int64 *)(*(_QWORD *)(a1 + 600) + v96);
            v53 = v52[1];
            v54 = *v52;
            if ( v52[2] < (unsigned __int64)(v53 + 1) )
            {
              v60 = qvector_reserve();
              *v52 = v60;
              v54 = v60;
              v53 = v52[1];
            }
            *(_DWORD *)(v54 + 4 * v53) = v41;
            ++v52[1];
          }
        }
        ++v41;
        v40 += 40;
      }
      if ( v115 )
      {
        *(_QWORD *)&v116 = 0;
        qfree();
      }
      qfree();
      if ( v113[0] )
      {
        v113[1] = 0;
        qfree();
      }
      qfree();
      v103 += 40;
      v48 = *(_QWORD *)(v102 + 8);
      v96 = v104;
      v102 = v48;
      if ( v105 == v94 )
        break;
      ++v94;
    }
  }
  if ( *(_DWORD *)(a1 + 76) == 4 || **(_DWORD **)(a1 + 56) == 55 )
  {
    v64 = v106 - 1;
    if ( (int)v106 - 1 <= 0 )
    {
LABEL_74:
      v72 = (__int64 *)(*(_QWORD *)(a1 + 576) + 24 * v108);
      v73 = v72[1];
      v74 = (_DWORD *)(*v72 + 4 * v73);
      if ( (_DWORD *)*v72 == v74 )
        goto LABEL_94;
      v75 = (_DWORD *)*v72;
      while ( v64 != *v75 )
      {
        if ( v74 == ++v75 )
          goto LABEL_94;
      }
      if ( v74 == v75 )
      {
LABEL_94:
        if ( v72[2] < (unsigned __int64)(v73 + 1) )
        {
          v90 = qvector_reserve();
          v91 = v72[1];
          *v72 = v90;
          v74 = (_DWORD *)(v90 + 4 * v91);
        }
        *v74 = v64;
        ++v72[1];
        v87 = (__int64 *)(*(_QWORD *)(a1 + 600) + 24LL * v64);
        v88 = v87[1];
        v89 = *v87;
        if ( v87[2] < (unsigned __int64)(v88 + 1) )
        {
          v92 = qvector_reserve();
          *v87 = v92;
          v89 = v92;
          v88 = v87[1];
        }
        *(_DWORD *)(v89 + 4 * v88) = v106;
        ++v87[1];
      }
      goto LABEL_79;
    }
    v63 = v64;
LABEL_64:
    v65 = 0;
    v66 = 0;
    v67 = 24 * v63;
    do
    {
      if ( !*(_QWORD *)(a1 + 608) || !*(_DWORD *)(*(_QWORD *)(a1 + 600) + v65 + 8) )
      {
        v68 = (__int64 *)(v67 + *(_QWORD *)(a1 + 576));
        v69 = v68[1];
        v70 = (_DWORD *)(*v68 + 4 * v69);
        if ( (_DWORD *)*v68 == v70 )
          goto LABEL_89;
        v71 = (_DWORD *)*v68;
        while ( v66 != *v71 )
        {
          if ( v70 == ++v71 )
            goto LABEL_89;
        }
        if ( v70 == v71 )
        {
LABEL_89:
          if ( v68[2] < (unsigned __int64)(v69 + 1) )
          {
            v84 = qvector_reserve();
            v85 = v68[1];
            *v68 = v84;
            v70 = (_DWORD *)(v84 + 4 * v85);
          }
          *v70 = v66;
          ++v68[1];
          v81 = (__int64 *)(v65 + *(_QWORD *)(a1 + 600));
          v82 = v81[1];
          v83 = *v81;
          if ( v81[2] < (unsigned __int64)(v82 + 1) )
          {
            v86 = qvector_reserve();
            *v81 = v86;
            v83 = v86;
            v82 = v81[1];
          }
          *(_DWORD *)(v83 + 4 * v82) = v64;
          ++v81[1];
        }
      }
      ++v66;
      v65 += 24;
    }
    while ( v66 < v64 );
    if ( (_DWORD)v106 == v64 )
      goto LABEL_79;
    goto LABEL_74;
  }
  if ( *(_DWORD *)(a1 + 72) == *(_DWORD *)(*(_QWORD *)(a1 + 64) + 64LL) - 1 )
    sub_30D980(v109);
  if ( (int)v106 > 0 )
  {
    v63 = v108;
    v64 = v106;
    goto LABEL_64;
  }
LABEL_79:
  v76 = v110;
  if ( v110 )
  {
    v77 = v111;
    if ( (_QWORD)v111 )
    {
      v78 = 0;
      do
      {
        v79 = v76 + 40 * v78;
        if ( *(_QWORD *)(v79 + 16) )
        {
          *(_QWORD *)(v79 + 24) = 0;
          qfree();
        }
        ++v78;
        qfree();
        v76 = v110;
      }
      while ( v77 != v78 );
    }
    *(_QWORD *)&v111 = 0;
    qfree();
  }
  return v126 - __readfsqword(0x28u);
}
