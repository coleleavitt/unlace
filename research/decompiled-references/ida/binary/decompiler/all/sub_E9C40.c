__int64 __fastcall sub_E9C40(__int64 a1, int a2, __int64 a3)
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
  unsigned __int64 v64; // r15
  _BYTE *v65; // rdi
  _BYTE *v66; // rdi
  unsigned __int64 *v67; // rax
  __m128i v68; // xmm0
  char v69; // al
  char v70; // r12
  int v71; // [rsp+0h] [rbp-170h]
  __int64 v72; // [rsp+8h] [rbp-168h]
  unsigned __int64 **v73; // [rsp+10h] [rbp-160h]
  __int64 *v74; // [rsp+18h] [rbp-158h]
  __int64 *v75; // [rsp+20h] [rbp-150h]
  __int64 v76; // [rsp+28h] [rbp-148h]
  __int64 v77; // [rsp+30h] [rbp-140h]
  __int64 v78; // [rsp+38h] [rbp-138h]
  __int64 v80; // [rsp+50h] [rbp-120h]
  __int64 v81; // [rsp+58h] [rbp-118h]
  bool v82; // [rsp+60h] [rbp-110h]
  int v83; // [rsp+60h] [rbp-110h]
  int v84; // [rsp+64h] [rbp-10Ch]
  __int64 *v85; // [rsp+68h] [rbp-108h]
  char v86; // [rsp+70h] [rbp-100h]
  __int64 v87; // [rsp+70h] [rbp-100h]
  int v88; // [rsp+88h] [rbp-E8h]
  bool v89; // [rsp+8Ch] [rbp-E4h]
  __int64 v90; // [rsp+90h] [rbp-E0h]
  int v91; // [rsp+98h] [rbp-D8h]
  __int64 v92; // [rsp+98h] [rbp-D8h]
  __int64 v93[2]; // [rsp+A0h] [rbp-D0h] BYREF
  unsigned __int64 *v94; // [rsp+B0h] [rbp-C0h] BYREF
  __int64 v95; // [rsp+B8h] [rbp-B8h]
  int v96; // [rsp+C0h] [rbp-B0h]
  __int64 v97; // [rsp+D0h] [rbp-A0h] BYREF
  __int128 v98; // [rsp+D8h] [rbp-98h]
  int v99; // [rsp+E8h] [rbp-88h]
  __int64 v100; // [rsp+F0h] [rbp-80h] BYREF
  __int128 v101; // [rsp+F8h] [rbp-78h]
  int v102; // [rsp+108h] [rbp-68h]
  __int64 v103; // [rsp+110h] [rbp-60h] BYREF
  __int64 v104; // [rsp+118h] [rbp-58h]
  __int64 v105; // [rsp+120h] [rbp-50h]
  __int128 v106; // [rsp+128h] [rbp-48h]
  unsigned __int64 v107; // [rsp+138h] [rbp-38h]

  v4 = (__int64)&v97;
  v72 = a3;
  v5 = *(_QWORD *)(a1 + 8);
  v107 = __readfsqword(0x28u);
  v6 = *(_QWORD *)a1;
  v102 = 0;
  v97 = 0;
  v99 = 0;
  v100 = 0;
  v94 = 0;
  v95 = 0;
  v96 = -1;
  v73 = &v94;
  v74 = &v100;
  v98 = 0;
  v101 = 0;
  v7 = *(_QWORD *)(v5 + 784);
  sub_10F7A0(v7, &v97, &v100, 64, &v94, *(unsigned int *)(v6 + 72));
  v8 = *(_QWORD *)(a1 + 16);
  v93[0] = 0;
  v93[1] = 0;
  v84 = *(_DWORD *)(*(_QWORD *)(v8 + 112) + 80LL);
  if ( !v94 )
    goto LABEL_4;
  v9 = *v94 & 0xFFFFFFFFFFFFFFFCLL;
  if ( v9 )
  {
    if ( (*(_BYTE *)v9 & 2) == 0 )
    {
      v85 = (__int64 *)v94;
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
          v85 = (__int64 *)v9;
          v9 = *(_QWORD *)(v9 + 8);
        }
      }
      while ( (*(_BYTE *)v9 & 2) == 0 );
      if ( v94 != (unsigned __int64 *)v85 )
        goto LABEL_37;
    }
LABEL_4:
    v81 = 0;
    goto LABEL_5;
  }
  v85 = 0;
