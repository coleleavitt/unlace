__int64 __fastcall sub_DCB20(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  int v10; // r14d
  int v11; // ebx
  int v12; // r8d
  int v13; // r9d
  unsigned __int64 *v14; // rax
  unsigned __int64 v15; // rbx
  unsigned __int64 *v16; // rax
  __m128i v17; // xmm0
  unsigned int v19; // eax
  unsigned __int8 v20; // cl
  __int64 v21; // rdx
  unsigned int v22; // r14d
  _DWORD *v23; // rax
  _DWORD *v24; // rbx
  _DWORD *v25; // r13
  int v26; // r8d
  int v27; // r9d
  __int64 v28; // rax
  unsigned __int64 *v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 *v32; // rcx
  __int64 *v33; // rax
  int v34; // eax
  __int64 v35; // rsi
  unsigned __int64 v36; // rdi
  unsigned __int64 v37; // rdx
  __int64 v38; // rdx
  unsigned __int64 v39; // r9
  unsigned __int64 v40; // r8
  unsigned __int64 v41; // r8
  __int64 v42; // r12
  int *v43; // r13
  int v44; // edx
  __int64 v45; // rax
  __int64 *v46; // rdi
  unsigned __int64 *v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rsi
  int *v50; // rdx
  unsigned int *v51; // r12
  unsigned int v52; // ecx
  __int64 v53; // rdi
  __int64 v54; // r14
  __int64 v55; // r8
  __int64 v56; // rdx
  __int64 v57; // rax
  __int64 v58; // r12
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  unsigned __int64 v64; // rsi
  unsigned __int64 v65; // r15
  __int64 v66; // r12
  __int64 v67; // r12
  __int64 *v68; // rdi
  __int64 *v69; // rdi
  unsigned __int64 *v70; // rax
  __m128i v71; // xmm0
  char v72; // al
  char v73; // r12
  __int64 *v74; // rdi
  __int64 *v75; // rdi
  __int64 v76; // rdi
  __int64 v77; // rdi
  __int64 v78; // rdi
  int v79; // [rsp+0h] [rbp-170h]
  __int64 v80; // [rsp+8h] [rbp-168h]
  unsigned __int64 **v81; // [rsp+10h] [rbp-160h]
  __int64 *v82; // [rsp+18h] [rbp-158h]
  __int64 *v83; // [rsp+20h] [rbp-150h]
  __int64 v84; // [rsp+28h] [rbp-148h]
  __int64 v85; // [rsp+30h] [rbp-140h]
  __int64 v86; // [rsp+38h] [rbp-138h]
  __int64 v88; // [rsp+50h] [rbp-120h]
  __int64 v89; // [rsp+58h] [rbp-118h]
  bool v90; // [rsp+60h] [rbp-110h]
  int v91; // [rsp+60h] [rbp-110h]
  int v92; // [rsp+64h] [rbp-10Ch]
  __int64 *v93; // [rsp+68h] [rbp-108h]
  char v94; // [rsp+70h] [rbp-100h]
  __int64 v95; // [rsp+70h] [rbp-100h]
  int v96; // [rsp+88h] [rbp-E8h]
  bool v97; // [rsp+8Ch] [rbp-E4h]
  __int64 v98; // [rsp+90h] [rbp-E0h]
  int v99; // [rsp+98h] [rbp-D8h]
  __int64 v100; // [rsp+98h] [rbp-D8h]
  __int64 v101[2]; // [rsp+A0h] [rbp-D0h] BYREF
  unsigned __int64 *v102; // [rsp+B0h] [rbp-C0h] BYREF
  __int64 v103; // [rsp+B8h] [rbp-B8h]
  int v104; // [rsp+C0h] [rbp-B0h]
  __int64 v105; // [rsp+D0h] [rbp-A0h] BYREF
  __int128 v106; // [rsp+D8h] [rbp-98h]
  int v107; // [rsp+E8h] [rbp-88h]
  __int64 v108; // [rsp+F0h] [rbp-80h] BYREF
  __int128 v109; // [rsp+F8h] [rbp-78h]
  int v110; // [rsp+108h] [rbp-68h]
  __int64 v111; // [rsp+110h] [rbp-60h] BYREF
  __int64 v112; // [rsp+118h] [rbp-58h]
  __int64 v113; // [rsp+120h] [rbp-50h]
  __int128 v114; // [rsp+128h] [rbp-48h]
  unsigned __int64 v115; // [rsp+138h] [rbp-38h]

  v4 = (__int64)&v105;
  v80 = a3;
  v5 = *(_QWORD *)(a1 + 8);
  v115 = __readfsqword(0x28u);
  v6 = *(_QWORD *)a1;
  v110 = 0;
  v105 = 0;
  v107 = 0;
  v108 = 0;
  v102 = nullptr;
  v103 = 0;
  v104 = -1;
  v81 = &v102;
  v82 = &v108;
  v106 = 0;
  v109 = 0;
  v7 = *(_QWORD *)(v5 + 784);
  sub_10C4E0(v7, &v105, &v108, 64, &v102, *(unsigned int *)(v6 + 72));
  v8 = *(_QWORD *)(a1 + 16);
  v101[0] = 0;
  v101[1] = 0;
  v92 = *(_DWORD *)(*(_QWORD *)(v8 + 112) + 80LL);
  if ( !v102 )
    goto LABEL_4;
  v9 = *v102 & 0xFFFFFFFFFFFFFFFCLL;
  if ( v9 )
  {
    if ( (*(_BYTE *)v9 & 2) == 0 )
    {
      v93 = (__int64 *)v102;
      do
      {
        v20 = *(_BYTE *)(v9 + 56);
        v4 = v9 + 24;
        if ( v20 <= 4u || v20 == 5 && *(__int64 *)(v9 + 48) < 0 )
        {
          v9 = *(_QWORD *)(v9 + 16);
        }
        else
        {
          v93 = (__int64 *)v9;
          v9 = *(_QWORD *)(v9 + 8);
        }
      }
      while ( (*(_BYTE *)v9 & 2) == 0 );
      if ( v102 != (unsigned __int64 *)v93 )
        goto LABEL_37;
    }
LABEL_4:
    v89 = 0;
    goto LABEL_5;
  }
  v93 = nullptr;
LABEL_37:
  v89 = 0;
  v83 = (__int64 *)(a1 + 72);
  do
  {
    v98 = (__int64)(v93 + 3);
    if ( *((_BYTE *)v93 + 56) != 5 )
      sub_D6730(v7, v4);
    v7 = (__int64)(v93 + 3);
    v21 = *(_QWORD *)a1;
    v22 = *(_DWORD *)(*(_QWORD *)a1 + 72LL);
    v100 = v93[6];
    v23 = (_DWORD *)v93[3];
    v24 = &v23[v93[4]];
    if ( v23 == v24 )
    {
      if ( a2 == -1 )
      {
        if ( (*(_BYTE *)(v21 + 24) & 8) != 0 )
          goto LABEL_87;
        goto LABEL_172;
      }
      v97 = *(_DWORD *)(v21 + 352) == 1;
LABEL_46:
      if ( (*(_BYTE *)(v21 + 24) & 8) != 0 )
        goto LABEL_47;
      v7 = (__int64)(v93 + 3);
      if ( v23 != v24 )
        goto LABEL_139;
LABEL_81:
      if ( !v97 )
        goto LABEL_47;
      if ( a2 != -1 )
        goto LABEL_83;
LABEL_172:
      if ( (*(_BYTE *)(a1 + 356) & 4) == 0 )
      {
LABEL_83:
        v42 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 784LL);
        v111 = 0;
        v112 = 0;
        v43 = *(int **)v98;
        if ( 4LL * *(_QWORD *)(v98 + 8) )
        {
          do
            sub_5FE10(&v111, *v43++);
          while ( v43 != (int *)(*(_QWORD *)v98 + 4LL * *(_QWORD *)(v98 + 8)) );
        }
        if ( sub_605B0(&v111, 0) )
        {
          qfree(v111);
        }
        else
        {
          v4 = (__int64)&v111;
          v72 = sub_6B8B0(v42, &v111, 0, v22);
          v7 = v111;
          v73 = v72;
          qfree(v111);
          if ( v73 )
          {
            if ( !*(_BYTE *)(*(_QWORD *)(a1 + 16) + 145LL) )
              goto LABEL_165;
            v35 = *(_QWORD *)(v98 + 24) + *(int *)(v98 + 40);
            if ( *(_BYTE *)(v98 + 32) != 5 )
              sub_D6730(v7, v35);
LABEL_69:
            if ( v35 % v92 )
            {
              v30 = *v93;
              v36 = (unsigned __int64)v93;
              v31 = *v93 & 2;
              if ( (*v93 & 2) == 0 )
              {
                v37 = v93[2];
                if ( (*(_BYTE *)v37 & 2) != 0 )
                {
                  v36 = v30 & 0xFFFFFFFFFFFFFFFCLL;
                  v38 = *(_QWORD *)(v30 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v38 & 2) == 0 )
                  {
                    v39 = (unsigned __int64)v93;
                    do
                    {
                      if ( *(_QWORD *)(v36 + 16) != v39 )
                        break;
                      v39 = v36;
                      v40 = v38 & 0xFFFFFFFFFFFFFFFCLL;
                      v38 = *(_QWORD *)(v38 & 0xFFFFFFFFFFFFFFFCLL);
                      v36 = v40;
                    }
                    while ( (v38 & 2) == 0 );
                  }
                }
                else
                {
                  do
                  {
                    v36 = v37;
                    v37 = *(_QWORD *)(v37 + 8);
                  }
                  while ( (*(_BYTE *)v37 & 2) == 0 );
                }
              }
              v29 = v102;
              if ( v102 != (unsigned __int64 *)v36 )
              {
                v41 = v36 + 24;
                if ( *(_BYTE *)(v36 + 56) != 5 )
                  sub_D6730(v36, v35);
                v7 = v35 + v92 - 1;
                v4 = v7 & -v92;
                if ( *(_QWORD *)(v41 + 24) < v4 )
                  goto LABEL_50;
              }
            }
            break;
          }
        }
      }
LABEL_87:
      v97 = 1;
LABEL_47:
      v25 = v24;
LABEL_48:
      v4 = (unsigned int)v100;
      sub_5FB00(v83, v100, *(_DWORD *)(v98 + 40));
      v85 = *(int *)(v98 + 40) + v100;
      v7 = v85;
      v28 = *(_QWORD *)(a1 + 328);
      if ( v28 >= v85 )
        goto LABEL_49;
      v4 = v92;
      v88 = *(int *)(v98 + 40);
      v7 = v100;
      if ( v85 <= v100 )
        goto LABEL_49;
      while ( 1 )
      {
        v44 = v92;
        if ( v88 <= v92 )
          v44 = v88;
        v86 = v100 - v28;
        v4 = v89;
        v96 = v44;
        v84 = v44;
        if ( v44 + v100 - v28 <= v89 )
          goto LABEL_117;
        v45 = *(_QWORD *)a1;
        v111 = 0;
        v112 = 0;
        v113 = 0;
        v114 = 0;
        v46 = &v111;
        sub_11E660(
          (unsigned int)&v111,
          (*(_DWORD *)(*(_QWORD *)(v45 + 64) + 1440LL) + v100)
        & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v45 + 64) + 1496LL) + 24LL) + 16LL),
          v44,
          v44,
          v26,
          v27,
          v79,
          v80,
          (_DWORD)v81,
          (_DWORD)v82,
          (__int64)v83);
        if ( a2 == -1 )
          goto LABEL_131;
        v47 = v102;
        if ( v102 && v103 )
          v47 = (unsigned __int64 *)v102[1];
        if ( v47 != (unsigned __int64 *)v93 )
          goto LABEL_131;
        v48 = 1;
        if ( a2 )
          break;
