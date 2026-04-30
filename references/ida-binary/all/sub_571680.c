__int64 __fastcall sub_571680(
        unsigned __int64 *a1,
        unsigned __int64 *a2,
        __m128i *a3,
        const __m128i *a4,
        __int64 a5,
        __int64 a6,
        char **a7)
{
  __int64 v10; // rax
  __int32 v11; // edx
  _OWORD *v12; // rax
  __m128i v13; // xmm3
  __int64 v14; // rax
  __m128i v15; // xmm5
  __int32 v16; // edx
  _OWORD *v17; // rax
  __m128i v18; // xmm6
  unsigned int v19; // edx
  int v20; // r13d
  unsigned __int64 v21; // rax
  unsigned int v22; // edx
  unsigned int v23; // r14d
  unsigned int v24; // ebp
  unsigned int v25; // r14d
  __int16 v26; // si
  __int16 v27; // r8
  int v28; // ebx
  int v29; // r12d
  __int16 v30; // r10
  __int16 v31; // r11
  char v32; // r8
  unsigned __int64 v33; // rdi
  int v34; // r13d
  int v35; // r9d
  char v36; // r8
  bool v37; // cl
  int v38; // edx
  unsigned int v39; // edx
  __int64 v40; // rax
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // rax
  __int64 v43; // rbx
  int v44; // edx
  __int64 v45; // r13
  __int64 v46; // rdx
  unsigned __int32 v47; // r12d
  __int64 v48; // rax
  unsigned __int64 *v49; // rcx
  int v50; // eax
  unsigned __int64 v51; // rcx
  unsigned int v52; // eax
  int v53; // edx
  int v54; // ebx
  unsigned __int64 v55; // rax
  int v56; // edx
  int v57; // edx
  unsigned int v58; // r12d
  unsigned int v59; // ebp
  __int64 v60; // r12
  __int64 v61; // rbx
  unsigned int v62; // edx
  unsigned int *v63; // rax
  int v64; // edx
  unsigned __int64 v65; // rax
  unsigned int v66; // edx
  __int64 v67; // r10
  unsigned int v68; // r11d
  __m128i v69; // xmm1
  char *v70; // rdx
  __m128i v71; // xmm2
  __m128i v72; // xmm3
  __m128i *v74; // rdi
  int v75; // edx
  int v76; // edx
  int v77; // ebx
  int v78; // edx
  __int64 v79; // [rsp+10h] [rbp-1E8h]
  unsigned int v80; // [rsp+10h] [rbp-1E8h]
  __int64 v81; // [rsp+18h] [rbp-1E0h]
  int v82; // [rsp+18h] [rbp-1E0h]
  unsigned __int64 v83; // [rsp+20h] [rbp-1D8h]
  int v84; // [rsp+2Ch] [rbp-1CCh]
  char v85; // [rsp+33h] [rbp-1C5h]
  _BYTE v86[12]; // [rsp+34h] [rbp-1C4h]
  unsigned int v87; // [rsp+40h] [rbp-1B8h]
  unsigned int v88; // [rsp+44h] [rbp-1B4h]
  __m128i *v93; // [rsp+98h] [rbp-160h]
  __int16 v94; // [rsp+A4h] [rbp-154h] BYREF
  __int16 v95; // [rsp+A6h] [rbp-152h] BYREF
  int v96; // [rsp+A8h] [rbp-150h] BYREF
  int v97; // [rsp+ACh] [rbp-14Ch] BYREF
  unsigned __int64 v98; // [rsp+B0h] [rbp-148h]
  unsigned int v99; // [rsp+B8h] [rbp-140h]
  unsigned __int64 v100; // [rsp+BCh] [rbp-13Ch]
  unsigned int v101; // [rsp+C4h] [rbp-134h]
  unsigned __int64 v102; // [rsp+C8h] [rbp-130h] BYREF
  int v103; // [rsp+D0h] [rbp-128h]
  unsigned __int64 v104; // [rsp+D8h] [rbp-120h] BYREF
  unsigned int v105; // [rsp+E0h] [rbp-118h]
  unsigned __int64 v106; // [rsp+E8h] [rbp-110h]
  int v107; // [rsp+F0h] [rbp-108h]
  unsigned __int64 v108; // [rsp+F4h] [rbp-104h]
  int v109; // [rsp+FCh] [rbp-FCh]
  unsigned __int64 v110; // [rsp+100h] [rbp-F8h]
  int v111; // [rsp+108h] [rbp-F0h]
  unsigned __int64 v112; // [rsp+10Ch] [rbp-ECh]
  int v113; // [rsp+114h] [rbp-E4h]
  unsigned __int64 v114; // [rsp+118h] [rbp-E0h]
  int v115; // [rsp+120h] [rbp-D8h]
  unsigned __int64 v116; // [rsp+124h] [rbp-D4h]
  int v117; // [rsp+12Ch] [rbp-CCh]
  char *v118; // [rsp+130h] [rbp-C8h] BYREF
  __int64 v119; // [rsp+138h] [rbp-C0h]
  __m128i v120; // [rsp+140h] [rbp-B8h] BYREF
  __m128i v121; // [rsp+150h] [rbp-A8h] BYREF
  __int64 v122; // [rsp+160h] [rbp-98h]
  unsigned int v123; // [rsp+168h] [rbp-90h]
  char v124; // [rsp+16Ch] [rbp-8Ch]
  __int64 v125; // [rsp+170h] [rbp-88h]
  __m128i v126; // [rsp+180h] [rbp-78h] BYREF
  __m128i v127; // [rsp+190h] [rbp-68h] BYREF
  __int64 v128; // [rsp+1A0h] [rbp-58h]
  unsigned int v129; // [rsp+1A8h] [rbp-50h]
  char v130; // [rsp+1ACh] [rbp-4Ch]
  __int64 v131; // [rsp+1B0h] [rbp-48h]

  a3[1].m128i_i32[0] = 0;
  v118 = nullptr;
  v119 = 0;
  sub_55ECB0((__int64)&a3->m128i_i64[1], 32);
  v10 = a3[1].m128i_u32[0];
  v122 = a5;
  v11 = v10 + 1;
  v12 = (_OWORD *)(a3->m128i_i64[1] + 32 * v10);
  v120 = _mm_loadu_si128(a3);
  a3[1].m128i_i32[0] = v11;
  v13 = _mm_loadu_si128(a3 + 1);
  *v12 = 0;
  v12[1] = 0;
  *(_QWORD *)v12 = a1;
  a4[1].m128i_i32[0] = 0;
  v121 = v13;
  v123 = 1;
  v124 = 0;
  v125 = 0;
  sub_55ECB0((__int64)&a4->m128i_i64[1], 32);
  v14 = a4[1].m128i_u32[0];
  v15 = _mm_loadu_si128(a4);
  v128 = a5;
  v16 = v14 + 1;
  v17 = (_OWORD *)(a4->m128i_i64[1] + 32 * v14);
  v129 = 1;
  a4[1].m128i_i32[0] = v16;
  v18 = _mm_loadu_si128(a4 + 1);
  *v17 = 0;
  *(_QWORD *)v17 = a2;
  v17[1] = 0;
  v126 = v15;
  v127 = v18;
  v130 = 0;
  v131 = 0;
  v98 = sub_55CD40((__int64)&v120);
  v20 = v19;
  *(_DWORD *)v86 = v98;
  *(_QWORD *)&v86[4] = HIDWORD(v98);
  v99 = v19;
  v87 = v19;
  v21 = sub_55CD40((__int64)&v126);
  v100 = v21;
  v23 = v22;
  v24 = v21;
  v101 = v22;
  v83 = HIDWORD(v21);
  v84 = v22;
  if ( (unsigned int)v98 < (unsigned int)v21 )
  {
    sub_560070(&v118, v98, v87, v21, v22);
    v87 = v23;
    *(_DWORD *)v86 = v24;
    *(_DWORD *)&v86[4] = v83;
  }
  else if ( (unsigned int)v21 < (unsigned int)v98 )
  {
    sub_560070(&v118, v21, v22, v98, v20);
    v84 = v20;
    v24 = v98;
    LODWORD(v83) = HIDWORD(v98);
  }
  v93 = (__m128i *)a4;
  v25 = 0;
  while ( 1 )
  {
    v94 = 0;
    v95 = 0;
    v102 = 0;
    v104 = 0;
    v96 = 0;
    v97 = 0;
    sub_55D6A0((__int64)&v120, &v102, &v94, &v96);
    sub_55D6A0((__int64)&v126, &v104, &v95, &v97);
    if ( (v102 & 1) != 0 )
      v26 = BYTE1(v102);
    else
      v26 = *(_WORD *)(v102 + 40);
    if ( (v104 & 1) != 0 )
      v27 = BYTE1(v104);
    else
      v27 = *(_WORD *)(v104 + 40);
    if ( !v102 )
    {
      if ( v104 )
        goto LABEL_54;
LABEL_40:
      v106 = sub_55CE10((__int64)&v120);
      v107 = v38;
      v39 = *(_DWORD *)(a6 + 8);
      if ( v25 >= v39 )
        goto LABEL_45;
      v40 = *(_QWORD *)a6 + 24LL * v25;
      v41 = *(_QWORD *)a6 + 24 * (v25 + (unsigned __int64)(v39 - 1 - v25)) + 24;
      while ( *(_DWORD *)v86 >= *(_DWORD *)(v40 + 20) )
      {
        v40 += 24;
        if ( v40 == v41 )
          goto LABEL_45;
      }
      if ( *(_DWORD *)(v40 + 16) >= (unsigned int)v106 )
      {
LABEL_45:
        v42 = sub_55CE10((__int64)&v120);
        LODWORD(v43) = v121.m128i_i32[0];
        v85 = 0;
        v100 = v42;
        v24 = v42;
        v101 = v44;
        v83 = HIDWORD(v42);
        v84 = v44;
        if ( v121.m128i_i32[0] )
          goto LABEL_58;
        goto LABEL_46;
      }
      goto LABEL_119;
    }
    if ( !v104 || v94 != v95 || v27 != v26 )
    {
LABEL_54:
      v112 = sub_55CE10((__int64)&v126);
      v54 = v53;
      v113 = v53;
      v55 = sub_55CE10((__int64)&v120);
      v24 = v112;
      v114 = v55;
      v115 = v56;
      if ( (unsigned int)v55 >= (unsigned int)v112 )
      {
        v84 = v54;
        LODWORD(v83) = HIDWORD(v112);
      }
      else
      {
        v84 = v56;
        v24 = v55;
        LODWORD(v83) = HIDWORD(v114);
      }
      v85 = 1;
      goto LABEL_57;
    }
    v28 = HIBYTE(v102);
    if ( (v102 & 1) == 0 )
      v28 = *(_DWORD *)(v102 + 16);
    v29 = HIBYTE(v104);
    if ( (v104 & 1) == 0 )
      v29 = *(_DWORD *)(v104 + 16);
    v30 = WORD1(v102);
    if ( (v102 & 1) == 0 )
      v30 = *(_WORD *)(v102 + 42);
    v31 = WORD1(v104);
    if ( (v104 & 1) == 0 )
      v31 = *(_WORD *)(v104 + 42);
    v32 = v104 & 1;
    if ( (v102 & 1) != 0 )
    {
      if ( v32 )
      {
        v34 = 0;
        v33 = (v102 >> 5) & 1;
        if ( ((v102 >> 5) & 1) != 0 )
        {
          LOBYTE(v33) = 0;
          v34 = 610;
        }
        goto LABEL_25;
      }
      v36 = (*(_BYTE *)(v104 + 44) & 0x40) != 0;
      v33 = (v102 >> 5) & 1;
      if ( ((v102 >> 5) & 1) != 0 )
      {
        LOBYTE(v33) = 0;
        v34 = 610;
      }
      else
      {
        v34 = 0;
      }
    }
    else
    {
      LOBYTE(v33) = (*(_BYTE *)(v102 + 44) & 0x40) != 0;
      if ( v32 )
      {
        v34 = 610;
        if ( (*(_BYTE *)(v102 + 45) & 2) == 0 )
          v34 = *(_DWORD *)(v102 + 32);
LABEL_25:
        v35 = 0;
        v36 = (v104 & 0x20) != 0;
        if ( (v104 & 0x20) != 0 )
        {
          v36 = 0;
          v35 = 610;
        }
LABEL_27:
        if ( v96 != v97 )
          goto LABEL_119;
        goto LABEL_28;
      }
      v34 = 610;
      v36 = (*(_BYTE *)(v104 + 44) & 0x40) != 0;
      if ( (*(_BYTE *)(v102 + 45) & 2) == 0 )
        v34 = *(_DWORD *)(v102 + 32);
    }
    v35 = 610;
    if ( (*(_BYTE *)(v104 + 45) & 2) != 0 )
      goto LABEL_27;
    v35 = *(_DWORD *)(v104 + 32);
    if ( v96 != v97 )
      goto LABEL_119;
LABEL_28:
    if ( v26 != -1
      && v28 == v29
      && v30 != -1
      && v31 != -1
      && (v30 == 0) == (v31 == 0)
      && v35 == v34
      && v36 == (_BYTE)v33 )
    {
      v37 = (v102 & 0x10) != 0;
      if ( (v102 & 1) == 0 )
        v37 = (*(_BYTE *)(v102 + 44) & 0x20) != 0;
      if ( !v37 && (!(_BYTE)v33 || sub_5715E0(v125, v131)) )
        goto LABEL_40;
    }
LABEL_119:
    v85 = sub_55E970((__int64)&v120, *(unsigned int *)v86);
    if ( v85 )
    {
      v74 = &v120;
      if ( sub_55E970((__int64)&v126, *(unsigned int *)v86) )
      {
        v85 = 0;
        goto LABEL_57;
      }
      goto LABEL_128;
    }
    v85 = sub_55E970((__int64)&v126, *(unsigned int *)v86);
    if ( v85 )
    {
      v74 = &v126;
LABEL_128:
      v100 = sub_55CE10((__int64)v74);
      v24 = v100;
      v101 = v75;
      v83 = HIDWORD(v100);
      v84 = v75;
      goto LABEL_57;
    }
    v108 = sub_55CE10((__int64)&v126);
    v77 = v76;
    v109 = v76;
    v110 = sub_55CE10((__int64)&v120);
    v24 = v110;
    v111 = v78;
    if ( (unsigned int)v110 < (unsigned int)v108 )
    {
      v84 = v78;
      LODWORD(v83) = HIDWORD(v110);
    }
    else
    {
      v84 = v77;
      v24 = v108;
      LODWORD(v83) = HIDWORD(v108);
    }
LABEL_57:
    LODWORD(v43) = v121.m128i_i32[0];
    if ( v121.m128i_i32[0] )
    {
      while ( 1 )
      {
        while ( 1 )
        {
LABEL_58:
          v116 = sub_55CE10((__int64)&v120);
          v117 = v57;
          if ( v24 < (unsigned int)v116 )
            goto LABEL_47;
          if ( v124 )
            break;
          sub_55ED20((__int64)&v120);
          LODWORD(v43) = v121.m128i_i32[0];
LABEL_61:
          if ( !(_DWORD)v43 )
            goto LABEL_46;
        }
        v124 = 0;
        if ( !sub_55D770((__int64)&v120) )
        {
          sub_55E970((__int64)&v120, 0);
          LODWORD(v43) = v121.m128i_i32[0];
          goto LABEL_61;
        }
        ++v123;
      }
    }
LABEL_46:
    LODWORD(v43) = 0;
LABEL_47:
    LODWORD(v45) = v127.m128i_i32[0];
    v46 = v126.m128i_i64[1];
    v47 = v127.m128i_i32[0] - 1;
    if ( v127.m128i_i32[0] )
    {
      while ( 1 )
      {
        v48 = v46 + 32LL * v47;
        v49 = *(unsigned __int64 **)v48;
        v50 = *(_DWORD *)(v48 + 8);
        v51 = *v49;
        if ( (v51 & 1) != 0 )
        {
          v52 = BYTE6(v51) + v50;
          if ( v130 )
            goto LABEL_50;
LABEL_64:
          if ( (v51 & 1) != 0 )
          {
            if ( v24 < HIBYTE(v51) + v52 )
              break;
          }
          else if ( v24 < *(_DWORD *)(v51 + 16) + v52 )
          {
            break;
          }
          sub_55ED20((__int64)&v126);
          LODWORD(v45) = v127.m128i_i32[0];
          v46 = v126.m128i_i64[1];
LABEL_67:
          if ( !(_DWORD)v45 )
            break;
          v47 = v45 - 1;
        }
        else
        {
          v52 = *(_DWORD *)(v51 + 4) + v50;
          if ( !v130 )
            goto LABEL_64;
LABEL_50:
          if ( v24 < v52 )
            break;
          v79 = v46;
          v130 = 0;
          if ( !sub_55D770((__int64)&v126) )
          {
            sub_55E970((__int64)&v126, 0);
            LODWORD(v45) = v127.m128i_i32[0];
            v46 = v126.m128i_i64[1];
            goto LABEL_67;
          }
          ++v129;
          v46 = v79;
        }
      }
    }
    v58 = v129;
    v81 = v120.m128i_i64[1];
    v80 = v123;
    if ( v129 < v123 )
    {
      v88 = v24;
      v59 = v129;
      v60 = v46;
      do
      {
        while ( 1 )
        {
          if ( !(_DWORD)v43 )
          {
            while ( 1 )
              ;
          }
          if ( sub_55D770((__int64)&v120) && !v124 )
            v123 = --v80;
          v43 = (unsigned int)(v43 - 1);
          if ( !*(_DWORD *)(v81 + 32 * v43 + 20) )
            break;
          v124 = 0;
          v121.m128i_i32[0] = v43;
          if ( v59 >= v80 )
            goto LABEL_81;
        }
        v121.m128i_i32[0] = v43;
      }
      while ( v59 < v80 );
LABEL_81:
      v46 = v60;
      v58 = v59;
      v24 = v88;
    }
    if ( v80 < v58 )
    {
      v82 = v43;
      v61 = v46;
      do
      {
        while ( 1 )
        {
          if ( !(_DWORD)v45 )
          {
            while ( 1 )
              ;
          }
          if ( sub_55D770((__int64)&v126) && !v130 )
            v129 = --v58;
          v45 = (unsigned int)(v45 - 1);
          if ( !*(_DWORD *)(v61 + 32 * v45 + 20) )
            break;
          v130 = 0;
          v127.m128i_i32[0] = v45;
          if ( v80 >= v58 )
            goto LABEL_91;
        }
        v127.m128i_i32[0] = v45;
      }
      while ( v80 < v58 );
LABEL_91:
      LODWORD(v43) = v82;
    }
    if ( v85 )
    {
      v100 = __PAIR64__(v83, v24);
      v98 = *(_QWORD *)v86;
      v99 = v87;
      v101 = v84;
      sub_560070(&v118, *(__int64 *)v86, v87, __SPAIR64__(v83, v24), v84);
    }
    v62 = *(_DWORD *)(a6 + 8);
    if ( v25 < v62 )
    {
      v63 = (unsigned int *)(*(_QWORD *)a6 + 24LL * v25 + 20);
      do
      {
        if ( v24 < *v63 )
          break;
        ++v25;
        v63 += 6;
      }
      while ( v25 != v62 );
    }
    if ( !(_DWORD)v43 || !(_DWORD)v45 )
      break;
    *(_DWORD *)v86 = v24;
    v87 = v84;
    *(_DWORD *)&v86[4] = v83;
  }
  v102 = sub_55C590(*a1);
  v103 = v64;
  v65 = sub_55C590(*a2);
  v104 = v65;
  v105 = v66;
  if ( (unsigned int)v67 < (unsigned int)v65 )
  {
    sub_560070(&v118, v67, v68, v65, v66);
  }
  else if ( (unsigned int)v65 < (unsigned int)v67 )
  {
    sub_560070(&v118, v65, v66, v67, v68);
  }
  v69 = _mm_load_si128(&v121);
  v70 = v118;
  v71 = _mm_load_si128(&v126);
  *a3 = _mm_load_si128(&v120);
  v72 = _mm_load_si128(&v127);
  a3[1] = v69;
  *v93 = v71;
  v93[1] = v72;
  *a7 = v70;
  return (unsigned int)v119;
}
