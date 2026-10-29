__int64 __fastcall sub_837240(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // r14
  __int64 v6; // rsi
  __int64 v7; // r13
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // rbp
  unsigned __int64 v13; // rdx
  _DWORD *v14; // rax
  __int64 v15; // rdi
  int v16; // edx
  __int64 v17; // rbp
  __int64 v18; // r15
  __int64 v19; // rbx
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  _DWORD *v22; // rdx
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // r13
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // r12
  __int64 v31; // r12
  int v32; // eax
  unsigned int v33; // edx
  __int64 *v34; // r14
  unsigned __int64 v35; // rsi
  int v36; // r11d
  _QWORD *v37; // rcx
  __int64 v38; // r9
  __int64 *v39; // rax
  __int64 v40; // rdi
  __int64 v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // rax
  unsigned __int64 v44; // rdx
  unsigned int v45; // ebx
  unsigned __int64 v46; // rbp
  unsigned __int64 v47; // rax
  __int64 v48; // r8
  unsigned __int64 v49; // rax
  _QWORD *v51; // rdx
  __int64 v52; // r12
  __int64 v53; // rcx
  __int64 v54; // rdi
  int v55; // eax
  __int64 v56; // r12
  unsigned int v57; // eax
  int v58; // r11d
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  unsigned __int64 v63; // rdi
  _QWORD *v64; // rcx
  __int64 v65; // rdi
  _QWORD *v66; // rax
  __int64 *v67; // r10
  __int64 *v68; // rax
  __int64 v69; // r15
  __int64 v70; // r11
  int v71; // edi
  int v72; // edi
  __int64 v73; // r9
  int v74; // esi
  _QWORD *v75; // r13
  __int64 v76; // rcx
  _QWORD *v77; // rdx
  __int64 v78; // r8
  int v79; // r10d
  __int64 v80; // rdx
  __int64 v81; // rdi
  int v82; // r9d
  unsigned __int64 v83; // rax
  __int64 v84; // rax
  _QWORD *v85; // rax
  __int64 v86; // rdi
  unsigned int v87; // r8d
  int v88; // ecx
  __int64 v89; // rdi
  __int64 *v90; // rax
  __int64 v91; // r15
  __int64 v92; // rsi
  int v93; // r9d
  int v94; // r9d
  __int64 v95; // rbp
  int v96; // ecx
  _QWORD *v97; // r13
  __int64 v98; // rdi
  _QWORD *v99; // rdx
  __int64 v100; // r10
  int v101; // r10d
  int v102; // r9d
  _QWORD *v103; // rdx
  __int64 v104; // rax
  __int64 v105; // rdi
  __int64 v107; // [rsp+8h] [rbp-80h]
  __int64 v108; // [rsp+10h] [rbp-78h]
  __int64 v109; // [rsp+18h] [rbp-70h]
  _QWORD *v110; // [rsp+20h] [rbp-68h]
  __int64 v111; // [rsp+28h] [rbp-60h]
  unsigned int v112; // [rsp+34h] [rbp-54h]
  unsigned int v113; // [rsp+34h] [rbp-54h]
  __int64 v114; // [rsp+38h] [rbp-50h]
  __int64 v115; // [rsp+38h] [rbp-50h]
  __int64 v116; // [rsp+40h] [rbp-48h]

  v5 = a1;
  v109 = sub_B0E890(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL));
  v6 = v109;
  v7 = sub_AB4240(*(_QWORD *)(*a1 + 16LL), v109);
  if ( (*(_BYTE *)(v109 + 28) & 0x7Fu) - 57 <= 2 )
  {
    v8 = *(_QWORD *)(v109 + 104);
    v9 = *(_QWORD *)(v8 + 96);
    v10 = v9 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v9 & 1) != 0 )
    {
      if ( v10 && (v9 & 4) != 0 )
        goto LABEL_10;
    }
    else if ( v10 > 3 && (v9 & 2) != 0 )
    {
      v11 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFCLL);
      v12 = v11[2275];
      if ( v12 )
      {
        v6 = v11[274];
        v11[284] += 24LL;
        v13 = (v6 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v11[275] >= v13 + 24 && v6 )
        {
          v11[274] = v13 + 24;
        }
        else
        {
          v6 = 24;
          v13 = sub_820510((__int64)(v11 + 274), 24, 3);
        }
        *(_QWORD *)v13 = v12;
        *(_DWORD *)(v13 + 8) = 0;
        v9 = v13 | 5;
        *(_QWORD *)(v13 + 16) = v8;
        *(_QWORD *)(v8 + 96) = v13 | 5;
LABEL_10:
        v14 = (_DWORD *)(v9 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v14 )
        {
          v15 = *(_QWORD *)v14;
          v16 = *(_DWORD *)(*(_QWORD *)v14 + 12LL);
          if ( v14[2] != v16 )
          {
            v14[2] = v16;
            v6 = v8;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 144LL))(v15, v8);
          }
        }
        goto LABEL_13;
      }
      *(_QWORD *)(v8 + 96) = v8 & 0xFFFFFFFFFFFFFFFALL | 1;
    }