LABEL_98:
        v49 = *(_QWORD *)(v98 + 8);
        v50 = *(int **)v98;
        v51 = *(unsigned int **)v98;
        if ( !(4 * v49) )
        {
LABEL_141:
          if ( v113 )
          {
            *(_QWORD *)&v114 = 0;
            qfree(v113);
          }
          qfree(v111);
          goto LABEL_5;
        }
        v90 = 0;
        v94 = v48;
        do
        {
          v52 = *v51;
          if ( v25 == v24 || *(_DWORD *)(*(_QWORD *)a1 + 72LL) == v52 )
          {
            v10 = sub_DB510(a1, v100, v96, v52, &v105, &v111, v94);
            if ( v10 )
            {
              if ( v10 == 1 && v97 )
                goto LABEL_141;
              if ( v10 == -1 )
              {
                v53 = v113;
                *(_BYTE *)(a1 + 364) = 1;
                if ( v53 )
                {
                  *(_QWORD *)&v114 = 0;
                  qfree(v53);
                }
                qfree(v111);
                goto LABEL_15;
              }
            }
            else
            {
              if ( !v97 )
                goto LABEL_133;
              v90 = v97;
            }
            v50 = *(int **)v98;
            v49 = *(_QWORD *)(v98 + 8);
          }
          ++v51;
        }
        while ( v51 != (unsigned int *)&v50[v49] );
        if ( !v90 )
          goto LABEL_141;
