__int64 __fastcall sub_87F930(__int64 a1, int a2, int **a3, const __m128i **a4)
{
  char **v4; // rbp
  char **exception; // rbp
  __int64 v6; // r12
  __int64 v8; // rdi
  __int64 result; // rax
  char v10; // bl
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // r15
  void *v14; // rbx
  __int64 v15; // rsi
  unsigned __int64 v16; // rax
  __int64 i; // r13
  unsigned __int64 v18; // rdx
  __m128i v19; // xmm1
  bool v20; // al
  __m128i v21; // xmm0
  void *v22; // r15
  __int64 v23; // rax
  __int64 v24; // r13
  __int64 v25; // r15
  __int64 v26; // rax
  bool v27; // al
  void *v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // r13
  unsigned int *v31; // rdx
  __int64 v32; // rax
  _QWORD *v33; // r13
  void *v34; // r15
  unsigned int v35; // eax
  char v36; // al
  void *v37; // r15
  void *v38; // r15
  __m128i si128; // xmm0
  __int64 v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // rax
  char v43; // cl
  unsigned int v44; // r15d
  size_t v45; // rdi
  __int64 v46; // rax
  int *v47; // r15
  _DWORD *v48; // r10
  __int64 v49; // r8
  __int64 v50; // rax
  int *v51; // rdi
  int *v52; // rax
  __int64 v53; // rcx
  int v54; // esi
  char v55; // r9
  __int64 v56; // rsi
  char v57; // r9
  __int64 v58; // rsi
  __int64 v59; // rax
  int *v60; // r13
  int *v61; // rbx
  __int64 v62; // r15
  void *v63; // r12
  int *v64; // rsi
  __int32 v65; // eax
  void *v66; // rbx
  void *v67; // rbx
  __int64 v68; // rax
  int *v69; // rbp
  __int64 v70; // rdx
  int *v71; // r12
  int v72; // edx
  const __m128i *v73; // r13
  const __m128i *v74; // rbx
  __m128d v75; // xmm0
  _QWORD *v76; // r12
  __m128d v77; // xmm0
  unsigned int v78; // edx
  _QWORD *v79; // rax
  __m128d v80; // xmm0
  unsigned int v81; // eax
  __int64 v82; // rdx
  int v83; // eax
  __int64 v84; // rdx
  unsigned int v85; // ebp
  size_t v86; // rdi
  __int64 v87; // rax
  _BYTE *v88; // rdi
  _DWORD *v89; // r15
  __int64 v90; // rax
  _BYTE *v91; // rsi
  _BYTE *v92; // rax
  _QWORD *v93; // rdx
  char v94; // cl
  _QWORD *v95; // rax
  __int64 v96; // rdi
  __int64 (*v97)(void); // rdx
  __int64 v98; // rax
  int v99; // edx
  __m128i v100; // xmm0
  int *v101; // r13
  unsigned int v102; // r12d
  __int64 j; // rsi
  int v104; // edx
  __int64 v105; // rcx
  void *v106[2]; // [rsp+0h] [rbp-168h] BYREF
  int v107; // [rsp+1Ch] [rbp-14Ch]
  int **v108; // [rsp+20h] [rbp-148h]
  const __m128i **v109; // [rsp+28h] [rbp-140h]
  __m128i v110; // [rsp+30h] [rbp-138h] BYREF
  unsigned int *v111; // [rsp+40h] [rbp-128h]
  unsigned int *v112; // [rsp+48h] [rbp-120h]
  __int64 v113; // [rsp+50h] [rbp-118h]
  _DWORD *v114; // [rsp+58h] [rbp-110h]
  bool v115; // [rsp+70h] [rbp-F8h]
  int v116; // [rsp+78h] [rbp-F0h] BYREF
  char v117; // [rsp+7Ch] [rbp-ECh]
  __int64 v118; // [rsp+80h] [rbp-E8h]
  int v119; // [rsp+88h] [rbp-E0h] BYREF
  char v120; // [rsp+8Ch] [rbp-DCh]
  __int64 v121; // [rsp+90h] [rbp-D8h]
  __m128i v122; // [rsp+98h] [rbp-D0h] BYREF
  __int64 v123; // [rsp+A8h] [rbp-C0h]
  bool v124; // [rsp+B0h] [rbp-B8h]
  int v125; // [rsp+B8h] [rbp-B0h] BYREF
  char v126; // [rsp+BCh] [rbp-ACh]
  __int64 v127; // [rsp+C0h] [rbp-A8h]
  int v128; // [rsp+C8h] [rbp-A0h] BYREF
  char v129; // [rsp+CCh] [rbp-9Ch]
  __int64 v130; // [rsp+D0h] [rbp-98h]
  __int64 v131; // [rsp+D8h] [rbp-90h]
  __int64 v132; // [rsp+E0h] [rbp-88h]
  __int64 v133; // [rsp+E8h] [rbp-80h]
  __int64 v134; // [rsp+F0h] [rbp-78h] BYREF
  _QWORD v135[2]; // [rsp+F8h] [rbp-70h] BYREF
  _QWORD v136[3]; // [rsp+108h] [rbp-60h] BYREF
  __m128i v137; // [rsp+120h] [rbp-48h]

  v8 = *(_QWORD *)(a1 + 80);
  v107 = a2;
  result = *(_QWORD *)(v8 + 24);
  v108 = a3;
  v109 = a4;
  if ( !result )
    return result;
  v10 = *(_BYTE *)(result + 352);
  result = 0;
  if ( !v10 )
    return result;
  sub_7A4170(v8);
  v11 = *(_QWORD *)(a1 + 768);
  if ( v11 )
  {
    v12 = *(unsigned int *)(v11 - 4);
    if ( (_DWORD)v12 )
    {
      LOBYTE(v106[0]) = v10;
      v13 = v11 + 32 * v12;
      do
      {
        v14 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v11);
        v15 = v11 + 16;
        v11 += 32;
        sub_182CBA0(v14, v15);
      }
      while ( v11 != v13 );
      v10 = (char)v106[0];
      v11 = *(_QWORD *)(a1 + 768);
    }
    *(_DWORD *)(v11 - 4) = 0;
  }
  v16 = *(_QWORD *)(a1 + 728);
  for ( i = v16 + 12LL * *(unsigned int *)(a1 + 736); i != v16; v16 += 12LL )
  {
    if ( *(_DWORD *)(v16 + 4) == 2 )
      break;
  }
  v18 = *(_QWORD *)(a1 + 720);
  v19 = (__m128i)v16;
  v20 = 0;
  v21 = _mm_unpacklo_epi64((__m128i)v18, v19);
  if ( v18 )
    v20 = *(_DWORD *)(v18 - 4) != 0;
  v115 = v20;
  v117 &= 0xFCu;
  v22 = qword_1C7F2C0;
  v120 &= 0xFCu;
  v116 = 0;
  v118 = 0;
  v119 = 1;
  v121 = 0;
  if ( (*(_BYTE *)(&qword_1C7F280 + 1) & 1) != 0 )
  {
    v110 = v21;
    v106[0] = &v116;
    sub_182C690(qword_1C7F2C0, &v116, &qword_1C7F280);
    v21 = _mm_load_si128(&v110);
  }
  else
  {
    v116 = qword_1C7F280;
    v106[0] = &v116;
  }
  if ( (qword_1C7F290 & 0x100000000LL) != 0 )
  {
    v110 = v21;
    sub_182C690(v22, &v119, &qword_1C7F290);
    v21 = _mm_load_si128(&v110);
  }
  else
  {
    v120 &= ~1u;
    v119 = qword_1C7F290;
  }
  v23 = *(unsigned int *)(a1 + 736);
  v123 = i;
  v24 = *(_QWORD *)(a1 + 720);
  v122 = v21;
  v25 = *(_QWORD *)(a1 + 728) + 12 * v23;
  if ( v24 )
  {
    v26 = *(unsigned int *)(v24 - 4);
    v24 += 40 * v26;
    v27 = (_DWORD)v26 != 0;
  }
  else
  {
    v27 = 0;
  }
  v124 = v27;
  v28 = qword_1C7F2C0;
  v126 &= 0xFCu;
  v129 &= 0xFCu;
  v125 = 0;
  v127 = 0;
  v128 = 1;
  v130 = 0;
  if ( (*(_BYTE *)(&qword_1C7F280 + 1) & 1) != 0 )
  {
    v110.m128i_i64[0] = (__int64)qword_1C7F2C0;
    sub_182C690(qword_1C7F2C0, &v125, &qword_1C7F280);
    v28 = (void *)v110.m128i_i64[0];
  }
  else
  {
    v125 = qword_1C7F280;
  }
  if ( (qword_1C7F290 & 0x100000000LL) != 0 )
  {
    sub_182C690(v28, &v128, &qword_1C7F290);
  }
  else
  {
    v129 &= ~1u;
    v128 = qword_1C7F290;
  }
  v131 = v24;
  v132 = v25;
  v133 = v25;
  while ( 1 )
  {
    if ( v115 )
    {
      v29 = v122.m128i_i64[0];
      if ( v122.m128i_i64[0] == v131 )
        break;
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 208) + 4LL * *(unsigned int *)v122.m128i_i64[0]) )
        goto LABEL_38;
      v30 = *(_QWORD *)(a1 + 768);
      v31 = (unsigned int *)(v122.m128i_i64[0] + 8);
      if ( v30 )
        goto LABEL_30;
      goto LABEL_48;
    }
    v40 = v122.m128i_i64[1];
    if ( v122.m128i_i64[1] == v132 )
      break;
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 208) + 4LL * *(unsigned int *)(v122.m128i_i64[1] + 8)) )
      goto LABEL_51;
    v30 = *(_QWORD *)(a1 + 768);
    v31 = (unsigned int *)v106[0];
    if ( v30 )
    {
LABEL_30:
      v32 = *(unsigned int *)(v30 - 4);
      if ( (_DWORD)v32 == *(_DWORD *)(v30 - 8) )
      {
        v44 = (unsigned int)(3 * v32 + 1) >> 1;
        v110.m128i_i32[0] = v44;
        v45 = 32 * v44 + 8;
        if ( 32 * (int)v32 + 8 >= (unsigned int)v45 || (unsigned int)v32 >= v44 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v134, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v134);
          sub_233E40((__int64)&v134);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v111 = v31;
        v46 = sub_186B270(v45);
        v47 = *(int **)(a1 + 768);
        v31 = v111;
        v48 = (_DWORD *)v46;
        v49 = v46 + 8;
        if ( v47 )
        {
          v50 = (unsigned int)*(v47 - 1);
          v48[1] = v50;
          v50 *= 32;
          v51 = (int *)((char *)v47 + v50);
          if ( v47 != (int *)((char *)v47 + v50) )
          {
            v52 = v47;
            v53 = v49;
            do
            {
              v54 = *v52;
              v55 = *((_BYTE *)v52 + 4);
              v52 += 8;
              v53 += 32;
              *(_DWORD *)(v53 - 32) = v54;
              *(_BYTE *)(v53 - 28) = v55 & 3 | *(_BYTE *)(v53 - 28) & 0xFC;
              v56 = *((_QWORD *)v52 - 3);
              *((_QWORD *)v52 - 3) = 0;
              *(_QWORD *)(v53 - 24) = v56;
              v57 = *((_BYTE *)v52 - 12);
              *(_DWORD *)(v53 - 16) = *(v52 - 4);
              *(_BYTE *)(v53 - 12) = v57 & 3 | *(_BYTE *)(v53 - 12) & 0xFC;
              v58 = *((_QWORD *)v52 - 1);
              *((_QWORD *)v52 - 1) = 0;
              *(_QWORD *)(v53 - 8) = v58;
            }
            while ( v52 != v51 );
          }
          v59 = (unsigned int)*(v47 - 1);
          if ( (_DWORD)v59 )
          {
            v111 = (unsigned int *)v6;
            v112 = v31;
            v60 = &v47[8 * v59];
            v114 = v48;
            LOBYTE(v113) = v10;
            v61 = v47;
            v62 = v49;
            do
            {
              v63 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v61);
              v64 = v61 + 4;
              v61 += 8;
              sub_182CBA0(v63, v64);
            }
            while ( v61 != v60 );
            v49 = v62;
            v6 = (__int64)v111;
            v31 = v112;
            v10 = v113;
            v48 = v114;
            v47 = *(int **)(a1 + 768);
          }
          v113 = v49;
          v112 = v48;
          v111 = v31;
          sub_186B220(v47 - 2);
          v48 = v112;
          v49 = v113;
          v31 = v111;
          v33 = (_QWORD *)(v113 + 32LL * v112[1]);
        }
        else
        {
          *(_DWORD *)(v46 + 4) = 0;
          v33 = (_QWORD *)(v46 + 8);
        }
        v65 = v110.m128i_i32[0];
        *(_QWORD *)(a1 + 768) = v49;
        *v48 = v65;
      }
      else
      {
        v33 = (_QWORD *)(32 * v32 + v30);
      }
      goto LABEL_32;
    }
