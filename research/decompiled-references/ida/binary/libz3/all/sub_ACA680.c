__int64 __fastcall sub_ACA680(__int64 a1, __int64 **a2, __int64 a3)
{
  __int64 v4; // r14
  _QWORD *v5; // rdi
  int v6; // ecx
  _QWORD *v7; // rdx
  unsigned int v8; // esi
  _QWORD *v9; // rax
  unsigned int v10; // ebx
  __int64 v11; // r12
  void *v12; // rcx
  _QWORD **v13; // rbx
  _QWORD **v14; // r13
  _QWORD *v15; // r12
  void *v16; // r15
  __int64 v17; // rdi
  __int64 v18; // rdi
  int v19; // eax
  char *v20; // rdi
  int v21; // ecx
  __int64 v22; // rsi
  char *v23; // rax
  char *v24; // rdx
  unsigned int v25; // ebx
  __int64 v26; // r12
  __int64 v27; // rcx
  _QWORD *v28; // rax
  _QWORD *v29; // rdx
  __int64 v30; // rax
  char *v31; // rdi
  int v32; // ecx
  __int64 v33; // rsi
  char *v34; // rax
  char *v35; // rdx
  unsigned int v36; // ebx
  __int64 v37; // r12
  __int64 v38; // rcx
  _QWORD *v39; // rax
  _QWORD *v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rax
  _QWORD *v43; // rdi
  int v44; // ecx
  __int64 v45; // rsi
  _QWORD *v46; // rax
  _QWORD *v47; // rdx
  unsigned int v48; // r12d
  size_t v49; // rbx
  _OWORD *v50; // rdx
  _OWORD *v51; // rcx
  _OWORD *v52; // rax
  _QWORD *v53; // rbx
  _QWORD *v54; // r12
  __int64 v55; // rsi
  __int64 v56; // rdi
  bool v57; // zf
  __int64 v58; // r12
  char *v59; // rdi
  int v60; // ecx
  __int64 v61; // rsi
  char *v62; // rax
  char *v63; // rdx
  unsigned int v64; // r13d
  size_t v65; // rbx
  _OWORD *v66; // rdx
  _OWORD *v67; // rcx
  _OWORD *v68; // rax
  _QWORD *v69; // rdi
  int v70; // ecx
  __int64 v71; // rsi
  _QWORD *v72; // rax
  _QWORD *v73; // rdx
  unsigned int v74; // r13d
  size_t v75; // rbx
  _OWORD *v76; // rdx
  _OWORD *v77; // rcx
  _OWORD *v78; // rax
  _QWORD *v79; // rbx
  _QWORD *v80; // r13
  __int64 v81; // rsi
  __int64 v82; // rdi
  __int64 v83; // rbx
  __int64 v84; // r12
  char *v85; // rdi
  int v86; // ecx
  char *v87; // rdx
  unsigned int v88; // esi
  char *v89; // rax
  unsigned int v90; // ebp
  __int64 v91; // r13
  void *v92; // rcx
  __int64 *v93; // r12
  __int64 v94; // rbx
  __int64 v95; // r14
  __int64 v96; // rsi
  __int64 v97; // rbp
  unsigned int v98; // eax
  unsigned int v99; // r15d
  __int64 v100; // rcx
  __int64 v101; // rax
  __int64 *v102; // rax
  __int64 *v103; // r13
  __int64 *v104; // r15
  __int64 v105; // rdi
  __int64 v106; // rbx
  __int64 *v107; // rbp
  __int64 *i; // r13
  __int64 v109; // r14
  __int64 v110; // r15
  _QWORD *v111; // rax
  _QWORD *v112; // r12
  __int64 v113; // rax
  _OWORD *v114; // rax
  _QWORD *v115; // r15
  _QWORD *v116; // r12
  __int64 *v117; // rax
  __int64 v118; // rbp
  __int64 v119; // rbx
  __int64 *v120; // r13
  __int64 *v121; // r14
  __int64 v122; // rdi
  __int64 *v123; // rax
  __int64 *v124; // r13
  __int64 *v125; // r14
  __int64 v126; // r15
  __int64 v127; // rsi
  size_t v129; // rsi
  unsigned int v130; // esi
  size_t v131; // rsi
  size_t v132; // rsi
  __int64 *v133; // [rsp+8h] [rbp-50h]
  __int64 *v134; // [rsp+8h] [rbp-50h]
  __int64 *v137; // [rsp+18h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 32);
  if ( !*(_DWORD *)(v4 + 300) && !*(_DWORD *)(v4 + 304) )
    goto LABEL_15;
  v5 = *(_QWORD **)(v4 + 288);
  v6 = 0;
  v7 = &v5[*(unsigned int *)(v4 + 296)];
  v8 = *(_DWORD *)(v4 + 296);
  v9 = v5;
  if ( v5 != v7 )
  {
    do
    {
      while ( *v9 )
      {
        *v9++ = 0;
        if ( v7 == v9 )
          goto LABEL_8;
      }
      ++v9;
      ++v6;
    }
    while ( v7 != v9 );
LABEL_8:
    if ( v8 > 0x10 && 3 * v8 < 4 * v6 )
    {
      if ( v5 )
      {
        sub_186B220(v5);
        v10 = *(_DWORD *)(v4 + 296);
        *(_QWORD *)(v4 + 288) = 0;
        v10 >>= 1;
        *(_DWORD *)(v4 + 296) = v10;
        v11 = v10;
        v12 = (void *)sub_186B270(8LL * v10);
        if ( !v10 )
        {
LABEL_13:
          *(_QWORD *)(v4 + 288) = v12;
          goto LABEL_14;
        }
      }
      else
      {
        *(_QWORD *)(v4 + 288) = 0;
        *(_DWORD *)(v4 + 296) = v8 >> 1;
        v11 = v8 >> 1;
        v12 = (void *)sub_186B270(8 * v11);
      }
      v12 = memset(v12, 0, 8 * v11);
      goto LABEL_13;
    }
  }
LABEL_14:
  *(_QWORD *)(v4 + 300) = 0;
LABEL_15:
  v13 = *(_QWORD ***)(v4 + 72);
  if ( v13 )
  {
    v14 = &v13[*((unsigned int *)v13 - 1)];
    if ( v13 == v14 )
      goto LABEL_27;
    do
    {
      v15 = *v13;
      if ( *v13 )
      {
        v16 = (void *)v15[7];
        if ( v16 )
        {
          sub_ACC960(v15[7]);
          sub_186B220(v16);
        }
        v17 = v15[6];
        if ( v17 )
          sub_186B220((void *)(v17 - 8));
        v18 = v15[5];
        if ( v18 )
          sub_186B220((void *)(v18 - 8));
        sub_186B220(v15);
      }
      ++v13;
    }
    while ( v14 != v13 );
    v14 = *(_QWORD ***)(v4 + 72);
    if ( v14 )
LABEL_27:
      *((_DWORD *)v14 - 1) = 0;
  }
  v19 = *(_DWORD *)(v4 + 108);
  *(_DWORD *)(v4 + 80) = 0;
  if ( v19 || *(_DWORD *)(v4 + 112) )
  {
    v20 = *(char **)(v4 + 96);
    v21 = 0;
    v22 = *(unsigned int *)(v4 + 104);
    v23 = v20;
    v24 = &v20[32 * v22];
    if ( v20 == v24 )
      goto LABEL_45;
    do
    {
      while ( *((_DWORD *)v23 + 1) )
      {
        *((_DWORD *)v23 + 1) = 0;
        v23 += 32;
        if ( v24 == v23 )
          goto LABEL_35;
      }
      v23 += 32;
      ++v21;
    }
    while ( v24 != v23 );
LABEL_35:
    if ( (unsigned int)v22 <= 0x10 || 3 * (int)v22 >= (unsigned int)(4 * v21) )
      goto LABEL_45;
    if ( v20 )
    {
      sub_186B220(v20);
      v25 = *(_DWORD *)(v4 + 104);
      *(_QWORD *)(v4 + 96) = 0;
      v25 >>= 1;
      *(_DWORD *)(v4 + 104) = v25;
      v26 = v25;
      v27 = sub_186B270(32LL * v25);
      if ( !v25 )
      {
LABEL_44:
        *(_QWORD *)(v4 + 96) = v27;
LABEL_45:
        *(_QWORD *)(v4 + 108) = 0;
        goto LABEL_46;
      }
    }
    else
    {
      *(_QWORD *)(v4 + 96) = 0;
      *(_DWORD *)(v4 + 104) = (unsigned int)v22 >> 1;
      v26 = (unsigned int)v22 >> 1;
      v27 = sub_186B270(32 * v26);
    }
    v28 = (_QWORD *)v27;
    v29 = (_QWORD *)(v27 + 32 * v26);
    do
    {
      *v28 = 0;
      v28 += 4;
      *(v28 - 3) = 0;
    }
    while ( v29 != v28 );
    v30 = v27;
    if ( ((32 * (_BYTE)v26) & 0x20) == 0 || (v30 = v27 + 32, *(_DWORD *)(v27 + 16) = 0, (_QWORD *)(v27 + 32) != v29) )
    {
      do
      {
        *(_DWORD *)(v30 + 16) = 0;
        v30 += 64;
        *(_DWORD *)(v30 - 16) = 0;
      }
      while ( (_QWORD *)v30 != v29 );
    }
    goto LABEL_44;
  }
LABEL_46:
  if ( *(_DWORD *)(v4 + 140) || *(_DWORD *)(v4 + 144) )
  {
    v31 = *(char **)(v4 + 128);
    v32 = 0;
    v33 = *(unsigned int *)(v4 + 136);
    v34 = v31;
    v35 = &v31[32 * v33];
    if ( v31 == v35 )
      goto LABEL_63;
    do
    {
      while ( *((_DWORD *)v34 + 1) )
      {
        *((_DWORD *)v34 + 1) = 0;
        v34 += 32;
        if ( v35 == v34 )
          goto LABEL_53;
      }
      v34 += 32;
      ++v32;
    }
    while ( v35 != v34 );
LABEL_53:
    if ( (unsigned int)v33 <= 0x10 || 3 * (int)v33 >= (unsigned int)(4 * v32) )
      goto LABEL_63;
    if ( v31 )
    {
      sub_186B220(v31);
      v36 = *(_DWORD *)(v4 + 136);
      *(_QWORD *)(v4 + 128) = 0;
      v36 >>= 1;
      *(_DWORD *)(v4 + 136) = v36;
      v37 = v36;
      v38 = sub_186B270(32LL * v36);
      if ( !v36 )
      {
LABEL_62:
        *(_QWORD *)(v4 + 128) = v38;
LABEL_63:
        *(_QWORD *)(v4 + 140) = 0;
        goto LABEL_64;
      }
    }
    else
    {
      *(_QWORD *)(v4 + 128) = 0;
      *(_DWORD *)(v4 + 136) = (unsigned int)v33 >> 1;
      v37 = (unsigned int)v33 >> 1;
      v38 = sub_186B270(32 * v37);
    }
    v39 = (_QWORD *)v38;
    v40 = (_QWORD *)(v38 + 32 * v37);
    do
    {
      *v39 = 0;
      v39 += 4;
      *(v39 - 3) = 0;
    }
    while ( v40 != v39 );
    v41 = v38;
    if ( ((32 * (_BYTE)v37) & 0x20) == 0 || (v41 = v38 + 32, *(_DWORD *)(v38 + 16) = 0, (_QWORD *)(v38 + 32) != v40) )
    {
      do
      {
        *(_DWORD *)(v41 + 16) = 0;
        v41 += 64;
        *(_DWORD *)(v41 - 16) = 0;
      }
      while ( (_QWORD *)v41 != v40 );
    }
    goto LABEL_62;
  }
LABEL_64:
  v42 = *(_QWORD *)(v4 + 264);
  if ( v42 )
    *(_DWORD *)(v42 - 4) = 0;
  if ( !*(_DWORD *)(v4 + 164) && !*(_DWORD *)(v4 + 168) )
    goto LABEL_82;
  v43 = *(_QWORD **)(v4 + 152);
  v44 = 0;
  v45 = *(unsigned int *)(v4 + 160);
  v46 = v43;
  v47 = &v43[2 * v45];
  if ( v43 != v47 )
  {
    do
    {
      while ( *v46 )
      {
        *v46 = 0;
        v46 += 2;
        if ( v47 == v46 )
          goto LABEL_73;
      }
      v46 += 2;
      ++v44;
    }
    while ( v47 != v46 );
LABEL_73:
    if ( (unsigned int)v45 > 0x10 && 3 * (int)v45 < (unsigned int)(4 * v44) )
    {
      if ( v43 )
      {
        sub_186B220(v43);
        v48 = *(_DWORD *)(v4 + 160);
        *(_QWORD *)(v4 + 152) = 0;
        v48 >>= 1;
        *(_DWORD *)(v4 + 160) = v48;
        v49 = v48;
        v50 = (_OWORD *)sub_186B270(v49 * 16);
        if ( !v48 )
        {
LABEL_80:
          *(_QWORD *)(v4 + 152) = v50;
          goto LABEL_81;
        }
      }
      else
      {
        *(_QWORD *)(v4 + 152) = 0;
        v131 = (unsigned int)v45 >> 1;
        *(_DWORD *)(v4 + 160) = v131;
        v49 = v131;
        v50 = (_OWORD *)sub_186B270(16 * v131);
      }
      v51 = &v50[v49];
      v52 = v50;
      if ( ((v49 * 16) & 0x10) == 0 || (v52 = v50 + 1, *v50 = 0, v50 + 1 != v51) )
      {
        do
        {
          *v52 = 0;
          v52 += 2;
          *(v52 - 1) = 0;
        }
        while ( v52 != v51 );
      }
      goto LABEL_80;
    }
  }
LABEL_81:
  *(_QWORD *)(v4 + 164) = 0;
LABEL_82:
  v53 = *(_QWORD **)(v4 + 184);
  if ( v53 )
  {
    v54 = &v53[*((unsigned int *)v53 - 1)];
    if ( v53 >= v54 )
      goto LABEL_90;
    do
    {
      while ( 1 )
      {
        v55 = *v53;
        if ( *v53 )
        {
          v56 = *(_QWORD *)(v4 + 176);
          v57 = (*(_DWORD *)(v55 + 8))-- == 1;
          if ( v57 )
            break;
        }
        if ( ++v53 >= v54 )
          goto LABEL_89;
      }
      sub_15D7BC0(v56, v55);
      ++v53;
    }
    while ( v53 < v54 );
LABEL_89:
    v53 = *(_QWORD **)(v4 + 184);
    if ( v53 )
LABEL_90:
      *((_DWORD *)v53 - 1) = 0;
  }
  v58 = *(_QWORD *)(a1 + 32);
  if ( *(_DWORD *)(v58 + 212) || *(_DWORD *)(v58 + 216) )
  {
    v59 = *(char **)(v58 + 200);
    v60 = 0;
    v61 = *(unsigned int *)(v58 + 208);
    v62 = v59;
    v63 = &v59[16 * v61];
    if ( v59 == v63 )
      goto LABEL_106;
    do
    {
      while ( *(_QWORD *)v62 )
      {
        *(_QWORD *)v62 = 0;
        v62 += 16;
        if ( v63 == v62 )
          goto LABEL_98;
      }
      v62 += 16;
      ++v60;
    }
    while ( v63 != v62 );
LABEL_98:
    if ( (unsigned int)v61 <= 0x10 || 3 * (int)v61 >= (unsigned int)(4 * v60) )
      goto LABEL_106;
    if ( v59 )
    {
      sub_186B220(v59);
      v64 = *(_DWORD *)(v58 + 208);
      *(_QWORD *)(v58 + 200) = 0;
      v64 >>= 1;
      *(_DWORD *)(v58 + 208) = v64;
      v65 = v64;
      v66 = (_OWORD *)sub_186B270(v65 * 16);
      if ( !v64 )
      {
LABEL_105:
        *(_QWORD *)(v58 + 200) = v66;
LABEL_106:
        *(_QWORD *)(v58 + 212) = 0;
        goto LABEL_107;
      }
    }
    else
    {
      *(_QWORD *)(v58 + 200) = 0;
      v132 = (unsigned int)v61 >> 1;
      *(_DWORD *)(v58 + 208) = v132;
      v65 = v132;
      v66 = (_OWORD *)sub_186B270(16 * v132);
    }
    v67 = &v66[v65];
    v68 = v66;
    if ( ((v65 * 16) & 0x10) == 0 || (v68 = v66 + 1, *v66 = 0, v67 != v66 + 1) )
    {
      do
      {
        *v68 = 0;
        v68 += 2;
        *(v68 - 1) = 0;
      }
      while ( v67 != v68 );
    }
    goto LABEL_105;
  }
LABEL_107:
  if ( !*(_DWORD *)(v58 + 236) && !*(_DWORD *)(v58 + 240) )
    goto LABEL_123;
  v69 = *(_QWORD **)(v58 + 224);
  v70 = 0;
  v71 = *(unsigned int *)(v58 + 232);
  v72 = v69;
  v73 = &v69[2 * v71];
  if ( v69 != v73 )
  {
    do
    {
      while ( *v72 )
      {
        *v72 = 0;
        v72 += 2;
        if ( v73 == v72 )
          goto LABEL_114;
      }
      v72 += 2;
      ++v70;
    }
    while ( v73 != v72 );
LABEL_114:
    if ( (unsigned int)v71 > 0x10 && 3 * (int)v71 < (unsigned int)(4 * v70) )
    {
      if ( v69 )
      {
        sub_186B220(v69);
        v74 = *(_DWORD *)(v58 + 232);
        *(_QWORD *)(v58 + 224) = 0;
        v74 >>= 1;
        *(_DWORD *)(v58 + 232) = v74;
        v75 = v74;
        v76 = (_OWORD *)sub_186B270(v75 * 16);
        if ( !v74 )
        {
LABEL_121:
          *(_QWORD *)(v58 + 224) = v76;
          goto LABEL_122;
        }
      }
      else
      {
        *(_QWORD *)(v58 + 224) = 0;
        v129 = (unsigned int)v71 >> 1;
        *(_DWORD *)(v58 + 232) = v129;
        v75 = v129;
        v76 = (_OWORD *)sub_186B270(16 * v129);
      }
      v77 = &v76[v75];
      v78 = v76;
      if ( ((v75 * 16) & 0x10) == 0 || (v78 = v76 + 1, *v76 = 0, v77 != v76 + 1) )
      {
        do
        {
          *v78 = 0;
          v78 += 2;
          *(v78 - 1) = 0;
        }
        while ( v77 != v78 );
      }
      goto LABEL_121;
    }
  }
LABEL_122:
  *(_QWORD *)(v58 + 236) = 0;
LABEL_123:
  v79 = *(_QWORD **)(v58 + 256);
  if ( v79 )
  {
    v80 = &v79[*((unsigned int *)v79 - 1)];
    if ( v79 >= v80 )
      goto LABEL_131;
    do
    {
      while ( 1 )
      {
        v81 = *v79;
        if ( *v79 )
        {
          v82 = *(_QWORD *)(v58 + 248);
          v57 = (*(_DWORD *)(v81 + 8))-- == 1;
          if ( v57 )
            break;
        }
        if ( ++v79 >= v80 )
          goto LABEL_130;
      }
      sub_15D7BC0(v82, v81);
      ++v79;
    }
    while ( v79 < v80 );
LABEL_130:
    v79 = *(_QWORD **)(v58 + 256);
    if ( v79 )
LABEL_131:
      *((_DWORD *)v79 - 1) = 0;
  }
  *(_QWORD *)(v58 + 192) = a3;
  v83 = *(_QWORD *)(a1 + 32);
  v84 = *(_QWORD *)(a1 + 16);
  if ( *(_DWORD *)(v83 + 300) || *(_DWORD *)(v83 + 304) )
  {
    v85 = *(char **)(v83 + 288);
    v86 = 0;
    v87 = &v85[8 * *(unsigned int *)(v83 + 296)];
    v88 = *(_DWORD *)(v83 + 296);
    v89 = v85;
    if ( v85 == v87 )
      goto LABEL_145;
    do
    {
      while ( *(_QWORD *)v89 )
      {
        *(_QWORD *)v89 = 0;
        v89 += 8;
        if ( v87 == v89 )
          goto LABEL_139;
      }
      v89 += 8;
      ++v86;
    }
    while ( v87 != v89 );
LABEL_139:
    if ( v88 <= 0x10 || 3 * v88 >= 4 * v86 )
      goto LABEL_145;
    if ( v85 )
    {
      sub_186B220(v85);
      v90 = *(_DWORD *)(v83 + 296);
      *(_QWORD *)(v83 + 288) = 0;
      v90 >>= 1;
      *(_DWORD *)(v83 + 296) = v90;
      v91 = v90;
      v92 = (void *)sub_186B270(8LL * v90);
      if ( !v90 )
      {
LABEL_144:
        *(_QWORD *)(v83 + 288) = v92;
LABEL_145:
        *(_QWORD *)(v83 + 300) = 0;
        goto LABEL_146;
      }
    }
    else
    {
      *(_QWORD *)(v83 + 288) = 0;
      v130 = v88 >> 1;
      v91 = v130;
      *(_DWORD *)(v83 + 296) = v130;
      v92 = (void *)sub_186B270(8LL * v130);
    }
    v92 = memset(v92, 0, 8 * v91);
    goto LABEL_144;
  }
LABEL_146:
  sub_8E8210(v84, v83 + 288);
  v93 = *a2;
  if ( *a2 )
  {
    v133 = &v93[*((unsigned int *)v93 - 1)];
    if ( v93 == v133 )
    {
      v106 = *(_QWORD *)(a1 + 32);
      v107 = *(__int64 **)(v106 + 72);
      if ( !v107 )
      {
LABEL_167:
        v137 = &v93[*((unsigned int *)v93 - 1)];
        if ( v137 != v93 )
        {
          v134 = v93;
          do
          {
            v116 = (_QWORD *)sub_AC93B0(a1, *v134);
            v117 = (__int64 *)v116[14];
            if ( v117 )
            {
              v118 = *(_QWORD *)(a1 + 16);
              v119 = *(_QWORD *)(a1 + 32);
              v120 = &v117[*((unsigned int *)v117 - 1)];
              if ( v117 != v120 )
              {
                v121 = (__int64 *)v116[14];
                do
                {
                  v122 = *v121++;
                  (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v122 + 48LL))(
                    v122,
                    v116[2],
                    v119,
                    v118);
                }
                while ( v120 != v121 );
                v123 = (__int64 *)v116[14];
                if ( v123 )
                {
                  v124 = &v123[*((unsigned int *)v123 - 1)];
                  if ( v123 != v124 )
                  {
                    v125 = (__int64 *)v116[14];
                    do
                    {
                      v126 = *v125++;
                      sub_AC8710(v116[11]);
                      (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v126 + 56LL))(
                        v126,
                        v116[2],
                        v119,
                        v118);
                    }
                    while ( v124 != v125 );
                  }
                }
              }
            }
            ++v134;
          }
          while ( v137 != v134 );
        }
        goto LABEL_178;
      }
    }
    else
    {
      do
      {
        v94 = sub_AC93B0(a1, *v93);
        v95 = *(_QWORD *)(a1 + 16);
        v96 = *(_QWORD *)(v94 + 16);
        v97 = *(_QWORD *)(a1 + 32);
        v98 = *(_DWORD *)(v96 + 20);
        if ( v98 )
        {
          v99 = 0;
          do
          {
            v100 = v99;
            v101 = v98 - v99++ - 1;
            sub_ACDB80(v97, v97 + 88, v96, v100, *(_QWORD *)(v96 + 8 * v101 + 80));
            v96 = *(_QWORD *)(v94 + 16);
            v98 = *(_DWORD *)(v96 + 20);
          }
          while ( v99 < v98 );
        }
        v102 = *(__int64 **)(v94 + 112);
        if ( v102 )
        {
          v103 = &v102[*((unsigned int *)v102 - 1)];
          if ( v102 != v103 )
          {
            v104 = *(__int64 **)(v94 + 112);
            while ( 1 )
            {
              v105 = *v104++;
              (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v105 + 40LL))(v105, v96, v97, v95);
              if ( v103 == v104 )
                break;
              v96 = *(_QWORD *)(v94 + 16);
            }
          }
        }
        ++v93;
      }
      while ( v133 != v93 );
      v106 = *(_QWORD *)(a1 + 32);
      v107 = *(__int64 **)(v106 + 72);
      if ( !v107 )
        goto LABEL_166;
    }
  }
  else
  {
    v106 = *(_QWORD *)(a1 + 32);
    v127 = a1;
    v107 = *(__int64 **)(v106 + 72);
    if ( !v107 )
      return sub_AD9200(v106, v127 + 112);
  }
  for ( i = &v107[*((unsigned int *)v107 - 1)]; i != v107; *(_QWORD *)(v109 + 56) = v112 )
  {
    while ( 1 )
    {
      v109 = *v107;
      if ( !*(_QWORD *)(*v107 + 8) )
      {
        v110 = *(_QWORD *)(v106 + 8);
        v111 = (_QWORD *)sub_186B270(0x50u);
        *v111 = v110;
        v112 = v111;
        v113 = sub_186B270(0x80u);
        *((_DWORD *)v112 + 6) = 0;
        *(_QWORD *)v113 = 0;
        *(_DWORD *)(v113 + 8) = 0;
        *(_QWORD *)(v113 + 16) = 0;
        *(_DWORD *)(v113 + 24) = 0;
        *(_QWORD *)(v113 + 32) = 0;
        *(_DWORD *)(v113 + 40) = 0;
        *(_QWORD *)(v113 + 48) = 0;
        *(_DWORD *)(v113 + 56) = 0;
        *(_QWORD *)(v113 + 64) = 0;
        *(_DWORD *)(v113 + 72) = 0;
        *(_QWORD *)(v113 + 80) = 0;
        *(_DWORD *)(v113 + 88) = 0;
        *(_QWORD *)(v113 + 96) = 0;
        *(_DWORD *)(v113 + 104) = 0;
        *(_QWORD *)(v113 + 112) = 0;
        *(_DWORD *)(v113 + 120) = 0;
        v112[1] = v113;
        v112[2] = 8;
        v114 = (_OWORD *)sub_186B270(0x80u);
        v112[4] = v114;
        v115 = *(_QWORD **)(v109 + 56);
        *v114 = 0;
        v114[1] = 0;
        v114[2] = 0;
        v114[3] = 0;
        v114[4] = 0;
        v114[5] = 0;
        v114[6] = 0;
        v114[7] = 0;
        *((_DWORD *)v112 + 12) = 0;
        v112[5] = 8;
        v112[8] = 0;
        v112[9] = 0;
        if ( v112 != v115 )
          break;
      }
      if ( i == ++v107 )
        goto LABEL_166;
    }
    if ( v115 )
    {
      sub_ACC960(v115);
      sub_186B220(v115);
    }
    ++v107;
  }
LABEL_166:
  v93 = *a2;
  if ( *a2 )
    goto LABEL_167;
LABEL_178:
  v106 = *(_QWORD *)(a1 + 32);
  v127 = a1;
  return sub_AD9200(v106, v127 + 112);
}