LABEL_133:
        v62 = -v92;
        if ( v86 <= 0 )
        {
          v86 = 0;
          v4 = 0;
        }
        else
        {
          v4 = (unsigned int)v86;
          if ( *(_BYTE *)(*(_QWORD *)(a1 + 16) + 145LL) )
          {
            v86 &= v62;
            v4 = (unsigned int)v86;
          }
        }
        v89 = v62 & (v86 + v84 + v92 - 1);
        sub_5FB00(v101, v4, (v62 & (v86 + v84 + v92 - 1)) - v4);
        if ( v113 )
        {
          *(_QWORD *)&v114 = 0;
          qfree(v113);
        }
        qfree(v111);
LABEL_117:
        v7 = v92;
        v100 += v92;
        v88 -= v92;
        if ( v85 <= v100 )
          goto LABEL_49;
        v28 = *(_QWORD *)(a1 + 328);
      }
      v95 = 0;
      v54 = *(_QWORD *)a1;
      v91 = 0;
      v55 = *(unsigned int *)(*(_QWORD *)a1 + 352LL);
      if ( (int)v55 > 0 )
      {
        while ( 1 )
        {
          v56 = *(_QWORD *)(v54 + 64);
          v57 = *(unsigned int *)(*(_QWORD *)(v54 + 344) + 4 * v95);
          if ( (unsigned int)v57 >= *(_DWORD *)(v56 + 64) )
            sub_D6750(v46, v95, v56, v48, v55);
          v58 = *(_QWORD *)(*(_QWORD *)(v56 + 528) + 8 * v57);
          v46 = (__int64 *)*(unsigned int *)(v58 + 72);
          if ( (_DWORD)v46 )
          {
            do
            {
              v46 = (__int64 *)v58;
              if ( sub_32BA00(v58) )
                break;
              v59 = *(_QWORD *)(v58 + 352);
              if ( !(_DWORD)v59 )
                goto LABEL_130;
              if ( (int)v59 > 1 )
                break;
              v60 = *(_QWORD *)(v58 + 64);
              v61 = **(unsigned int **)(v58 + 344);
              if ( (unsigned int)v61 >= *(_DWORD *)(v60 + 64) )
              {
                if ( !under_debugger )
                  sub_37DDE0(52719);
                goto LABEL_205;
              }
              v58 = *(_QWORD *)(*(_QWORD *)(v60 + 528) + 8 * v61);
              v48 = *(unsigned int *)(v58 + 72);
            }
            while ( (_DWORD)v48 );
          }
          if ( v91 )
            break;
          v91 = 1;
LABEL_130:
          if ( *(_DWORD *)(v54 + 352) <= (int)++v95 )
            goto LABEL_131;
        }
        LOBYTE(v48) = 1;
        goto LABEL_98;
      }