LABEL_48:
    v110.m128i_i64[0] = (__int64)v31;
    v41 = (_QWORD *)sub_186B270(0x48u);
    v33 = v41 + 1;
    *v41 = 2;
    v31 = (unsigned int *)v110.m128i_i64[0];
    *(_QWORD *)(a1 + 768) = v41 + 1;
LABEL_32:
    *v33 = 0;
    v34 = qword_1C7F2C0;
    v33[1] = 0;
    v33[2] = 1;
    v33[3] = 0;
    if ( (v31[1] & 1) != 0 )
    {
      v110.m128i_i64[0] = (__int64)v31;
      sub_182C690(v34, v33, v31);
      v31 = (unsigned int *)v110.m128i_i64[0];
    }
    else
    {
      *(_DWORD *)v33 = *v31;
    }
    if ( (v31[5] & 1) != 0 )
    {
      sub_182C690(v34, v33 + 2, v31 + 4);
    }
    else
    {
      v35 = v31[4];
      *((_BYTE *)v33 + 20) &= ~1u;
      *((_DWORD *)v33 + 4) = v35;
    }
    ++*(_DWORD *)(*(_QWORD *)(a1 + 768) - 4LL);
    if ( v115 )
    {
      v29 = v122.m128i_i64[0];
LABEL_38:
      v36 = v10;
      v122.m128i_i64[0] = v29 + 40;
      goto LABEL_39;
    }
    v40 = v122.m128i_i64[1];