LABEL_13:
    v108 = *(unsigned int *)(*(_QWORD *)(v109 + 128) + 16LL);
    if ( !*(_DWORD *)(*(_QWORD *)(v109 + 128) + 16LL) )
      goto LABEL_34;
    v107 = v7;
    v17 = 0;
    v110 = v5;
    v111 = a2;
    v18 = v109;
    while ( 1 )
    {
      v19 = *(_QWORD *)(v18 + 104);
      v20 = *(_QWORD *)(v19 + 96);
      v21 = v20 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v20 & 1) != 0 )
      {
        if ( !v21 )
          goto LABEL_19;
      }
      else
      {
        if ( v21 <= 3 || (v20 & 2) == 0 )
          goto LABEL_19;
        v51 = (_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFCLL);
        v52 = v51[2275];
        if ( !v52 )
        {
          *(_QWORD *)(v19 + 96) = v19 & 0xFFFFFFFFFFFFFFFALL | 1;
          goto LABEL_19;
        }
        v53 = v51[274];
        v51[284] += 24LL;
        v21 = (v53 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        v6 = v21 + 24;
        if ( v51[275] >= v21 + 24 && v53 )
        {
          v51[274] = v6;
        }
        else
        {
          v6 = 24;
          v21 = sub_820510((__int64)(v51 + 274), 24, 3);
        }
        *(_QWORD *)v21 = v52;
        *(_DWORD *)(v21 + 8) = 0;
        v20 = v21 | 5;
        *(_QWORD *)(v21 + 16) = v19;
        *(_QWORD *)(v19 + 96) = v21 | 5;
        LOBYTE(v21) = v21 & 0xFA | 4;
      }
      if ( (v21 & 4) != 0 )
      {
        v22 = (_DWORD *)(v20 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v22 )
        {
          v54 = *(_QWORD *)v22;
          v55 = *(_DWORD *)(*(_QWORD *)v22 + 12LL);
          if ( v22[2] != v55 )
          {
            v22[2] = v55;
            v6 = v19;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v54 + 144LL))(v54, v19);
          }
        }
      }