LABEL_131:
      LOBYTE(v48) = 0;
      goto LABEL_98;
    }
    v25 = (_DWORD *)v93[3];
    v4 = (__int64)(v93 + 3);
    do
    {
      if ( v22 == *v25 )
      {
        v97 = 1;
        if ( a2 != -1 )
LABEL_44:
          v97 = *(_DWORD *)(v21 + 352) == 1;
        if ( v25 != v24 )
          goto LABEL_48;
        goto LABEL_46;
      }
      ++v25;
    }
    while ( v24 != v25 );
    if ( a2 != -1 )
      goto LABEL_44;
    if ( (*(_BYTE *)(v21 + 24) & 8) != 0 )
      goto LABEL_87;
    v97 = 1;
    if ( !*v23 )
      goto LABEL_66;
    while ( 2 )
    {
      if ( v24 == ++v23 )
      {
        v98 = v7;
        goto LABEL_81;
      }
LABEL_139:
      if ( *v23 )
        continue;
      break;
    }
LABEL_66:
    v98 = v7;
    if ( v24 == v23 )
      goto LABEL_81;
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 16) + 145LL) )
    {
      v35 = v100 + *(int *)(v7 + 40);
      goto LABEL_69;
    }
LABEL_165:
    if ( v100 - *(_QWORD *)(a1 + 328) >= v89 )
      break;
