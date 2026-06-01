__int64 __fastcall sub_5501A0(__int64 *a1, double a2, double a3)
{
  int v3; // eax
  char v5; // cl
  char v6; // cl
  __int64 v7; // rsi
  __int64 v8; // r8
  unsigned __int64 v9; // rbp
  __int64 v10; // r12
  int v11; // r13d
  unsigned __int64 v12; // rdx
  __int64 v13; // rdi
  unsigned __int64 v14; // r8
  __int64 v15; // rax
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // r8
  char v18; // cl
  int v19; // ecx
  unsigned __int64 v20; // rax
  int v21; // eax
  int v22; // r13d
  char v23; // al
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // rdx
  unsigned int v26; // eax
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rdx
  char v29; // al
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  unsigned __int64 v32; // rax
  __int64 v33; // r12
  unsigned __int64 v34; // rax
  __int64 v35; // r15
  __int64 v36; // r15
  int v37; // r14d
  char v38; // al
  char v39; // al
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rax
  unsigned __int64 tinfo_property; // rax
  char v46; // di
  char v47; // al
  unsigned __int64 v48; // rdx
  int v49; // edx
  unsigned int v50; // ebp
  unsigned __int64 v51; // rax
  __int64 v52; // rdx
  unsigned __int64 v53; // rax
  bool v55; // zf
  int v56; // r13d
  unsigned __int64 v57; // rdx
  __int64 v58; // rcx
  unsigned __int64 v59; // rsi
  __int64 v60; // rax
  unsigned __int64 v61; // rdx
  __int64 v62; // rdx
  __int64 v63; // rax
  unsigned __int64 *v64; // rbp
  unsigned __int64 v65; // r12
  unsigned __int64 v66; // rdi
  unsigned int v67; // r15d
  __int64 tinfo_size; // rax
  char v69; // al
  char v70; // al
  char v71; // al
  unsigned __int64 v72; // rdx
  int v73; // r12d
  unsigned __int64 v74; // rbp
  _QWORD *v75; // r12
  __m128i v76; // xmm0
  __int64 v77; // rax
  unsigned __int64 v78; // rsi
  unsigned __int64 v79; // rax
  signed int v80; // edx
  unsigned __int64 v81; // rcx
  unsigned __int64 v82; // rcx
  unsigned __int64 v83; // rcx
  unsigned __int64 v84; // rsi
  unsigned __int64 v85; // rcx
  int v86; // [rsp+8h] [rbp-120h]
  __int64 v87; // [rsp+8h] [rbp-120h]
  int v88; // [rsp+8h] [rbp-120h]
  char v89; // [rsp+10h] [rbp-118h]
  __int64 v90; // [rsp+10h] [rbp-118h]
  unsigned __int64 v91; // [rsp+18h] [rbp-110h]
  __int64 v92; // [rsp+20h] [rbp-108h]
  __int64 v93; // [rsp+20h] [rbp-108h]
  unsigned __int64 v94; // [rsp+20h] [rbp-108h]
  unsigned __int64 v95; // [rsp+20h] [rbp-108h]
  unsigned __int64 v96; // [rsp+20h] [rbp-108h]
  unsigned __int64 v97; // [rsp+20h] [rbp-108h]
  unsigned __int64 v98; // [rsp+28h] [rbp-100h]
  unsigned __int64 v99; // [rsp+28h] [rbp-100h]
  int v100; // [rsp+28h] [rbp-100h]
  int v101; // [rsp+28h] [rbp-100h]
  __int64 v102; // [rsp+30h] [rbp-F8h]
  int v103; // [rsp+3Ch] [rbp-ECh]
  unsigned __int64 v104; // [rsp+40h] [rbp-E8h]
  unsigned __int64 v105; // [rsp+48h] [rbp-E0h]
  unsigned __int64 v106; // [rsp+50h] [rbp-D8h]
  unsigned __int64 v107; // [rsp+70h] [rbp-B8h]
  int v108; // [rsp+7Ch] [rbp-ACh]
  unsigned __int64 v109; // [rsp+80h] [rbp-A8h]
  __int16 v110; // [rsp+9Ch] [rbp-8Ch] BYREF
  char v111; // [rsp+9Eh] [rbp-8Ah]
  signed int v112; // [rsp+A0h] [rbp-88h] BYREF
  unsigned int v113; // [rsp+A4h] [rbp-84h] BYREF
  unsigned int v114; // [rsp+A8h] [rbp-80h]
  __int16 v115; // [rsp+ACh] [rbp-7Ch]
  unsigned __int64 v116; // [rsp+B0h] [rbp-78h] BYREF
  unsigned __int64 v117; // [rsp+B8h] [rbp-70h]
  __int64 v118; // [rsp+C0h] [rbp-68h]
  __int64 v119; // [rsp+C8h] [rbp-60h]
  __int64 v120; // [rsp+D0h] [rbp-58h]
  __int64 v121; // [rsp+D8h] [rbp-50h]
  int v122; // [rsp+E0h] [rbp-48h]
  unsigned __int64 v123; // [rsp+E8h] [rbp-40h]

  v123 = __readfsqword(0x28u);
  if ( !a1 )
    return 0;
  v3 = *((_DWORD *)a1 + 11);
  v103 = v3;
  if ( (v3 & 0x400) != 0 )
  {
    v55 = a1[1] == 0;
    *((_BYTE *)a1 + 50) = 0;
    *((_DWORD *)a1 + 11) = v3 & 0xFFFFFF9F;
    if ( v55 )
    {
LABEL_162:
      if ( !*((_DWORD *)a1 + 10) )
        *((_DWORD *)a1 + 10) = 1;
      return 1;
    }
    v56 = 0;
    v57 = 0;
    v58 = 0;
    do
    {
      v64 = (unsigned __int64 *)((v58 << 7) + *a1);
      v65 = *v64;
      if ( *v64 < v57 )
        return 0;
      v66 = v64[8];
      if ( (v64[8] & 0xF) == 0xE )
      {
        BYTE2(v116) = 0;
        LOWORD(v116) = 0;
        if ( !(unsigned __int8)get_tinfo_details(v66, 14, &v116) )
          return 0;
        v60 = BYTE1(v116);
        v57 = v65 + BYTE1(v116);
      }
      else
      {
        v90 = v58 << 7;
        v87 = v58;
        v67 = (*((_DWORD *)v64 + 29) & 0x20) == 0 ? 1 : 3;
        tinfo_size = get_tinfo_size(0, v64[8], v67);
        if ( tinfo_size == -1
          || (v87 + 1 < (unsigned __int64)a1[1] ? (v59 = *(_QWORD *)(*a1 + v90 + 128)) : (v59 = 8 * a1[3]),
              v60 = 8 * tinfo_size,
              v57 = v65 + v60,
              v59 < v65 + v60) )
        {
          v61 = v64[1];
          if ( !v61 )
          {
            if ( v87 + 1 >= (unsigned __int64)a1[1] )
              v62 = 8 * a1[3];
            else
              v62 = *(_QWORD *)(*a1 + v90 + 128);
            v61 = v62 - *v64;
          }
          sub_689D30(&v116, *(_QWORD *)(qword_2CA1698 + 1480), v61 >> 3);
          copy_tinfo_t(v64 + 8);
          clear_tinfo_t(&v116);
          v63 = get_tinfo_size(0, v64[8], v67);
          if ( v63 == -1 )
            return 0;
          v60 = 8 * v63;
          v57 = v65 + v60;
        }
      }
      ++v56;
      *((_DWORD *)v64 + 29) &= ~0x40u;
      *((_DWORD *)v64 + 28) = 0;
      v58 = v56;
      *((_BYTE *)v64 + 120) = 0;
      v64[1] = v60;
    }
    while ( v56 < (unsigned __int64)a1[1] );
    v72 = (v57 + 7) >> 3;
    if ( a1[3] >= v72 )
    {
      a1[4] = v72;
      goto LABEL_162;
    }
    return 0;
  }
  v5 = *((_BYTE *)a1 + 50);
  if ( v5 )
  {
    v107 = 1LL << (v5 - 1);
  }
  else
  {
    v107 = (unsigned __int8)getinf(62);
    v103 = *((_DWORD *)a1 + 11);
  }
  v114 = 0;
  v115 = 0;
  if ( (v103 & 0x20) != 0 )
  {
    v114 = getinf(67);
    setinf(67, v114 & 0xFFFFFFFE);
    LOBYTE(v115) = getinf(57);
    setinf(57, (unsigned __int8)v115 & 0xF0 | 1LL);
    HIBYTE(v115) = 1;
  }
  v106 = 0;
  v6 = *((_BYTE *)a1 + 49);
  if ( v6 )
    v106 = 1LL << (v6 - 1);
  v112 = 0;
  v116 = 0;
  v122 = v103;
  v108 = v107;
  v89 = *((_BYTE *)a1 + 51);
  v7 = a1[1];
  v120 = 0;
  v104 = v7;
  if ( !v7 )
  {
    if ( v89 || (v80 = 0, v79 = 0, !v107) )
    {
      v105 = 0;
      goto LABEL_124;
    }
    v105 = 0;
    goto LABEL_211;
  }
  v102 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v109 = 8LL * (int)v107;
  v91 = 0;
  v86 = 0;
  v105 = 0;
  v104 = 0;
  do
  {
    v35 = *a1;
    v111 = 0;
    v110 = 0;
    v36 = (v10 << 7) + v35;
    v92 = v10 << 7;
    v13 = *(_QWORD *)(v36 + 64);
    if ( (*(_BYTE *)(v36 + 64) & 0xF) != 0xE )
    {
      if ( v8 )
      {
        if ( !v91 || (v100 = v8, (getinf(57) & 0xF) == 6) || (getinf(67) & 0x80u) != 0LL )
          v11 = 8;
        else
          v11 = v100;
        if ( (getinf(57) & 0xF) == 6 || (getinf(67) & 0x80u) != 0LL )
        {
          v12 = v9;
        }
        else
        {
          if ( v91 )
          {
            if ( v9 < v91 )
            {
              if ( !under_debugger )
                interr(1138);
              goto LABEL_247;
            }
            v12 = v9 - v91 + ((v91 + v11 - 1) & -v11);
            if ( v12 < v9 )
              sub_548C70(67, v7, a2, a3);
          }
          else
          {
            v12 = v9;
          }
          if ( (_DWORD)v107 && v109 < v11 )
            v11 = 8 * v107;
        }
        v13 = *(_QWORD *)(v36 + 64);
        v91 = 0;
        v14 = (v12 + v11 - 1) & -v11;
      }
      else
      {
        v14 = v9;
      }
      v116 = v14;
      v98 = v14;
      v15 = get_tinfo_size(&v113, v13, (*(_DWORD *)(v36 + 116) & 0x20) == 0 ? 1 : 3);
      v16 = v15;
      if ( v15 == -1 )
        goto LABEL_127;
      v17 = v98;
      if ( v15 && !v113 )
      {
        if ( !under_debugger )
          interr(821);
        goto LABEL_247;
      }
      if ( (v103 & 0x40) != 0 )
        v113 = 1;
      v18 = *(_BYTE *)(v36 + 120);
      if ( (v103 & 0x20) != 0 )
      {
        if ( v18 )
        {
          v19 = 1 << (v18 - 1);
          LODWORD(v20) = v19;
          if ( v19 > v107 )
            LODWORD(v20) = v107;
          if ( !v107 )
            LODWORD(v20) = v19;
          v20 = (int)v20;
          if ( v106 >= (int)v20 )
            v20 = v106;
          v106 = v20;
          v21 = 8;
          if ( v19 <= 8 )
            v21 = v19;
          v22 = v21;
LABEL_34:
          v23 = getinf_flag(3, 4);
          v24 = v98;
          if ( v23 != 1 && v107 && v107 < v22 )
          {
            v47 = getinf(57);
            v24 = v98;
            if ( (v47 & 0xF) != 6 )
            {
              v71 = getinf(67);
              v24 = v98;
              if ( v71 >= 0 )
              {
                v25 = v22;
                if ( (v103 & 0x20) != 0 )
                {
                  v22 = v107;
                  v26 = v113;
                  v27 = 8 * v113;
                  v7 = (unsigned int)v107;
                  v17 = (v98 + 8 * (int)v107 - 1) & (-8 * (int)v107);
                  goto LABEL_42;
                }
                v17 = (v98 + 8 * v22 - 1) & (-8 * v22);
                goto LABEL_38;
              }
            }
            v22 = v107;
          }
          v17 = (v24 + 8 * v22 - 1) & (-8 * v22);
          if ( (v103 & 0x20) != 0 )
          {
LABEL_41:
            v26 = v113;
            v7 = (unsigned int)v22;
            v27 = 8 * v113;
LABEL_42:
            if ( 8 * v107 < v27 && 8 * v107 )
              LODWORD(v27) = 8 * v107;
            v28 = (v17 + (int)v27 - 1) & -(int)v27;
            if ( (unsigned int)v7 < v26 )
              v22 = v26;
            if ( v112 < v26 )
              v112 = v26;
            if ( v89 )
            {
              v44 = v104;
              v95 = v28;
              if ( v104 < v16 )
                v44 = v16;
              v104 = v44;
              v7 = v105;
              tinfo_property = (int)get_tinfo_property(*(_QWORD *)(v36 + 64), 15);
              v30 = v95;
              if ( v105 >= (int)tinfo_property )
                tinfo_property = v105;
              v105 = tinfo_property;
              goto LABEL_55;
            }
            v99 = v28;
            v29 = getinf(57);
            v30 = v99;
            if ( (v29 & 0xF) == 6 )
            {
              v31 = *a1;
            }
            else
            {
              v46 = getinf(67);
              v31 = *a1;
              v30 = v99;
              v7 = *(_DWORD *)(*a1 + v92 + 116) & 0x20;
              if ( (v46 & 0x80) == 0 )
              {
                if ( !(_DWORD)v7 )
                  goto LABEL_53;
                if ( v10 + 1 != a1[1] )
                {
                  v7 = v10 << 7;
                  if ( (*(_BYTE *)(v31 + v92 + 244) & 0x20) != 0 )
                    goto LABEL_53;
                }
                goto LABEL_105;
              }
            }
            if ( (*(_BYTE *)(v31 + v92 + 116) & 0x20) == 0 )
            {
LABEL_53:
              v32 = v16;
LABEL_54:
              v9 = v30 + 8 * v32;
              v102 = v113;
LABEL_55:
              v33 = 8 * v16;
              v8 = 0;
              goto LABEL_56;
            }
LABEL_105:
            v7 = (unsigned int)v16;
            v96 = v30;
            LODWORD(v32) = sub_54FF50((_QWORD *)(v36 + 64), v16);
            *((_DWORD *)a1 + 11) |= 0x80u;
            v30 = v96;
            v32 = (int)v32;
            goto LABEL_54;
          }
          v25 = v22;
LABEL_38:
          if ( v106 >= v25 )
            v25 = v106;
          v106 = v25;
          goto LABEL_41;
        }
LABEL_92:
        v26 = v113;
        v22 = v113;
        v27 = 8 * v113;
        v7 = v113;
        goto LABEL_42;
      }
      if ( (*(_BYTE *)(v36 + 116) & 0x40) != 0 )
      {
        v113 = 1;
        if ( !v18 )
        {
          v7 = 1;
          v27 = 8;
          v26 = 1;
          v22 = 1;
          goto LABEL_42;
        }
      }
      else if ( !v18 )
      {
        goto LABEL_92;
      }
      v22 = 1 << (v18 - 1);
      goto LABEL_34;
    }
    v93 = v8;
    if ( !(unsigned __int8)get_tinfo_details(v13, 14, &v110) )
      goto LABEL_127;
    v7 = (__int64)&v110;
    v118 = v93;
    v117 = v91;
    v119 = v102;
    v121 = (int)v107;
    v30 = sub_54C7D0(&v116, (unsigned __int8 *)&v110, v9, &v112);
    v33 = HIBYTE(v110);
    v8 = v118;
    v91 = v117;
    v9 = HIBYTE(v110) + v30;
    v102 = v119;
    v22 = v119;
    if ( v89 )
    {
      if ( !v118 )
      {
        v41 = HIBYTE(v110) + v30;
        goto LABEL_71;
      }
      if ( !v117
        || (v97 = v30, v101 = v118, v69 = getinf(57), v30 = v97, (v69 & 0xF) == 6)
        || (v70 = getinf(67), v30 = v97, v70 < 0) )
      {
        v37 = 8;
      }
      else
      {
        v37 = v101;
      }
      v94 = v30;
      v38 = getinf(57);
      v30 = v94;
      if ( (v38 & 0xF) == 6 || (v39 = getinf(67), v30 = v94, v39 < 0) )
      {
        v40 = v9;
LABEL_70:
        v7 = v40 + v37 - 1;
        v41 = v7 & -v37;
LABEL_71:
        v42 = v104;
        v43 = v41 >> 3;
        v116 = 0;
        v120 = 0;
        v102 = 0;
        v91 = 0;
        if ( v104 < v43 )
          v42 = v43;
        v104 = v42;
        if ( v105 >= v43 )
          v43 = v105;
        v8 = 0;
        v105 = v43;
        v122 = v103;
        goto LABEL_56;
      }
      if ( !v91 )
      {
        v40 = v9;
LABEL_78:
        if ( (_DWORD)v107 && v109 < v37 )
          v37 = 8 * v107;
        goto LABEL_70;
      }
      if ( v9 >= v91 )
      {
        v40 = v9 - v91 + ((v91 + v37 - 1) & -v37);
        if ( v40 < v9 )
          sub_548C70(67, v9 - v91, a2, a3);
        goto LABEL_78;
      }
      if ( !under_debugger )
        interr(1138);
LABEL_247:
      BUG();
    }
LABEL_56:
    if ( v33 && !v22 )
    {
      if ( !under_debugger )
        interr(863);
      goto LABEL_247;
    }
    *(_QWORD *)(v36 + 8) = v33;
    *(_DWORD *)(v36 + 112) = v22;
    if ( v89 )
      v9 = v30;
    *(_QWORD *)v36 = v30;
    v34 = a1[1];
    v10 = ++v86;
  }
  while ( v86 < v34 );
  if ( v9 == -1 )
    goto LABEL_128;
  if ( !v89 )
  {
    if ( v8 )
    {
      if ( !v91 || (v88 = v8, (getinf(57) & 0xF) == 6) || (getinf(67) & 0x80u) != 0LL )
        v73 = 8;
      else
        v73 = v88;
      if ( (getinf(57) & 0xF) != 6 && (getinf(67) & 0x80u) == 0LL )
      {
        if ( v91 )
        {
          if ( v9 < v91 )
          {
            if ( !under_debugger )
              interr(1138);
            goto LABEL_247;
          }
          if ( v9 - v91 + ((v91 + v73 - 1) & -v73) < v9 )
            sub_548C70(67, v91, a2, a3);
          v9 = v9 - v91 + ((v91 + v73 - 1) & -v73);
        }
        if ( (_DWORD)v107 && v109 < v73 )
          v73 = 8 * v107;
      }
      v9 = (v9 + v73 - 1) & -v73;
      v104 = v9 >> 3;
      v34 = a1[1];
    }
    else
    {
      v104 = v9 >> 3;
    }
    v116 = v9;
    if ( v34 )
    {
      v74 = *a1 + (v34 << 7);
      if ( (get_tinfo_property(*(_QWORD *)(v74 - 64), 2) & 0x2F) == 0xD )
      {
        v75 = (_QWORD *)(v74 - 128);
        v76 = _mm_srli_epi64(_mm_loadu_si128((const __m128i *)(v74 - 128)), 3u);
        v104 = _mm_add_epi64(v76, _mm_srli_si128(v76, 8)).m128i_u64[0];
        while ( 1 )
        {
          LODWORD(v77) = get_tinfo_property(v75[8], 15);
          if ( (_DWORD)v77 )
          {
            v77 = (int)v77;
            goto LABEL_190;
          }
          if ( v75 == (_QWORD *)*a1 )
            break;
          v75 -= 16;
        }
        v77 = 0;
LABEL_190:
        v78 = v107;
        v105 = (*v75 >> 3) + v77;
        v79 = v112;
        v80 = v112;
        if ( v107 )
        {
          if ( (v103 & 0x40) != 0 )
            goto LABEL_124;
LABEL_192:
          if ( v78 > v79 )
            v78 = v79;
          v81 = v78;
          if ( v106 >= v78 )
            v81 = v106;
          v106 = v81;
          goto LABEL_197;
        }
        if ( (v103 & 0x40) != 0 )
          goto LABEL_124;
        v85 = v106;
        if ( v106 < v112 )
          v85 = v112;
        v106 = v85;
      }
      else
      {
        v79 = v112;
        v78 = v107;
        v80 = v112;
        if ( v107 )
        {
          v105 = v104;
          if ( (v103 & 0x40) != 0 )
            goto LABEL_124;
          goto LABEL_192;
        }
        v105 = v104;
        if ( (v103 & 0x40) != 0 )
          goto LABEL_124;
        v84 = v106;
        if ( v106 < v112 )
          v84 = v112;
        v106 = v84;
      }
      if ( !v80 )
        goto LABEL_124;
LABEL_222:
      v108 = v79;
LABEL_200:
      v104 = (v104 + v108 - 1) & -v108;
      goto LABEL_124;
    }
    v79 = v112;
    v80 = v112;
    if ( !v107 )
    {
      if ( (v103 & 0x40) != 0 )
        goto LABEL_124;
      v82 = v106;
      if ( v106 < v112 )
        v82 = v112;
      v106 = v82;
      goto LABEL_197;
    }
LABEL_211:
    if ( (v103 & 0x40) != 0 )
      goto LABEL_124;
    v83 = v107;
    if ( v107 > v79 )
      v83 = v79;
    if ( v106 >= v83 )
      v83 = v106;
    v106 = v83;
LABEL_197:
    if ( !v80 )
      goto LABEL_124;
    if ( v107 && v107 < v79 )
      goto LABEL_200;
    goto LABEL_222;
  }
  v48 = v112;
  if ( v107 && v107 <= v112 )
    v48 = v107;
  if ( v106 >= v48 )
    v48 = v106;
  if ( (v103 & 0x40) != 0 )
    v48 = v106;
  v106 = v48;
LABEL_124:
  v49 = 1;
  v50 = 1;
  a1[4] = v105;
  if ( v106 )
    v49 = v106;
  *((_DWORD *)a1 + 10) = v49;
  v51 = (v104 + v49 - 1) & -v49;
  a1[3] = v51;
  if ( v51 == -1 )
  {
LABEL_127:
    v34 = a1[1];
LABEL_128:
    v52 = *a1;
    v53 = *a1 + (v34 << 7);
    if ( v53 != *a1 )
    {
      do
      {
        *(_DWORD *)(v52 + 112) = 0;
        v52 += 128;
        *(_OWORD *)(v52 - 128) = 0;
      }
      while ( v53 != v52 );
    }
    *((_DWORD *)a1 + 10) = 0;
    v50 = 0;
    *(_OWORD *)(a1 + 3) = 0;
    *((_DWORD *)a1 + 11) = v103;
  }
  if ( HIBYTE(v115) )
  {
    setinf(57, (unsigned __int8)v115);
    setinf(67, v114);
  }
  return v50;
}