LABEL_19:
      v23 = *(_QWORD *)(v18 + 128);
      if ( (*(_BYTE *)(v23 + 24) & 1) != 0 )
        v24 = sub_7A2E20(v23);
      else
        v24 = *(_QWORD *)(v23 + 24);
      v25 = v24 + 24 * v17;
      v26 = *(_QWORD *)(**(_QWORD **)(v25 + 16) & 0xFFFFFFFFFFFFFFF0LL);
      v27 = *(_QWORD *)(v26 + 8);
      if ( (v27 & 7) != 0 || (v27 & 8) != 0 )
        v26 = sub_B0CF30(**(_QWORD **)(v25 + 16), v6);
      v28 = sub_B0E910(*(_QWORD *)(v26 & 0xFFFFFFFFFFFFFFF0LL));
      v29 = *(_QWORD *)(v28 + 128);
      v30 = v28;
      if ( v29
        || (sub_8226C0((__int64 *)(*(_QWORD *)(v28 + 104) + 96LL), *(_QWORD *)(v28 + 104)),
            (v29 = *(_QWORD *)(v30 + 128)) != 0) )
      {
        v29 = *(_QWORD *)(v29 + 88);
      }
      v31 = *(_QWORD *)(v107 + 72);
      v32 = 0;
      v33 = *(_DWORD *)(v31 + 80);
      v34 = *(__int64 **)(v31 + 64);
      if ( !v33 )
        goto LABEL_74;
      v35 = v33 - 1;
      v36 = 1;
      v37 = nullptr;
      LODWORD(v38) = v35 & (((unsigned int)v29 >> 9) ^ ((unsigned int)v29 >> 4));
      v39 = &v34[2 * (unsigned int)v38];
      v40 = *v39;
      if ( v29 != *v39 )
      {
        while ( v40 != -4096 )
        {
          if ( v40 == -8192 && !v37 )
            v37 = v39;
          v38 = (unsigned int)v35 & ((_DWORD)v38 + v36);
          v39 = &v34[2 * v38];
          v40 = *v39;
          if ( v29 == *v39 )
            goto LABEL_28;
          ++v36;
        }
        if ( !v37 )
          v37 = v39;
        v58 = *(_DWORD *)(v31 + 72) + 1;
        v32 = 2 * v33;
        if ( 4 * v58 < 3 * v33 )
        {
          if ( v33 >> 3 >= v33 - *(_DWORD *)(v31 + 76) - v58 )
          {
            v113 = *(_DWORD *)(v31 + 80);
            v83 = ((((v35 | (v35 >> 1)) >> 2) | v35 | (v35 >> 1)) >> 4) | ((v35 | (v35 >> 1)) >> 2) | v35 | (v35 >> 1);
            v84 = ((((v83 >> 8) | v83) >> 16) | (v83 >> 8) | v83) + 1;
            if ( (unsigned int)v84 < 0x40 )
              LODWORD(v84) = 64;
            *(_DWORD *)(v31 + 80) = v84;
            v85 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v84, 8);
            v86 = *(unsigned int *)(v31 + 80);
            *(_QWORD *)(v31 + 64) = v85;
            v87 = ((unsigned int)v29 >> 9) ^ ((unsigned int)v29 >> 4);
            v88 = v86;
            v89 = 16 * v86;
            v35 = (unsigned __int64)&v85[(unsigned __int64)v89 / 8];
            if ( v34 )
            {
              *(_QWORD *)(v31 + 72) = 0;
              if ( v89 )
              {
                if ( (v89 & 0x10) == 0 || (*v85 = -4096, v85 += 2, v85 != (_QWORD *)v35) )
                {
                  do
                  {
                    *v85 = -4096;
                    v85 += 4;
                    *(v85 - 2) = -4096;
                  }
                  while ( v85 != (_QWORD *)v35 );
                }
              }
              v116 = v25;
              v90 = v34;
              v115 = v18;
              v91 = v17;
              do
              {
                v92 = *v90;
                if ( *v90 != -8192 && v92 != -4096 )
                {
                  v93 = *(_DWORD *)(v31 + 80);
                  if ( !v93 )
                  {
                    *(_QWORD *)&dword_0 = *v90;
                    BUG();
                  }
                  v94 = v93 - 1;
                  v95 = *(_QWORD *)(v31 + 64);
                  v96 = 1;
                  v97 = nullptr;
                  LODWORD(v98) = v94 & (((unsigned int)v92 >> 9) ^ ((unsigned int)v92 >> 4));
                  v99 = (_QWORD *)(v95 + 16LL * (unsigned int)v98);
                  v100 = *v99;
                  if ( *v99 != v92 )
                  {
                    while ( v100 != -4096 )
                    {
                      if ( !v97 && v100 == -8192 )
                        v97 = v99;
                      v98 = v94 & (unsigned int)(v98 + v96);
                      v99 = (_QWORD *)(v95 + 16 * v98);
                      v100 = *v99;
                      if ( v92 == *v99 )
                        goto LABEL_111;
                      ++v96;
                    }
                    if ( v97 )
                      v99 = v97;
                  }
LABEL_111:
                  *v99 = v92;
                  v99[1] = v90[1];
                  ++*(_DWORD *)(v31 + 72);
                }
                v90 += 2;
              }
              while ( &v34[2 * v113] != v90 );
              v17 = v91;
              v25 = v116;
              v18 = v115;
              operator delete();
              v35 = *(_QWORD *)(v31 + 64);
              v88 = *(_DWORD *)(v31 + 80);
              v87 = ((unsigned int)v29 >> 9) ^ ((unsigned int)v29 >> 4);
              v58 = *(_DWORD *)(v31 + 72) + 1;
            }
            else
            {
              *(_QWORD *)(v31 + 72) = 0;
              if ( v85 == (_QWORD *)v35 )
              {
                v58 = 1;
              }
              else
              {
                if ( (v89 & 0x10) == 0 || (*v85 = -4096, v85 += 2, v85 != (_QWORD *)v35) )
                {
                  do
                  {
                    *v85 = -4096;
                    v85 += 4;
                    *(v85 - 2) = -4096;
                  }
                  while ( v85 != (_QWORD *)v35 );
                }
                v35 = *(_QWORD *)(v31 + 64);
                v88 = *(_DWORD *)(v31 + 80);
                v58 = *(_DWORD *)(v31 + 72) + 1;
              }
            }
            if ( !v88 )
            {
LABEL_164:
              *(_DWORD *)(v31 + 72) = v58;
              BUG();
            }
            v101 = v88 - 1;
            v102 = 1;
            v103 = nullptr;
            LODWORD(v104) = (v88 - 1) & v87;
            v37 = (_QWORD *)(v35 + 16LL * (unsigned int)v104);
            v105 = *v37;
            if ( v29 != *v37 )
            {
              while ( v105 != -4096 )
              {
                if ( !v103 && v105 == -8192 )
                  v103 = v37;
                v104 = v101 & (unsigned int)(v104 + v102);
                v37 = (_QWORD *)(v35 + 16 * v104);
                v105 = *v37;
                if ( v29 == *v37 )
                  goto LABEL_70;
                ++v102;
              }
              if ( v103 )
                v37 = v103;
            }
          }
          goto LABEL_70;
        }