LABEL_49:
    v29 = v102;
    v30 = *v93;
    v31 = *v93 & 2;
LABEL_50:
    if ( !v31 )
    {
      v32 = (__int64 *)v93[2];
      if ( (*(_BYTE *)v32 & 2) != 0 )
      {
        v33 = (__int64 *)(v30 & 0xFFFFFFFFFFFFFFFCLL);
        v63 = *v33;
        if ( (*v33 & 2) == 0 )
        {
          v7 = (__int64)v93;
          while ( v7 == v33[2] )
          {
            v7 = (__int64)v33;
            v4 = v63 & 0xFFFFFFFFFFFFFFFCLL;
            v63 = *(_QWORD *)(v63 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v63 & 2) != 0 )
            {
              v93 = (__int64 *)v4;
              goto LABEL_54;
            }
            v33 = (__int64 *)v4;
          }
        }
      }
      else
      {
        do
        {
          v33 = v32;
          v32 = (__int64 *)v32[1];
        }
        while ( (*(_BYTE *)v32 & 2) == 0 );
      }
      v93 = v33;
    }
LABEL_54:
    ;
  }
  while ( v93 != (__int64 *)v29 );
LABEL_5:
  if ( v89 - v80 <= 0 )
    goto LABEL_12;
  v10 = 0;
  v99 = 0;
  while ( 2 )
  {
    v11 = v99 + v80;
    if ( sub_605B0(v101, v99 + v80) )
    {
      v10 = ++v99;
      goto LABEL_9;
    }
    v19 = *(_DWORD *)(a1 + 360);
    if ( v19 <= 0x10 )
    {
      v19 = getinf(99);
      if ( v19 == 176 )
        break;
    }
    else if ( v19 == 176 )
    {
      break;
    }
    if ( v19 != 256
      && (unsigned __int8)getinf_flag(67, 4)
      && !(v11 % v92)
      && ((v11 / v92) & 1) != 0
      && !(unsigned __int8)sub_606E0(v101, v11, v92)
      && (unsigned __int8)sub_60690(v101, v92 + v11, 2 * v92) )
    {
      v99 += v92 + 1;
LABEL_9:
      if ( v99 >= v89 - v80 )
        break;
      continue;
    }
    break;
  }
  if ( v10 <= 0 )
  {
    if ( !v10 )
    {
LABEL_12:
      v10 = 0;
      goto LABEL_13;
    }
    if ( !under_debugger )
      sub_37DDE0(50082);
LABEL_205:
    BUG();
  }
  v34 = sub_CBAB0(0x7D6u, *(_QWORD *)(a1 + 304));
  if ( v34 > 0 && v10 > v34 )
    v10 = v34;
LABEL_13:
  *(_QWORD *)(a1 + 336) = -v92 & (v92 - 1 + v10);
  sub_DB9B0(a1, v81);
  if ( (v10 & (v92 - 1)) != 0 )
  {
    sub_32BE10(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 304), 1, v10, v12, v13);
    v10 &= -v92;
  }