LABEL_37:
  v81 = 0;
  v75 = (__int64 *)(a1 + 72);
  do
  {
    v90 = (__int64)(v85 + 3);
    if ( *((_BYTE *)v85 + 56) != 5 )
      sub_CE680(v7, v4);
    v7 = (__int64)(v85 + 3);
    v21 = *(_QWORD *)a1;
    v22 = *(_DWORD *)(*(_QWORD *)a1 + 72LL);
    v92 = v85[6];
    v23 = (_DWORD *)v85[3];
    v24 = &v23[v85[4]];
    if ( v23 == v24 )
    {
      if ( a2 == -1 )
      {
        if ( (*(_BYTE *)(v21 + 24) & 8) != 0 )
          goto LABEL_87;
        goto LABEL_167;
      }
      v25 = (_DWORD *)v85[3];
      v89 = *(_DWORD *)(v21 + 352) == 1;
LABEL_46:
      if ( (*(_BYTE *)(v21 + 24) & 8) != 0 )
        goto LABEL_47;
      v4 = (__int64)(v85 + 3);
      if ( v23 != v25 )
        goto LABEL_139;
LABEL_81:
      if ( !v89 )
        goto LABEL_47;
      if ( a2 != -1 )
        goto LABEL_83;
LABEL_167:
      if ( (*(_BYTE *)(a1 + 356) & 4) == 0 )
      {
LABEL_83:
        v42 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 784LL);
        v103 = 0;
        v104 = 0;
        v43 = *(int **)v90;
        if ( 4LL * *(_QWORD *)(v90 + 8) )
        {
          do
            sub_63890(&v103, *v43++);
          while ( v43 != (int *)(*(_QWORD *)v90 + 4LL * *(_QWORD *)(v90 + 8)) );
        }
        if ( sub_64030(&v103, 0) )
        {
          qfree();
        }
        else
        {
          v4 = (__int64)&v103;
          v69 = sub_6F170(v42, &v103, 0, v22);
          v7 = v103;
          v70 = v69;
          qfree();
          if ( v70 )
          {
            if ( !*(_BYTE *)(*(_QWORD *)(a1 + 16) + 145LL) )
              goto LABEL_160;
            v35 = *(_QWORD *)(v90 + 24) + *(int *)(v90 + 40);
            if ( *(_BYTE *)(v90 + 32) != 5 )
              sub_CE680(v7, v35);
LABEL_69:
            if ( v35 % v84 )
            {
              v30 = *v85;
              v36 = (unsigned __int64)v85;
              v31 = *v85 & 2;
              if ( (*v85 & 2) == 0 )
              {
                v37 = v85[2];
                if ( (*(_BYTE *)v37 & 2) != 0 )
                {
                  v36 = v30 & 0xFFFFFFFFFFFFFFFCLL;
                  v38 = *(_QWORD *)(v30 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v38 & 2) == 0 )
                  {
                    v39 = (unsigned __int64)v85;
                    do
                    {
                      if ( v39 != *(_QWORD *)(v36 + 16) )
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
              v29 = v94;
              if ( v94 != (unsigned __int64 *)v36 )
              {
                v41 = v36 + 24;
                if ( *(_BYTE *)(v36 + 56) != 5 )
                  sub_CE680(v36, v35);
                v7 = v35 + v84 - 1;
                v4 = v7 & -v84;
                if ( *(_QWORD *)(v41 + 24) < v4 )
                  goto LABEL_50;
              }
            }
            break;
          }
        }
      }
LABEL_87:
      v89 = 1;
LABEL_47:
      v25 = v24;
LABEL_48:
      v4 = (unsigned int)v92;
      sub_63580(v75, v92, *(_DWORD *)(v90 + 40));
      v77 = *(int *)(v90 + 40) + v92;
      v7 = v77;
      v28 = *(_QWORD *)(a1 + 328);
      if ( v28 >= v77 )
        goto LABEL_49;
      v7 = v84;
      v80 = *(int *)(v90 + 40);
      v4 = v92;
      if ( v77 <= v92 )
        goto LABEL_49;
      while ( 1 )
      {
        v44 = v84;
        if ( v80 <= v84 )
          v44 = v80;
        v78 = v92 - v28;
        v4 = v81;
        v88 = v44;
        v76 = v44;
        if ( v44 + v92 - v28 <= v81 )
          goto LABEL_117;
        v45 = *(_QWORD *)a1;
        v103 = 0;
        v104 = 0;
        v105 = 0;
        v106 = 0;
        v46 = &v103;
        sub_120620(
          (unsigned int)&v103,
          (*(_DWORD *)(*(_QWORD *)(v45 + 64) + 1440LL) + v92)
        & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v45 + 64) + 1496LL) + 24LL) + 16LL),
          v44,
          v44,
          v26,
          v27,
          v71,
          v72,
          (_DWORD)v73,
          (_DWORD)v74,
          (__int64)v75);
        if ( a2 == -1 )
          goto LABEL_131;
        v47 = v94;
        if ( v94 && v95 )
          v47 = (unsigned __int64 *)v94[1];
        if ( v47 != (unsigned __int64 *)v85 )
          goto LABEL_131;
        v48 = 1;
        if ( a2 )
          break;
LABEL_98:
        v49 = *(_QWORD *)(v90 + 8);
        v50 = *(int **)v90;
        v51 = *(unsigned int **)v90;
        if ( !(4 * v49) )
        {
LABEL_141:
          if ( v105 )
          {
            *(_QWORD *)&v106 = 0;
            qfree();
          }
          qfree();
          goto LABEL_5;
        }
        v82 = 0;
        v86 = v48;
        do
        {
          v52 = *v51;
          if ( v24 == v25 || *(_DWORD *)(*(_QWORD *)a1 + 72LL) == v52 )
          {
            v10 = sub_E0B50(a1, v92, v88, v52, &v97, &v103, v86);
            if ( v10 )
            {
              if ( v10 == 1 && v89 )
                goto LABEL_141;
              if ( v10 == -1 )
              {
                v53 = v105;
                *(_BYTE *)(a1 + 364) = 1;
                if ( v53 )
                {
                  *(_QWORD *)&v106 = 0;
                  qfree();
                }
                qfree();
                goto LABEL_15;
              }
            }
            else
            {
              if ( !v89 )
                goto LABEL_133;
              v82 = v89;
            }
            v50 = *(int **)v90;
            v49 = *(_QWORD *)(v90 + 8);
          }
          ++v51;
        }
        while ( v51 != (unsigned int *)&v50[v49] );
        if ( !v82 )
          goto LABEL_141;
LABEL_133:
        v4 = v78;
        v62 = -v84;
        if ( v78 <= 0 )
        {
          v78 = 0;
          v4 = 0;
        }
        else if ( *(_BYTE *)(*(_QWORD *)(a1 + 16) + 145LL) )
        {
          v78 &= v62;
          v4 = (unsigned int)v78;
        }
        v81 = v62 & (v78 + v76 + v84 - 1);
        sub_63580(v93, v4, (v62 & (v78 + v76 + v84 - 1)) - v4);
        if ( v105 )
        {
          *(_QWORD *)&v106 = 0;
          qfree();
        }
        qfree();
LABEL_117:
        v7 = v84;
        v92 += v84;
        v80 -= v84;
        if ( v77 <= v92 )
          goto LABEL_49;
        v28 = *(_QWORD *)(a1 + 328);
      }
      v87 = 0;
      v54 = *(_QWORD *)a1;
      v83 = 0;
      v55 = *(unsigned int *)(*(_QWORD *)a1 + 352LL);
      if ( (int)v55 > 0 )
      {
        while ( 1 )
        {
          v56 = *(_QWORD *)(v54 + 64);
          v57 = *(unsigned int *)(*(_QWORD *)(v54 + 344) + 4 * v87);
          if ( (unsigned int)v57 >= *(_DWORD *)(v56 + 64) )
            sub_CE6C0(v46, v87, v56, v48, v55);
          v58 = *(_QWORD *)(*(_QWORD *)(v56 + 528) + 8 * v57);
          v46 = (__int64 *)*(unsigned int *)(v58 + 72);
          if ( (_DWORD)v46 )
          {
            do
            {
              v46 = (__int64 *)v58;
              if ( sub_32D940(v58) )
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
                  sub_37EA20(52719);
                goto LABEL_185;
              }
              v58 = *(_QWORD *)(*(_QWORD *)(v60 + 528) + 8 * v61);
              v48 = *(unsigned int *)(v58 + 72);
            }
            while ( (_DWORD)v48 );
          }
          if ( v83 )
            break;
          v83 = 1;
LABEL_130:
          if ( *(_DWORD *)(v54 + 352) <= (int)++v87 )
            goto LABEL_131;
        }
        LOBYTE(v48) = 1;
        goto LABEL_98;
      }