LABEL_74:
        v112 = *(_DWORD *)(v31 + 80);
        v59 = (unsigned int)(v32 - 1) | ((unsigned __int64)(unsigned int)(v32 - 1) >> 1);
        v60 = (((v59 >> 2) | v59) >> 4) | (v59 >> 2) | v59;
        v61 = ((((v60 >> 8) | v60) >> 16) | (v60 >> 8) | v60) + 1;
        if ( (unsigned int)v61 < 0x40 )
          LODWORD(v61) = 64;
        *(_DWORD *)(v31 + 80) = v61;
        v62 = sub_25CC9C0(16LL * (unsigned int)v61, 8);
        v63 = *(unsigned int *)(v31 + 80);
        *(_QWORD *)(v31 + 64) = v62;
        v64 = (_QWORD *)v62;
        v35 = v63;
        v65 = 16 * v63;
        v66 = (_QWORD *)(v62 + v65);
        if ( v34 )
        {
          *(_QWORD *)(v31 + 72) = 0;
          v67 = &v34[2 * v112];
          if ( v65 )
          {
            if ( (((_BYTE)v66 - (_BYTE)v64) & 0x10) == 0 || (*v64 = -4096, v64 += 2, v64 != v66) )
            {
              do
              {
                *v64 = -4096;
                v64 += 4;
                *(v64 - 2) = -4096;
              }
              while ( v64 != v66 );
            }
          }
          v68 = v34;
          if ( v34 != v67 )
          {
            v114 = v18;
            v69 = v25;
            do
            {
              v70 = *v68;
              if ( *v68 != -4096 && v70 != -8192 )
              {
                v71 = *(_DWORD *)(v31 + 80);
                if ( !v71 )
                {
                  *(_QWORD *)&dword_0 = *v68;
                  BUG();
                }
                v72 = v71 - 1;
                v73 = *(_QWORD *)(v31 + 64);
                v74 = 1;
                v75 = nullptr;
                LODWORD(v76) = v72 & (((unsigned int)v70 >> 9) ^ ((unsigned int)v70 >> 4));
                v77 = (_QWORD *)(v73 + 16LL * (unsigned int)v76);
                v78 = *v77;
                if ( *v77 != v70 )
                {
                  while ( v78 != -4096 )
                  {
                    if ( v78 == -8192 && !v75 )
                      v75 = v77;
                    v76 = v72 & (unsigned int)(v76 + v74);
                    v77 = (_QWORD *)(v73 + 16 * v76);
                    v78 = *v77;
                    if ( v70 == *v77 )
                      goto LABEL_87;
                    ++v74;
                  }
                  if ( v75 )
                    v77 = v75;
                }
LABEL_87:
                *v77 = v70;
                v77[1] = v68[1];
                ++*(_DWORD *)(v31 + 72);
              }
              v68 += 2;
            }
            while ( v67 != v68 );
            v25 = v69;
            v18 = v114;
          }
          operator delete();
LABEL_91:
          v66 = *(_QWORD **)(v31 + 64);
          v35 = *(unsigned int *)(v31 + 80);
          v58 = *(_DWORD *)(v31 + 72) + 1;
        }
        else
        {
          *(_QWORD *)(v31 + 72) = 0;
          if ( v64 != v66 )
          {
            if ( (((_BYTE)v66 - (_BYTE)v64) & 0x10) == 0 || (*v64 = -4096, v64 += 2, v64 != v66) )
            {
              do
              {
                *v64 = -4096;
                v64 += 4;
                *(v64 - 2) = -4096;
              }
              while ( v64 != v66 );
            }
            goto LABEL_91;
          }
          v58 = 1;
        }
        if ( !(_DWORD)v35 )
          goto LABEL_164;
        v79 = v35 - 1;
        LODWORD(v80) = (v35 - 1) & (((unsigned int)v29 >> 9) ^ ((unsigned int)v29 >> 4));
        v37 = &v66[2 * (unsigned int)v80];
        v81 = *v37;
        if ( *v37 != v29 )
        {
          v82 = 1;
          v35 = 0;
          while ( v81 != -4096 )
          {
            if ( v81 == -8192 && !v35 )
              v35 = (unsigned __int64)v37;
            v80 = v79 & (unsigned int)(v80 + v82);
            v37 = &v66[2 * v80];
            v81 = *v37;
            if ( v29 == *v37 )
              goto LABEL_70;
            ++v82;
          }
          if ( v35 )
            v37 = (_QWORD *)v35;
        }
