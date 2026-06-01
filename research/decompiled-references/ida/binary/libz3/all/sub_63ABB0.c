__int64 *__fastcall sub_63ABB0(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 *v3; // rbx
  __int64 *result; // rax
  __int64 v5; // rbp
  __int64 v6; // rsi
  _QWORD *v7; // r15
  __int64 v8; // r8
  _QWORD *v9; // r12
  __int64 **v10; // rbp
  __int64 v11; // r14
  _QWORD *v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // edi
  unsigned int v16; // edx
  __int64 *v17; // rsi
  __int64 v18; // rdx
  __int64 *v19; // r9
  __int64 *i; // rax
  __int64 v21; // rdx
  _QWORD *v22; // rax
  __int64 v23; // rdx
  _QWORD *v24; // rcx
  __int64 v25; // rdi
  unsigned int v26; // edx
  int v27; // eax
  unsigned int v28; // eax
  char v29; // al
  _QWORD *v30; // rax
  __int64 v31; // rdx
  __int64 *v32; // r9
  __int64 v33; // rsi
  __int64 v34; // rdi
  __int64 v35; // r9
  unsigned int v36; // r13d
  __int64 v37; // r14
  _QWORD *v38; // r10
  __int64 *v39; // rbx
  _QWORD *v40; // rax
  __int64 **v41; // r15
  _QWORD *v42; // rbp
  _QWORD *v43; // rcx
  __int64 v44; // r12
  __int64 v45; // rdx
  _QWORD *v46; // rsi
  _QWORD *v47; // rdx
  __int64 v48; // rsi
  __int64 v49; // [rsp+8h] [rbp-70h]
  _QWORD *v50; // [rsp+8h] [rbp-70h]
  __int64 n; // [rsp+10h] [rbp-68h]
  size_t na; // [rsp+10h] [rbp-68h]
  unsigned int v53; // [rsp+18h] [rbp-60h]
  __int64 v54; // [rsp+20h] [rbp-58h]

  v2 = a2;
  v3 = *(__int64 **)a2;
  result = (__int64 *)*(unsigned int *)(a2 + 8);
  v5 = *(_QWORD *)a2 + 8LL * (_QWORD)result;
  if ( *(_QWORD *)a2 != v5 )
  {
    while ( (unsigned __int64)*v3 <= 1 )
    {
      if ( (__int64 *)v5 == ++v3 )
        goto LABEL_12;
    }
    if ( (__int64 *)v5 != v3 )
    {
      v6 = *v3;
      do
      {
        sub_639510(a1, v6);
        result = v3 + 1;
        if ( (__int64 *)v5 == v3 + 1 )
          break;
        while ( 1 )
        {
          v6 = *result;
          v3 = result;
          if ( (unsigned __int64)*result > 1 )
            break;
          if ( (__int64 *)v5 == ++result )
            goto LABEL_12;
        }
      }
      while ( (__int64 *)v5 != result );
    }
  }
LABEL_12:
  v7 = *(_QWORD **)a1;
  v8 = *(_QWORD *)a1 + 16LL * *(unsigned int *)(a1 + 8);
  if ( *(_QWORD *)a1 != v8 )
  {
    while ( *v7 <= 1u )
    {
      v7 += 2;
      if ( (_QWORD *)v8 == v7 )
        return result;
    }
    if ( (_QWORD *)v8 != v7 )
    {
      do
      {
        v9 = *(_QWORD **)v2;
        v10 = (__int64 **)v7[1];
        v11 = *(_QWORD *)v2 + 8LL * *(unsigned int *)(v2 + 8);
        v12 = *(_QWORD **)v2;
        if ( *(_QWORD *)v2 != v11 )
        {
          while ( *v12 <= 1u )
          {
            if ( (_QWORD *)v11 == ++v12 )
              goto LABEL_35;
          }
          if ( (_QWORD *)v11 != v12 )
          {
            v13 = *v12;
            do
            {
              v14 = *((unsigned int *)v10 + 2);
              v15 = *(_DWORD *)(v13 + 12);
              v16 = v14 - 1;
              v14 *= 8;
              v17 = (__int64 *)((char *)*v10 + v14);
              v18 = 8LL * (v15 & v16);
              v19 = &(*v10)[(unsigned __int64)v18 / 8];
              if ( v18 != v14 )
              {
                for ( i = &(*v10)[(unsigned __int64)v18 / 8]; v17 != i; ++i )
                {
                  v21 = *i;
                  if ( (unsigned __int64)*i > 1 )
                  {
                    if ( *(_DWORD *)(v21 + 12) == v15 && v21 == v13 )
                    {
LABEL_50:
                      v24 = i + 1;
                      v25 = *((unsigned int *)v10 + 3);
                      if ( v17 == i + 1 )
                        v24 = *v10;
                      v26 = v25 - 1;
                      if ( *v24 )
                      {
                        *i = 1;
                        v27 = *((_DWORD *)v10 + 4);
                        *((_DWORD *)v10 + 3) = v26;
                        v28 = v27 + 1;
                        if ( v26 < 0x40 )
                          v26 = 64;
                        *((_DWORD *)v10 + 4) = v28;
                        if ( v26 < v28 )
                        {
                          v49 = v8;
                          v29 = sub_186AF10(v25);
                          v8 = v49;
                          if ( !v29 )
                          {
                            v54 = v49;
                            v53 = *((_DWORD *)v10 + 2);
                            n = 8LL * v53;
                            v30 = (_QWORD *)sub_186B270(n);
                            v50 = v30;
                            v8 = v54;
                            if ( v53 )
                            {
                              memset(v30, 0, n);
                              v8 = v54;
                            }
                            v31 = *((unsigned int *)v10 + 2);
                            v32 = &(*v10)[v31];
                            if ( *v10 != v32 )
                            {
                              v33 = (__int64)&(*v10)[v31];
                              v34 = v2;
                              v35 = v11;
                              v36 = v31 - 1;
                              v37 = 8 * v31;
                              v38 = v12;
                              v39 = *v10;
                              v40 = v7;
                              v41 = v10;
                              v42 = &v50[v31];
                              v43 = v9;
                              v44 = v33;
                              do
                              {
                                while ( (unsigned __int64)*v39 <= 1 )
                                {
                                  if ( (__int64 *)v44 == ++v39 )
                                    goto LABEL_68;
                                }
                                v45 = 8LL * (*(_DWORD *)(*v39 + 12) & v36);
                                v46 = &v50[(unsigned __int64)v45 / 8];
                                if ( v37 == v45 )
                                {
LABEL_73:
                                  if ( v50 == v46 )
                                  {
LABEL_78:
                                    sub_1872CE0("");
                                    sub_1873130(114, 213);
                                  }
                                  v47 = v50;
                                  while ( *v47 )
                                  {
                                    if ( v46 == ++v47 )
                                      goto LABEL_78;
                                  }
                                }
                                else
                                {
                                  v47 = &v50[(unsigned __int64)v45 / 8];
                                  while ( *v47 )
                                  {
                                    if ( v42 == ++v47 )
                                      goto LABEL_73;
                                  }
                                }
                                v48 = *v39++;
                                *v47 = v48;
                              }
                              while ( (__int64 *)v44 != v39 );
LABEL_68:
                              v10 = v41;
                              v11 = v35;
                              v7 = v40;
                              v9 = v43;
                              v32 = *v10;
                              v12 = v38;
                              v2 = v34;
                            }
                            if ( v32 )
                            {
                              na = v8;
                              sub_186B220(v32);
                              v8 = na;
                            }
                            *((_DWORD *)v10 + 4) = 0;
                            *v10 = v50;
                          }
                        }
                      }
                      else
                      {
                        *i = 0;
                        *((_DWORD *)v10 + 3) = v26;
                      }
                      goto LABEL_30;
                    }
                  }
                  else if ( !v21 )
                  {
                    goto LABEL_30;
                  }
                }
              }
              if ( *v10 != v19 )
              {
                for ( i = *v10; v19 != i; ++i )
                {
                  v23 = *i;
                  if ( (unsigned __int64)*i > 1 )
                  {
                    if ( *(_DWORD *)(v23 + 12) == v15 && v23 == v13 )
                      goto LABEL_50;
                  }
                  else if ( !v23 )
                  {
                    break;
                  }
                }
              }
LABEL_30:
              v22 = v12 + 1;
              if ( (_QWORD *)v11 == v12 + 1 )
                break;
              while ( 1 )
              {
                v13 = *v22;
                v12 = v22;
                if ( *v22 > 1u )
                  break;
                if ( (_QWORD *)v11 == ++v22 )
                  goto LABEL_35;
              }
            }
            while ( (_QWORD *)v11 != v22 );
          }
        }
LABEL_35:
        result = v7 + 2;
        if ( (_QWORD *)v8 == v7 + 2 )
          break;
        while ( 1 )
        {
          v7 = result;
          if ( (unsigned __int64)*result > 1 )
            break;
          result += 2;
          if ( (__int64 *)v8 == result )
            return result;
        }
      }
      while ( (__int64 *)v8 != result && v9 != (_QWORD *)v11 );
    }
  }
  return result;
}