LABEL_51:
    v42 = v40 + 12;
    v122.m128i_i64[1] = v42;
    if ( v123 != v42 )
    {
      v43 = 0;
      while ( *(_DWORD *)(v42 + 4) != 2 )
      {
        v42 += 12;
        if ( v123 == v42 )
        {
          v122.m128i_i64[1] = v123;
          v36 = 0;
          goto LABEL_39;
        }
        v43 = v10;
        v6 = v42;
      }
      if ( v43 )
        v122.m128i_i64[1] = v6;
    }
    v36 = 0;
LABEL_39:
    LOBYTE(v134) = v36;
    v37 = qword_1C7F2C0;
    v135[0] = 0;
    v135[1] = 0;
    v136[0] = 1;
    v136[1] = 0;
    if ( (v117 & 1) != 0 )
      sub_182C690(qword_1C7F2C0, v135, v106[0]);
    else
      LODWORD(v135[0]) = v116;
    if ( (v120 & 1) != 0 )
    {
      sub_182C690(v37, v136, &v119);
    }
    else
    {
      BYTE4(v136[0]) &= ~1u;
      LODWORD(v136[0]) = v119;
    }
    v38 = qword_1C7F2C0;
    si128 = _mm_load_si128((const __m128i *)&v122.m128i_u64[1]);
    v136[2] = v122.m128i_i64[0];
    v137 = si128;
    sub_182CBA0(qword_1C7F2C0, v135);
    sub_182CBA0(v38, v136);
  }
  v66 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v125);
  sub_182CBA0(v66, &v128);
  v67 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v106[0]);
  sub_182CBA0(v67, &v119);
  sub_87F730((_DWORD *)(a1 + 960), *(_QWORD *)(a1 + 80), v107);
  v68 = *(_QWORD *)(a1 + 768);
  v69 = *v108;
  if ( v68 )
  {
    if ( v69 )
    {
      v70 = (unsigned int)*(v69 - 1);
      if ( (_DWORD)v70 == *(_DWORD *)(v68 - 4) )
      {
        v101 = &v69[v70];
        if ( v101 != v69 )
        {
          v102 = 0;
          for ( j = *(_QWORD *)(a1 + 768); ; j = *(_QWORD *)(a1 + 768) )
          {
            v104 = *v69++;
            v105 = 32LL * v102++;
            sub_83BB30((int **)(a1 + 960), (int *)(v105 + j), v104);
            if ( v101 == v69 )
              break;
          }
        }
      }
      else
      {
LABEL_79:
        v71 = &v69[v70];
        while ( v71 != v69 )
        {
          v72 = *v69++;
          sub_83BB30((int **)(a1 + 960), &qword_1C7F280, v72);
        }
      }
    }
  }
  else if ( v69 )
  {
    v70 = (unsigned int)*(v69 - 1);
    if ( (_DWORD)v70 )
      goto LABEL_79;
  }
  v73 = *v109;
  if ( *v109 )
  {
    v74 = &v73[v73[-1].m128i_u32[3]];
    if ( v74 != v73 )
    {
      v75 = (__m128d)_mm_loadu_si128(v73);
      v76 = *(_QWORD **)(a1 + 968);
      v77 = _mm_shuffle_pd(v75, v75, 1);
      if ( !v76 )
      {
        *(__m128d *)v106 = v77;
        v95 = (_QWORD *)sub_186B270(0x38u);
        v77 = (__m128d)_mm_load_si128((const __m128i *)v106);
        v76 = v95 + 1;
        *v95 = 2;
        v83 = 1;
        *(_QWORD *)(a1 + 968) = v76;
        v84 = (__int64)v76;
        goto LABEL_91;
      }
      v78 = *(_DWORD *)(a1 + 992);
      while ( 1 )
      {
        v81 = *((_DWORD *)v76 - 1);
        if ( v78 < v81 )
        {
          v79 = &v76[3 * v78];
          *(_BYTE *)v79 = 1;
          *(__m128d *)(v79 + 1) = v77;
        }
        else
        {
          if ( v81 == *((_DWORD *)v76 - 2) )
          {
            v85 = (3 * v81 + 1) >> 1;
            v86 = 8 * (v85 + ((3 * v81 + 1) & 0xFFFFFFFE)) + 8;
            if ( 24 * v81 + 8 >= (unsigned int)v86 || v81 >= v85 )
            {
              v4 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(&v134, "Overflow encountered when expanding vector");
              *v4 = (char *)off_1C63128;
              sub_2333C0(v4 + 1, &v134);
              sub_233E40((__int64)&v134);
              __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            *(__m128d *)v106 = v77;
            v87 = sub_186B270(v86);
            v88 = *(_BYTE **)(a1 + 968);
            v77 = (__m128d)_mm_load_si128((const __m128i *)v106);
            v89 = (_DWORD *)v87;
            v76 = (_QWORD *)(v87 + 8);
            if ( v88 )
            {
              v90 = *((unsigned int *)v88 - 1);
              v89[1] = v90;
              v91 = &v88[24 * v90];
              if ( v91 != v88 )
              {
                v92 = v88;
                v93 = v76;
                do
                {
                  v94 = *v92;
                  v92 += 24;
                  v93 += 3;
                  *((_BYTE *)v93 - 24) = v94;
                  *(v93 - 2) = *((_QWORD *)v92 - 2);
                  *(v93 - 1) = *((_QWORD *)v92 - 1);
                }
                while ( v91 != v92 );
              }
              *(__m128d *)v106 = v77;
              sub_186B220(v88 - 8);
              v77 = (__m128d)_mm_load_si128((const __m128i *)v106);
              v84 = (__int64)&v76[3 * (unsigned int)v89[1]];
              v83 = v89[1] + 1;
            }
            else
            {
              *(_DWORD *)(v87 + 4) = 0;
              v84 = v87 + 8;
              v83 = 1;
            }
            *(_QWORD *)(a1 + 968) = v76;
            *v89 = v85;
          }
          else
          {
            v82 = v81;
            v83 = v81 + 1;
            v84 = (__int64)&v76[3 * v82];
          }
LABEL_91:
          *(_BYTE *)v84 = 1;
          *(__m128d *)(v84 + 8) = v77;
          *((_DWORD *)v76 - 1) = v83;
          v78 = *(_DWORD *)(a1 + 992);
        }
        ++v78;
        ++v73;
        *(_DWORD *)(a1 + 992) = v78;
        if ( v74 == v73 )
          break;
        v80 = (__m128d)_mm_loadu_si128(v73);
        v77 = _mm_shuffle_pd(v80, v80, 1);
      }
    }
  }
  v96 = *(_QWORD *)(a1 + 80);
  v97 = *(__int64 (**)(void))(*(_QWORD *)v96 + 432LL);
  v98 = v96 + 2144;
  if ( (char *)v97 != (char *)sub_79EFF0 )
    v98 = v97();
  result = sub_180C100(v98, 32);
  v99 = *(_DWORD *)(a1 + 976);
  v100 = _mm_loadu_si128((const __m128i *)(a1 + 980));
  *(_QWORD *)result = off_1C55958;
  *(_DWORD *)(result + 8) = v99;
  *(__m128i *)(result + 12) = v100;
  return result;
}