LABEL_70:
        *(_DWORD *)(v31 + 72) = v58;
        if ( *v37 != -4096 )
          --*(_DWORD *)(v31 + 76);
        *v37 = v29;
        v41 = a4;
        v37[1] = 0;
        goto LABEL_29;
      }
LABEL_28:
      v41 = v39[1] + a4;
LABEL_29:
      v42 = *(_QWORD *)(**(_QWORD **)(v25 + 16) & 0xFFFFFFFFFFFFFFF0LL);
      v43 = *(_QWORD *)(v42 + 8);
      if ( (v43 & 7) != 0 || (v44 = v42 & 0xFFFFFFFFFFFFFFF0LL, (v43 & 8) != 0) )
        v44 = sub_B0CF30(**(_QWORD **)(v25 + 16), v35) & 0xFFFFFFFFFFFFFFF0LL;
      v6 = *(_QWORD *)(v111 + 8) + 56LL * (unsigned int)v17;
      if ( !(unsigned __int8)sub_837240(v110, v6, v44, v41) )
        return 0;
      if ( v108 == ++v17 )
      {
        v7 = v107;
        v5 = v110;
        a2 = v111;
        break;
      }
    }
  }
LABEL_34:
  v45 = 0;
  v46 = sub_7868A0(v109);
  if ( !v46 )
    return 1;
LABEL_35:
  if ( (*(_BYTE *)(v46 + 68) & 1) != 0 )
  {
    v56 = *v5;
    v57 = sub_AC6DA0(v5[13]);
    sub_A2E1A0(v56, v57, 2188, 0);
  }
  else
  {
    v47 = sub_70CF80(*(_QWORD *)(*v5 + 16LL), *(_QWORD *)(*(_QWORD *)(v7 + 48) + 8LL * v45));
    if ( (unsigned __int8)sub_836AC0(
                            (__int64)v5,
                            *(_QWORD *)(a2 + 8) + 56LL * (*(_DWORD *)(a2 + 16) + v45),
                            *(_QWORD *)(v46 + 48),
                            v47 + a4,
                            v48) )
    {
      ++v45;
      while ( 1 )
      {
        v49 = *(_QWORD *)(v46 + 8);
        v46 = v49 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v49 <= 7 )
          return 1;
        if ( (*(_BYTE *)(v46 + 28) & 0x7Fu) - 47 <= 2 )
          goto LABEL_35;
      }
    }
  }
  return 0;
}

