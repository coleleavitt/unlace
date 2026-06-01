__int64 __fastcall sub_D24CB0(_QWORD *a1, __int64 a2, unsigned int a3, __int64 a4, __int64 *a5, _QWORD *a6)
{
  _QWORD *v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rdi
  bool v12; // zf
  int v13; // esi
  _DWORD *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  int v18; // eax
  unsigned int v19; // esi
  __int64 v20; // r8
  _QWORD *v21; // rsi
  __int64 v22; // r8
  _QWORD *v23; // rdi
  _QWORD *i; // rbx
  __int64 v25; // rdx
  __int64 v27; // r10
  __int64 v28; // r8
  int v29; // ecx
  unsigned int v30; // esi
  __int64 v31; // r8
  __int64 v32; // r15
  _QWORD *v33; // rdi
  __int64 v34; // r11
  _QWORD *v35; // rdx
  _QWORD *v36; // r8
  __int64 v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // rdx
  _OWORD *v40; // rax
  int v41; // edx
  __int64 v42; // rsi
  __m128i *v43; // r11
  _QWORD *v44; // rax
  _QWORD *v45; // r14
  __int64 v46; // r13
  const __m128i *v47; // rbx
  __int64 v48; // rdx
  __m128i *v49; // rsi
  __int64 v50; // rdi
  __m128i *v51; // rdx
  __int64 v52; // rax
  __m128i *v53; // r15
  _QWORD *v54; // rax
  __int64 v55; // rax
  __int64 *v56; // rdi
  int v57; // r8d
  __int64 v58; // r9
  __int64 v59; // xmm1_8
  __int64 v60; // rsi
  __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rdi
  __int64 v64; // rcx
  int *v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rbx
  __int64 v68; // rsi
  __int64 v69; // rdi
  int *v70; // rdi
  __int64 v71; // rsi
  __int64 v72; // r12
  int *v73; // rdi
  __int64 v74; // r11
  unsigned __int64 v75; // rcx
  __int64 v76; // rcx
  unsigned int v77; // esi
  __int64 v78; // r8
  __int64 v79; // rdx
  __int64 v80; // r11
  __int64 v81; // rcx
  __int64 v82; // rax
  int *v83; // r8
  __int64 v84; // rax
  __int64 v85; // rax
  int *v86; // rdi
  unsigned __int64 v87; // rax
  __int64 v88; // r9
  unsigned __int64 v89; // rax
  __int64 v90; // r9
  __int64 v91; // r11
  unsigned __int64 v92; // rcx
  __int64 v93; // rax
  int v94; // [rsp-8h] [rbp-138h]
  int v95; // [rsp+0h] [rbp-130h]
  int v96; // [rsp+0h] [rbp-130h]
  int v97; // [rsp+8h] [rbp-128h]
  __int64 v98; // [rsp+8h] [rbp-128h]
  int v99; // [rsp+10h] [rbp-120h]
  __int64 v100; // [rsp+10h] [rbp-120h]
  int v101; // [rsp+18h] [rbp-118h]
  __int64 v102; // [rsp+18h] [rbp-118h]
  int v103; // [rsp+20h] [rbp-110h]
  int v104; // [rsp+20h] [rbp-110h]
  __int64 v105; // [rsp+20h] [rbp-110h]
  __int64 v106; // [rsp+28h] [rbp-108h]
  __int64 v107; // [rsp+28h] [rbp-108h]
  __int64 v108; // [rsp+30h] [rbp-100h]
  __int64 v109; // [rsp+30h] [rbp-100h]
  __int32 v110; // [rsp+30h] [rbp-100h]
  unsigned int v111; // [rsp+38h] [rbp-F8h]
  size_t v112; // [rsp+38h] [rbp-F8h]
  int v113[2]; // [rsp+38h] [rbp-F8h]
  int v114[2]; // [rsp+38h] [rbp-F8h]
  __m128i *v115; // [rsp+38h] [rbp-F8h]
  __m128i v116; // [rsp+40h] [rbp-F0h] BYREF
  __int64 *v117; // [rsp+50h] [rbp-E0h]
  int v118[2]; // [rsp+58h] [rbp-D8h]
  int v119; // [rsp+60h] [rbp-D0h]
  __m128i *v120; // [rsp+68h] [rbp-C8h] BYREF
  __m128i ptr; // [rsp+70h] [rbp-C0h] BYREF
  int v122[10]; // [rsp+80h] [rbp-B0h] BYREF
  void *v123; // [rsp+A8h] [rbp-88h]
  int v124; // [rsp+B0h] [rbp-80h]
  __int64 v125; // [rsp+B8h] [rbp-78h]

  v9 = a6;
  v10 = *a6;
  *(_QWORD *)v118 = a4;
  v117 = a5;
  if ( v10 )
  {
    v11 = a6[1];
    v12 = (*(_DWORD *)(v10 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v11, v10);
  }
  v13 = *(_DWORD *)(a2 + 32);
  *v9 = 0;
  if ( !v13 )
    return 5;
  v14 = *(_DWORD **)(a2 + 24);
  if ( v14 )
  {
    if ( *v14 != -1 )
      return 5;
  }
  v15 = a1[2];
  v16 = *(unsigned int *)(v15 + 8);
  v17 = *(_QWORD **)v15;
  v18 = *(_DWORD *)(a2 + 12);
  v19 = v16 - 1;
  v16 *= 24;
  v20 = 3LL * (v18 & v19);
  v21 = (_QWORD *)((char *)v17 + v16);
  v22 = 8 * v20;
  v23 = &v17[(unsigned __int64)v22 / 8];
  if ( v22 != v16 )
  {
    for ( i = &v17[(unsigned __int64)v22 / 8]; v21 != i; i += 3 )
    {
      v25 = *i;
      if ( *i > 1u )
      {
        if ( *(_DWORD *)(v25 + 12) == v18 && a2 == v25 )
          goto LABEL_16;
      }
      else if ( !v25 )
      {
        return 5;
      }
    }
  }
  if ( v17 == v23 )
    return 5;
  v39 = *v17;
  if ( *v17 <= 1u )
    goto LABEL_45;
LABEL_41:
  if ( *(_DWORD *)(v39 + 12) != v18 || a2 != v39 )
  {
    do
    {
      v17 += 3;
      if ( v23 == v17 )
        break;
      v39 = *v17;
      if ( *v17 > 1u )
        goto LABEL_41;
LABEL_45:
      ;
    }
    while ( v39 );
    return 5;
  }
  i = v17;
LABEL_16:
  if ( v21 == i )
    return 5;
  while ( *i <= 1u )
  {
    i += 3;
    if ( v21 == i )
      return 5;
  }
  if ( i == v21 )
    return 5;
  v27 = a1[3];
  v28 = *(unsigned int *)(v27 + 8);
  v29 = *(_DWORD *)(v27 + 16);
  if ( 3 * (int)v28 < (unsigned int)(4 * (v29 + *(_DWORD *)(v27 + 12))) )
  {
    v106 = a1[3];
    LODWORD(v108) = 2 * v28;
    v112 = 16LL * (unsigned int)(2 * v28);
    v40 = (_OWORD *)sub_186B270(v112);
    v41 = v108;
    v31 = v112;
    v116.m128i_i64[0] = (__int64)v40;
    v27 = v106;
    v42 = (__int64)v40;
    a6 = &v40[v112 / 0x10];
    if ( (_DWORD)v108 )
    {
      if ( (v112 & 0x10) == 0 || (*v40 = 0, ++v40, a6 != (_QWORD *)v40) )
      {
        do
        {
          *v40 = 0;
          v40 += 2;
          *(v40 - 1) = 0;
        }
        while ( a6 != (_QWORD *)v40 );
        v116.m128i_i64[0] = v42;
      }
    }
    v32 = (__int64)a6;
    v111 = v108 - 1;
    v43 = (__m128i *)(*(_QWORD *)v106 + 16LL * *(unsigned int *)(v106 + 8));
    if ( *(__m128i **)v106 != v43 )
    {
      v44 = a1;
      LODWORD(a6) = a3;
      v45 = i;
      v46 = v116.m128i_i64[0];
      v47 = *(const __m128i **)v106;
      v116.m128i_i64[0] = v32;
      do
      {
        if ( v47->m128i_i64[0] > 1uLL )
        {
          v48 = 16LL * (*(_DWORD *)(v47->m128i_i64[0] + 12) & v111);
          v49 = (__m128i *)(v46 + v48);
          if ( v31 == v48 )
          {
LABEL_60:
            if ( (__m128i *)v46 == v49 )
            {
LABEL_140:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v50 = v116.m128i_i64[0];
            v51 = (__m128i *)v46;
            while ( v51->m128i_i64[0] )
            {
              if ( v49 == ++v51 )
                goto LABEL_140;
            }
          }
          else
          {
            v50 = v116.m128i_i64[0];
            v51 = (__m128i *)(v46 + v48);
            while ( v51->m128i_i64[0] )
            {
              if ( (__m128i *)v116.m128i_i64[0] == ++v51 )
                goto LABEL_60;
            }
          }
          v116.m128i_i64[0] = v50;
          *v51 = _mm_loadu_si128(v47);
        }
        ++v47;
      }
      while ( v43 != v47 );
      v41 = v108;
      v43 = *(__m128i **)v106;
      v116.m128i_i64[0] = v46;
      i = v45;
      a1 = v44;
      a3 = (unsigned int)a6;
    }
    if ( v43 )
    {
      v103 = v41;
      v106 = v31;
      v108 = v27;
      sub_186B220(v43);
      v41 = v103;
      v31 = v106;
      v27 = v108;
    }
    v52 = v116.m128i_i64[0];
    *(_DWORD *)(v27 + 8) = v41;
    v29 = 0;
    *(_DWORD *)(v27 + 16) = 0;
    *(_QWORD *)v27 = v52;
    v18 = *(_DWORD *)(a2 + 12);
  }
  else
  {
    v30 = v28 - 1;
    v31 = 16 * v28;
    v111 = v30;
    v116.m128i_i64[0] = *(_QWORD *)v27;
    v32 = v116.m128i_i64[0] + v31;
  }
  v33 = (_QWORD *)v116.m128i_i64[0];
  v34 = 16LL * (v18 & v111);
  if ( v34 == v31 )
  {
    v36 = nullptr;
    while ( 1 )
    {
LABEL_35:
      if ( (_QWORD *)(v116.m128i_i64[0] + v34) == v33 )
      {
        sub_1872CE0("");
        sub_1873130(114, 461);
      }
      v38 = *v33;
      if ( *v33 > 1u )
      {
        if ( *(_DWORD *)(v38 + 12) == v18 && a2 == v38 )
        {
          v93 = v33[1];
          v36 = v33;
LABEL_148:
          if ( !v93 )
            goto LABEL_72;
          goto LABEL_73;
        }
      }
      else
      {
        if ( !v38 )
        {
          v116.m128i_i64[0] = (__int64)v33;
          if ( v36 )
LABEL_70:
            *(_DWORD *)(v27 + 16) = v29 - 1;
          else
            v36 = v33;
          goto LABEL_71;
        }
        v36 = v33;
      }
      v33 += 2;
    }
  }
  v35 = (_QWORD *)(v116.m128i_i64[0] + v34);
  v36 = nullptr;
  while ( 1 )
  {
    while ( 1 )
    {
      v37 = *v35;
      if ( *v35 <= 1u )
        break;
      if ( *(_DWORD *)(v37 + 12) == v18 && a2 == v37 )
      {
        v93 = v35[1];
        v36 = v35;
        goto LABEL_148;
      }
      v35 += 2;
      if ( v35 == (_QWORD *)v32 )
        goto LABEL_31;
    }
    if ( !v37 )
      break;
    v36 = v35;
    v35 += 2;
    if ( v35 == (_QWORD *)v32 )
    {
LABEL_31:
      v33 = (_QWORD *)v116.m128i_i64[0];
      goto LABEL_35;
    }
  }
  if ( v36 )
    goto LABEL_70;
  v36 = v35;
LABEL_71:
  *v36 = a2;
  v36[1] = 0;
  ++*(_DWORD *)(v27 + 12);
LABEL_72:
  *(_QWORD *)v113 = v36;
  v116 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)(i + 1), (__m128i)(unsigned __int64)(i + 1));
  v53 = (__m128i *)sub_186B270(0x28u);
  *v53 = _mm_load_si128(&v116);
  v54 = (_QWORD *)sub_186B270(0xC0u);
  LODWORD(v36) = v113[0];
  v53[1].m128i_i64[1] = 8;
  *v54 = 0;
  v54[3] = 0;
  v54[6] = 0;
  v54[9] = 0;
  v54[12] = 0;
  v54[15] = 0;
  v54[18] = 0;
  v54[21] = 0;
  v53[1].m128i_i64[0] = (__int64)v54;
  v53[2].m128i_i32[0] = 0;
  *(_QWORD *)(*(_QWORD *)v113 + 8LL) = v53;
LABEL_73:
  v55 = sub_15DC610(
          *a1,
          a2,
          a3,
          v118[0],
          (int)v36,
          (int)a6,
          v95,
          v97,
          v99,
          v101,
          *a1,
          v106,
          v108,
          (int)v36,
          v116.m128i_i32[0],
          (void *)v116.m128i_i64[1]);
  v116.m128i_i64[0] = v55;
  if ( v55 )
    ++*(_DWORD *)(v55 + 8);
  v56 = *(__int64 **)(*(_QWORD *)v114 + 8LL);
  v120 = nullptr;
  ptr = (__m128i)v116.m128i_u64[0];
  sub_D24260(v56, &ptr, &v120);
  v115 = v120;
  if ( v120[1].m128i_i64[0] )
  {
    v59 = 0x1000000000LL;
  }
  else
  {
    v77 = *(_DWORD *)(a2 + 32);
    ptr.m128i_i64[0] = (__int64)v122;
    ptr.m128i_i64[1] = 0x1000000000LL;
    if ( v77 )
    {
      v78 = v77;
      v79 = 0;
      v77 = 0;
      do
      {
        if ( (*(_DWORD *)(i[2] + 4LL * ((unsigned int)v79 >> 5)) & (1 << v79)) == 0 )
        {
          v80 = *(_QWORD *)(a2 + 8 * v79 + 48);
          if ( v77 >= ptr.m128i_i32[3] )
          {
            v100 = v78;
            v110 = 2 * ptr.m128i_i32[3];
            v102 = v79;
            v107 = *(_QWORD *)(a2 + 8 * v79 + 48);
            LODWORD(v98) = 0;
            v85 = sub_186B270(8LL * (unsigned int)(2 * ptr.m128i_i32[3]));
            v77 = ptr.m128i_u32[2];
            v86 = (int *)ptr.m128i_i64[0];
            v81 = v85;
            v80 = v107;
            v79 = v102;
            v78 = v100;
            if ( ptr.m128i_i32[2] )
            {
              if ( (unsigned int)(ptr.m128i_i32[2] - 1) <= 2 || v85 == ptr.m128i_i64[0] + 8 )
              {
                LODWORD(v107) = v102;
                v89 = 0;
                v90 = 8LL * ptr.m128i_u32[2];
                do
                {
                  *(_QWORD *)(v81 + v89) = *(_QWORD *)&v86[v89 / 4];
                  v89 += 8LL;
                }
                while ( v90 != v89 );
                v79 = v102;
              }
              else
              {
                v87 = 0;
                v88 = 16LL * ((unsigned __int32)ptr.m128i_i32[2] >> 1);
                do
                {
                  *(__m128i *)(v81 + v87) = _mm_loadu_si128((const __m128i *)&v86[v87 / 4]);
                  v87 += 16LL;
                }
                while ( v87 != v88 );
                if ( (v77 & 1) != 0 )
                  *(_QWORD *)(v81 + 8LL * (v77 & 0xFFFFFFFE)) = *(_QWORD *)&v86[2 * (v77 & 0xFFFFFFFE)];
              }
            }
            if ( v86 != v122 && v86 )
            {
              v98 = v81;
              v102 = v79;
              v107 = v80;
              v96 = 0;
              sub_186B220(v86);
              v77 = ptr.m128i_u32[2];
              v81 = v98;
              v78 = v100;
              v79 = v102;
              v80 = v107;
            }
            ptr.m128i_i64[0] = v81;
            ptr.m128i_i32[3] = v110;
          }
          else
          {
            v81 = ptr.m128i_i64[0];
          }
          v82 = v77++;
          *(_QWORD *)(v81 + 8 * v82) = v80;
          ptr.m128i_i32[2] = v77;
        }
        ++v79;
      }
      while ( v79 != v78 );
      LODWORD(v83) = ptr.m128i_i32[0];
    }
    else
    {
      v83 = v122;
    }
    v84 = sub_15E3D10(
            *a1,
            (int)a2 + 16,
            (int)&qword_18D6CD0,
            v77,
            (int)v83,
            *(_QWORD *)(a2 + 40),
            1,
            v94,
            v96,
            v98,
            v100,
            v102,
            v104,
            v107,
            0,
            (int)v115,
            v116.m128i_i32[0],
            v116.m128i_i32[2],
            (int)v117,
            v118[0],
            v119,
            (int)v120,
            ptr.m128i_i32[0],
            ptr.m128i_i32[2],
            v122[0],
            v122[2],
            v122[4],
            v122[6],
            v122[8],
            v123,
            v124,
            v125);
    v59 = v109;
    v115[1].m128i_i64[0] = v84;
    if ( v116.m128i_i64[0] )
      ++*(_DWORD *)(v116.m128i_i64[0] + 8);
    if ( v84 )
      ++*(_DWORD *)(v84 + 8);
    if ( (int *)ptr.m128i_i64[0] != v122 && ptr.m128i_i64[0] )
      sub_186B220((void *)ptr.m128i_i64[0]);
  }
  ptr.m128i_i64[0] = (__int64)v122;
  ptr.m128i_i64[1] = v59;
  if ( a3 )
  {
    v60 = a3;
    v61 = 0;
    a3 = 0;
    v57 = 1;
    do
    {
      while ( 1 )
      {
        v58 = i[2];
        if ( (*(_DWORD *)(v58 + 4LL * ((unsigned int)v61 >> 5)) & (1 << v61)) == 0 )
          break;
        if ( ++v61 == v60 )
          goto LABEL_84;
      }
      if ( a3 >= ptr.m128i_i32[3] )
      {
        LOBYTE(v107) = v60;
        v72 = (unsigned int)(2 * ptr.m128i_i32[3]);
        v109 = v61;
        v62 = sub_186B270(8 * v72);
        a3 = ptr.m128i_u32[2];
        v73 = (int *)ptr.m128i_i64[0];
        v57 = 1;
        v61 = v109;
        if ( ptr.m128i_i32[2] )
        {
          if ( (unsigned int)(ptr.m128i_i32[2] - 1) <= 2 || v62 == ptr.m128i_i64[0] + 8 )
          {
            v91 = v116.m128i_i64[0];
            v92 = 0;
            v58 = 8LL * ptr.m128i_u32[2];
            do
            {
              *(_QWORD *)(v62 + v92) = *(_QWORD *)&v73[v92 / 4];
              v92 += 8LL;
            }
            while ( v92 != v58 );
            v116.m128i_i64[0] = v91;
          }
          else
          {
            v74 = v116.m128i_i64[0];
            v75 = 0;
            v58 = 16LL * ((unsigned __int32)ptr.m128i_i32[2] >> 1);
            do
            {
              *(__m128i *)(v62 + v75) = _mm_loadu_si128((const __m128i *)&v73[v75 / 4]);
              v75 += 16LL;
            }
            while ( v58 != v75 );
            v116.m128i_i64[0] = v74;
            if ( (a3 & 1) != 0 )
            {
              v76 = a3 & 0xFFFFFFFE;
              v58 = *(_QWORD *)&v73[2 * v76];
              *(_QWORD *)(v62 + 8 * v76) = v58;
            }
          }
        }
        if ( v73 && v73 != v122 )
        {
          v102 = v62;
          LOBYTE(v107) = v60;
          sub_186B220(v73);
          a3 = ptr.m128i_u32[2];
          v62 = v102;
          v57 = 1;
          v61 = v109;
        }
        ptr.m128i_i64[0] = v62;
        ptr.m128i_i32[3] = v72;
      }
      else
      {
        v62 = ptr.m128i_i64[0];
      }
      v63 = *(_QWORD *)(*(_QWORD *)v118 + 8 * v61);
      v64 = a3;
      ++v61;
      ++a3;
      *(_QWORD *)(v62 + 8 * v64) = v63;
      ptr.m128i_i32[2] = a3;
    }
    while ( v61 != v60 );
LABEL_84:
    LODWORD(v65) = ptr.m128i_i32[0];
  }
  else
  {
    v65 = v122;
  }
  v66 = sub_15DC610(
          *a1,
          v115[1].m128i_i64[0],
          a3,
          (int)v65,
          v57,
          v58,
          v96,
          v98,
          v100,
          v102,
          v104,
          v107,
          v109,
          (int)v115,
          v116.m128i_i32[0],
          (void *)v116.m128i_i64[1]);
  v67 = v66;
  if ( v66 )
    ++*(_DWORD *)(v66 + 8);
  v68 = *v117;
  if ( *v117 )
  {
    v69 = v117[1];
    v12 = (*(_DWORD *)(v68 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v69, v68);
  }
  v70 = (int *)ptr.m128i_i64[0];
  *v117 = v67;
  if ( v70 && v70 != v122 )
    sub_186B220(v70);
  v71 = v116.m128i_i64[0];
  if ( v116.m128i_i64[0] )
  {
    v118[0] = *(_DWORD *)(v116.m128i_i64[0] + 8);
    v12 = v118[0] == 1;
    *(_DWORD *)(v116.m128i_i64[0] + 8) = v118[0] - 1;
    if ( v12 )
      sub_15D7BC0(v105, v71);
  }
  return 4;
}

