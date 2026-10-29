void __fastcall sub_1CB8690(__int64 a1, unsigned int a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12
  char ***v8; // r13
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // ebx
  __int64 v12; // rdi
  char ***v13; // rax
  char ***v14; // r14
  bool v15; // zf
  __int64 v16; // rcx
  char ***i; // rcx
  char ***j; // rbx
  __int64 v19; // rdi
  int v20; // esi
  unsigned int v21; // eax
  char ***v22; // r12
  char **v23; // r8
  int v24; // eax
  char ***v25; // rdi
  char **v26; // rcx
  int v27; // esi
  char ***v28; // r14
  __int64 *v29; // rbx
  __int64 *v30; // rdi
  char ***v31; // r15
  char **v32; // rax
  __int64 *v33; // rdi
  char **v34; // rax
  int v35; // r11d
  __int64 *v36; // rdi
  char **v37; // rax
  int v38; // r10d
  __int64 *v39; // rdi
  char **v40; // rax
  __int64 *v41; // rdi
  char **v42; // rax
  __int64 *v43; // rdi
  char **v44; // rax
  int v45; // edi
  __int64 *v46; // rdi
  char **v47; // rax
  int v48; // esi
  __int64 *v49; // rdi
  char **v50; // rax
  __int64 *v51; // rdi
  __int64 v52; // rax
  char ***v53; // rax
  __int64 v54; // rdx
  char ***k; // rdx
  char ***m; // rbx
  char ***v57; // rsi
  int v58; // edi
  unsigned int v59; // edx
  char ***v60; // r12
  char **v61; // rcx
  int v62; // edx
  char ***v63; // rdi
  char **v64; // rax
  int v65; // edx
  int v66; // r9d
  char ***v67; // r10
  int v68; // r8d
  char ***v69; // r9
  __int64 v70; // [rsp+8h] [rbp-940h]
  char **v71; // [rsp+10h] [rbp-938h] BYREF
  char **v72[2]; // [rsp+18h] [rbp-930h] BYREF
  _DWORD v73[66]; // [rsp+28h] [rbp-920h] BYREF
  __int64 v74; // [rsp+130h] [rbp-818h] BYREF

  LODWORD(v6) = a2;
  v8 = *(char ****)(a1 + 8);
  v9 = *(_BYTE *)a1 & 1;
  if ( a2 <= 8 )
  {
    if ( !(_BYTE)v9 )
    {
      v11 = *(_DWORD *)(a1 + 16);
      *(_BYTE *)a1 |= 1u;
      v13 = v8;
      v6 = v11;
      goto LABEL_6;
    }
    v28 = (char ***)(a1 + 8);
    v29 = (__int64 *)(a1 + 2312);
  }
  else
  {
    a3 = (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2)
         | (a2 - 1)
         | ((unsigned __int64)(a2 - 1) >> 1)
         | (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2) | (a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 4)) >> 8)
       | (((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2)
       | (a2 - 1)
       | ((unsigned __int64)(a2 - 1) >> 1)
       | (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2) | (a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 4);
    v10 = (a3 | (a3 >> 16)) + 1;
    v6 = (unsigned int)v10;
    if ( (unsigned int)v10 > 0x40 )
    {
      v28 = (char ***)(a1 + 8);
      v29 = (__int64 *)(a1 + 2312);
      if ( !(_BYTE)v9 )
      {
        v11 = *(_DWORD *)(a1 + 16);
        v12 = 288LL * (unsigned int)v10;
        goto LABEL_5;
      }
    }
    else
    {
      if ( !(_BYTE)v9 )
      {
        v11 = *(_DWORD *)(a1 + 16);
        v6 = 64;
        v12 = 18432;
LABEL_5:
        v13 = (char ***)sub_22300B0(v12, 8, a3, v9, a5, a6);
        *(_DWORD *)(a1 + 16) = v6;
        *(_QWORD *)(a1 + 8) = v13;
LABEL_6:
        v70 = 36LL * v11;
        v14 = &v8[v70];
        v15 = (*(_QWORD *)a1 & 1LL) == 0;
        *(_QWORD *)a1 &= 1uLL;
        if ( v15 )
        {
          v16 = 36 * v6;
        }
        else
        {
          v13 = (char ***)(a1 + 8);
          v16 = 288;
        }
        for ( i = &v13[v16]; i != v13; v13 += 36 )
          *v13 = (char **)-4096LL;
        for ( j = v8; v14 != j; j += 36 )
        {
          v26 = *j;
          if ( *j != (char **)-4096LL && v26 != (char **)-8192LL )
          {
            if ( (*(_BYTE *)a1 & 1) != 0 )
            {
              v19 = a1 + 8;
              v20 = 7;
            }
            else
            {
              v27 = *(_DWORD *)(a1 + 16);
              v19 = *(_QWORD *)(a1 + 8);
              if ( !v27 )
              {
                *(_QWORD *)&dword_0 = *j;
                BUG();
              }
              v20 = v27 - 1;
            }
            v21 = v20 & (((unsigned int)v26 >> 9) ^ ((unsigned int)v26 >> 4));
            v22 = (char ***)(v19 + 288LL * v21);
            v23 = *v22;
            if ( *v22 != v26 )
            {
              v66 = 1;
              v67 = nullptr;
              if ( v23 != (char **)-4096LL )
              {
                while ( 1 )
                {
                  if ( v23 == (char **)-8192LL && !v67 )
                    v67 = v22;
                  v21 = v20 & (v66 + v21);
                  v22 = (char ***)(v19 + 288LL * v21);
                  v23 = *v22;
                  if ( v26 == *v22 )
                    break;
                  if ( v23 == (char **)-4096LL )
                  {
                    if ( v67 )
                      v22 = v67;
                    break;
                  }
                  ++v66;
                }
              }
            }
            v22[2] = (char **)0x800000000LL;
            v22[1] = (char **)(v22 + 3);
            v24 = *((_DWORD *)j + 4);
            *v22 = v26;
            if ( v24 )
              sub_1CB6C40(v22 + 1, j + 1);
            *((_DWORD *)v22 + 70) = *((_DWORD *)j + 70);
            *((_DWORD *)v22 + 71) = *((_DWORD *)j + 71);
            *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
            v25 = (char ***)j[1];
            if ( v25 != j + 3 )
              free(v25);
          }
        }
        operator delete(v8, v70 * 8, 8);
        return;
      }
      v28 = (char ***)(a1 + 8);
      v29 = (__int64 *)(a1 + 2312);
      LODWORD(v6) = 64;
    }
  }
  if ( *v28 == (char **)-4096LL || *v28 == (char **)-8192LL )
  {
    v31 = &v71;
  }
  else
  {
    v71 = *v28;
    v72[0] = (char **)v73;
    v72[1] = (char **)0x800000000LL;
    if ( *((_DWORD *)v28 + 4) )
      sub_1CB6C40(v72, v28 + 1);
    v30 = (__int64 *)v28[1];
    v73[64] = *((_DWORD *)v28 + 70);
    v73[65] = *((_DWORD *)v28 + 71);
    if ( v30 != (__int64 *)(v28 + 3) )
      free(v30);
    v31 = (char ***)&v74;
  }
  if ( v29 != (__int64 *)(v28 + 36) )
  {
    v32 = v28[36];
    if ( v32 != (char **)-4096LL && v32 != (char **)-8192LL )
    {
      *v31 = v32;
      v31[1] = (char **)(v31 + 3);
      v31[2] = (char **)0x800000000LL;
      if ( *((_DWORD *)v28 + 76) )
        sub_1CB6C40(v31 + 1, v28 + 37);
      v33 = (__int64 *)v28[37];
      v31 += 36;
      *((_DWORD *)v31 - 2) = *((_DWORD *)v28 + 142);
      *((_DWORD *)v31 - 1) = *((_DWORD *)v28 + 143);
      if ( v33 != (__int64 *)(v28 + 39) )
        free(v33);
    }
    if ( v29 != (__int64 *)(v28 + 72) )
    {
      v34 = v28[72];
      if ( v34 != (char **)-4096LL && v34 != (char **)-8192LL )
      {
        *v31 = v34;
        v35 = *((_DWORD *)v28 + 148);
        v31[1] = (char **)(v31 + 3);
        v31[2] = (char **)0x800000000LL;
        if ( v35 )
          sub_1CB6C40(v31 + 1, v28 + 73);
        v36 = (__int64 *)v28[73];
        v31 += 36;
        *((_DWORD *)v31 - 2) = *((_DWORD *)v28 + 214);
        *((_DWORD *)v31 - 1) = *((_DWORD *)v28 + 215);
        if ( v36 != (__int64 *)(v28 + 75) )
          free(v36);
      }
      if ( v29 != (__int64 *)(v28 + 108) )
      {
        v37 = v28[108];
        if ( v37 != (char **)-4096LL && v37 != (char **)-8192LL )
        {
          *v31 = v37;
          v38 = *((_DWORD *)v28 + 220);
          v31[1] = (char **)(v31 + 3);
          v31[2] = (char **)0x800000000LL;
          if ( v38 )
            sub_1CB6C40(v31 + 1, v28 + 109);
          v39 = (__int64 *)v28[109];
          v31 += 36;
          *((_DWORD *)v31 - 2) = *((_DWORD *)v28 + 286);
          *((_DWORD *)v31 - 1) = *((_DWORD *)v28 + 287);
          if ( v39 != (__int64 *)(v28 + 111) )
            free(v39);
        }
        if ( v29 != (__int64 *)(v28 + 144) )
        {
          v40 = v28[144];
          if ( v40 != (char **)-4096LL && v40 != (char **)-8192LL )
          {
            *v31 = v40;
            a6 = *((unsigned int *)v28 + 292);
            v31[1] = (char **)(v31 + 3);
            v31[2] = (char **)0x800000000LL;
            if ( (_DWORD)a6 )
              sub_1CB6C40(v31 + 1, v28 + 145);
            v41 = (__int64 *)v28[145];
            v31 += 36;
            *((_DWORD *)v31 - 2) = *((_DWORD *)v28 + 358);
            *((_DWORD *)v31 - 1) = *((_DWORD *)v28 + 359);
            if ( v41 != (__int64 *)(v28 + 147) )
              free(v41);
          }
          if ( v29 != (__int64 *)(v28 + 180) )
          {
            v42 = v28[180];
            if ( v42 != (char **)-4096LL && v42 != (char **)-8192LL )
            {
              *v31 = v42;
              a5 = *((unsigned int *)v28 + 364);
              v31[1] = (char **)(v31 + 3);
              v31[2] = (char **)0x800000000LL;
              if ( (_DWORD)a5 )
                sub_1CB6C40(v31 + 1, v28 + 181);
              v43 = (__int64 *)v28[181];
              v31 += 36;
              *((_DWORD *)v31 - 2) = *((_DWORD *)v28 + 430);
              *((_DWORD *)v31 - 1) = *((_DWORD *)v28 + 431);
              if ( v43 != (__int64 *)(v28 + 183) )
                free(v43);
            }
            if ( v29 != (__int64 *)(v28 + 216) )
            {
              v44 = v28[216];
              if ( v44 != (char **)-4096LL && v44 != (char **)-8192LL )
              {
                *v31 = v44;
                v45 = *((_DWORD *)v28 + 436);
                v31[1] = (char **)(v31 + 3);
                v31[2] = (char **)0x800000000LL;
                if ( v45 )
                  sub_1CB6C40(v31 + 1, v28 + 217);
                v46 = (__int64 *)v28[217];
                v31 += 36;
                *((_DWORD *)v31 - 2) = *((_DWORD *)v28 + 502);
                *((_DWORD *)v31 - 1) = *((_DWORD *)v28 + 503);
                if ( v46 != (__int64 *)(v28 + 219) )
                  free(v46);
              }
              if ( v29 != (__int64 *)(v28 + 252) )
              {
                v47 = v28[252];
                if ( v47 != (char **)-8192LL && v47 != (char **)-4096LL )
                {
                  *v31 = v47;
                  v48 = *((_DWORD *)v28 + 508);
                  v31[1] = (char **)(v31 + 3);
                  v31[2] = (char **)0x800000000LL;
                  if ( v48 )
                    sub_1CB6C40(v31 + 1, v28 + 253);
                  v49 = (__int64 *)v28[253];
                  v31 += 36;
                  *((_DWORD *)v31 - 2) = *((_DWORD *)v28 + 574);
                  *((_DWORD *)v31 - 1) = *((_DWORD *)v28 + 575);
                  if ( v49 != (__int64 *)(v28 + 255) )
                    free(v49);
                }
                if ( v29 != (__int64 *)(v28 + 288) )
                {
                  v50 = v28[288];
                  if ( v50 != (char **)-4096LL && v50 != (char **)-8192LL )
                  {
                    *v31 = v50;
                    v9 = *((unsigned int *)v28 + 580);
                    v31[1] = (char **)(v31 + 3);
                    v31[2] = (char **)0x800000000LL;
                    if ( (_DWORD)v9 )
                      sub_1CB6C40(v31 + 1, v28 + 289);
                    v51 = (__int64 *)v28[289];
                    v31 += 36;
                    *((_DWORD *)v31 - 2) = *((_DWORD *)v28 + 646);
                    *((_DWORD *)v31 - 1) = *((_DWORD *)v28 + 647);
                    if ( v51 != (__int64 *)(v28 + 291) )
                      free(v51);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( (unsigned int)v6 > 8 )
  {
    *(_BYTE *)a1 &= ~1u;
    v52 = sub_22300B0(288LL * (unsigned int)v6, 8, a3, v9, a5, a6);
    *(_DWORD *)(a1 + 16) = v6;
    *(_QWORD *)(a1 + 8) = v52;
  }
  v15 = (*(_QWORD *)a1 & 1LL) == 0;
  *(_QWORD *)a1 &= 1uLL;
  if ( v15 )
  {
    v53 = *(char ****)(a1 + 8);
    v54 = 36LL * *(unsigned int *)(a1 + 16);
  }
  else
  {
    v53 = v28;
    v54 = 288;
  }
  for ( k = &v53[v54]; k != v53; v53 += 36 )
    *v53 = (char **)-4096LL;
  for ( m = &v71; m != v31; m += 36 )
  {
    v64 = *m;
    if ( *m != (char **)-8192LL && v64 != (char **)-4096LL )
    {
      if ( (*(_BYTE *)a1 & 1) != 0 )
      {
        v57 = v28;
        v58 = 7;
      }
      else
      {
        v65 = *(_DWORD *)(a1 + 16);
        v57 = *(char ****)(a1 + 8);
        if ( !v65 )
        {
          *(_QWORD *)&dword_0 = *m;
          BUG();
        }
        v58 = v65 - 1;
      }
      v59 = v58 & (((unsigned int)v64 >> 9) ^ ((unsigned int)v64 >> 4));
      v60 = &v57[36 * v59];
      v61 = *v60;
      if ( v64 != *v60 )
      {
        v68 = 1;
        v69 = nullptr;
        if ( v61 != (char **)-4096LL )
        {
          while ( 1 )
          {
            if ( v61 == (char **)-8192LL && !v69 )
              v69 = v60;
            v59 = v58 & (v68 + v59);
            v60 = &v57[36 * v59];
            v61 = *v60;
            if ( v64 == *v60 )
              break;
            if ( v61 == (char **)-4096LL )
            {
              if ( v69 )
                v60 = v69;
              break;
            }
            ++v68;
          }
        }
      }
      v60[2] = (char **)0x800000000LL;
      v62 = *((_DWORD *)m + 4);
      *v60 = v64;
      v60[1] = (char **)(v60 + 3);
      if ( v62 )
        sub_1CB6C40(v60 + 1, m + 1);
      *((_DWORD *)v60 + 70) = *((_DWORD *)m + 70);
      *((_DWORD *)v60 + 71) = *((_DWORD *)m + 71);
      v63 = (char ***)m[1];
      *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
      if ( v63 != m + 3 )
        free(v63);
    }
  }
}