LABEL_131:
      LOBYTE(v48) = 0;
      goto LABEL_98;
    }
    v25 = (_DWORD *)v85[3];
    do
    {
      if ( v22 == *v25 )
      {
        v89 = 1;
        if ( a2 != -1 )
LABEL_44:
          v89 = *(_DWORD *)(v21 + 352) == 1;
        if ( v24 != v25 )
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
    v89 = 1;
    v4 = (__int64)(v85 + 3);
    if ( !*v23 )
      goto LABEL_66;
    while ( 2 )
    {
      if ( v24 == ++v23 )
      {
        v90 = v4;
        goto LABEL_81;
      }
LABEL_139:
      if ( *v23 )
        continue;
      break;
    }
LABEL_66:
    v90 = v4;
    if ( v24 == v23 )
      goto LABEL_81;
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 16) + 145LL) )
    {
      v35 = v92 + *(int *)(v4 + 40);
      goto LABEL_69;
    }
LABEL_160:
    if ( v92 - *(_QWORD *)(a1 + 328) >= v81 )
      break;
LABEL_49:
    v29 = v94;
    v30 = *v85;
    v31 = *v85 & 2;
LABEL_50:
    if ( !v31 )
    {
      v32 = (__int64 *)v85[2];
      if ( (*(_BYTE *)v32 & 2) != 0 )
      {
        v33 = (__int64 *)(v30 & 0xFFFFFFFFFFFFFFFCLL);
        v63 = *v33;
        if ( (*v33 & 2) == 0 )
        {
          v7 = (__int64)v85;
          while ( v7 == v33[2] )
          {
            v7 = (__int64)v33;
            v4 = v63 & 0xFFFFFFFFFFFFFFFCLL;
            v63 = *(_QWORD *)(v63 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v63 & 2) != 0 )
            {
              v85 = (__int64 *)v4;
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
      v85 = v33;
    }
LABEL_54:
    ;
  }
  while ( v85 != (__int64 *)v29 );
LABEL_5:
  if ( v81 - v72 <= 0 )
    goto LABEL_12;
  v10 = 0;
  v91 = 0;
  while ( 2 )
  {
    v11 = v91 + v72;
    if ( sub_64030(v93, v91 + v72) )
    {
      v10 = ++v91;
      goto LABEL_9;
    }
    v19 = *(_DWORD *)(a1 + 360);
    if ( v19 <= 0x10 )
    {
      v19 = getinf();
      if ( v19 == 176 )
        break;
    }
    else if ( v19 == 176 )
    {
      break;
    }
    if ( v19 != 256
      && (unsigned __int8)getinf_flag()
      && !(v11 % v84)
      && ((v11 / v84) & 1) != 0
      && !(unsigned __int8)sub_64160(v93, v11, v84)
      && (unsigned __int8)sub_64110(v93, v84 + v11, 2 * v84) )
    {
      v91 += v84 + 1;
LABEL_9:
      if ( v91 >= v81 - v72 )
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
      sub_37EA20(50082);
LABEL_185:
    BUG();
  }
  v34 = sub_D3E80();
  if ( v34 > 0 && v10 > v34 )
    v10 = v34;
LABEL_13:
  *(_QWORD *)(a1 + 336) = -v84 & (v84 - 1 + v10);
  sub_E0FF0(a1, v73);
  if ( (v10 & (v84 - 1)) != 0 )
  {
    sub_32DD50(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 304), 1, v10, v12, v13);
    v10 &= -v84;
  }
LABEL_15:
  qfree();
  v14 = v94;
  if ( !v94 )
    goto LABEL_20;
  v15 = *v94;
  if ( v95 )
  {
    v64 = v15 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v15 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_157:
      *v14 = v15 & 3 | (unsigned __int64)v14 & 0xFFFFFFFFFFFFFFFCLL;
      v67 = v94;
      v68 = (__m128i)(unsigned __int64)v94;
      *v94 &= ~1uLL;
      *(__m128i *)(v67 + 1) = _mm_unpacklo_epi64(v68, v68);
      *v94 |= 2u;
      v95 = 0;
      goto LABEL_18;
    }
    v65 = *(_BYTE **)(v64 + 8);
    if ( (*v65 & 2) != 0 )
    {
      v66 = *(_BYTE **)(v64 + 16);
      if ( (*v66 & 2) != 0 )
        goto LABEL_173;
    }
    else
    {
      sub_CFA20((__int64)v65);
      v66 = *(_BYTE **)(v64 + 16);
      if ( (*v66 & 2) != 0 )
        goto LABEL_153;
    }
    sub_CFA20((__int64)v66);
LABEL_153:
    if ( (*(_BYTE *)v64 & 2) != 0 )
    {
LABEL_154:
      if ( v15 > 3 )
        qfree();
      v14 = v94;
      v15 = *v94;
      goto LABEL_157;
    }
LABEL_173:
    if ( *(_QWORD *)(v64 + 24) )
    {
      *(_QWORD *)(v64 + 32) = 0;
      qfree();
    }
    *(_QWORD *)v64 |= 2uLL;
    goto LABEL_154;
  }
  *v94 = *v94 & 3 | (unsigned __int64)v94 & 0xFFFFFFFFFFFFFFFCLL;
  v16 = v94;
  v17 = (__m128i)(unsigned __int64)v94;
  *v94 &= ~1uLL;
  *(__m128i *)(v16 + 1) = _mm_unpacklo_epi64(v17, v17);
  *v94 |= 2u;
LABEL_18:
  if ( v94 )
    qfree();
LABEL_20:
  sub_66380(v74);
  sub_66380(&v97);
  return (unsigned int)v10;
}
