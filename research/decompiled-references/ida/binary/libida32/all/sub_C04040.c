__int64 __fastcall sub_C04040(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  __int64 v7; // r12
  __int64 v8; // rbx
  char v9; // al
  __int64 v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rbp
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rbp
  __int64 v17; // r12
  unsigned int v18; // r15d
  __int64 *v19; // r13
  unsigned __int64 v20; // rsi
  unsigned int v21; // ecx
  __int64 *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int8 **v26; // rax
  int v27; // edi
  __int64 v28; // rsi
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  _QWORD *v33; // rdx
  int v34; // r10d
  __int64 *v35; // r9
  _QWORD *v36; // rcx
  __int64 *v37; // rdx
  int i; // r14d
  __int64 v39; // rcx
  unsigned int v40; // r8d
  _QWORD *v41; // rdi
  __int64 v42; // r11
  __int64 v43; // rsi
  int v44; // r8d
  unsigned int v45; // edi
  unsigned __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rcx
  _QWORD *v50; // rdx
  int v51; // r9d
  _QWORD *v52; // rcx
  __int64 *v53; // rdx
  int v54; // r11d
  __int64 v55; // rcx
  unsigned int v56; // edi
  _QWORD *v57; // rsi
  __int64 v58; // r10
  __int64 v59; // rsi
  int v60; // edi
  unsigned int v61; // r14d
  __int64 *v62; // r8
  int v63; // r9d
  _QWORD *v64; // rcx
  _QWORD *v65; // rdx
  _QWORD *v66; // rcx
  _QWORD *v67; // rdx
  _QWORD *v68; // r15
  __int64 *v69; // r9
  int v70; // r10d
  int v71; // [rsp+8h] [rbp-60h]
  _QWORD *v72; // [rsp+8h] [rbp-60h]
  int v73; // [rsp+10h] [rbp-58h]
  __int64 v74[8]; // [rsp+28h] [rbp-40h] BYREF

  v6 = a6;
  v7 = a5;
  v8 = a3;
  if ( a6 )
  {
LABEL_2:
    v9 = *(_BYTE *)(v8 + 24);
    v10 = 2LL * ((*(_BYTE *)(v7 + 28) & 0x7Fu) - 49 < 3);
    if ( (v9 & 1) != 0 )
      goto LABEL_12;
    v11 = 2461;
    if ( (*(_BYTE *)(v8 + 128) & 1) == 0 )
    {
      if ( (v9 & 2) == 0
        && (*(_DWORD *)(v8 + 56) == 1 && (v9 & 4) != 0
         || (v9 & 8) == 0
         || *(_QWORD *)(*(_QWORD *)(v8 + 48) + 8LL * ((*(_DWORD *)(v8 + 24) >> 4) - 1)) != *(_QWORD *)(v8 + 32)) )
      {
        sub_A2B940(v74, v7 & 0xFFFFFFFFFFFFFFFBLL);
        v12 = *(unsigned int *)(v8 + 56);
        a4 = *(unsigned int *)(v8 + 60);
        v13 = v74[0];
        if ( v12 + 1 > a4 )
        {
          sub_22134E0(v8 + 48, v8 + 64, v12 + 1, 8);
          v12 = *(unsigned int *)(v8 + 56);
        }
        *(_QWORD *)(*(_QWORD *)(v8 + 48) + 8 * v12) = v13;
        v14 = *(_DWORD *)(v8 + 56) + 1;
        *(_DWORD *)(v8 + 56) = v14;
        a3 = (*(_BYTE *)(v7 + 28) & 0x7Fu) - 49;
        if ( (unsigned int)a3 <= 2 )
        {
          v15 = *(_QWORD *)(v7 + 48);
          *(_BYTE *)(v8 + 24) &= ~8u;
          *(_QWORD *)(v8 + 32) = 0;
          *(_QWORD *)(v8 + 40) = v15;
          a3 = *(_DWORD *)(v8 + 24) & 0xF;
          *(_DWORD *)(v8 + 24) = a3 | (16 * v14);
        }
LABEL_12:
        v16 = *(_QWORD *)(v7 + 128);
        if ( v16 )
        {
LABEL_13:
          v16 = *(_QWORD *)(v16 + 88);
LABEL_14:
          v17 = *(_QWORD *)(v6 + 72);
          v18 = *(_DWORD *)(v17 + 80);
          v19 = *(__int64 **)(v17 + 64);
          if ( !v18 )
            goto LABEL_45;
          v20 = v18 - 1;
          v21 = v20 & (((unsigned int)v16 >> 9) ^ ((unsigned int)v16 >> 4));
          v22 = &v19[2 * v21];
          v23 = *v22;
          if ( v16 == *v22 )
          {
LABEL_16:
            v24 = v22[1];
LABEL_17:
            *(_QWORD *)(v8 + 16) += v24;
            return 1;
          }
          v27 = 1;
          a5 = 0;
          if ( v23 != -4096 )
          {
            while ( 1 )
            {
              if ( v23 == -8192 && !a5 )
                a5 = (__int64)v22;
              a6 = (unsigned int)(v27 + 1);
              v21 = v20 & (v27 + v21);
              v22 = &v19[2 * v21];
              v23 = *v22;
              if ( v16 == *v22 )
                goto LABEL_16;
              if ( v23 == -4096 )
                break;
              ++v27;
            }
            if ( a5 )
              v22 = (__int64 *)a5;
          }
          a4 = (unsigned int)(*(_DWORD *)(v17 + 72) + 1);
          if ( 4 * (int)a4 < 3 * v18 )
          {
            if ( v18 - *(_DWORD *)(v17 + 76) - (unsigned int)a4 > v18 >> 3 )
            {
LABEL_31:
              v28 = *v22;
              goto LABEL_32;
            }
            v46 = (((((v20 >> 1) | v20 | (((v20 >> 1) | v20) >> 2)) >> 4) | (v20 >> 1) | v20 | (((v20 >> 1) | v20) >> 2)) >> 8)
                | (((v20 >> 1) | v20 | (((v20 >> 1) | v20) >> 2)) >> 4)
                | (v20 >> 1)
                | v20
                | (((v20 >> 1) | v20) >> 2);
            v47 = ((v46 >> 16) | v46) + 1;
            if ( (unsigned int)v47 < 0x40 )
              LODWORD(v47) = 64;
            *(_DWORD *)(v17 + 80) = v47;
            v48 = sub_220C370(16LL * (unsigned int)v47, 8, 64, a4, a5, a6);
            *(_QWORD *)(v17 + 64) = v48;
            if ( v19 )
            {
              v49 = *(unsigned int *)(v17 + 80);
              v50 = (_QWORD *)v48;
              *(_QWORD *)(v17 + 72) = 0;
              v51 = v49;
              v52 = (_QWORD *)(v48 + 16 * v49);
              if ( (_QWORD *)v48 != v52 )
              {
                do
                {
                  *v50 = -4096;
                  v50 += 2;
                }
                while ( v52 != v50 );
              }
              v53 = v19;
              v54 = v51 - 1;
              do
              {
                v55 = *v53;
                if ( *v53 != -8192 && v55 != -4096 )
                {
                  if ( !v51 )
                  {
                    *(_QWORD *)&dword_0 = *v53;
                    BUG();
                  }
                  v56 = v54 & (((unsigned int)v55 >> 9) ^ ((unsigned int)v55 >> 4));
                  v57 = (_QWORD *)(v48 + 16LL * v56);
                  v58 = *v57;
                  if ( v55 != *v57 && v58 != -4096 )
                  {
                    v73 = 1;
                    v72 = nullptr;
                    while ( 1 )
                    {
                      if ( !v72 )
                      {
                        if ( v58 != -8192 )
                          v57 = nullptr;
                        v72 = v57;
                      }
                      v56 = v54 & (v73 + v56);
                      v57 = (_QWORD *)(v48 + 16LL * v56);
                      v58 = *v57;
                      if ( v55 == *v57 )
                        break;
                      if ( v58 == -4096 )
                      {
                        if ( v72 )
                          v57 = v72;
                        break;
                      }
                      ++v73;
                    }
                  }
                  *v57 = v55;
                  v57[1] = v53[1];
                  ++*(_DWORD *)(v17 + 72);
                }
                v53 += 2;
              }
              while ( &v19[2 * v18] != v53 );
              operator delete();
              v48 = *(_QWORD *)(v17 + 64);
              LODWORD(v59) = *(_DWORD *)(v17 + 80);
              LODWORD(a4) = *(_DWORD *)(v17 + 72) + 1;
            }
            else
            {
              *(_QWORD *)(v17 + 72) = 0;
              v59 = *(unsigned int *)(v17 + 80);
              v66 = (_QWORD *)(v48 + 16 * v59);
              if ( (_QWORD *)v48 != v66 )
              {
                v67 = (_QWORD *)v48;
                do
                {
                  *v67 = -4096;
                  v67 += 2;
                }
                while ( v66 != v67 );
              }
              LODWORD(a4) = 1;
            }
            if ( (_DWORD)v59 )
            {
              v60 = v59 - 1;
              v61 = (v59 - 1) & (((unsigned int)v16 >> 9) ^ ((unsigned int)v16 >> 4));
              v22 = (__int64 *)(v48 + 16LL * v61);
              v28 = *v22;
              if ( v16 != *v22 )
              {
                if ( v28 != -4096 )
                {
                  v62 = (__int64 *)(v48 + 16LL * v61);
                  v63 = 1;
                  v22 = nullptr;
                  while ( 1 )
                  {
                    if ( !v22 && v28 == -8192 )
                      v22 = v62;
                    v61 = v60 & (v63 + v61);
                    v62 = (__int64 *)(v48 + 16LL * v61);
                    v28 = *v62;
                    if ( v16 == *v62 )
                    {
                      v22 = (__int64 *)(v48 + 16LL * v61);
                      goto LABEL_32;
                    }
                    if ( v28 == -4096 )
                      break;
                    ++v63;
                  }
                  if ( v22 )
                    goto LABEL_31;
                  v22 = (__int64 *)(v48 + 16LL * v61);
                }
LABEL_61:
                *(_DWORD *)(v17 + 72) = a4;
LABEL_34:
                *v22 = v16;
                v24 = 0;
                v22[1] = 0;
                goto LABEL_17;
              }
              goto LABEL_32;
            }
          }
          else
          {
LABEL_45:
            v29 = (((((((2 * v18 - 1) | ((unsigned __int64)(2 * v18 - 1) >> 1)) >> 2)
                    | (2 * v18 - 1)
                    | ((unsigned __int64)(2 * v18 - 1) >> 1)) >> 4)
                  | (((2 * v18 - 1) | ((unsigned __int64)(2 * v18 - 1) >> 1)) >> 2)
                  | (2 * v18 - 1)
                  | ((unsigned __int64)(2 * v18 - 1) >> 1)) >> 8)
                | (((((2 * v18 - 1) | ((unsigned __int64)(2 * v18 - 1) >> 1)) >> 2)
                  | (2 * v18 - 1)
                  | ((unsigned __int64)(2 * v18 - 1) >> 1)) >> 4)
                | (((2 * v18 - 1) | ((unsigned __int64)(2 * v18 - 1) >> 1)) >> 2)
                | (2 * v18 - 1)
                | ((unsigned __int64)(2 * v18 - 1) >> 1);
            v30 = ((v29 >> 16) | v29) + 1;
            if ( (unsigned int)v30 < 0x40 )
              LODWORD(v30) = 64;
            *(_DWORD *)(v17 + 80) = v30;
            v31 = sub_220C370(16LL * (unsigned int)v30, 8, 64, a4, a5, a6);
            *(_QWORD *)(v17 + 64) = v31;
            if ( v19 )
            {
              v32 = *(unsigned int *)(v17 + 80);
              v33 = (_QWORD *)v31;
              *(_QWORD *)(v17 + 72) = 0;
              v34 = v32;
              v35 = &v19[2 * v18];
              v36 = (_QWORD *)(v31 + 16 * v32);
              if ( (_QWORD *)v31 != v36 )
              {
                do
                {
                  *v33 = -4096;
                  v33 += 2;
                }
                while ( v36 != v33 );
              }
              v37 = v19;
              for ( i = v34 - 1; v35 != v37; v37 += 2 )
              {
                v39 = *v37;
                if ( *v37 != -4096 && v39 != -8192 )
                {
                  if ( !v34 )
                  {
                    *(_QWORD *)&dword_0 = *v37;
                    BUG();
                  }
                  v40 = i & (((unsigned int)v39 >> 9) ^ ((unsigned int)v39 >> 4));
                  v41 = (_QWORD *)(v31 + 16LL * v40);
                  v42 = *v41;
                  if ( *v41 != v39 && v42 != -4096 )
                  {
                    v71 = 1;
                    v68 = nullptr;
                    while ( 1 )
                    {
                      if ( v42 == -8192 && !v68 )
                        v68 = v41;
                      v40 = i & (v71 + v40);
                      v41 = (_QWORD *)(v31 + 16LL * v40);
                      v42 = *v41;
                      if ( v39 == *v41 )
                        break;
                      if ( v42 == -4096 )
                      {
                        if ( v68 )
                          v41 = v68;
                        break;
                      }
                      ++v71;
                    }
                  }
                  *v41 = v39;
                  v41[1] = v37[1];
                  ++*(_DWORD *)(v17 + 72);
                }
              }
              operator delete();
              v31 = *(_QWORD *)(v17 + 64);
              LODWORD(v43) = *(_DWORD *)(v17 + 80);
              LODWORD(a4) = *(_DWORD *)(v17 + 72) + 1;
            }
            else
            {
              *(_QWORD *)(v17 + 72) = 0;
              v43 = *(unsigned int *)(v17 + 80);
              v64 = (_QWORD *)(v31 + 16 * v43);
              if ( (_QWORD *)v31 != v64 )
              {
                v65 = (_QWORD *)v31;
                do
                {
                  *v65 = -4096;
                  v65 += 2;
                }
                while ( v64 != v65 );
              }
              LODWORD(a4) = 1;
            }
            if ( (_DWORD)v43 )
            {
              v44 = v43 - 1;
              v45 = (v43 - 1) & (((unsigned int)v16 >> 9) ^ ((unsigned int)v16 >> 4));
              v22 = (__int64 *)(v31 + 16LL * v45);
              v28 = *v22;
              if ( v16 != *v22 )
              {
                if ( v28 != -4096 )
                {
                  v69 = (__int64 *)(v31 + 16LL * (v44 & (((unsigned int)v16 >> 9) ^ ((unsigned int)v16 >> 4))));
                  v70 = 1;
                  v22 = nullptr;
                  while ( 1 )
                  {
                    if ( v28 == -8192 && !v22 )
                      v22 = v69;
                    v45 = v44 & (v70 + v45);
                    v69 = (__int64 *)(v31 + 16LL * v45);
                    v28 = *v69;
                    if ( v16 == *v69 )
                    {
                      v22 = (__int64 *)(v31 + 16LL * v45);
                      goto LABEL_32;
                    }
                    if ( v28 == -4096 )
                      break;
                    ++v70;
                  }
                  if ( v22 )
                    goto LABEL_31;
                  v22 = (__int64 *)(v31 + 16LL * v45);
                }
                goto LABEL_61;
              }
LABEL_32:
              *(_DWORD *)(v17 + 72) = a4;
              if ( v28 != -4096 )
                --*(_DWORD *)(v17 + 76);
              goto LABEL_34;
            }
          }
          ++*(_DWORD *)(v17 + 72);
          BUG();
        }
LABEL_24:
        sub_6E4DB0((__int64 *)(*(_QWORD *)(v7 + 104) + 96LL), *(_QWORD *)(v7 + 104), a3, a4, a5, a6);
        v16 = *(_QWORD *)(v7 + 128);
        if ( !v16 )
          goto LABEL_14;
        goto LABEL_13;
      }
      v11 = 2466;
    }
    v26 = (unsigned __int8 **)sub_E0FF50(a1, a2, v11, 0);
    if ( v26 )
      sub_BED5E0(v26, v10);
    *(_BYTE *)(v8 + 24) |= 1u;
    *(_DWORD *)(v8 + 56) = 0;
    v16 = *(_QWORD *)(v7 + 128);
    if ( v16 )
      goto LABEL_13;
    goto LABEL_24;
  }
  if ( *(char *)(a4 + 28) >= 0 )
  {
    v6 = sub_EBA840(*(_QWORD *)(a1 + 16), a4);
    goto LABEL_2;
  }
  return 0;
}

