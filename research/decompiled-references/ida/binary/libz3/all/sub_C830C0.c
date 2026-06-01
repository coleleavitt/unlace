__int64 __fastcall sub_C830C0(__int64 a1, char **a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 result; // rax
  unsigned int v6; // edx
  unsigned int v7; // ebx
  char *v8; // rbp
  __int64 *p_ptr; // rbp
  __int64 v10; // rax
  __int16 v11; // dx
  __int64 *v12; // rbx
  unsigned int v13; // r13d
  unsigned int v14; // esi
  __int64 v15; // rax
  __int64 v16; // r14
  char v17; // al
  unsigned int v18; // esi
  unsigned int v19; // ebp
  char *v20; // r10
  __int16 v21; // ax
  _DWORD *v22; // rdx
  _DWORD *v23; // rax
  _DWORD *v24; // rax
  unsigned int v25; // edx
  unsigned int v26; // eax
  unsigned int v27; // edi
  __int64 v28; // r13
  char v29; // si
  __int64 v30; // r9
  __int64 v31; // rcx
  unsigned int v32; // ebx
  __int64 *v33; // rcx
  __int64 v34; // rdx
  int v35; // eax
  unsigned int v36; // ecx
  unsigned int v37; // ebx
  char *v38; // rbp
  __int64 v39; // rbx
  char *v40; // rdi
  unsigned __int64 v41; // rax
  __int64 v42; // rsi
  _DWORD *v43; // rax
  _DWORD *v44; // rax
  _DWORD *v45; // rax
  __int64 v46; // rax
  int v47; // r11d
  __int64 *v48; // rdi
  __int64 v49; // rax
  unsigned int v50; // esi
  __int64 *v51; // r10
  __int64 v52; // rsi
  __int64 *v53; // rbp
  __int64 *v54; // rax
  __int64 v55; // rdx
  void *v56; // rbx
  __int64 v57; // rcx
  __int64 *v58; // rcx
  __int64 v59; // rbp
  __int64 v60; // rax
  char *v61; // rdi
  __int64 v62; // rax
  __int64 v63; // rbx
  __int64 v64; // rax
  char *v65; // rdi
  __int64 v66; // rax
  __int64 v67; // rbx
  char *v68; // rdi
  unsigned __int64 v69; // rax
  __int64 v70; // rsi
  __int64 v71; // rax
  void *v72; // rbp
  __int64 v73; // rax
  int v74; // r11d
  __int64 *v75; // rdi
  __int64 v76; // rax
  unsigned int v77; // esi
  __int64 *v78; // r10
  __int64 v79; // rsi
  __int64 *v80; // rbp
  __int64 *v81; // rax
  __int64 v82; // rdx
  void *v83; // rbp
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rbx
  __int64 v88; // rax
  char *v89; // rdi
  __int64 v90; // rax
  __int64 v91; // rcx
  __int64 *v92; // rax
  __int64 v93; // rbx
  char *v94; // rdi
  unsigned __int64 v95; // rax
  __int64 v96; // rsi
  __int64 v97; // rax
  int v98; // r9d
  __int64 *v99; // rsi
  __int64 v100; // rax
  unsigned int v101; // edx
  __int64 *v102; // rdi
  __int64 v103; // rdx
  __int64 *v104; // r10
  __int64 *i; // rax
  __int64 v106; // rdx
  void *v107; // rbx
  void *v108; // rbx
  __int64 v109; // rax
  int v110; // r9d
  __int64 *v111; // rsi
  __int64 v112; // rax
  unsigned int v113; // edx
  __int64 *v114; // rdi
  __int64 v115; // rdx
  __int64 *v116; // r10
  __int64 *j; // rax
  __int64 v118; // rdx
  void *v119; // rbx
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rax
  char *v124; // [rsp+18h] [rbp-190h]
  __int64 v125; // [rsp+38h] [rbp-170h] BYREF
  __int64 v126; // [rsp+40h] [rbp-168h]
  __int64 v127; // [rsp+48h] [rbp-160h] BYREF
  __int64 v128; // [rsp+50h] [rbp-158h]
  char v129; // [rsp+58h] [rbp-150h]
  void *v130; // [rsp+60h] [rbp-148h]
  __int64 v131; // [rsp+68h] [rbp-140h]
  __int64 ptr; // [rsp+70h] [rbp-138h] BYREF
  int v133; // [rsp+78h] [rbp-130h]

  v3 = a3;
  if ( *(_DWORD *)(a3 + 8) > 1u )
  {
    result = *(unsigned __int8 *)(a3 + 6);
    if ( (result & 1) != 0 )
      return result;
    *(_BYTE *)(a3 + 6) = result | 1;
    v6 = *((_DWORD *)a2 + 2);
    v7 = *((_DWORD *)a2 + 3);
    if ( v6 >= v7 )
    {
      v87 = 2 * v7;
      v88 = sub_186B270(8 * v87);
      v6 = *((_DWORD *)a2 + 2);
      v89 = *a2;
      v8 = (char *)v88;
      if ( v6 )
      {
        if ( v6 - 1 <= 2 || (char *)v88 == v89 + 8 )
        {
          v122 = 0;
          do
          {
            *(_QWORD *)&v8[v122] = *(_QWORD *)&v89[v122];
            v122 += 8;
          }
          while ( v122 != 8LL * v6 );
        }
        else
        {
          v90 = 0;
          do
          {
            *(__m128i *)&v8[v90] = _mm_loadu_si128((const __m128i *)&v89[v90]);
            v90 += 16;
          }
          while ( v90 != 16LL * (v6 >> 1) );
          if ( (v6 & 1) != 0 )
            *(_QWORD *)&v8[8 * (v6 & 0xFFFFFFFE)] = *(_QWORD *)&v89[8 * (v6 & 0xFFFFFFFE)];
        }
      }
      if ( v89 != (char *)(a2 + 2) && v89 )
      {
        sub_186B220(v89);
        v6 = *((_DWORD *)a2 + 2);
      }
      *a2 = v8;
      *((_DWORD *)a2 + 3) = v87;
    }
    else
    {
      v8 = *a2;
    }
    *(_QWORD *)&v8[8 * v6] = v3;
    *((_DWORD *)a2 + 2) = v6 + 1;
  }
  p_ptr = &ptr;
  ptr = v3;
  v130 = &ptr;
  v133 = 0;
  v131 = 0x1000000001LL;
  LODWORD(v10) = 0;
LABEL_8:
  v11 = *(_WORD *)(v3 + 4);
  v12 = &p_ptr[2 * (unsigned int)v10];
  if ( v11 == 1 )
    goto LABEL_35;
  if ( v11 == 2 )
  {
    v25 = *(_DWORD *)(v3 + 72);
    v26 = *((_DWORD *)v12 + 2);
    v27 = v25 + *(_DWORD *)(v3 + 76) + 1;
    if ( v26 >= v27 )
    {
LABEL_34:
      LODWORD(v10) = v131 - 1;
LABEL_35:
      LODWORD(v131) = v10;
      goto LABEL_36;
    }
    if ( v26 )
      goto LABEL_44;
    v28 = *(_QWORD *)(v3 + 24);
    v26 = 1;
    *((_DWORD *)v12 + 2) = 1;
    if ( *(_DWORD *)(v28 + 8) <= 1u )
    {
LABEL_47:
      v31 = (unsigned int)v131;
      v32 = HIDWORD(v131);
      if ( (unsigned int)v131 >= HIDWORD(v131) )
      {
LABEL_60:
        v39 = 2 * v32;
        p_ptr = (__int64 *)sub_186B270(16 * v39);
        v40 = (char *)v130;
        v41 = 0;
        v31 = (unsigned int)v131;
        v42 = 16LL * (unsigned int)v131;
        if ( (_DWORD)v131 )
        {
          do
          {
            *(__m128i *)&p_ptr[v41 / 8] = _mm_loadu_si128((const __m128i *)&v40[v41]);
            v41 += 16LL;
          }
          while ( v41 != v42 );
        }
        if ( v40 != (char *)&ptr && v40 )
        {
          sub_186B220(v40);
          v31 = (unsigned int)v131;
        }
        v130 = p_ptr;
        HIDWORD(v131) = v39;
        goto LABEL_49;
      }
LABEL_48:
      p_ptr = (__int64 *)v130;
LABEL_49:
      v33 = &p_ptr[2 * v31];
      *((_DWORD *)v33 + 2) = 0;
      v34 = (unsigned int)v131;
      *v33 = v28;
      v35 = v34 + 1;
      goto LABEL_50;
    }
    while ( 1 )
    {
      v29 = *(_BYTE *)(v28 + 6);
      if ( (v29 & 1) == 0 )
        break;
      if ( v26 >= v27 )
        goto LABEL_34;
      v25 = *(_DWORD *)(v3 + 72);
LABEL_44:
      v30 = v26 - 1;
      if ( v25 < v26 )
        v30 = (unsigned int)v30 - v25;
      ++v26;
      v28 = *(_QWORD *)(16LL * *(unsigned int *)(v3 + 20) + v3 + 8 * v30 + 80);
      *((_DWORD *)v12 + 2) = v26;
      if ( *(_DWORD *)(v28 + 8) <= 1u )
        goto LABEL_47;
    }
    *(_BYTE *)(v28 + 6) = v29 | 1;
    v36 = *((_DWORD *)a2 + 2);
    v37 = *((_DWORD *)a2 + 3);
    if ( v36 < v37 )
    {
      v38 = *a2;
      goto LABEL_59;
    }
    v63 = 2 * v37;
    v64 = sub_186B270(8 * v63);
    v36 = *((_DWORD *)a2 + 2);
    v65 = *a2;
    v38 = (char *)v64;
    if ( v36 )
    {
      if ( v36 - 1 <= 2 || (char *)v64 == v65 + 8 )
      {
        v71 = 0;
        do
        {
          *(_QWORD *)&v38[v71] = *(_QWORD *)&v65[v71];
          v71 += 8;
        }
        while ( v71 != 8LL * v36 );
        if ( v65 != (char *)(a2 + 2) )
        {
LABEL_104:
          if ( v65 )
          {
            sub_186B220(v65);
            v36 = *((_DWORD *)a2 + 2);
          }
        }
LABEL_106:
        *a2 = v38;
        *((_DWORD *)a2 + 3) = v63;
LABEL_59:
        v32 = HIDWORD(v131);
        *(_QWORD *)&v38[8 * v36] = v28;
        *((_DWORD *)a2 + 2) = v36 + 1;
        v31 = (unsigned int)v131;
        if ( (unsigned int)v131 >= v32 )
          goto LABEL_60;
        goto LABEL_48;
      }
      v66 = 0;
      do
      {
        *(__m128i *)&v38[v66] = _mm_loadu_si128((const __m128i *)&v65[v66]);
        v66 += 16;
      }
      while ( 16LL * (v36 >> 1) != v66 );
      if ( (v36 & 1) != 0 )
        *(_QWORD *)&v38[8 * (v36 & 0xFFFFFFFE)] = *(_QWORD *)&v65[8 * (v36 & 0xFFFFFFFE)];
    }
    if ( v65 != (char *)(a2 + 2) )
      goto LABEL_104;
    goto LABEL_106;
  }
  if ( v11 )
  {
    sub_1872CE0("");
    sub_1873130(114, 100);
  }
  v13 = *(_DWORD *)(v3 + 24);
  v14 = *((_DWORD *)v12 + 2);
  if ( v14 < v13 )
  {
    while ( 1 )
    {
      v15 = v14++;
      v16 = *(_QWORD *)(v3 + 8 * v15 + 32);
      *((_DWORD *)v12 + 2) = v14;
      if ( *(_DWORD *)(v16 + 8) > 1u )
      {
        v17 = *(_BYTE *)(v16 + 6);
        if ( (v17 & 1) != 0 )
          goto LABEL_22;
        *(_BYTE *)(v16 + 6) = v17 | 1;
        v18 = *((_DWORD *)a2 + 2);
        v19 = *((_DWORD *)a2 + 3);
        if ( v18 >= v19 )
        {
          v59 = 2 * v19;
          v60 = sub_186B270(8 * v59);
          v18 = *((_DWORD *)a2 + 2);
          v61 = *a2;
          v20 = (char *)v60;
          if ( v18 )
          {
            if ( v18 - 1 <= 2 || (char *)v60 == v61 + 8 )
            {
              v84 = 0;
              do
              {
                *(_QWORD *)&v20[v84] = *(_QWORD *)&v61[v84];
                v84 += 8;
              }
              while ( 8LL * v18 != v84 );
            }
            else
            {
              v62 = 0;
              do
              {
                *(__m128i *)&v20[v62] = _mm_loadu_si128((const __m128i *)&v61[v62]);
                v62 += 16;
              }
              while ( 16LL * (v18 >> 1) != v62 );
              if ( (v18 & 1) != 0 )
                *(_QWORD *)&v20[8 * (v18 & 0xFFFFFFFE)] = *(_QWORD *)&v61[8 * (v18 & 0xFFFFFFFE)];
            }
          }
          if ( v61 != (char *)(a2 + 2) && v61 )
          {
            v124 = v20;
            sub_186B220(v61);
            v18 = *((_DWORD *)a2 + 2);
            v20 = v124;
          }
          *a2 = v20;
          *((_DWORD *)a2 + 3) = v59;
        }
        else
        {
          v20 = *a2;
        }
        *(_QWORD *)&v20[8 * v18] = v16;
        *((_DWORD *)a2 + 2) = v18 + 1;
      }
      v21 = *(_WORD *)(v16 + 4);
      if ( v21 == 1 )
      {
LABEL_21:
        v14 = *((_DWORD *)v12 + 2);
        goto LABEL_22;
      }
      if ( v21 == 2 )
      {
        v57 = (unsigned int)v131;
        if ( (unsigned int)v131 >= HIDWORD(v131) )
        {
          v67 = (unsigned int)(2 * HIDWORD(v131));
          p_ptr = (__int64 *)sub_186B270(16 * v67);
          v68 = (char *)v130;
          v69 = 0;
          v57 = (unsigned int)v131;
          v70 = 16LL * (unsigned int)v131;
          if ( (_DWORD)v131 )
          {
            do
            {
              *(__m128i *)&p_ptr[v69 / 8] = _mm_loadu_si128((const __m128i *)&v68[v69]);
              v69 += 16LL;
            }
            while ( v70 != v69 );
          }
          if ( v68 != (char *)&ptr && v68 )
          {
            sub_186B220(v68);
            v57 = (unsigned int)v131;
          }
          v130 = p_ptr;
          HIDWORD(v131) = v67;
        }
        else
        {
          p_ptr = (__int64 *)v130;
        }
        v58 = &p_ptr[2 * v57];
        *((_DWORD *)v58 + 2) = 0;
        v34 = (unsigned int)v131;
        *v58 = v16;
        v35 = v34 + 1;
LABEL_50:
        LODWORD(v131) = v35;
        LODWORD(v10) = v35 - 1;
        v3 = p_ptr[2 * v34];
        goto LABEL_8;
      }
      if ( v21 )
      {
        sub_1872CE0("");
        sub_1873130(114, 73);
      }
      if ( *(_DWORD *)(v16 + 24) )
      {
        v91 = (unsigned int)v131;
        if ( (unsigned int)v131 >= HIDWORD(v131) )
        {
          v93 = (unsigned int)(2 * HIDWORD(v131));
          p_ptr = (__int64 *)sub_186B270(16 * v93);
          v94 = (char *)v130;
          v95 = 0;
          v91 = (unsigned int)v131;
          v96 = 16LL * (unsigned int)v131;
          if ( (_DWORD)v131 )
          {
            do
            {
              *(__m128i *)&p_ptr[v95 / 8] = _mm_loadu_si128((const __m128i *)&v94[v95]);
              v95 += 16LL;
            }
            while ( v95 != v96 );
          }
          if ( v94 && v94 != (char *)&ptr )
          {
            sub_186B220(v94);
            v91 = (unsigned int)v131;
          }
          v130 = p_ptr;
          HIDWORD(v131) = v93;
        }
        else
        {
          p_ptr = (__int64 *)v130;
        }
        v92 = &p_ptr[2 * v91];
        *((_DWORD *)v92 + 2) = 0;
        v34 = (unsigned int)v131;
        *v92 = v16;
        v35 = v34 + 1;
        goto LABEL_50;
      }
      v43 = *(_DWORD **)(*(_QWORD *)(v16 + 16) + 24LL);
      if ( v43 && *v43 != -1 )
        goto LABEL_21;
      v44 = *(_DWORD **)(sub_15D1F10(v16) + 24);
      if ( !v44 || *v44 != 5 || v44[1] != 1 )
      {
        v45 = *(_DWORD **)(sub_15D1F10(v16) + 24);
        if ( !v45 || *v45 != 5 || v45[1] )
          goto LABEL_21;
      }
      v125 = 0;
      v46 = *(_QWORD *)(a1 + 16);
      v129 = 0;
      v127 = 1;
      v47 = *(_DWORD *)(v16 + 12);
      v126 = 0;
      v48 = *(__int64 **)(v46 + 16);
      v128 = 0;
      v49 = *(unsigned int *)(v46 + 24);
      v50 = v49 - 1;
      v49 *= 48;
      v51 = (__int64 *)((char *)v48 + v49);
      v52 = 48LL * (v47 & v50);
      v53 = &v48[(unsigned __int64)v52 / 8];
      if ( v52 == v49 )
      {
LABEL_139:
        while ( v53 != v48 )
        {
          v86 = *v48;
          if ( (unsigned __int64)*v48 > 1 )
          {
            if ( *(_DWORD *)(v86 + 12) == v47 && v16 == v86 )
              goto LABEL_119;
          }
          else if ( !v86 )
          {
            break;
          }
          v48 += 6;
        }
LABEL_81:
        v56 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v125);
        sub_182CBA0(v56, &v127);
        sub_16191E();
      }
      v54 = &v48[(unsigned __int64)v52 / 8];
      while ( 1 )
      {
        v55 = *v54;
        if ( (unsigned __int64)*v54 > 1 )
          break;
        if ( !v55 )
          goto LABEL_81;
LABEL_78:
        v54 += 6;
        if ( v51 == v54 )
          goto LABEL_139;
      }
      if ( *(_DWORD *)(v55 + 12) != v47 || v16 != v55 )
        goto LABEL_78;
LABEL_119:
      v72 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v125);
      sub_182CBA0(v72, &v127);
      v125 = 0;
      v73 = *(_QWORD *)(a1 + 16);
      v129 = 0;
      v127 = 1;
      v74 = *(_DWORD *)(v16 + 12);
      v126 = 0;
      v75 = *(__int64 **)(v73 + 40);
      v128 = 0;
      v76 = *(unsigned int *)(v73 + 48);
      v77 = v76 - 1;
      v76 *= 48;
      v78 = (__int64 *)((char *)v75 + v76);
      v79 = 48LL * (v74 & v77);
      v80 = &v75[(unsigned __int64)v79 / 8];
      if ( v79 == v76 )
      {
LABEL_131:
        if ( v75 != v80 )
        {
          while ( 1 )
          {
            v85 = *v75;
            if ( (unsigned __int64)*v75 > 1 )
            {
              if ( *(_DWORD *)(v85 + 12) == v74 && v16 == v85 )
                goto LABEL_127;
            }
            else if ( !v85 )
            {
              goto LABEL_81;
            }
            v75 += 6;
            if ( v80 == v75 )
              goto LABEL_81;
          }
        }
        goto LABEL_81;
      }
      v81 = &v75[(unsigned __int64)v79 / 8];
      while ( 2 )
      {
        v82 = *v81;
        if ( (unsigned __int64)*v81 <= 1 )
        {
          if ( !v82 )
            goto LABEL_81;
          goto LABEL_123;
        }
        if ( *(_DWORD *)(v82 + 12) != v74 || v16 != v82 )
        {
LABEL_123:
          v81 += 6;
          if ( v78 == v81 )
            goto LABEL_131;
          continue;
        }
        break;
      }
LABEL_127:
      v83 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v125);
      sub_182CBA0(v83, &v127);
      v14 = *((_DWORD *)v12 + 2);