LABEL_15:
  qfree(v101[0]);
  v14 = v102;
  if ( !v102 )
    goto LABEL_20;
  v15 = *v102;
  if ( v103 )
  {
    v64 = v15 & 0xFFFFFFFFFFFFFFFCLL;
    v65 = v15 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v15 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_162:
      *v14 = (unsigned __int64)v14 & 0xFFFFFFFFFFFFFFFCLL | v15 & 3;
      v70 = v102;
      v71 = (__m128i)(unsigned __int64)v102;
      *v102 &= ~1uLL;
      *(__m128i *)(v70 + 1) = _mm_unpacklo_epi64(v71, v71);
      *v102 |= 2u;
      v103 = 0;
      goto LABEL_18;
    }
    v66 = *(_QWORD *)(v64 + 8);
    if ( (*(_BYTE *)v66 & 2) != 0 )
    {
      v67 = *(_QWORD *)(v64 + 16);
      if ( (*(_BYTE *)v67 & 2) != 0 )
        goto LABEL_187;
      goto LABEL_152;
    }
    v74 = *(__int64 **)(v66 + 8);
    if ( (*(_BYTE *)v74 & 2) != 0 )
    {
      v75 = *(__int64 **)(v66 + 16);
      if ( (*(_BYTE *)v75 & 2) != 0 )
      {
LABEL_195:
        v78 = *(_QWORD *)(v66 + 24);
        if ( v78 )
        {
          *(_QWORD *)(v66 + 32) = 0;
          qfree(v78);
        }
        *(_QWORD *)v66 |= 2uLL;
LABEL_181:
        if ( v66 )
          qfree(v66);
        v67 = *(_QWORD *)(v65 + 16);
        if ( (*(_BYTE *)v67 & 2) != 0 )
        {
LABEL_158:
          if ( (*(_BYTE *)v65 & 2) != 0 )
          {
LABEL_159:
            if ( v15 > 3 )
              qfree(v15 & 0xFFFFFFFFFFFFFFFCLL);
            v14 = v102;
            v15 = *v102;
            goto LABEL_162;
          }
LABEL_187:
          v76 = *(_QWORD *)(v65 + 24);
          if ( v76 )
          {
            *(_QWORD *)(v65 + 32) = 0;
            qfree(v76);
          }
          *(_QWORD *)v65 |= 2uLL;
          goto LABEL_159;
        }
LABEL_152:
        v68 = *(__int64 **)(v67 + 8);
        if ( (*(_BYTE *)v68 & 2) != 0 )
        {
          v69 = *(__int64 **)(v67 + 16);
          if ( (*(_BYTE *)v69 & 2) != 0 )
            goto LABEL_191;
        }
        else
        {
          sub_D67D0(v68);
          v69 = *(__int64 **)(v67 + 16);
          if ( (*(_BYTE *)v69 & 2) != 0 )
            goto LABEL_155;
        }
        sub_D67D0(v69);
LABEL_155:
        if ( (*(_BYTE *)v67 & 2) != 0 )
        {
LABEL_156:
          if ( v67 )
            qfree(v67);
          goto LABEL_158;
        }
LABEL_191:
        v77 = *(_QWORD *)(v67 + 24);
        if ( v77 )
        {
          *(_QWORD *)(v67 + 32) = 0;
          qfree(v77);
        }
        *(_QWORD *)v67 |= 2uLL;
        goto LABEL_156;
      }
    }
    else
    {
      sub_D67D0(v74);
      v75 = *(__int64 **)(v66 + 16);
      if ( (*(_BYTE *)v75 & 2) != 0 )
        goto LABEL_180;
    }
    sub_D67D0(v75);
LABEL_180:
    if ( (*(_BYTE *)v66 & 2) != 0 )
      goto LABEL_181;
    goto LABEL_195;
  }
  *v102 = (unsigned __int64)v102 & 0xFFFFFFFFFFFFFFFCLL | *v102 & 3;
  v16 = v102;
  v17 = (__m128i)(unsigned __int64)v102;
  *v102 &= ~1uLL;
  *(__m128i *)(v16 + 1) = _mm_unpacklo_epi64(v17, v17);
  *v102 |= 2u;
LABEL_18:
  if ( v102 )
    qfree(v102);
LABEL_20:
  sub_62900(v82);
  sub_62900(&v105);
  return (unsigned int)v10;
}
