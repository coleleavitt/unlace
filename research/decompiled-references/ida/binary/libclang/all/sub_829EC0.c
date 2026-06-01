__int64 __fastcall sub_829EC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r12
  char v9; // dl
  unsigned int v10; // r15d
  __int64 v11; // rax
  __int64 v12; // rbp
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rbp
  __int64 v16; // r12
  int v17; // eax
  __int64 v18; // r15
  __int64 *v19; // r14
  unsigned __int64 v20; // rcx
  int v21; // r8d
  __int64 *v22; // rdx
  unsigned int v23; // edi
  __int64 *v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v28; // rdx
  unsigned __int8 **v29; // rax
  int v30; // esi
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rdx
  int v36; // edi
  __int64 v37; // rdx
  _QWORD *v38; // rcx
  __int64 *v39; // r9
  __int64 *i; // rax
  __int64 v41; // rdx
  int v42; // edi
  int v43; // edi
  __int64 v44; // r11
  int v45; // r15d
  _QWORD *v46; // r13
  __int64 v47; // r8
  _QWORD *v48; // rcx
  __int64 v49; // r10
  int v50; // edi
  unsigned int v51; // eax
  __int64 v52; // r8
  int v53; // r10d
  __int64 *v54; // r9
  __int64 v55; // rax
  _QWORD *v56; // rax
  __int64 v57; // rdx
  int v58; // edi
  __int64 v59; // rdx
  _QWORD *v60; // rcx
  __int64 *v61; // r8
  __int64 *v62; // rax
  __int64 v63; // rdx
  int v64; // r9d
  int v65; // r9d
  __int64 v66; // r11
  unsigned int v67; // edi
  _QWORD *v68; // rcx
  __int64 v69; // r10
  int v70; // edi
  int v71; // r9d
  __int64 *v72; // r8
  unsigned int v73; // r13d
  __int64 v74; // rax
  _QWORD *v75; // r15
  int v76; // [rsp+8h] [rbp-50h]
  __int64 v77[8]; // [rsp+18h] [rbp-40h] BYREF

  v7 = a6;
  if ( a6 )
  {
LABEL_2:
    v9 = *(_BYTE *)(a3 + 24);
    if ( (v9 & 1) != 0 )
      goto LABEL_12;
    v10 = 2 * ((*(_BYTE *)(a5 + 28) & 0x7Fu) - 47 <= 2);
    if ( (*(_BYTE *)(a3 + 128) & 1) != 0 )
    {
      v28 = 2259;
    }
    else
    {
      if ( (v9 & 2) == 0
        && (*(_DWORD *)(a3 + 56) == 1 && (v9 & 4) != 0
         || (*(_BYTE *)(a3 + 24) & 8) == 0
         || *(_QWORD *)(*(_QWORD *)(a3 + 48) + 8LL * ((*(_DWORD *)(a3 + 24) >> 4) - 1)) != *(_QWORD *)(a3 + 32)) )
      {
        sub_69F580(v77, a5 & 0xFFFFFFFFFFFFFFFBLL);
        v11 = *(unsigned int *)(a3 + 56);
        v12 = v77[0];
        if ( *(unsigned int *)(a3 + 60) < (unsigned __int64)(v11 + 1) )
        {
          sub_25D6060(a3 + 48, a3 + 64, v11 + 1, 8);
          v11 = *(unsigned int *)(a3 + 56);
        }
        *(_QWORD *)(*(_QWORD *)(a3 + 48) + 8 * v11) = v12;
        v13 = *(_DWORD *)(a3 + 56) + 1;
        *(_DWORD *)(a3 + 56) = v13;
        if ( (*(_BYTE *)(a5 + 28) & 0x7Fu) - 47 <= 2 )
        {
          v14 = *(_QWORD *)(a5 + 48);
          *(_QWORD *)(a3 + 32) = 0;
          *(_QWORD *)(a3 + 40) = v14;
          *(_DWORD *)(a3 + 24) = *(_DWORD *)(a3 + 24) & 7 | (16 * v13);
        }
LABEL_12:
        v15 = *(_QWORD *)(a5 + 128);
        if ( v15 )
        {
LABEL_13:
          v15 = *(_QWORD *)(v15 + 88);
LABEL_14:
          v16 = *(_QWORD *)(v7 + 72);
          v17 = 0;
          v18 = *(unsigned int *)(v16 + 80);
          v19 = *(__int64 **)(v16 + 64);
          if ( (_DWORD)v18 )
          {
            v20 = (unsigned int)(v18 - 1);
            v21 = 1;
            v22 = nullptr;
            v23 = v20 & (((unsigned int)v15 >> 9) ^ ((unsigned int)v15 >> 4));
            v24 = &v19[2 * v23];
            v25 = *v24;
            if ( v15 == *v24 )
            {
LABEL_16:
              v26 = v24[1];
LABEL_17:
              *(_QWORD *)(a3 + 16) += v26;
              return 1;
            }
            while ( v25 != -4096 )
            {
              if ( v25 == -8192 && !v22 )
                v22 = v24;
              v23 = v20 & (v21 + v23);
              v24 = &v19[2 * v23];
              v25 = *v24;
              if ( v15 == *v24 )
                goto LABEL_16;
              ++v21;
            }
            if ( !v22 )
              v22 = v24;
            v30 = *(_DWORD *)(v16 + 72) + 1;
            v17 = 2 * v18;
            if ( 4 * v30 < (unsigned int)(3 * v18) )
            {
              if ( (unsigned int)v18 >> 3 < (int)v18 - *(_DWORD *)(v16 + 76) - v30 )
              {
LABEL_38:
                *(_DWORD *)(v16 + 72) = v30;
                if ( *v22 != -4096 )
                  --*(_DWORD *)(v16 + 76);
                *v22 = v15;
                v26 = 0;
                v22[1] = 0;
                goto LABEL_17;
              }
              v55 = (((((((((v20 | (v20 >> 1)) >> 2) | v20 | (v20 >> 1)) >> 4)
                       | ((v20 | (v20 >> 1)) >> 2)
                       | v20
                       | (v20 >> 1)) >> 8)
                     | ((((v20 | (v20 >> 1)) >> 2) | v20 | (v20 >> 1)) >> 4)
                     | ((v20 | (v20 >> 1)) >> 2)
                     | v20
                     | (v20 >> 1)) >> 16)
                   | ((((((v20 | (v20 >> 1)) >> 2) | v20 | (v20 >> 1)) >> 4)
                     | ((v20 | (v20 >> 1)) >> 2)
                     | v20
                     | (v20 >> 1)) >> 8)
                   | ((((v20 | (v20 >> 1)) >> 2) | v20 | (v20 >> 1)) >> 4)
                   | ((v20 | (v20 >> 1)) >> 2)
                   | v20
                   | (v20 >> 1))
                  + 1;
              if ( (unsigned int)v55 < 0x40 )
                LODWORD(v55) = 64;
              *(_DWORD *)(v16 + 80) = v55;
              v56 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v55, 8);
              v57 = *(unsigned int *)(v16 + 80);
              *(_QWORD *)(v16 + 64) = v56;
              v58 = v57;
              v59 = 16 * v57;
              v60 = &v56[(unsigned __int64)v59 / 8];
              if ( v19 )
              {
                *(_QWORD *)(v16 + 72) = 0;
                v61 = &v19[2 * v18];
                if ( v59 )
                {
                  if ( (v59 & 0x10) == 0 || (*v56 = -4096, v56 += 2, v56 != v60) )
                  {
                    do
                    {
                      *v56 = -4096;
                      v56 += 4;
                      *(v56 - 2) = -4096;
                    }
                    while ( v56 != v60 );
                  }
                }
                v62 = v19;
                do
                {
                  v63 = *v62;
                  if ( *v62 != -8192 && v63 != -4096 )
                  {
                    v64 = *(_DWORD *)(v16 + 80);
                    if ( !v64 )
                    {
                      *(_QWORD *)&dword_0 = *v62;
                      BUG();
                    }
                    v65 = v64 - 1;
                    v66 = *(_QWORD *)(v16 + 64);
                    v67 = v65 & (((unsigned int)v63 >> 9) ^ ((unsigned int)v63 >> 4));
                    v68 = (_QWORD *)(v66 + 16LL * v67);
                    v69 = *v68;
                    if ( v63 != *v68 )
                    {
                      v76 = 1;
                      v75 = nullptr;
                      while ( v69 != -4096 )
                      {
                        if ( v69 == -8192 && !v75 )
                          v75 = v68;
                        v67 = v65 & (v76 + v67);
                        v68 = (_QWORD *)(v66 + 16LL * v67);
                        v69 = *v68;
                        if ( v63 == *v68 )
                          goto LABEL_87;
                        ++v76;
                      }
                      if ( v75 )
                        v68 = v75;
                    }
LABEL_87:
                    *v68 = v63;
                    v68[1] = v62[1];
                    ++*(_DWORD *)(v16 + 72);
                  }
                  v62 += 2;
                }
                while ( v61 != v62 );
                operator delete();
              }
              else
              {
                *(_QWORD *)(v16 + 72) = 0;
                if ( v56 == v60 )
                {
                  v30 = 1;
LABEL_91:
                  if ( v58 )
                  {
                    v70 = v58 - 1;
                    v71 = 1;
                    v72 = nullptr;
                    v73 = v70 & (((unsigned int)v15 >> 9) ^ ((unsigned int)v15 >> 4));
                    v22 = &v60[2 * v73];
                    v74 = *v22;
                    if ( v15 != *v22 )
                    {
                      while ( v74 != -4096 )
                      {
                        if ( v74 == -8192 && !v72 )
                          v72 = v22;
                        v73 = v70 & (v71 + v73);
                        v22 = &v60[2 * v73];
                        v74 = *v22;
                        if ( v15 == *v22 )
                          goto LABEL_38;
                        ++v71;
                      }
                      if ( v72 )
                        v22 = v72;
                    }
                    goto LABEL_38;
                  }
LABEL_129:
                  *(_DWORD *)(v16 + 72) = v30;
                  BUG();
                }
                if ( (v59 & 0x10) == 0 || (*v56 = -4096, v56 += 2, v56 != v60) )
                {
                  do
                  {
                    *v56 = -4096;
                    v56 += 4;
                    *(v56 - 2) = -4096;
                  }
                  while ( v56 != v60 );
                }
              }
              v60 = *(_QWORD **)(v16 + 64);
              v58 = *(_DWORD *)(v16 + 80);
              v30 = *(_DWORD *)(v16 + 72) + 1;
              goto LABEL_91;
            }
          }
          v31 = (unsigned int)(v17 - 1) | ((unsigned __int64)(unsigned int)(v17 - 1) >> 1);
          v32 = (((v31 >> 2) | v31) >> 4) | (v31 >> 2) | v31;
          v33 = ((((v32 >> 8) | v32) >> 16) | (v32 >> 8) | v32) + 1;
          if ( (unsigned int)v33 < 0x40 )
            LODWORD(v33) = 64;
          *(_DWORD *)(v16 + 80) = v33;
          v34 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v33, 8);
          v35 = *(unsigned int *)(v16 + 80);
          *(_QWORD *)(v16 + 64) = v34;
          v36 = v35;
          v37 = 16 * v35;
          v38 = &v34[(unsigned __int64)v37 / 8];
          if ( v19 )
          {
            *(_QWORD *)(v16 + 72) = 0;
            v39 = &v19[2 * (unsigned int)v18];
            if ( v37 )
            {
              if ( (v37 & 0x10) == 0 || (*v34 = -4096, v34 += 2, v34 != v38) )
              {
                do
                {
                  *v34 = -4096;
                  v34 += 4;
                  *(v34 - 2) = -4096;
                }
                while ( v34 != v38 );
              }
            }
            for ( i = v19; v39 != i; i += 2 )
            {
              v41 = *i;
              if ( *i != -4096 && v41 != -8192 )
              {
                v42 = *(_DWORD *)(v16 + 80);
                if ( !v42 )
                {
                  *(_QWORD *)&dword_0 = *i;
                  BUG();
                }
                v43 = v42 - 1;
                v44 = *(_QWORD *)(v16 + 64);
                v45 = 1;
                v46 = nullptr;
                LODWORD(v47) = v43 & (((unsigned int)v41 >> 9) ^ ((unsigned int)v41 >> 4));
                v48 = (_QWORD *)(v44 + 16LL * (unsigned int)v47);
                v49 = *v48;
                if ( v41 != *v48 )
                {
                  while ( v49 != -4096 )
                  {
                    if ( v49 == -8192 && !v46 )
                      v46 = v48;
                    v47 = v43 & (unsigned int)(v47 + v45);
                    v48 = (_QWORD *)(v44 + 16 * v47);
                    v49 = *v48;
                    if ( v41 == *v48 )
                      goto LABEL_55;
                    ++v45;
                  }
                  if ( v46 )
                    v48 = v46;
                }
LABEL_55:
                *v48 = v41;
                v48[1] = i[1];
                ++*(_DWORD *)(v16 + 72);
              }
            }
            operator delete();
          }
          else
          {
            *(_QWORD *)(v16 + 72) = 0;
            if ( v34 == v38 )
            {
              v30 = 1;
LABEL_59:
              if ( v36 )
              {
                v50 = v36 - 1;
                v51 = v50 & (((unsigned int)v15 >> 9) ^ ((unsigned int)v15 >> 4));
                v22 = &v38[2 * v51];
                v52 = *v22;
                if ( v15 != *v22 )
                {
                  v53 = 1;
                  v54 = nullptr;
                  while ( v52 != -4096 )
                  {
                    if ( v52 == -8192 && !v54 )
                      v54 = v22;
                    v51 = v50 & (v53 + v51);
                    v22 = &v38[2 * v51];
                    v52 = *v22;
                    if ( v15 == *v22 )
                      goto LABEL_38;
                    ++v53;
                  }
                  if ( v54 )
                    v22 = v54;
                }
                goto LABEL_38;
              }
              goto LABEL_129;
            }
            if ( (v37 & 0x10) == 0 || (*v34 = -4096, v34 += 2, v34 != v38) )
            {
              do
              {
                *v34 = -4096;
                v34 += 4;
                *(v34 - 2) = -4096;
              }
              while ( v34 != v38 );
            }
          }
          v38 = *(_QWORD **)(v16 + 64);
          v36 = *(_DWORD *)(v16 + 80);
          v30 = *(_DWORD *)(v16 + 72) + 1;
          goto LABEL_59;
        }
LABEL_24:
        sub_8226C0((__int64 *)(*(_QWORD *)(a5 + 104) + 96LL), *(_QWORD *)(a5 + 104));
        v15 = *(_QWORD *)(a5 + 128);
        if ( !v15 )
          goto LABEL_14;
        goto LABEL_13;
      }
      v28 = 2264;
    }
    v29 = (unsigned __int8 **)sub_A2E240(a1, a2, v28, 0);
    if ( v29 )
      sub_823450(v29, v10);
    *(_BYTE *)(a3 + 24) |= 1u;
    *(_DWORD *)(a3 + 56) = 0;
    v15 = *(_QWORD *)(a5 + 128);
    if ( v15 )
      goto LABEL_13;
    goto LABEL_24;
  }
  if ( *(char *)(a4 + 28) >= 0 )
  {
    v7 = sub_AB4240(*(_QWORD *)(a1 + 16), a4);
    goto LABEL_2;
  }
  return 0;
}

