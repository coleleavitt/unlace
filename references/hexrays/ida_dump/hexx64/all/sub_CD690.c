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
  __int64 v23; // rbp
  __int64 (__fastcall ***v24)(); // rsi
  char v25; // bl
  __int64 v26; // r15
  int v27; // ebp
  _QWORD *v28; // r12
  __int64 v29; // r8
  int v30; // r9d
  __int64 *v31; // r12
  __int64 v32; // rdx
  _DWORD *v33; // rcx
  _DWORD *v34; // rax
  __int64 *v35; // rbx
  __int64 v36; // r15
  int v37; // r14d
  __int64 i; // r12
  __int64 v39; // rbx
  __int64 *v40; // rbx
  __int64 v41; // rdx
  _DWORD *v42; // rcx
  _DWORD *v43; // rax
  __int64 v44; // rax
  unsigned __int64 v45; // rdx
  __int64 *v46; // r12
  __int64 v47; // rax
  __int64 v48; // rsi
  unsigned __int64 v49; // rdx
  __int64 *v50; // rbx
  __int64 v51; // rax
  __int64 v52; // rsi
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 *v56; // rsi
  __int64 *v57; // rdi
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  int v61; // r9d
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rax
  int v66; // r12d
  __int64 v67; // rbp
  int v68; // ebx
  __int64 v69; // r14
  __int64 *v70; // r15
  __int64 v71; // rcx
  _DWORD *v72; // rdx
  _DWORD *v73; // rax
  __int64 *v74; // rbx
  __int64 v75; // rcx
  _DWORD *v76; // rdx
  _DWORD *v77; // rax
  __int64 v78; // rdi
  __int64 v79; // r12
  __int64 v80; // rbx
  _QWORD *v81; // rbp
  __int64 v82; // rdi
  __int64 *v84; // r15
  __int64 v85; // rax
  __int64 v86; // rsi
  __int64 v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rax
  __int64 *v90; // rbx
  __int64 v91; // rax
  __int64 v92; // rsi
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rax
  __m128i v96; // [rsp+0h] [rbp-198h] BYREF
  __int64 v97; // [rsp+10h] [rbp-188h]
  __int64 *v98; // [rsp+18h] [rbp-180h]
  __int64 v99; // [rsp+20h] [rbp-178h]
  _QWORD *v100; // [rsp+28h] [rbp-170h]
  __int64 (__fastcall ***v101)(); // [rsp+30h] [rbp-168h]
  int v102; // [rsp+38h] [rbp-160h]
  int v103; // [rsp+3Ch] [rbp-15Ch]
  __int64 v104; // [rsp+40h] [rbp-158h]
  __int64 v105; // [rsp+48h] [rbp-150h]
  __int64 v106; // [rsp+50h] [rbp-148h]
  __int64 v107; // [rsp+58h] [rbp-140h]
  __int64 v108; // [rsp+60h] [rbp-138h]
  __int64 *v109; // [rsp+68h] [rbp-130h]
  __int64 v110; // [rsp+70h] [rbp-128h]
  __int64 v111; // [rsp+78h] [rbp-120h]
  __int64 v112; // [rsp+80h] [rbp-118h] BYREF
  __int128 v113; // [rsp+88h] [rbp-110h]
  __int64 v114; // [rsp+A0h] [rbp-F8h] BYREF
  _QWORD v115[4]; // [rsp+B0h] [rbp-E8h] BYREF
  _QWORD v116[2]; // [rsp+D0h] [rbp-C8h] BYREF
  void *v117; // [rsp+E0h] [rbp-B8h] BYREF
  __int128 v118; // [rsp+E8h] [rbp-B0h]
  char v119; // [rsp+F8h] [rbp-A0h]
  __int64 v120; // [rsp+100h] [rbp-98h]
  char v121; // [rsp+108h] [rbp-90h]
  __int64 (__fastcall **v122)(); // [rsp+110h] [rbp-88h] BYREF
  __int128 v123; // [rsp+118h] [rbp-80h] BYREF
  __m128i v124; // [rsp+128h] [rbp-70h] BYREF
  char v125; // [rsp+138h] [rbp-60h]
  __int64 v126; // [rsp+140h] [rbp-58h]
  char v127; // [rsp+148h] [rbp-50h]
  unsigned __int64 v128; // [rsp+158h] [rbp-40h]

  v128 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 48) )
    return v128 - __readfsqword(0x28u);
  v112 = 0;
  v113 = 0;
  v108 = sub_330DE0(a1);
  v102 = v108;
  v111 = a1 + 528;
  sub_673C0(a1 + 528, v108 + 1);
  v110 = (int)v108;
  v109 = &v112;
  sub_C3840(&v112, (int)v108);
  v2 = *(_QWORD *)(a1 + 48);
  if ( (int)v108 > 0 )
  {
    v3 = 0;
    v107 = (unsigned int)(v108 - 1);
    v101 = &v122;
    v4 = 8 * (5 * v107 + 5);
    do
    {
      v5 = (__int64 *)v101;
      sub_127A20(v101, *(_QWORD *)(*(_QWORD *)(a1 + 64) + 520LL), v2, 1);
      v6 = v3 + v112;
      sub_648D0((__int64 *)(v3 + v112), v5);
      v7 = *((_QWORD *)&v123 + 1);
      v8 = _mm_loadu_si128(&v124);
      *((_QWORD *)&v123 + 1) = 0;
      v124 = 0;
      v9 = *(_QWORD *)(v6 + 16);
      if ( v9 )
      {
        *(_QWORD *)(v6 + 24) = 0;
        v96 = v8;
        qfree(v9);
        v8 = _mm_load_si128(&v96);
      }
      *(_QWORD *)(v6 + 16) = v7;
      *(__m128i *)(v6 + 24) = v8;
      if ( *((_QWORD *)&v123 + 1) )
      {
        v124.m128i_i64[0] = 0;
        qfree(*((_QWORD *)&v123 + 1));
      }
      qfree(v122);
      v10 = *(_QWORD *)(a1 + 64);
      v116[0] = &off_4DBFF0;
      v116[1] = v10;
      v117 = nullptr;
      v118 = 0u;
      v119 = 0;
      v120 = v3 + v112;
      v121 = 1;
      v98 = v116;
      sub_11E900(v2, v116, v3 + v112, v11, v12, v13);
      v3 += 40;
      v2 = *(_QWORD *)(v2 + 8);
    }
    while ( v4 != v3 );
    v105 = 40;
    v14 = *(_QWORD *)(a1 + 48);
    v99 = 0;
    v104 = v14;
    v96.m128i_i64[0] = (__int64)&v114;
    v97 = 0;
    v100 = v115;
    while ( 1 )
    {
      v15 = v104;
      v16 = v96.m128i_i64[0];
      LODWORD(v106) = v97;
      v103 = v97;
      sub_124680(v96.m128i_i64[0], *(_QWORD *)(*(_QWORD *)(a1 + 64) + 520LL), v104, 1);
      v17 = *(_QWORD *)(a1 + 64);
      v122 = &off_4DBFF0;
      v124 = 0u;
      v125 = 0;
      v126 = v16;
      v127 = 0;
      v123 = v17;
      sub_11E900(v15, v101, v18, v19, v20, v21);
      v22 = v112 + v105 - 40;
      sub_64000(v98, v22);
      v117 = nullptr;
      v118 = 0;
      v23 = *(_QWORD *)(v22 + 24);
      if ( v23 )
      {
        v117 = (void *)qalloc_or_throw(16 * v23);
        *((_QWORD *)&v118 + 1) = v23;
        memcpy(v117, *(const void **)(v22 + 16), 16 * v23);
        *(_QWORD *)&v118 = v23;
      }
      v123 = 0;
      v122 = nullptr;
      v24 = v101;
      v122 = (__int64 (__fastcall **)())qvector_reserve(v101, 0, 1, 16);
      *(__m128i *)&v122[2 * v123] = _mm_load_si128((const __m128i *)&xmmword_424800);
      *(_QWORD *)&v123 = v123 + 1;
      v25 = sub_317F40(&v117, v24);
      if ( v122 )
      {
        *(_QWORD *)&v123 = 0;
        qfree(v122);
      }
      if ( v25 )
      {
        v122 = nullptr;
        v124 = 0;
        v123 = 0u;
        *((_QWORD *)&v123 + 1) = qvector_reserve((char *)&v123 + 8, 0, 1, 16);
        v56 = (__int64 *)v101;
        v57 = v98;
        v58 = 16 * v124.m128i_i64[0];
        *(__m128i *)(*((_QWORD *)&v123 + 1) + v58) = _mm_load_si128((const __m128i *)&xmmword_424800);
        ++v124.m128i_i64[0];
        sub_64640(v57, v56, v58, v59, v60, v61);
        sub_317C60(&v117, (char *)&v123 + 8);
        if ( *((_QWORD *)&v123 + 1) )
        {
          v124.m128i_i64[0] = 0;
          qfree(*((_QWORD *)&v123 + 1));
        }
        qfree(v122);
      }
      v26 = 0;
      v27 = v97;
      if ( v97 )
      {
        do
        {
          v28 = (_QWORD *)(40 * v26 + v112);
          if ( (unsigned __int8)sub_64780(v96.m128i_i64[0], v28) || (unsigned __int8)sub_318470(v100, v28 + 2) )
          {
            v31 = (__int64 *)(*(_QWORD *)(a1 + 576) + v99);
            v32 = v31[1];
            v33 = (_DWORD *)(*v31 + 4 * v32);
            v34 = (_DWORD *)*v31;
            if ( (_DWORD *)*v31 == v33 )
              goto LABEL_41;
            while ( *v34 != (_DWORD)v26 )
            {
              if ( v33 == ++v34 )
                goto LABEL_41;
            }
            if ( v34 == v33 )
            {
LABEL_41:
              v45 = v32 + 1;
              if ( v31[2] < v45 )
              {
                v54 = qvector_reserve(*(_QWORD *)(a1 + 576) + v99, *v31, v45, 4);
                v55 = v31[1];
                *v31 = v54;
                v33 = (_DWORD *)(v54 + 4 * v55);
              }
              *v33 = v26;
              ++v31[1];
              v46 = (__int64 *)(*(_QWORD *)(a1 + 600) + 24 * v26);
              v47 = v46[1];
              v48 = *v46;
              v32 = v47 + 1;
              if ( v46[2] < (unsigned __int64)(v47 + 1) )
              {
                v53 = qvector_reserve(*(_QWORD *)(a1 + 600) + 24 * v26, v48, v32, 4);
                *v46 = v53;
                v48 = v53;
                v47 = v46[1];
              }
              *(_DWORD *)(v48 + 4 * v47) = v103;
              ++v46[1];
            }
          }
          v35 = (__int64 *)(v112 + 40 * v26);
          sub_64640(v35, v98, v32, (__int64)v33, v29, v30);
          sub_317C60(v35 + 2, &v117);
          ++v26;
        }
        while ( v97 != v26 );
      }
      v36 = v105;
      v37 = v106 + 1;
      v106 = v99 + 24;
      for ( i = v99 + 24; v102 > v37; i += 24 )
      {
        v39 = v36 + v112;
        if ( (unsigned __int8)sub_64780(v96.m128i_i64[0], (_QWORD *)(v36 + v112))
          || (unsigned __int8)sub_318470(v100, v39 + 16) )
        {
          v40 = (__int64 *)(i + *(_QWORD *)(a1 + 576));
          v41 = v40[1];
          v42 = (_DWORD *)(*v40 + 4 * v41);
          v43 = (_DWORD *)*v40;
          if ( (_DWORD *)*v40 == v42 )
            goto LABEL_46;
          while ( v27 != *v43 )
          {
            if ( v42 == ++v43 )
              goto LABEL_46;
          }
          if ( v42 == v43 )
          {
LABEL_46:
            v49 = v41 + 1;
            if ( v40[2] < v49 )
            {
              v63 = qvector_reserve(i + *(_QWORD *)(a1 + 576), *v40, v49, 4);
              v64 = v40[1];
              *v40 = v63;
              v42 = (_DWORD *)(v63 + 4 * v64);
            }
            *v42 = v103;
            ++v40[1];
            v50 = (__int64 *)(*(_QWORD *)(a1 + 600) + v99);
            v51 = v50[1];
            v52 = *v50;
            if ( v50[2] < (unsigned __int64)(v51 + 1) )
            {
              v62 = qvector_reserve(*(_QWORD *)(a1 + 600) + v99, v52, v51 + 1, 4);
              *v50 = v62;
              v52 = v62;
              v51 = v50[1];
            }
            *(_DWORD *)(v52 + 4 * v51) = v37;
            ++v50[1];
          }
        }
        ++v37;
        v36 += 40;
      }
      if ( v117 )
      {
        *(_QWORD *)&v118 = 0;
        qfree(v117);
      }
      qfree(v116[0]);
      if ( v115[0] )
      {
        v115[1] = 0;
        qfree(v115[0]);
      }
      qfree(v114);
      v105 += 40;
      v44 = *(_QWORD *)(v104 + 8);
      v99 = v106;
      v104 = v44;
      if ( v107 == v97 )
        break;
      ++v97;
    }
  }
  if ( *(_DWORD *)(a1 + 76) == 4 || **(_DWORD **)(a1 + 56) == 55 )
  {
    v66 = v108 - 1;
    if ( (int)v108 - 1 <= 0 )
    {
LABEL_70:
      v74 = (__int64 *)(*(_QWORD *)(a1 + 576) + 24 * v110);
      v75 = v74[1];
      v76 = (_DWORD *)(*v74 + 4 * v75);
      if ( (_DWORD *)*v74 == v76 )
        goto LABEL_90;
      v77 = (_DWORD *)*v74;
      while ( v66 != *v77 )
      {
        if ( v76 == ++v77 )
          goto LABEL_90;
      }
      if ( v76 == v77 )
      {
LABEL_90:
        if ( v74[2] < (unsigned __int64)(v75 + 1) )
        {
          v93 = qvector_reserve(v74, *v74, v75 + 1, 4);
          v94 = v74[1];
          *v74 = v93;
          v76 = (_DWORD *)(v93 + 4 * v94);
        }
        *v76 = v66;
        ++v74[1];
        v90 = (__int64 *)(*(_QWORD *)(a1 + 600) + 24LL * v66);
        v91 = v90[1];
        v92 = *v90;
        if ( v90[2] < (unsigned __int64)(v91 + 1) )
        {
          v95 = qvector_reserve(*(_QWORD *)(a1 + 600) + 24LL * v66, v92, v91 + 1, 4);
          *v90 = v95;
          v92 = v95;
          v91 = v90[1];
        }
        *(_DWORD *)(v92 + 4 * v91) = v108;
        ++v90[1];
      }
      goto LABEL_75;
    }
    v65 = v66;
LABEL_60:
    v67 = 0;
    v68 = 0;
    v69 = 24 * v65;
    do
    {
      if ( !*(_QWORD *)(a1 + 608) || !*(_DWORD *)(*(_QWORD *)(a1 + 600) + v67 + 8) )
      {
        v70 = (__int64 *)(v69 + *(_QWORD *)(a1 + 576));
        v71 = v70[1];
        v72 = (_DWORD *)(*v70 + 4 * v71);
        if ( (_DWORD *)*v70 == v72 )
          goto LABEL_85;
        v73 = (_DWORD *)*v70;
        while ( v68 != *v73 )
        {
          if ( v72 == ++v73 )
            goto LABEL_85;
        }
        if ( v72 == v73 )
        {
LABEL_85:
          if ( v70[2] < (unsigned __int64)(v71 + 1) )
          {
            v87 = qvector_reserve(v69 + *(_QWORD *)(a1 + 576), *v70, v71 + 1, 4);
            v88 = v70[1];
            *v70 = v87;
            v72 = (_DWORD *)(v87 + 4 * v88);
          }
          *v72 = v68;
          ++v70[1];
          v84 = (__int64 *)(v67 + *(_QWORD *)(a1 + 600));
          v85 = v84[1];
          v86 = *v84;
          if ( v84[2] < (unsigned __int64)(v85 + 1) )
          {
            v89 = qvector_reserve(v67 + *(_QWORD *)(a1 + 600), v86, v85 + 1, 4);
            *v84 = v89;
            v86 = v89;
            v85 = v84[1];
          }
          *(_DWORD *)(v86 + 4 * v85) = v66;
          ++v84[1];
        }
      }
      ++v68;
      v67 += 24;
    }
    while ( v68 < v66 );
    if ( (_DWORD)v108 == v66 )
      goto LABEL_75;
    goto LABEL_70;
  }
  if ( *(_DWORD *)(a1 + 72) == *(_DWORD *)(*(_QWORD *)(a1 + 64) + 64LL) - 1 )
    sub_310F00(v111);
  if ( (int)v108 > 0 )
  {
    v65 = v110;
    v66 = v108;
    goto LABEL_60;
  }
LABEL_75:
  v78 = v112;
  if ( v112 )
  {
    v79 = v113;
    if ( (_QWORD)v113 )
    {
      v80 = 0;
      do
      {
        v81 = (_QWORD *)(v78 + 40 * v80);
        v82 = v81[2];
        if ( v82 )
        {
          v81[3] = 0;
          qfree(v82);
        }
        ++v80;
        qfree(*v81);
        v78 = v112;
      }
      while ( v79 != v80 );
    }
    *(_QWORD *)&v113 = 0;
    qfree(v78);
  }
  return v128 - __readfsqword(0x28u);
}
