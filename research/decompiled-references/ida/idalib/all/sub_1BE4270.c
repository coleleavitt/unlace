__int64 __fastcall sub_1BE4270(__int64 a1, unsigned __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v8; // eax
  __int64 v9; // rdx
  _QWORD *v10; // rax
  unsigned __int64 v11; // rbp
  unsigned __int64 *v12; // rdi
  __int64 v13; // r8
  __int64 v14; // rcx
  _QWORD *v15; // rsi
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  __int64 result; // rax
  __int64 v19; // rdx
  unsigned __int64 v20; // rdi
  unsigned int v21; // ecx
  __int64 *v22; // rsi
  int v23; // r12d
  __int64 *v24; // r11
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rax
  unsigned __int64 v28; // rbp
  _QWORD *v29; // r12
  _QWORD *v30; // r15
  unsigned int v31; // eax
  _QWORD *v32; // rsi
  __int64 v33; // rcx
  __int64 v34; // r13
  __int64 v35; // rbp
  unsigned __int64 v36; // rax
  __int64 v37; // rax
  char *v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // r11
  unsigned __int64 *v42; // r13
  size_t v43; // rdx
  unsigned __int64 *v44; // rax
  unsigned __int64 v45; // rdx
  int v46; // esi
  int v47; // esi
  unsigned int v48; // ecx
  unsigned __int64 *v49; // rdi
  unsigned __int64 v50; // r8
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  int v54; // eax
  int v55; // ecx
  unsigned int v56; // edx
  __int64 v57; // r8
  int v58; // r11d
  _QWORD *v59; // r10
  int v60; // ebp
  int v61; // ebp
  unsigned int v62; // edx
  __int64 v63; // r8
  int v64; // r10d
  _QWORD *v65; // r9
  __int64 v66; // rdx
  size_t v67; // rdx
  unsigned __int64 *v68; // r10
  __int64 v69; // [rsp+0h] [rbp-58h]
  int v70; // [rsp+0h] [rbp-58h]
  __m128 v71[4]; // [rsp+10h] [rbp-48h] BYREF

  v8 = *(_DWORD *)(a1 + 8);
  if ( v8 )
  {
    v19 = *(unsigned int *)(a1 + 16);
    if ( (_DWORD)v19 )
    {
      a5 = *(_QWORD *)a1;
      v20 = *a2;
      v21 = (v19 - 1) & (*a2 ^ (*a2 >> 9));
      v22 = (__int64 *)(a5 + 8LL * v21);
      a6 = *v22;
      if ( *v22 == v20 )
      {
LABEL_27:
        sub_1848540(v71, v22, (_QWORD *)(a5 + 8 * v19), a1, 1);
        return 0;
      }
      v23 = 1;
      v24 = nullptr;
      if ( a6 )
      {
        while ( 1 )
        {
          if ( a6 == -1 && !v24 )
            v24 = v22;
          v21 = (v19 - 1) & (v23 + v21);
          v22 = (__int64 *)(a5 + 8LL * v21);
          a6 = *v22;
          if ( v20 == *v22 )
            goto LABEL_27;
          if ( !a6 )
          {
            if ( v24 )
              v22 = v24;
            break;
          }
          ++v23;
        }
      }
      v25 = v8 + 1;
      a4 = (unsigned int)(3 * v19);
      v71[0].m128_u64[0] = (unsigned __int64)v22;
      if ( 4 * v25 < (unsigned int)a4 )
      {
        v26 = (unsigned int)(v19 - *(_DWORD *)(a1 + 12) - v25);
        if ( (unsigned int)v26 > (unsigned int)v19 >> 3 )
        {
LABEL_39:
          *(_DWORD *)(a1 + 8) = v25;
          if ( *v22 )
            --*(_DWORD *)(a1 + 12);
          *v22 = *a2;
          sub_1848540(v71, v22, (_QWORD *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 16)), a1, 1);
          v27 = *(unsigned int *)(a1 + 32);
          v28 = *a2;
          if ( v27 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 36) )
          {
            sub_2237220(a1 + 24, a1 + 40, v27 + 1, 8);
            v27 = *(unsigned int *)(a1 + 32);
          }
          *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v27) = v28;
          ++*(_DWORD *)(a1 + 32);
          return 1;
        }
        sub_1B46E30(a1, v19, v19, v26, a5, a6);
LABEL_69:
        sub_1AF94D0((__int64 *)a1, a2, v71);
        v22 = (__int64 *)v71[0].m128_u64[0];
        v25 = *(_DWORD *)(a1 + 8) + 1;
        goto LABEL_39;
      }
    }
    else
    {
      v71[0].m128_u64[0] = 0;
    }
    sub_1B46E30(a1, 2 * v19, v19, a4, a5, a6);
    goto LABEL_69;
  }
  v9 = *(unsigned int *)(a1 + 32);
  v10 = *(_QWORD **)(a1 + 24);
  v11 = *a2;
  v12 = &v10[v9];
  v13 = (8 * v9) >> 3;
  v14 = (8 * v9) >> 5;
  if ( !v14 )
  {
    v15 = v10;
    goto LABEL_15;
  }
  if ( *v10 == v11 )
  {
    v15 = v10;
    goto LABEL_23;
  }
  v15 = v10 + 1;
  if ( v11 != v10[1] )
  {
    v15 = v10 + 2;
    if ( v11 != v10[2] )
    {
      v15 = v10 + 3;
      v14 = (__int64)&v10[4 * v14];
      if ( v10[3] != v11 )
      {
        while ( 1 )
        {
          v15 = v10 + 4;
          if ( (_QWORD *)v14 == v10 + 4 )
            break;
          if ( v10[4] == v11 )
            goto LABEL_23;
          if ( v10[5] == v11 )
          {
            v15 = v10 + 5;
            goto LABEL_23;
          }
          if ( v10[6] == v11 )
          {
            v15 = v10 + 6;
            goto LABEL_23;
          }
          if ( v10[7] == v11 )
          {
            v15 = v10 + 7;
            goto LABEL_23;
          }
          v10 += 4;
        }
        v13 = v12 - v15;
LABEL_15:
        if ( v13 != 2 )
        {
          if ( v13 != 3 )
          {
            if ( v13 != 1 )
            {
LABEL_18:
              v16 = v9 + 1;
              if ( v16 > *(unsigned int *)(a1 + 36) )
              {
                sub_2237220(a1 + 24, a1 + 40, v16, 8);
                v12 = (unsigned __int64 *)(*(_QWORD *)(a1 + 24) + 8LL * *(unsigned int *)(a1 + 32));
              }
              *v12 = v11;
              v17 = (unsigned int)(*(_DWORD *)(a1 + 32) + 1);
              *(_DWORD *)(a1 + 32) = v17;
              if ( (unsigned int)v17 <= 8 )
                return 1;
              v29 = *(_QWORD **)(a1 + 24);
              v30 = &v29[v17];
              while ( 1 )
              {
                v34 = *(unsigned int *)(a1 + 16);
                v35 = *(_QWORD *)a1;
                if ( !(_DWORD)v34 )
                  goto LABEL_49;
                v31 = (v34 - 1) & (*v29 ^ (*v29 >> 9));
                v32 = (_QWORD *)(v35 + 8LL * v31);
                v33 = *v32;
                if ( *v29 != *v32 )
                  break;
LABEL_46:
                sub_1848540(v71, v32, (_QWORD *)(v35 + 8 * v34), a1, 1);
LABEL_47:
                if ( v30 == ++v29 )
                  return 1;
              }
              v13 = 1;
              a6 = 0;
              if ( v33 )
              {
                while ( 1 )
                {
                  if ( !a6 && v33 == -1 )
                    a6 = (__int64)v32;
                  v31 = (v34 - 1) & (v13 + v31);
                  v32 = (_QWORD *)(v35 + 8LL * v31);
                  v33 = *v32;
                  if ( *v29 == *v32 )
                    goto LABEL_46;
                  if ( !v33 )
                    break;
                  v13 = (unsigned int)(v13 + 1);
                }
                if ( a6 )
                  v32 = (_QWORD *)a6;
              }
              v51 = *(_DWORD *)(a1 + 8) + 1;
              v14 = (unsigned int)(4 * v51);
              if ( (unsigned int)v14 >= 3 * (int)v34 )
              {
LABEL_49:
                v36 = (((((((unsigned int)(2 * v34 - 1) | ((unsigned __int64)(unsigned int)(2 * v34 - 1) >> 1)) >> 2)
                        | (unsigned int)(2 * v34 - 1)
                        | ((unsigned __int64)(unsigned int)(2 * v34 - 1) >> 1)) >> 4)
                      | (((unsigned int)(2 * v34 - 1) | ((unsigned __int64)(unsigned int)(2 * v34 - 1) >> 1)) >> 2)
                      | (unsigned int)(2 * v34 - 1)
                      | ((unsigned __int64)(unsigned int)(2 * v34 - 1) >> 1)) >> 8)
                    | (((((unsigned int)(2 * v34 - 1) | ((unsigned __int64)(unsigned int)(2 * v34 - 1) >> 1)) >> 2)
                      | (unsigned int)(2 * v34 - 1)
                      | ((unsigned __int64)(unsigned int)(2 * v34 - 1) >> 1)) >> 4)
                    | (((unsigned int)(2 * v34 - 1) | ((unsigned __int64)(unsigned int)(2 * v34 - 1) >> 1)) >> 2)
                    | (unsigned int)(2 * v34 - 1)
                    | ((unsigned __int64)(unsigned int)(2 * v34 - 1) >> 1);
                v37 = ((v36 >> 16) | v36) + 1;
                if ( (unsigned int)v37 < 0x40 )
                  LODWORD(v37) = 64;
                *(_DWORD *)(a1 + 16) = v37;
                v38 = (char *)sub_22300B0(8LL * (unsigned int)v37, 8, 64, v14, v13, a6);
                v39 = (__int64)v38;
                *(_QWORD *)a1 = v38;
                if ( v35 )
                {
                  v40 = *(unsigned int *)(a1 + 16);
                  v41 = 8 * v34;
                  *(_QWORD *)(a1 + 8) = 0;
                  v42 = (unsigned __int64 *)(v35 + 8 * v34);
                  v43 = 8 * v40;
                  if ( v38 != &v38[v43] )
                  {
                    v69 = v41;
                    memset(v38, 0, v43);
                    v41 = v69;
                  }
                  v44 = (unsigned __int64 *)v35;
                  if ( (unsigned __int64 *)v35 != v42 )
                  {
                    do
                    {
                      v45 = *v44;
                      if ( *v44 - 1 <= 0xFFFFFFFFFFFFFFFDLL )
                      {
                        v46 = *(_DWORD *)(a1 + 16);
                        if ( !v46 )
                        {
                          *(_QWORD *)&dword_0 = *v44;
                          BUG();
                        }
                        v47 = v46 - 1;
                        v48 = v47 & (v45 ^ (v45 >> 9));
                        v49 = (unsigned __int64 *)(*(_QWORD *)a1 + 8LL * v48);
                        v50 = *v49;
                        if ( v45 != *v49 && v50 )
                        {
                          v70 = 1;
                          v68 = nullptr;
                          while ( 1 )
                          {
                            if ( v50 == -1 && !v68 )
                              v68 = v49;
                            v48 = v47 & (v70 + v48);
                            v49 = (unsigned __int64 *)(*(_QWORD *)a1 + 8LL * v48);
                            v50 = *v49;
                            if ( v45 == *v49 )
                              break;
                            if ( !v50 )
                            {
                              if ( v68 )
                                v49 = v68;
                              break;
                            }
                            ++v70;
                          }
                        }
                        *v49 = *v44;
                        ++*(_DWORD *)(a1 + 8);
                      }
                      ++v44;
                    }
                    while ( v42 != v44 );
                  }
                  operator delete(v35, v41, 8);
                  v39 = *(_QWORD *)a1;
                  v60 = *(_DWORD *)(a1 + 16);
                  v51 = *(_DWORD *)(a1 + 8) + 1;
                }
                else
                {
                  v66 = *(unsigned int *)(a1 + 16);
                  *(_QWORD *)(a1 + 8) = 0;
                  v60 = v66;
                  v67 = 8 * v66;
                  if ( v38 != &v38[v67] )
                    v39 = (__int64)memset(v38, 0, v67);
                  v51 = 1;
                }
                if ( !v60 )
                {
LABEL_132:
                  ++*(_DWORD *)(a1 + 8);
                  BUG();
                }
                v61 = v60 - 1;
                v62 = v61 & (*v29 ^ (*v29 >> 9));
                v32 = (_QWORD *)(v39 + 8LL * v62);
                v63 = *v32;
                if ( *v29 != *v32 )
                {
                  v64 = 1;
                  v65 = nullptr;
                  if ( v63 )
                  {
                    while ( 1 )
                    {
                      if ( !v65 && v63 == -1 )
                        v65 = v32;
                      v62 = v61 & (v64 + v62);
                      v32 = (_QWORD *)(v39 + 8LL * v62);
                      v63 = *v32;
                      if ( *v29 == *v32 )
                        break;
                      if ( !v63 )
                      {
                        if ( v65 )
                          v32 = v65;
                        break;
                      }
                      ++v64;
                    }
                  }
                }
              }
              else
              {
                v52 = (unsigned int)(v34 - *(_DWORD *)(a1 + 12) - v51);
                v53 = (unsigned int)v34 >> 3;
                if ( (unsigned int)v52 <= (unsigned int)v53 )
                {
                  sub_1B46E30(a1, v34, v52, v53, v13, a6);
                  v54 = *(_DWORD *)(a1 + 16);
                  if ( !v54 )
                    goto LABEL_132;
                  v55 = v54 - 1;
                  v56 = (v54 - 1) & (*v29 ^ (*v29 >> 9));
                  v32 = (_QWORD *)(*(_QWORD *)a1 + 8LL * v56);
                  v57 = *v32;
                  v51 = *(_DWORD *)(a1 + 8) + 1;
                  if ( *v29 != *v32 )
                  {
                    v58 = 1;
                    v59 = nullptr;
                    if ( v57 )
                    {
                      while ( 1 )
                      {
                        if ( v57 == -1 && !v59 )
                          v59 = v32;
                        v56 = v55 & (v58 + v56);
                        v32 = (_QWORD *)(*(_QWORD *)a1 + 8LL * v56);
                        v57 = *v32;
                        if ( *v29 == *v32 )
                          break;
                        if ( !v57 )
                        {
                          if ( v59 )
                            v32 = v59;
                          break;
                        }
                        ++v58;
                      }
                    }
                  }
                }
              }
              *(_DWORD *)(a1 + 8) = v51;
              if ( *v32 )
                --*(_DWORD *)(a1 + 12);
              *v32 = *v29;
              sub_1848540(v71, v32, (_QWORD *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 16)), a1, 1);
              goto LABEL_47;
            }
LABEL_34:
            if ( *v15 != v11 )
              goto LABEL_18;
            goto LABEL_23;
          }
          if ( *v15 == v11 )
            goto LABEL_23;
          ++v15;
        }
        if ( *v15 == v11 )
          goto LABEL_23;
        ++v15;
        goto LABEL_34;
      }
    }
  }
LABEL_23:
  result = 0;
  if ( v12 == v15 )
    goto LABEL_18;
  return result;
}
