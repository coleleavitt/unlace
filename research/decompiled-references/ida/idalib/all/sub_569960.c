__int64 __fastcall sub_569960(__int64 *a1, double a2, double a3)
{
  int v3; // eax
  char v5; // cl
  char v6; // cl
  __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  __int64 v9; // r8
  unsigned __int64 v10; // r13
  __int64 v11; // rbp
  int v12; // r14d
  unsigned __int64 v13; // rdx
  __int64 v14; // rdi
  unsigned __int64 v15; // r8
  __int64 v16; // rax
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // r8
  char v19; // cl
  int v20; // ecx
  unsigned __int64 v21; // rax
  int v22; // eax
  int v23; // r14d
  char v24; // al
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // rdx
  unsigned int v27; // eax
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rdx
  char v30; // al
  unsigned __int64 v31; // r9
  unsigned __int64 v32; // rdx
  __int64 v33; // rax
  unsigned __int64 v34; // rax
  __int64 v35; // rbx
  unsigned __int64 v36; // rax
  __int64 v37; // r15
  __int64 v38; // rbx
  __int64 v39; // r15
  int v40; // ebp
  char v41; // al
  char v42; // al
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rax
  unsigned __int64 tinfo_property; // rax
  char v49; // di
  char v50; // al
  unsigned __int64 v51; // rdx
  int v52; // edx
  unsigned int v53; // ebx
  unsigned __int64 v54; // rax
  __int64 v55; // rcx
  __int64 i; // rax
  bool v58; // zf
  int v59; // r13d
  unsigned __int64 v60; // rdx
  __int64 v61; // r15
  unsigned __int64 v62; // rsi
  __int64 v63; // rax
  unsigned __int64 v64; // rdx
  __int64 v65; // rdx
  __int64 v66; // rax
  __int64 v67; // rbx
  __int64 v68; // rbp
  __int64 v69; // rdi
  unsigned int v70; // r14d
  __int64 tinfo_size; // rax
  char v72; // al
  char v73; // al
  char v74; // al
  unsigned __int64 v75; // rdx
  int v76; // ebx
  __int64 v77; // rbp
  unsigned __int64 *v78; // rbx
  __m128i v79; // xmm0
  __int64 v80; // rax
  unsigned __int64 v81; // rdx
  unsigned __int64 v82; // rbx
  unsigned __int64 v83; // rax
  signed int v84; // edx
  unsigned __int64 v85; // rcx
  unsigned __int64 v86; // rsi
  unsigned __int64 v87; // rsi
  unsigned __int64 v88; // rcx
  unsigned __int64 v89; // rbx
  unsigned __int64 v90; // rcx
  unsigned __int64 v91; // rbx
  unsigned __int64 v92; // rsi
  int v93; // [rsp+8h] [rbp-120h]
  __int64 v94; // [rsp+8h] [rbp-120h]
  int v95; // [rsp+8h] [rbp-120h]
  char v96; // [rsp+10h] [rbp-118h]
  unsigned __int64 v97; // [rsp+18h] [rbp-110h]
  unsigned __int64 v98; // [rsp+20h] [rbp-108h]
  unsigned __int64 v99; // [rsp+20h] [rbp-108h]
  unsigned __int64 v100; // [rsp+20h] [rbp-108h]
  __int64 v101; // [rsp+20h] [rbp-108h]
  unsigned __int64 v102; // [rsp+20h] [rbp-108h]
  unsigned __int64 v103; // [rsp+20h] [rbp-108h]
  unsigned __int64 v104; // [rsp+20h] [rbp-108h]
  int v105; // [rsp+20h] [rbp-108h]
  unsigned __int64 v106; // [rsp+20h] [rbp-108h]
  __int64 v107; // [rsp+28h] [rbp-100h]
  unsigned __int64 v108; // [rsp+28h] [rbp-100h]
  unsigned __int64 v109; // [rsp+28h] [rbp-100h]
  int v110; // [rsp+28h] [rbp-100h]
  int v111; // [rsp+34h] [rbp-F4h]
  unsigned __int64 v112; // [rsp+38h] [rbp-F0h]
  unsigned __int64 v113; // [rsp+40h] [rbp-E8h]
  unsigned __int64 v114; // [rsp+48h] [rbp-E0h]
  unsigned __int64 v115; // [rsp+60h] [rbp-C8h]
  unsigned __int64 v116; // [rsp+60h] [rbp-C8h]
  unsigned __int64 v117; // [rsp+70h] [rbp-B8h]
  int v118; // [rsp+7Ch] [rbp-ACh]
  unsigned __int64 v119; // [rsp+80h] [rbp-A8h]
  __int16 v120; // [rsp+9Ch] [rbp-8Ch] BYREF
  char v121; // [rsp+9Eh] [rbp-8Ah]
  signed int v122; // [rsp+A0h] [rbp-88h] BYREF
  unsigned int v123; // [rsp+A4h] [rbp-84h] BYREF
  unsigned int v124; // [rsp+A8h] [rbp-80h]
  __int16 v125; // [rsp+ACh] [rbp-7Ch]
  unsigned __int64 v126; // [rsp+B0h] [rbp-78h] BYREF
  unsigned __int64 v127; // [rsp+B8h] [rbp-70h]
  __int64 v128; // [rsp+C0h] [rbp-68h]
  __int64 v129; // [rsp+C8h] [rbp-60h]
  __int64 v130; // [rsp+D0h] [rbp-58h]
  __int64 v131; // [rsp+D8h] [rbp-50h]
  int v132; // [rsp+E0h] [rbp-48h]
  unsigned __int64 v133; // [rsp+E8h] [rbp-40h]

  v133 = __readfsqword(0x28u);
  if ( !a1 )
    return 0;
  v3 = *((_DWORD *)a1 + 11);
  v111 = v3;
  if ( (v3 & 0x400) != 0 )
  {
    v58 = a1[1] == 0;
    *((_BYTE *)a1 + 50) = 0;
    *((_DWORD *)a1 + 11) = v3 & 0xFFFFFF9F;
    if ( v58 )
    {
LABEL_162:
      if ( !*((_DWORD *)a1 + 10) )
        *((_DWORD *)a1 + 10) = 1;
      return 1;
    }
    v59 = 0;
    v60 = 0;
    v61 = 0;
    do
    {
      v67 = 144 * v61 + *a1;
      v68 = *(_QWORD *)v67;
      if ( *(_QWORD *)v67 < v60 )
        return 0;
      v69 = *(_QWORD *)(v67 + 64);
      if ( (*(_BYTE *)(v67 + 64) & 0xF) == 0xE )
      {
        BYTE2(v126) = 0;
        LOWORD(v126) = 0;
        if ( !(unsigned __int8)get_tinfo_details(v69, 14, &v126) )
          return 0;
        v63 = BYTE1(v126);
        v60 = v68 + BYTE1(v126);
      }
      else
      {
        v94 = 144 * v61;
        v70 = (*(_DWORD *)(v67 + 132) & 0x20) == 0 ? 1 : 3;
        tinfo_size = get_tinfo_size(0, *(_QWORD *)(v67 + 64), v70);
        if ( tinfo_size == -1
          || (v61 + 1 < (unsigned __int64)a1[1] ? (v62 = *(_QWORD *)(*a1 + v94 + 144)) : (v62 = 8 * a1[3]),
              v63 = 8 * tinfo_size,
              v60 = v68 + v63,
              v62 < v68 + v63) )
        {
          v64 = *(_QWORD *)(v67 + 8);
          if ( !v64 )
          {
            if ( v61 + 1 >= (unsigned __int64)a1[1] )
              v65 = 8 * a1[3];
            else
              v65 = *(_QWORD *)(*a1 + v94 + 144);
            v64 = v65 - *(_QWORD *)v67;
          }
          sub_6AA520(&v126, *(_QWORD *)(qword_2CCB598 + 1672), v64 >> 3);
          copy_tinfo_t(v67 + 64);
          clear_tinfo_t(&v126);
          v66 = get_tinfo_size(0, *(_QWORD *)(v67 + 64), v70);
          if ( v66 == -1 )
            return 0;
          v63 = 8 * v66;
          v60 = v68 + v63;
        }
      }
      ++v59;
      *(_DWORD *)(v67 + 132) &= ~0x40u;
      *(_DWORD *)(v67 + 128) = 0;
      v61 = v59;
      *(_BYTE *)(v67 + 136) = 0;
      *(_QWORD *)(v67 + 8) = v63;
    }
    while ( v59 < (unsigned __int64)a1[1] );
    v75 = (v60 + 7) >> 3;
    if ( a1[3] >= v75 )
    {
      a1[4] = v75;
      goto LABEL_162;
    }
    return 0;
  }
  v5 = *((_BYTE *)a1 + 50);
  if ( v5 )
  {
    v117 = 1LL << (v5 - 1);
  }
  else
  {
    v117 = (unsigned __int8)getinf(62);
    v111 = *((_DWORD *)a1 + 11);
  }
  v124 = 0;
  v125 = 0;
  if ( (v111 & 0x20) != 0 )
  {
    v124 = getinf(67);
    setinf(67, v124 & 0xFFFFFFFE);
    LOBYTE(v125) = getinf(57);
    setinf(57, (unsigned __int8)v125 & 0xF0 | 1LL);
    HIBYTE(v125) = 1;
  }
  v114 = 0;
  v6 = *((_BYTE *)a1 + 49);
  if ( v6 )
    v114 = 1LL << (v6 - 1);
  v122 = 0;
  v7 = *((unsigned __int8 *)a1 + 51);
  v126 = 0;
  v132 = v111;
  v8 = a1[1];
  v118 = v117;
  v130 = 0;
  v96 = v7;
  v112 = v8;
  if ( !v8 )
  {
    if ( (_BYTE)v7 || (v84 = 0, v83 = 0, !v117) )
    {
      v113 = 0;
      goto LABEL_124;
    }
    v113 = 0;
    goto LABEL_215;
  }
  v107 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v119 = 8LL * (int)v117;
  v97 = 0;
  v93 = 0;
  v113 = 0;
  v112 = 0;
  do
  {
    v37 = *a1;
    v121 = 0;
    v120 = 0;
    v38 = 144 * v11;
    v39 = 144 * v11 + v37;
    v14 = *(_QWORD *)(v39 + 64);
    if ( (*(_BYTE *)(v39 + 64) & 0xF) != 0xE )
    {
      if ( v9 )
      {
        if ( !v97 || (v105 = v9, (getinf(57) & 0xF) == 6) || (getinf(67) & 0x80u) != 0LL )
          v12 = 8;
        else
          v12 = v105;
        if ( (getinf(57) & 0xF) == 6 || (getinf(67) & 0x80u) != 0LL )
        {
          v13 = v10;
        }
        else
        {
          if ( v97 )
          {
            if ( v10 < v97 )
            {
              if ( !under_debugger )
                interr(1138);
              goto LABEL_251;
            }
            v13 = v10 - v97 + ((v97 + v12 - 1) & -v12);
            if ( v13 < v10 )
              sub_561E80(67, v7, a2, a3);
          }
          else
          {
            v13 = v10;
          }
          if ( (_DWORD)v117 && v119 < v12 )
            v12 = 8 * v117;
        }
        v14 = *(_QWORD *)(v39 + 64);
        v97 = 0;
        v15 = (v13 + v12 - 1) & -v12;
      }
      else
      {
        v15 = v10;
      }
      v126 = v15;
      v98 = v15;
      v16 = get_tinfo_size(&v123, v14, (*(_DWORD *)(v39 + 132) & 0x20) == 0 ? 1 : 3);
      v17 = v16;
      if ( v16 == -1 )
        goto LABEL_127;
      v18 = v98;
      if ( v16 && !v123 )
      {
        if ( !under_debugger )
          interr(821);
        goto LABEL_251;
      }
      if ( (v111 & 0x40) != 0 )
        v123 = 1;
      v19 = *(_BYTE *)(v39 + 136);
      if ( (v111 & 0x20) != 0 )
      {
        if ( v19 )
        {
          v20 = 1 << (v19 - 1);
          LODWORD(v21) = v20;
          if ( v20 > v117 )
            LODWORD(v21) = v117;
          if ( !v117 )
            LODWORD(v21) = v20;
          v21 = (int)v21;
          if ( v114 >= (int)v21 )
            v21 = v114;
          v114 = v21;
          v22 = 8;
          if ( v20 <= 8 )
            v22 = v20;
          v23 = v22;
LABEL_34:
          v115 = v98;
          v99 = v17;
          v24 = getinf_flag(3, 4);
          v17 = v99;
          v25 = v115;
          if ( v24 != 1 && v117 && v117 < v23 )
          {
            v50 = getinf(57);
            v17 = v99;
            v25 = v115;
            if ( (v50 & 0xF) != 6 )
            {
              v74 = getinf(67);
              v17 = v99;
              v25 = v115;
              if ( v74 >= 0 )
              {
                v26 = v23;
                if ( (v111 & 0x20) != 0 )
                {
                  v23 = v117;
                  v27 = v123;
                  v28 = 8 * v123;
                  v7 = (unsigned int)v117;
                  v18 = (v115 + 8 * (int)v117 - 1) & (-8 * (int)v117);
                  goto LABEL_42;
                }
                v18 = (v115 + 8 * v23 - 1) & (-8 * v23);
                goto LABEL_38;
              }
            }
            v23 = v117;
          }
          v18 = (v25 + 8 * v23 - 1) & (-8 * v23);
          if ( (v111 & 0x20) != 0 )
          {
LABEL_41:
            v27 = v123;
            v7 = (unsigned int)v23;
            v28 = 8 * v123;
LABEL_42:
            if ( 8 * v117 < v28 && 8 * v117 )
              LODWORD(v28) = 8 * v117;
            v29 = (v18 + (int)v28 - 1) & -(int)v28;
            if ( (unsigned int)v7 < v27 )
              v23 = v27;
            if ( v122 < v27 )
              v122 = v27;
            if ( v96 )
            {
              v47 = v112;
              v116 = v29;
              v103 = v17;
              if ( v112 < v17 )
                v47 = v17;
              v112 = v47;
              v7 = v113;
              tinfo_property = (int)get_tinfo_property(*(_QWORD *)(v39 + 64), 15);
              v32 = v116;
              v31 = v103;
              if ( v113 >= (int)tinfo_property )
                tinfo_property = v113;
              v113 = tinfo_property;
              goto LABEL_55;
            }
            v108 = v29;
            v100 = v17;
            v30 = getinf(57);
            v31 = v100;
            v32 = v108;
            if ( (v30 & 0xF) == 6 )
            {
              v33 = *a1;
            }
            else
            {
              v49 = getinf(67);
              v33 = *a1;
              v31 = v100;
              v32 = v108;
              v7 = *(_DWORD *)(*a1 + v38 + 132) & 0x20;
              if ( (v49 & 0x80) == 0 )
              {
                if ( !(_DWORD)v7 || v11 + 1 != a1[1] && (*(_BYTE *)(v33 + v38 + 276) & 0x20) != 0 )
                  goto LABEL_53;
                goto LABEL_105;
              }
            }
            if ( (*(_BYTE *)(v33 + v38 + 132) & 0x20) == 0 )
            {
LABEL_53:
              v34 = v31;
LABEL_54:
              v10 = v32 + 8 * v34;
              v107 = v123;
LABEL_55:
              v35 = 8 * v31;
              v9 = 0;
              goto LABEL_56;
            }
LABEL_105:
            v7 = (unsigned int)v31;
            v109 = v32;
            v104 = v31;
            LODWORD(v34) = sub_5696F0((_QWORD *)(v39 + 64), v31);
            *((_DWORD *)a1 + 11) |= 0x80u;
            v31 = v104;
            v34 = (int)v34;
            v32 = v109;
            goto LABEL_54;
          }
          v26 = v23;
LABEL_38:
          if ( v114 >= v26 )
            v26 = v114;
          v114 = v26;
          goto LABEL_41;
        }
LABEL_92:
        v27 = v123;
        v23 = v123;
        v28 = 8 * v123;
        v7 = v123;
        goto LABEL_42;
      }
      if ( (*(_BYTE *)(v39 + 132) & 0x40) != 0 )
      {
        v123 = 1;
        if ( !v19 )
        {
          v7 = 1;
          v28 = 8;
          v27 = 1;
          v23 = 1;
          goto LABEL_42;
        }
      }
      else if ( !v19 )
      {
        goto LABEL_92;
      }
      v23 = 1 << (v19 - 1);
      goto LABEL_34;
    }
    v101 = v9;
    if ( !(unsigned __int8)get_tinfo_details(v14, 14, &v120) )
      goto LABEL_127;
    v7 = (__int64)&v120;
    v128 = v101;
    v127 = v97;
    v129 = v107;
    v131 = (int)v117;
    v32 = sub_565F30(&v126, (unsigned __int8 *)&v120, v10, &v122);
    v35 = HIBYTE(v120);
    v9 = v128;
    v97 = v127;
    v10 = HIBYTE(v120) + v32;
    v107 = v129;
    v23 = v129;
    if ( v96 )
    {
      if ( !v128 )
      {
        v44 = HIBYTE(v120) + v32;
        goto LABEL_71;
      }
      if ( !v127
        || (v106 = v32, v110 = v128, v72 = getinf(57), v32 = v106, (v72 & 0xF) == 6)
        || (v73 = getinf(67), v32 = v106, v73 < 0) )
      {
        v40 = 8;
      }
      else
      {
        v40 = v110;
      }
      v102 = v32;
      v41 = getinf(57);
      v32 = v102;
      if ( (v41 & 0xF) == 6 || (v42 = getinf(67), v32 = v102, v42 < 0) )
      {
        v43 = v10;
LABEL_70:
        v7 = v43 + v40 - 1;
        v44 = v7 & -v40;
LABEL_71:
        v45 = v112;
        v46 = v44 >> 3;
        v126 = 0;
        v130 = 0;
        v107 = 0;
        v97 = 0;
        if ( v112 < v46 )
          v45 = v46;
        v112 = v45;
        if ( v113 >= v46 )
          v46 = v113;
        v9 = 0;
        v113 = v46;
        v132 = v111;
        goto LABEL_56;
      }
      if ( !v97 )
      {
        v43 = v10;
LABEL_78:
        if ( (_DWORD)v117 && v119 < v40 )
          v40 = 8 * v117;
        goto LABEL_70;
      }
      if ( v10 >= v97 )
      {
        v43 = v10 - v97 + ((v97 + v40 - 1) & -v40);
        if ( v43 < v10 )
          sub_561E80(67, v10 - v97, a2, a3);
        goto LABEL_78;
      }
      if ( !under_debugger )
        interr(1138);
LABEL_251:
      BUG();
    }
LABEL_56:
    if ( v35 && !v23 )
    {
      if ( !under_debugger )
        interr(863);
      goto LABEL_251;
    }
    *(_QWORD *)(v39 + 8) = v35;
    *(_DWORD *)(v39 + 128) = v23;
    if ( v96 )
      v10 = v32;
    *(_QWORD *)v39 = v32;
    v36 = a1[1];
    v11 = ++v93;
  }
  while ( v93 < v36 );
  if ( v10 == -1 )
    goto LABEL_128;
  if ( !v96 )
  {
    if ( v9 )
    {
      if ( !v97 || (v95 = v9, (getinf(57) & 0xF) == 6) || (getinf(67) & 0x80u) != 0LL )
        v76 = 8;
      else
        v76 = v95;
      if ( (getinf(57) & 0xF) != 6 && (getinf(67) & 0x80u) == 0LL )
      {
        if ( v97 )
        {
          if ( v10 < v97 )
          {
            if ( !under_debugger )
              interr(1138);
            goto LABEL_251;
          }
          if ( v10 - v97 + ((v97 + v76 - 1) & -v76) < v10 )
            sub_561E80(67, v97, a2, a3);
          v10 = v10 - v97 + ((v97 + v76 - 1) & -v76);
        }
        if ( (_DWORD)v117 && v119 < v76 )
          v76 = 8 * v117;
      }
      v10 = (v10 + v76 - 1) & -v76;
      v112 = v10 >> 3;
      v36 = a1[1];
    }
    else
    {
      v112 = v10 >> 3;
    }
    v126 = v10;
    if ( v36 )
    {
      v77 = *a1 + 144 * v36;
      if ( (get_tinfo_property(*(_QWORD *)(v77 - 80), 2) & 0x2F) == 0xD )
      {
        v78 = (unsigned __int64 *)(v77 - 144);
        v79 = _mm_srli_epi64(_mm_loadu_si128((const __m128i *)(v77 - 144)), 3u);
        v112 = _mm_add_epi64(v79, _mm_srli_si128(v79, 8)).m128i_u64[0];
        while ( 1 )
        {
          LODWORD(v80) = get_tinfo_property(v78[8], 15);
          if ( (_DWORD)v80 )
          {
            v80 = (int)v80;
            goto LABEL_190;
          }
          if ( v78 == (unsigned __int64 *)*a1 )
            break;
          v78 -= 18;
        }
        v80 = 0;
LABEL_190:
        v81 = *v78;
        v82 = v117;
        v113 = (v81 >> 3) + v80;
        v83 = v122;
        v84 = v122;
        if ( v117 )
        {
          if ( (v111 & 0x40) != 0 )
            goto LABEL_124;
          if ( v117 > v122 )
            v82 = v122;
          v85 = v82;
          if ( v114 >= v82 )
            v85 = v114;
          v114 = v85;
          goto LABEL_197;
        }
        if ( (v111 & 0x40) != 0 )
          goto LABEL_124;
        v92 = v114;
        if ( v114 < v122 )
          v92 = v122;
        v114 = v92;
LABEL_225:
        if ( !v84 )
          goto LABEL_124;
LABEL_226:
        v118 = v83;
LABEL_200:
        v112 = (v112 + v118 - 1) & -v118;
        goto LABEL_124;
      }
      v83 = v122;
      v87 = v117;
      v84 = v122;
      if ( !v117 )
      {
        v113 = v112;
        if ( (v111 & 0x40) != 0 )
          goto LABEL_124;
        v91 = v114;
        if ( v114 < v122 )
          v91 = v122;
        v114 = v91;
        goto LABEL_225;
      }
      v113 = v112;
      if ( (v111 & 0x40) != 0 )
        goto LABEL_124;
      if ( v117 > v122 )
        v87 = v122;
      v88 = v87;
      if ( v114 >= v87 )
        v88 = v114;
      v114 = v88;
LABEL_197:
      if ( !v84 )
        goto LABEL_124;
      if ( v117 && v117 < v83 )
        goto LABEL_200;
      goto LABEL_226;
    }
    v83 = v122;
    v84 = v122;
    if ( !v117 )
    {
      if ( (v111 & 0x40) != 0 )
        goto LABEL_124;
      v86 = v114;
      if ( v114 < v122 )
        v86 = v122;
      v114 = v86;
      goto LABEL_197;
    }
LABEL_215:
    if ( (v111 & 0x40) != 0 )
      goto LABEL_124;
    v89 = v117;
    if ( v117 > v83 )
      v89 = v83;
    v90 = v89;
    if ( v114 >= v89 )
      v90 = v114;
    v114 = v90;
    goto LABEL_197;
  }
  v51 = v122;
  if ( v117 && v117 <= v122 )
    v51 = v117;
  if ( v114 >= v51 )
    v51 = v114;
  if ( (v111 & 0x40) != 0 )
    v51 = v114;
  v114 = v51;
LABEL_124:
  v52 = 1;
  v53 = 1;
  a1[4] = v113;
  if ( v114 )
    v52 = v114;
  *((_DWORD *)a1 + 10) = v52;
  v54 = (v112 + v52 - 1) & -v52;
  a1[3] = v54;
  if ( v54 == -1 )
  {
LABEL_127:
    v36 = a1[1];
LABEL_128:
    v55 = *a1 + 144 * v36;
    for ( i = *a1; v55 != i; *(_OWORD *)(i - 144) = 0 )
    {
      *(_DWORD *)(i + 128) = 0;
      i += 144;
    }
    v53 = 0;
    *((_DWORD *)a1 + 10) = 0;
    *(_OWORD *)(a1 + 3) = 0;
    *((_DWORD *)a1 + 11) = v111;
  }
  if ( HIBYTE(v125) )
  {
    setinf(57, (unsigned __int8)v125);
    setinf(67, v124);
  }
  return v53;
}
