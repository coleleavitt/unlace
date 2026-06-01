__int64 *__fastcall sub_1A40D70(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12
  _QWORD *v8; // rbp
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  unsigned int v12; // r13d
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 *v15; // r13
  __int64 v16; // rsi
  bool v17; // zf
  _QWORD *v18; // r10
  _QWORD *v19; // rdx
  __int64 v20; // r12
  _QWORD *i; // rcx
  _QWORD *j; // rdx
  __int64 v23; // r11
  int v24; // r9d
  unsigned int v25; // r8d
  __int64 v26; // rdi
  __int64 v27; // r12
  __int64 v28; // rcx
  int v29; // r9d
  __int64 *v30; // r14
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // rdx
  _QWORD *k; // rdx
  __int64 *result; // rax
  _QWORD *v52; // r8
  int v53; // edi
  unsigned int v54; // esi
  __int64 *v55; // rcx
  __int64 v56; // r9
  __int64 v57; // rdx
  int v58; // edi
  int v59; // r14d
  __int64 v60; // r15
  int v61; // r12d
  __int64 *v62; // r10
  __int64 v63; // [rsp+10h] [rbp-138h] BYREF
  int v64; // [rsp+18h] [rbp-130h]
  __int64 v65; // [rsp+20h] [rbp-128h] BYREF

  LODWORD(v6) = a2;
  v8 = *(_QWORD **)(a1 + 8);
  v9 = *(_BYTE *)a1 & 1;
  if ( a2 <= 0x10 )
  {
    v15 = (__int64 *)(a1 + 8);
    v10 = a1 + 264;
    if ( !(_BYTE)v9 )
    {
      v12 = *(_DWORD *)(a1 + 16);
      *(_BYTE *)a1 |= 1u;
      v14 = (__int64)v8;
      v6 = v12;
      goto LABEL_8;
    }
  }
  else
  {
    v10 = (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2)
          | (a2 - 1)
          | ((unsigned __int64)(a2 - 1) >> 1)
          | (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2) | (a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 4)) >> 8)
        | (((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2)
        | (a2 - 1)
        | ((unsigned __int64)(a2 - 1) >> 1)
        | (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2) | (a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 4);
    v11 = (v10 | (v10 >> 16)) + 1;
    v6 = (unsigned int)v11;
    if ( (unsigned int)v11 > 0x40 )
    {
      v15 = (__int64 *)(a1 + 8);
      v10 = a1 + 264;
      if ( !(_BYTE)v9 )
      {
        v12 = *(_DWORD *)(a1 + 16);
        v13 = 16LL * (unsigned int)v11;
        goto LABEL_5;
      }
    }
    else
    {
      if ( !(_BYTE)v9 )
      {
        v12 = *(_DWORD *)(a1 + 16);
        v6 = 64;
        v13 = 1024;
LABEL_5:
        v14 = sub_22300B0(v13, 8, v10, v9, a5, a6);
        *(_DWORD *)(a1 + 16) = v6;
        *(_QWORD *)(a1 + 8) = v14;
LABEL_8:
        v16 = 2LL * v12;
        v17 = (*(_QWORD *)a1 & 1LL) == 0;
        *(_QWORD *)a1 &= 1uLL;
        v18 = &v8[v16];
        if ( v17 )
        {
          v20 = 2 * v6;
          v19 = (_QWORD *)v14;
        }
        else
        {
          v19 = (_QWORD *)(a1 + 8);
          v20 = 32;
        }
        for ( i = &v19[v20]; i != v19; v19 += 2 )
          *v19 = -4096;
        for ( j = v8; v18 != j; j += 2 )
        {
          v28 = *j;
          if ( *j != -4096 && v28 != -8192 )
          {
            if ( (*(_BYTE *)a1 & 1) != 0 )
            {
              v23 = a1 + 8;
              v24 = 15;
            }
            else
            {
              v29 = *(_DWORD *)(a1 + 16);
              if ( !v29 )
              {
                *(_QWORD *)&dword_0 = *j;
                BUG();
              }
              v24 = v29 - 1;
              v23 = v14;
            }
            v25 = v24 & (((unsigned int)v28 >> 9) ^ ((unsigned int)v28 >> 4));
            v26 = v23 + 16LL * v25;
            v27 = *(_QWORD *)v26;
            if ( *(_QWORD *)v26 != v28 )
            {
              v59 = 1;
              v60 = 0;
              if ( v27 != -4096 )
              {
                while ( 1 )
                {
                  if ( v27 == -8192 && !v60 )
                    v60 = v26;
                  v25 = v24 & (v59 + v25);
                  v26 = v23 + 16LL * v25;
                  v27 = *(_QWORD *)v26;
                  if ( v28 == *(_QWORD *)v26 )
                    break;
                  if ( v27 == -4096 )
                  {
                    if ( v60 )
                      v26 = v60;
                    break;
                  }
                  ++v59;
                }
              }
            }
            *(_QWORD *)v26 = v28;
            *(_DWORD *)(v26 + 8) = *((_DWORD *)j + 2);
            *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
          }
        }
        return (__int64 *)operator delete(v8, v16 * 8, 8);
      }
      v15 = (__int64 *)(a1 + 8);
      v10 = a1 + 264;
      LODWORD(v6) = 64;
    }
  }
  if ( *v15 == -4096 || *v15 == -8192 )
  {
    v30 = &v63;
  }
  else
  {
    v63 = *v15;
    v30 = &v65;
    v64 = *((_DWORD *)v15 + 2);
  }
  if ( (__int64 *)v10 != v15 + 2 )
  {
    v31 = v15[2];
    if ( v31 != -4096 && v31 != -8192 )
    {
      *v30 = v31;
      v30 += 2;
      *((_DWORD *)v30 - 2) = *((_DWORD *)v15 + 6);
    }
    if ( (__int64 *)v10 != v15 + 4 )
    {
      v32 = v15[4];
      if ( v32 != -4096 && v32 != -8192 )
      {
        *v30 = v32;
        v30 += 2;
        *((_DWORD *)v30 - 2) = *((_DWORD *)v15 + 10);
      }
      if ( (__int64 *)v10 != v15 + 6 )
      {
        v33 = v15[6];
        if ( v33 != -4096 && v33 != -8192 )
        {
          *v30 = v33;
          v30 += 2;
          *((_DWORD *)v30 - 2) = *((_DWORD *)v15 + 14);
        }
        if ( (__int64 *)v10 != v15 + 8 )
        {
          v34 = v15[8];
          if ( v34 != -4096 && v34 != -8192 )
          {
            *v30 = v34;
            v30 += 2;
            *((_DWORD *)v30 - 2) = *((_DWORD *)v15 + 18);
          }
          if ( (__int64 *)v10 != v15 + 10 )
          {
            v35 = v15[10];
            if ( v35 != -4096 && v35 != -8192 )
            {
              *v30 = v35;
              v30 += 2;
              *((_DWORD *)v30 - 2) = *((_DWORD *)v15 + 22);
            }
            if ( (__int64 *)v10 != v15 + 12 )
            {
              v36 = v15[12];
              if ( v36 != -4096 && v36 != -8192 )
              {
                *v30 = v36;
                v30 += 2;
                *((_DWORD *)v30 - 2) = *((_DWORD *)v15 + 26);
              }
              if ( (__int64 *)v10 != v15 + 14 )
              {
                v37 = v15[14];
                if ( v37 != -4096 && v37 != -8192 )
                {
                  *v30 = v37;
                  v30 += 2;
                  *((_DWORD *)v30 - 2) = *((_DWORD *)v15 + 30);
                }
                if ( (__int64 *)v10 != v15 + 16 )
                {
                  v38 = v15[16];
                  if ( v38 != -4096 && v38 != -8192 )
                  {
                    *v30 = v38;
                    v30 += 2;
                    *((_DWORD *)v30 - 2) = *((_DWORD *)v15 + 34);
                  }
                  if ( (__int64 *)v10 != v15 + 18 )
                  {
                    v39 = v15[18];
                    if ( v39 != -4096 && v39 != -8192 )
                    {
                      *v30 = v39;
                      v30 += 2;
                      *((_DWORD *)v30 - 2) = *((_DWORD *)v15 + 38);
                    }
                    if ( (__int64 *)v10 != v15 + 20 )
                    {
                      v40 = v15[20];
                      if ( v40 != -8192 && v40 != -4096 )
                      {
                        *v30 = v40;
                        v30 += 2;
                        *((_DWORD *)v30 - 2) = *((_DWORD *)v15 + 42);
                      }
                      if ( (__int64 *)v10 != v15 + 22 )
                      {
                        v41 = v15[22];
                        if ( v41 != -8192 && v41 != -4096 )
                        {
                          *v30 = v41;
                          v30 += 2;
                          *((_DWORD *)v30 - 2) = *((_DWORD *)v15 + 46);
                        }
                        if ( (__int64 *)v10 != v15 + 24 )
                        {
                          v42 = v15[24];
                          if ( v42 != -8192 && v42 != -4096 )
                          {
                            *v30 = v42;
                            v30 += 2;
                            *((_DWORD *)v30 - 2) = *((_DWORD *)v15 + 50);
                          }
                          if ( (__int64 *)v10 != v15 + 26 )
                          {
                            v43 = v15[26];
                            if ( v43 != -8192 && v43 != -4096 )
                            {
                              *v30 = v43;
                              v30 += 2;
                              *((_DWORD *)v30 - 2) = *((_DWORD *)v15 + 54);
                            }
                            if ( (__int64 *)v10 != v15 + 28 )
                            {
                              v44 = v15[28];
                              if ( v44 != -8192 && v44 != -4096 )
                              {
                                *v30 = v44;
                                v30 += 2;
                                *((_DWORD *)v30 - 2) = *((_DWORD *)v15 + 58);
                              }
                              if ( (__int64 *)v10 != v15 + 30 )
                              {
                                v45 = v15[30];
                                if ( v45 != -8192 && v45 != -4096 )
                                {
                                  *v30 = v45;
                                  v30 += 2;
                                  *((_DWORD *)v30 - 2) = *((_DWORD *)v15 + 62);
                                }
                                if ( (__int64 *)v10 != v15 + 32 )
                                {
                                  v46 = v15[32];
                                  if ( v46 != -4096 && v46 != -8192 )
                                  {
                                    *v30 = v46;
                                    v30 += 2;
                                    *((_DWORD *)v30 - 2) = *((_DWORD *)v15 + 66);
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( (unsigned int)v6 > 0x10 )
  {
    *(_BYTE *)a1 &= ~1u;
    v47 = sub_22300B0(16LL * (unsigned int)v6, 8, v10, v9, a5, a6);
    *(_DWORD *)(a1 + 16) = v6;
    *(_QWORD *)(a1 + 8) = v47;
    v8 = (_QWORD *)v47;
  }
  v17 = (*(_QWORD *)a1 & 1LL) == 0;
  *(_QWORD *)a1 &= 1uLL;
  if ( v17 )
  {
    v48 = v8;
    v49 = 2LL * *(unsigned int *)(a1 + 16);
  }
  else
  {
    v48 = v15;
    v49 = 32;
  }
  for ( k = &v48[v49]; k != v48; v48 += 2 )
    *v48 = -4096;
  for ( result = &v63; result != v30; result += 2 )
  {
    v57 = *result;
    if ( *result != -8192 && v57 != -4096 )
    {
      if ( (*(_BYTE *)a1 & 1) != 0 )
      {
        v52 = v15;
        v53 = 15;
      }
      else
      {
        v58 = *(_DWORD *)(a1 + 16);
        if ( !v58 )
        {
          *(_QWORD *)&dword_0 = *result;
          BUG();
        }
        v53 = v58 - 1;
        v52 = v8;
      }
      v54 = v53 & (((unsigned int)v57 >> 9) ^ ((unsigned int)v57 >> 4));
      v55 = &v52[2 * v54];
      v56 = *v55;
      if ( v57 != *v55 )
      {
        v61 = 1;
        v62 = nullptr;
        if ( v56 != -4096 )
        {
          while ( 1 )
          {
            if ( v56 == -8192 && !v62 )
              v62 = v55;
            v54 = v53 & (v61 + v54);
            v55 = &v52[2 * v54];
            v56 = *v55;
            if ( v57 == *v55 )
              break;
            if ( v56 == -4096 )
            {
              if ( v62 )
                v55 = v62;
              break;
            }
            ++v61;
          }
        }
      }
      *v55 = v57;
      *((_DWORD *)v55 + 2) = *((_DWORD *)result + 2);
      *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
    }
  }
  return result;
}
