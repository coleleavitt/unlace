unsigned __int64 *__fastcall sub_1A40540(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int64 *v11; // r12
  unsigned int v12; // r13d
  __int64 v13; // rdi
  unsigned __int64 *v14; // rax
  __int64 v15; // rbp
  __int64 v16; // rsi
  __int64 v17; // rdx
  unsigned __int64 *v18; // rdi
  unsigned __int64 *i; // rdx
  unsigned __int64 *j; // rax
  unsigned __int64 v21; // rdx
  __int64 v22; // r10
  int v23; // r11d
  unsigned int v24; // r8d
  __int64 *v25; // rcx
  __int64 v26; // rbp
  unsigned __int64 v27; // rdx
  unsigned __int64 *result; // rax
  int v29; // ecx
  __int64 *v30; // r12
  __int64 *v31; // r13
  unsigned __int64 v32; // rcx
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
  __int64 v48; // rax
  __int64 v49; // rax
  bool v50; // zf
  _QWORD *v51; // rax
  __int64 v52; // rdx
  _QWORD *k; // rdx
  unsigned __int64 v54; // rcx
  __int64 *v55; // rdi
  int v56; // r8d
  unsigned int v57; // esi
  __int64 *v58; // rdx
  __int64 v59; // r9
  unsigned __int64 v60; // rcx
  int v61; // edx
  int v62; // r14d
  __int64 *v63; // r13
  int v64; // r11d
  __int64 *v65; // r10
  __int64 v66; // [rsp+0h] [rbp-138h] BYREF
  int v67; // [rsp+8h] [rbp-130h]
  __int64 v68; // [rsp+10h] [rbp-128h] BYREF

  LODWORD(v6) = a2;
  v8 = *(_BYTE *)a1 & 1;
  if ( a2 <= 0x10 )
  {
    if ( !(_BYTE)v8 )
    {
      v14 = *(unsigned __int64 **)(a1 + 8);
      v12 = *(_DWORD *)(a1 + 16);
      *(_BYTE *)a1 |= 1u;
      v6 = v12;
      v11 = v14;
      goto LABEL_6;
    }
    v30 = (__int64 *)(a1 + 8);
    v9 = a1 + 264;
  }
  else
  {
    v9 = (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2)
         | (a2 - 1)
         | ((unsigned __int64)(a2 - 1) >> 1)
         | (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2) | (a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 4)) >> 8)
       | (((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2)
       | (a2 - 1)
       | ((unsigned __int64)(a2 - 1) >> 1)
       | (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2) | (a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 4);
    v10 = (v9 | (v9 >> 16)) + 1;
    v6 = (unsigned int)v10;
    if ( (unsigned int)v10 > 0x40 )
    {
      v30 = (__int64 *)(a1 + 8);
      v9 = a1 + 264;
      if ( !(_BYTE)v8 )
      {
        v11 = *(unsigned __int64 **)(a1 + 8);
        v12 = *(_DWORD *)(a1 + 16);
        v13 = 16LL * (unsigned int)v10;
        goto LABEL_5;
      }
    }
    else
    {
      if ( !(_BYTE)v8 )
      {
        v11 = *(unsigned __int64 **)(a1 + 8);
        v12 = *(_DWORD *)(a1 + 16);
        v6 = 64;
        v13 = 1024;
LABEL_5:
        v14 = (unsigned __int64 *)sub_22300B0(v13, 8, v9, v8, a5, a6);
        *(_DWORD *)(a1 + 16) = v6;
        *(_QWORD *)(a1 + 8) = v14;
LABEL_6:
        v15 = 2 * v6;
        v16 = 16LL * v12;
        v17 = *(_QWORD *)a1 & 1LL;
        v18 = &v11[(unsigned __int64)v16 / 8];
        *(_QWORD *)a1 = v17;
        if ( v17 )
        {
          v14 = (unsigned __int64 *)(a1 + 8);
          v15 = 32;
        }
        for ( i = &v14[v15]; i != v14; v14 += 2 )
          *v14 = 0;
        for ( j = v11; v18 != j; *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1 )
        {
          while ( 1 )
          {
            v21 = *j;
            if ( *j - 1 <= 0xFFFFFFFFFFFFFFFDLL )
              break;
            j += 2;
            if ( v18 == j )
              return (unsigned __int64 *)operator delete(v11, v16, 8);
          }
          if ( (*(_BYTE *)a1 & 1) != 0 )
          {
            v22 = a1 + 8;
            v23 = 15;
          }
          else
          {
            v29 = *(_DWORD *)(a1 + 16);
            v22 = *(_QWORD *)(a1 + 8);
            if ( !v29 )
            {
              *(_QWORD *)&dword_0 = *j;
              BUG();
            }
            v23 = v29 - 1;
          }
          v24 = v23 & (v21 ^ (v21 >> 9));
          v25 = (__int64 *)(v22 + 16LL * v24);
          v26 = *v25;
          if ( *v25 != v21 )
          {
            v62 = 1;
            v63 = nullptr;
            if ( v26 )
            {
              while ( 1 )
              {
                if ( v26 == -1 && !v63 )
                  v63 = v25;
                v24 = v23 & (v62 + v24);
                v25 = (__int64 *)(v22 + 16LL * v24);
                v26 = *v25;
                if ( v21 == *v25 )
                  break;
                if ( !v26 )
                {
                  if ( v63 )
                    v25 = v63;
                  break;
                }
                ++v62;
              }
            }
          }
          v27 = *j;
          j += 2;
          *v25 = v27;
          *((_DWORD *)v25 + 2) = *((_DWORD *)j - 2);
        }
        return (unsigned __int64 *)operator delete(v11, v16, 8);
      }
      v30 = (__int64 *)(a1 + 8);
      v9 = a1 + 264;
      LODWORD(v6) = 64;
    }
  }
  v31 = &v66;
  v32 = *v30 - 1;
  if ( v32 <= 0xFFFFFFFFFFFFFFFDLL )
  {
    v66 = *v30;
    v31 = &v68;
    v67 = *((_DWORD *)v30 + 2);
  }
  if ( (__int64 *)v9 != v30 + 2 )
  {
    v33 = v30[2];
    v32 = v33 - 1;
    if ( (unsigned __int64)(v33 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
    {
      *v31 = v33;
      v31 += 2;
      *((_DWORD *)v31 - 2) = *((_DWORD *)v30 + 6);
    }
    if ( (__int64 *)v9 != v30 + 4 )
    {
      v34 = v30[4];
      v32 = v34 - 1;
      if ( (unsigned __int64)(v34 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
      {
        *v31 = v34;
        v31 += 2;
        *((_DWORD *)v31 - 2) = *((_DWORD *)v30 + 10);
      }
      if ( (__int64 *)v9 != v30 + 6 )
      {
        v35 = v30[6];
        v32 = v35 - 1;
        if ( (unsigned __int64)(v35 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
        {
          *v31 = v35;
          v31 += 2;
          *((_DWORD *)v31 - 2) = *((_DWORD *)v30 + 14);
        }
        if ( (__int64 *)v9 != v30 + 8 )
        {
          v36 = v30[8];
          v32 = v36 - 1;
          if ( (unsigned __int64)(v36 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
          {
            *v31 = v36;
            v31 += 2;
            *((_DWORD *)v31 - 2) = *((_DWORD *)v30 + 18);
          }
          if ( (__int64 *)v9 != v30 + 10 )
          {
            v37 = v30[10];
            v32 = v37 - 1;
            if ( (unsigned __int64)(v37 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
            {
              *v31 = v37;
              v31 += 2;
              *((_DWORD *)v31 - 2) = *((_DWORD *)v30 + 22);
            }
            if ( (__int64 *)v9 != v30 + 12 )
            {
              v38 = v30[12];
              v32 = v38 - 1;
              if ( (unsigned __int64)(v38 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
              {
                *v31 = v38;
                v31 += 2;
                *((_DWORD *)v31 - 2) = *((_DWORD *)v30 + 26);
              }
              if ( (__int64 *)v9 != v30 + 14 )
              {
                v39 = v30[14];
                v32 = v39 - 1;
                if ( (unsigned __int64)(v39 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
                {
                  *v31 = v39;
                  v31 += 2;
                  *((_DWORD *)v31 - 2) = *((_DWORD *)v30 + 30);
                }
                if ( (__int64 *)v9 != v30 + 16 )
                {
                  v40 = v30[16];
                  v32 = v40 - 1;
                  if ( (unsigned __int64)(v40 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
                  {
                    *v31 = v40;
                    v31 += 2;
                    *((_DWORD *)v31 - 2) = *((_DWORD *)v30 + 34);
                  }
                  if ( (__int64 *)v9 != v30 + 18 )
                  {
                    v41 = v30[18];
                    v32 = v41 - 1;
                    if ( (unsigned __int64)(v41 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
                    {
                      *v31 = v41;
                      v31 += 2;
                      *((_DWORD *)v31 - 2) = *((_DWORD *)v30 + 38);
                    }
                    if ( (__int64 *)v9 != v30 + 20 )
                    {
                      v42 = v30[20];
                      v32 = v42 - 1;
                      if ( (unsigned __int64)(v42 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
                      {
                        *v31 = v42;
                        v31 += 2;
                        *((_DWORD *)v31 - 2) = *((_DWORD *)v30 + 42);
                      }
                      if ( (__int64 *)v9 != v30 + 22 )
                      {
                        v43 = v30[22];
                        v32 = v43 - 1;
                        if ( (unsigned __int64)(v43 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
                        {
                          *v31 = v43;
                          v31 += 2;
                          *((_DWORD *)v31 - 2) = *((_DWORD *)v30 + 46);
                        }
                        if ( (__int64 *)v9 != v30 + 24 )
                        {
                          v44 = v30[24];
                          v32 = v44 - 1;
                          if ( (unsigned __int64)(v44 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
                          {
                            *v31 = v44;
                            v31 += 2;
                            *((_DWORD *)v31 - 2) = *((_DWORD *)v30 + 50);
                          }
                          if ( (__int64 *)v9 != v30 + 26 )
                          {
                            v45 = v30[26];
                            v32 = v45 - 1;
                            if ( (unsigned __int64)(v45 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
                            {
                              *v31 = v45;
                              v31 += 2;
                              *((_DWORD *)v31 - 2) = *((_DWORD *)v30 + 54);
                            }
                            if ( (__int64 *)v9 != v30 + 28 )
                            {
                              v46 = v30[28];
                              v32 = v46 - 1;
                              if ( (unsigned __int64)(v46 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
                              {
                                *v31 = v46;
                                v31 += 2;
                                *((_DWORD *)v31 - 2) = *((_DWORD *)v30 + 58);
                              }
                              if ( (__int64 *)v9 != v30 + 30 )
                              {
                                v47 = v30[30];
                                v32 = v47 - 1;
                                if ( (unsigned __int64)(v47 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
                                {
                                  *v31 = v47;
                                  v31 += 2;
                                  *((_DWORD *)v31 - 2) = *((_DWORD *)v30 + 62);
                                }
                                if ( (__int64 *)v9 != v30 + 32 )
                                {
                                  v48 = v30[32];
                                  v9 = v48 - 1;
                                  if ( (unsigned __int64)(v48 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
                                  {
                                    *v31 = v48;
                                    v31 += 2;
                                    *((_DWORD *)v31 - 2) = *((_DWORD *)v30 + 66);
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
    v49 = sub_22300B0(16LL * (unsigned int)v6, 8, v9, v32, a5, a6);
    *(_DWORD *)(a1 + 16) = v6;
    *(_QWORD *)(a1 + 8) = v49;
  }
  v50 = (*(_QWORD *)a1 & 1LL) == 0;
  *(_QWORD *)a1 &= 1uLL;
  if ( v50 )
  {
    v51 = *(_QWORD **)(a1 + 8);
    v52 = 2LL * *(unsigned int *)(a1 + 16);
  }
  else
  {
    v51 = v30;
    v52 = 32;
  }
  for ( k = &v51[v52]; k != v51; v51 += 2 )
    *v51 = 0;
  result = (unsigned __int64 *)&v66;
  if ( v31 != &v66 )
  {
    do
    {
      while ( 1 )
      {
        v54 = *result;
        if ( *result - 1 <= 0xFFFFFFFFFFFFFFFDLL )
          break;
        result += 2;
        if ( result == (unsigned __int64 *)v31 )
          return result;
      }
      if ( (*(_BYTE *)a1 & 1) != 0 )
      {
        v55 = v30;
        v56 = 15;
      }
      else
      {
        v61 = *(_DWORD *)(a1 + 16);
        v55 = *(__int64 **)(a1 + 8);
        if ( !v61 )
        {
          *(_QWORD *)&dword_0 = *result;
          BUG();
        }
        v56 = v61 - 1;
      }
      v57 = v56 & (v54 ^ (v54 >> 9));
      v58 = &v55[2 * v57];
      v59 = *v58;
      if ( v54 != *v58 )
      {
        v64 = 1;
        v65 = nullptr;
        if ( v59 )
        {
          while ( 1 )
          {
            if ( !v65 && v59 == -1 )
              v65 = v58;
            v57 = v56 & (v64 + v57);
            v58 = &v55[2 * v57];
            v59 = *v58;
            if ( v54 == *v58 )
              break;
            if ( !v59 )
            {
              if ( v65 )
                v58 = v65;
              break;
            }
            ++v64;
          }
        }
      }
      v60 = *result;
      result += 2;
      *v58 = v60;
      *((_DWORD *)v58 + 2) = *((_DWORD *)result - 2);
      *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
    }
    while ( result != (unsigned __int64 *)v31 );
  }
  return result;
}
