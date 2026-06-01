__int64 __fastcall sub_C27D80(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
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
  __int64 v34; // rsi
  int v35; // r10d
  __int64 *v36; // r9
  _QWORD *v37; // rcx
  __int64 *v38; // rdx
  int i; // r14d
  __int64 v40; // rcx
  unsigned int v41; // r8d
  _QWORD *v42; // rdi
  __int64 v43; // r11
  int v44; // r8d
  unsigned int v45; // edi
  unsigned __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rcx
  _QWORD *v50; // rdx
  int v51; // r9d
  __int64 v52; // r15
  _QWORD *v53; // rcx
  __int64 *v54; // rdx
  int v55; // r11d
  __int64 v56; // rcx
  unsigned int v57; // edi
  _QWORD *v58; // rsi
  __int64 v59; // r10
  __int64 v60; // rsi
  int v61; // edi
  unsigned int v62; // r14d
  __int64 *v63; // r8
  int v64; // r9d
  _QWORD *v65; // rcx
  _QWORD *v66; // rdx
  _QWORD *v67; // rcx
  _QWORD *v68; // rdx
  _QWORD *v69; // r15
  __int64 *v70; // r9
  int v71; // r10d
  int v72; // [rsp+8h] [rbp-60h]
  _QWORD *v73; // [rsp+8h] [rbp-60h]
  int v74; // [rsp+10h] [rbp-58h]
  __int64 v75[8]; // [rsp+28h] [rbp-40h] BYREF

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
        sub_A4F680(v75, v7 & 0xFFFFFFFFFFFFFFFBLL);
        v12 = *(unsigned int *)(v8 + 56);
        a4 = *(unsigned int *)(v8 + 60);
        v13 = v75[0];
        if ( v12 + 1 > a4 )
        {
          sub_2237220(v8 + 48, v8 + 64, v12 + 1, 8);
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
            v48 = sub_22300B0(16LL * (unsigned int)v47, 8, 64, a4, a5, a6);
            *(_QWORD *)(v17 + 64) = v48;
            if ( v19 )
            {
              v49 = *(unsigned int *)(v17 + 80);
              v50 = (_QWORD *)v48;
              *(_QWORD *)(v17 + 72) = 0;
              v51 = v49;
              v52 = 2LL * v18;
              v53 = (_QWORD *)(v48 + 16 * v49);
              if ( (_QWORD *)v48 != v53 )
              {
                do
                {
                  *v50 = -4096;
                  v50 += 2;
                }
                while ( v53 != v50 );
              }
              v54 = v19;
              v55 = v51 - 1;
              do
              {
                v56 = *v54;
                if ( *v54 != -8192 && v56 != -4096 )
                {
                  if ( !v51 )
                  {
                    *(_QWORD *)&dword_0 = *v54;
                    BUG();
                  }
                  v57 = v55 & (((unsigned int)v56 >> 9) ^ ((unsigned int)v56 >> 4));
                  v58 = (_QWORD *)(v48 + 16LL * v57);
                  v59 = *v58;
                  if ( v56 != *v58 && v59 != -4096 )
                  {
                    v74 = 1;
                    v73 = nullptr;
                    while ( 1 )
                    {
                      if ( !v73 )
                      {
                        if ( v59 != -8192 )
                          v58 = nullptr;
                        v73 = v58;
                      }
                      v57 = v55 & (v74 + v57);
                      v58 = (_QWORD *)(v48 + 16LL * v57);
                      v59 = *v58;
                      if ( v56 == *v58 )
                        break;
                      if ( v59 == -4096 )
                      {
                        if ( v73 )
                          v58 = v73;
                        break;
                      }
                      ++v74;
                    }
                  }
                  *v58 = v56;
                  v58[1] = v54[1];
                  ++*(_DWORD *)(v17 + 72);
                }
                v54 += 2;
              }
              while ( &v19[v52] != v54 );
              operator delete(v19, v52 * 8, 8);
              v48 = *(_QWORD *)(v17 + 64);
              LODWORD(v60) = *(_DWORD *)(v17 + 80);
              LODWORD(a4) = *(_DWORD *)(v17 + 72) + 1;
            }
            else
            {
              *(_QWORD *)(v17 + 72) = 0;
              v60 = *(unsigned int *)(v17 + 80);
              v67 = (_QWORD *)(v48 + 16 * v60);
              if ( (_QWORD *)v48 != v67 )
              {
                v68 = (_QWORD *)v48;
                do
                {
                  *v68 = -4096;
                  v68 += 2;
                }
                while ( v67 != v68 );
              }
              LODWORD(a4) = 1;
            }
            if ( (_DWORD)v60 )
            {
              v61 = v60 - 1;
              v62 = (v60 - 1) & (((unsigned int)v16 >> 9) ^ ((unsigned int)v16 >> 4));
              v22 = (__int64 *)(v48 + 16LL * v62);
              v28 = *v22;
              if ( v16 != *v22 )
              {
                if ( v28 != -4096 )
                {
                  v63 = (__int64 *)(v48 + 16LL * v62);
                  v64 = 1;
                  v22 = nullptr;
                  while ( 1 )
                  {
                    if ( !v22 && v28 == -8192 )
                      v22 = v63;
                    v62 = v61 & (v64 + v62);
                    v63 = (__int64 *)(v48 + 16LL * v62);
                    v28 = *v63;
                    if ( v16 == *v63 )
                    {
                      v22 = (__int64 *)(v48 + 16LL * v62);
                      goto LABEL_32;
                    }
                    if ( v28 == -4096 )
                      break;
                    ++v64;
                  }
                  if ( v22 )
                    goto LABEL_31;
                  v22 = (__int64 *)(v48 + 16LL * v62);
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
            v31 = sub_22300B0(16LL * (unsigned int)v30, 8, 64, a4, a5, a6);
            *(_QWORD *)(v17 + 64) = v31;
            if ( v19 )
            {
              v32 = *(unsigned int *)(v17 + 80);
              v33 = (_QWORD *)v31;
              *(_QWORD *)(v17 + 72) = 0;
              v34 = 16LL * v18;
              v35 = v32;
              v36 = (__int64 *)((char *)v19 + v34);
              v37 = (_QWORD *)(v31 + 16 * v32);
              if ( (_QWORD *)v31 != v37 )
              {
                do
                {
                  *v33 = -4096;
                  v33 += 2;
                }
                while ( v37 != v33 );
              }
              v38 = v19;
              for ( i = v35 - 1; v36 != v38; v38 += 2 )
              {
                v40 = *v38;
                if ( *v38 != -4096 && v40 != -8192 )
                {
                  if ( !v35 )
                  {
                    *(_QWORD *)&dword_0 = *v38;
                    BUG();
                  }
                  v41 = i & (((unsigned int)v40 >> 9) ^ ((unsigned int)v40 >> 4));
                  v42 = (_QWORD *)(v31 + 16LL * v41);
                  v43 = *v42;
                  if ( *v42 != v40 && v43 != -4096 )
                  {
                    v72 = 1;
                    v69 = nullptr;
                    while ( 1 )
                    {
                      if ( v43 == -8192 && !v69 )
                        v69 = v42;
                      v41 = i & (v72 + v41);
                      v42 = (_QWORD *)(v31 + 16LL * v41);
                      v43 = *v42;
                      if ( v40 == *v42 )
                        break;
                      if ( v43 == -4096 )
                      {
                        if ( v69 )
                          v42 = v69;
                        break;
                      }
                      ++v72;
                    }
                  }
                  *v42 = v40;
                  v42[1] = v38[1];
                  ++*(_DWORD *)(v17 + 72);
                }
              }
              operator delete(v19, v34, 8);
              v31 = *(_QWORD *)(v17 + 64);
              LODWORD(v34) = *(_DWORD *)(v17 + 80);
              LODWORD(a4) = *(_DWORD *)(v17 + 72) + 1;
            }
            else
            {
              *(_QWORD *)(v17 + 72) = 0;
              v34 = *(unsigned int *)(v17 + 80);
              v65 = (_QWORD *)(v31 + 16 * v34);
              if ( (_QWORD *)v31 != v65 )
              {
                v66 = (_QWORD *)v31;
                do
                {
                  *v66 = -4096;
                  v66 += 2;
                }
                while ( v65 != v66 );
              }
              LODWORD(a4) = 1;
            }
            if ( (_DWORD)v34 )
            {
              v44 = v34 - 1;
              v45 = (v34 - 1) & (((unsigned int)v16 >> 9) ^ ((unsigned int)v16 >> 4));
              v22 = (__int64 *)(v31 + 16LL * v45);
              v28 = *v22;
              if ( v16 != *v22 )
              {
                if ( v28 != -4096 )
                {
                  v70 = (__int64 *)(v31 + 16LL * (v44 & (((unsigned int)v16 >> 9) ^ ((unsigned int)v16 >> 4))));
                  v71 = 1;
                  v22 = nullptr;
                  while ( 1 )
                  {
                    if ( v28 == -8192 && !v22 )
                      v22 = v70;
                    v45 = v44 & (v71 + v45);
                    v70 = (__int64 *)(v31 + 16LL * v45);
                    v28 = *v70;
                    if ( v16 == *v70 )
                    {
                      v22 = (__int64 *)(v31 + 16LL * v45);
                      goto LABEL_32;
                    }
                    if ( v28 == -4096 )
                      break;
                    ++v71;
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
        sub_7052B0((__int64 *)(*(_QWORD *)(v7 + 104) + 96LL), *(_QWORD *)(v7 + 104), a3, a4, a5, a6);
        v16 = *(_QWORD *)(v7 + 128);
        if ( !v16 )
          goto LABEL_14;
        goto LABEL_13;
      }
      v11 = 2466;
    }
    v26 = (unsigned __int8 **)sub_E33C90(a1, a2, v11, 0);
    if ( v26 )
      sub_C11320(v26, v10);
    *(_BYTE *)(v8 + 24) |= 1u;
    *(_DWORD *)(v8 + 56) = 0;
    v16 = *(_QWORD *)(v7 + 128);
    if ( v16 )
      goto LABEL_13;
    goto LABEL_24;
  }
  if ( *(char *)(a4 + 28) >= 0 )
  {
    v6 = sub_EDE580(*(_QWORD *)(a1 + 16), a4);
    goto LABEL_2;
  }
  return 0;
}