LABEL_22:
      if ( v14 >= v13 )
      {
        LODWORD(v10) = v131 - 1;
        break;
      }
    }
  }
  LODWORD(v131) = v10;
  if ( *(_WORD *)(v3 + 4) )
    goto LABEL_53;
  if ( *(_DWORD *)(v3 + 24) )
    goto LABEL_53;
  v22 = *(_DWORD **)(*(_QWORD *)(v3 + 16) + 24LL);
  if ( v22 )
  {
    if ( *v22 != -1 )
      goto LABEL_53;
  }
  v23 = *(_DWORD **)(sub_15D1F10(v3) + 24);
  if ( v23 && *v23 == 5 && v23[1] == 1 || (v24 = *(_DWORD **)(sub_15D1F10(v3) + 24)) != nullptr && *v24 == 5 && !v24[1] )
  {
    v125 = 0;
    v97 = *(_QWORD *)(a1 + 16);
    v129 = 0;
    v127 = 1;
    v98 = *(_DWORD *)(v3 + 12);
    v126 = 0;
    v99 = *(__int64 **)(v97 + 16);
    v128 = 0;
    v100 = *(unsigned int *)(v97 + 24);
    v101 = v100 - 1;
    v100 *= 48;
    v102 = (__int64 *)((char *)v99 + v100);
    v103 = 48LL * (v98 & v101);
    v104 = &v99[(unsigned __int64)v103 / 8];
    if ( v103 != v100 )
    {
      for ( i = &v99[(unsigned __int64)v103 / 8]; v102 != i; i += 6 )
      {
        v106 = *i;
        if ( (unsigned __int64)*i > 1 )
        {
          if ( *(_DWORD *)(v106 + 12) == v98 && v106 == v3 )
          {
LABEL_176:
            v108 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v125);
            sub_182CBA0(v108, &v127);
            v125 = 0;
            v109 = *(_QWORD *)(a1 + 16);
            v129 = 0;
            v127 = 1;
            v110 = *(_DWORD *)(v3 + 12);
            v126 = 0;
            v111 = *(__int64 **)(v109 + 40);
            v128 = 0;
            v112 = *(unsigned int *)(v109 + 48);
            v113 = v112 - 1;
            v112 *= 48;
            v114 = (__int64 *)((char *)v111 + v112);
            v115 = 48LL * (v110 & v113);
            v116 = &v111[(unsigned __int64)v115 / 8];
            if ( v115 != v112 )
            {
              for ( j = &v111[(unsigned __int64)v115 / 8]; v114 != j; j += 6 )
              {
                v118 = *j;
                if ( (unsigned __int64)*j > 1 )
                {
                  if ( *(_DWORD *)(v118 + 12) == v110 && v118 == v3 )
                  {
LABEL_184:
                    v119 = qword_1C7F2C0;
                    sub_182CBA0(qword_1C7F2C0, &v125);
                    sub_182CBA0(v119, &v127);
                    LODWORD(v10) = v131;
                    p_ptr = (__int64 *)v130;
LABEL_36:
                    if ( !(_DWORD)v10 )
                      goto LABEL_54;
LABEL_37:
                    v10 = (unsigned int)(v10 - 1);
                    v3 = p_ptr[2 * v10];
                    goto LABEL_8;
                  }
                }
                else if ( !v118 )
                {
                  goto LABEL_175;
                }
              }
            }
            for ( ; v116 != v111; v111 += 6 )
            {
              v120 = *v111;
              if ( (unsigned __int64)*v111 > 1 )
              {
                if ( *(_DWORD *)(v120 + 12) == v110 && v120 == v3 )
                  goto LABEL_184;
              }
              else if ( !v120 )
              {
                break;
              }
            }
LABEL_175:
            v107 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v125);
            sub_182CBA0(v107, &v127);
            sub_16191E();
          }
        }
        else if ( !v106 )
        {
          goto LABEL_175;
        }
      }
    }
    if ( v99 != v104 )
    {
      while ( 1 )
      {
        v121 = *v99;
        if ( (unsigned __int64)*v99 > 1 )
        {
          if ( *(_DWORD *)(v121 + 12) == v98 && v121 == v3 )
            goto LABEL_176;
        }
        else if ( !v121 )
        {
          goto LABEL_175;
        }
        v99 += 6;
        if ( v104 == v99 )
          goto LABEL_175;
      }
    }
    goto LABEL_175;
  }
  LODWORD(v10) = v131;
LABEL_53:
  p_ptr = (__int64 *)v130;
  if ( (_DWORD)v10 )
    goto LABEL_37;
LABEL_54:
  result = (__int64)&ptr;
  if ( p_ptr != &ptr )
  {
    if ( p_ptr )
      return sub_186B220(p_ptr);
  }
  return result;
}

