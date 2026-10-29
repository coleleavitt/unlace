__int64 *__fastcall sub_4CDCE0(__int64 a1, __int64 a2)
{
  __int64 *v2; // r15
  __int64 *result; // rax
  __int64 v4; // r13
  __int64 v7; // r12
  _QWORD *v8; // rbx
  __int64 v9; // rax
  int v10; // r8d
  __int64 *v11; // rsi
  unsigned int v12; // edx
  __int64 *v13; // rdi
  __int64 v14; // rdx
  __int64 *v15; // r9
  __int64 *i; // rax
  __int64 v17; // rdx
  unsigned int v18; // eax
  __int64 v19; // rdx
  int v20; // eax
  _QWORD *v21; // rdx
  int j; // r9d
  __int64 v23; // r10
  __int64 v24; // rax
  int v25; // edi
  unsigned int v26; // edx
  __int64 *v27; // rsi
  __int64 v28; // rdx
  __int64 *v29; // r8
  __int64 *k; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  _QWORD *v33; // rbx
  unsigned int v34; // edx
  size_t v35; // rsi
  unsigned int *v36; // rax
  __int64 v37; // rdx
  __int64 *v38; // rdi
  unsigned int v39; // edx
  int v40; // eax
  unsigned int v41; // eax
  __int64 v42; // r13
  __int64 *v43; // rax
  __int64 *v44; // r12
  __int64 v45; // rdx
  __int64 *v46; // rdi
  __int64 v47; // r13
  __int64 *v48; // r15
  __int64 v49; // r14
  __int64 v50; // rdx
  __int64 *v51; // rsi
  __int64 *v52; // rdx
  char **exception; // r13
  __int64 v54; // rdx
  unsigned int v55; // [rsp+14h] [rbp-64h]
  unsigned int v56; // [rsp+14h] [rbp-64h]
  __int64 *v57; // [rsp+18h] [rbp-60h]
  __int64 v58[11]; // [rsp+20h] [rbp-58h] BYREF

  v2 = *(__int64 **)a1;
  result = (__int64 *)*(unsigned int *)(a1 + 8);
  v4 = *(_QWORD *)a1 + 8LL * (_QWORD)result;
  if ( *(_QWORD *)a1 != v4 )
  {
    while ( (unsigned __int64)*v2 <= 1 )
    {
      if ( (__int64 *)v4 == ++v2 )
        return result;
    }
    if ( (__int64 *)v4 != v2 )
    {
      v7 = *v2;
      v8 = nullptr;
      while ( 1 )
      {
        v9 = *(unsigned int *)(a2 + 8);
        v10 = *(_DWORD *)(v7 + 12);
        v11 = *(__int64 **)a2;
        v12 = v9 - 1;
        v9 *= 8;
        v13 = (__int64 *)(*(_QWORD *)a2 + v9);
        v14 = 8LL * (v10 & v12);
        v15 = (__int64 *)(*(_QWORD *)a2 + v14);
        if ( v14 != v9 )
        {
          for ( i = (__int64 *)(*(_QWORD *)a2 + v14); v13 != i; ++i )
          {
            v17 = *i;
            if ( (unsigned __int64)*i > 1 )
            {
              if ( *(_DWORD *)(v17 + 12) == v10 && v17 == v7 )
                goto LABEL_18;
            }
            else if ( !v17 )
            {
              goto LABEL_14;
            }
          }
        }
        if ( v11 == v15 )
        {
LABEL_14:
          if ( !v8 )
            goto LABEL_43;
          goto LABEL_15;
        }
        while ( 1 )
        {
          v32 = *v11;
          if ( (unsigned __int64)*v11 <= 1 )
            break;
          if ( *(_DWORD *)(v32 + 12) == v10 && v32 == v7 )
            goto LABEL_18;
LABEL_39:
          if ( v15 == ++v11 )
            goto LABEL_14;
        }
        if ( v32 )
          goto LABEL_39;
        if ( !v8 )
        {
LABEL_43:
          v33 = (_QWORD *)sub_186B270(0x18u);
          *v33 = 2;
          v20 = 1;
          v8 = v33 + 1;
          v21 = v8;
          goto LABEL_17;
        }
LABEL_15:
        v18 = *((_DWORD *)v8 - 1);
        if ( v18 == *((_DWORD *)v8 - 2) )
        {
          v34 = (3 * v18 + 1) >> 1;
          v35 = 8 * v34 + 8;
          if ( 8 * v18 + 8 >= (unsigned int)v35 || v18 >= v34 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_DFB18(v58, "Overflow encountered when expanding vector", v54);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v58);
            sub_233E40((__int64)v58);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v55 = (3 * v18 + 1) >> 1;
          v36 = (unsigned int *)sub_186B300(v8 - 1, v35);
          v8 = v36 + 2;
          *v36 = v55;
          LODWORD(v36) = v36[1];
          v21 = &v8[(unsigned int)v36];
          v20 = (_DWORD)v36 + 1;
        }
        else
        {
          v19 = v18;
          v20 = v18 + 1;
          v21 = &v8[v19];
        }
LABEL_17:
        *v21 = v7;
        *((_DWORD *)v8 - 1) = v20;
LABEL_18:
        result = v2 + 1;
        if ( (__int64 *)v4 != v2 + 1 )
        {
          while ( 1 )
          {
            v7 = *result;
            v2 = result;
            if ( (unsigned __int64)*result > 1 )
              break;
            if ( (__int64 *)v4 == ++result )
              goto LABEL_23;
          }
          if ( (__int64 *)v4 != result )
            continue;
        }
LABEL_23:
        if ( v8 )
        {
          for ( j = *((_DWORD *)v8 - 1); j; *((_DWORD *)v8 - 1) = j )
          {
            v23 = v8[--j];
            v24 = *(unsigned int *)(a1 + 8);
            v25 = *(_DWORD *)(v23 + 12);
            v26 = v24 - 1;
            v24 *= 8;
            v27 = (__int64 *)(*(_QWORD *)a1 + v24);
            v28 = 8LL * (v25 & v26);
            v29 = (__int64 *)(*(_QWORD *)a1 + v28);
            if ( v28 != v24 )
            {
              for ( k = (__int64 *)(*(_QWORD *)a1 + v28); v27 != k; ++k )
              {
                v31 = *k;
                if ( (unsigned __int64)*k > 1 )
                {
                  if ( *(_DWORD *)(v31 + 12) == v25 && v23 == v31 )
                  {
LABEL_55:
                    v38 = k + 1;
                    if ( v27 == k + 1 )
                      v38 = *(__int64 **)a1;
                    v39 = *(_DWORD *)(a1 + 12) - 1;
                    if ( *v38 )
                    {
                      *k = 1;
                      v40 = *(_DWORD *)(a1 + 16);
                      *(_DWORD *)(a1 + 12) = v39;
                      v41 = v40 + 1;
                      if ( v39 < 0x40 )
                        v39 = 64;
                      *(_DWORD *)(a1 + 16) = v41;
                      if ( v39 < v41 )
                      {
                        if ( !(unsigned __int8)sub_186AF10(v38) )
                        {
                          v42 = *(unsigned int *)(a1 + 8);
                          v43 = (__int64 *)sub_186B270(8 * v42);
                          v44 = v43;
                          if ( (_DWORD)v42 )
                            memset(v43, 0, 8 * v42);
                          v45 = *(unsigned int *)(a1 + 8);
                          v46 = *(__int64 **)a1;
                          v47 = 8 * v45;
                          v48 = *(__int64 **)a1;
                          v56 = v45 - 1;
                          v49 = *(_QWORD *)a1 + 8 * v45;
                          v57 = &v44[v45];
                          if ( *(_QWORD *)a1 != v49 )
                          {
                            do
                            {
                              if ( (unsigned __int64)*v48 > 1 )
                              {
                                v50 = 8LL * (*(_DWORD *)(*v48 + 12) & v56);
                                v51 = &v44[(unsigned __int64)v50 / 8];
                                if ( v47 == v50 )
                                {
LABEL_79:
                                  if ( v44 == v51 )
                                  {
LABEL_84:
                                    sub_1872CE0("");
                                    sub_1873130(114, 213);
                                  }
                                  v52 = v44;
                                  while ( *v52 )
                                  {
                                    if ( v51 == ++v52 )
                                      goto LABEL_84;
                                  }
                                }
                                else
                                {
                                  v52 = &v44[(unsigned __int64)v50 / 8];
                                  while ( *v52 )
                                  {
                                    if ( v57 == ++v52 )
                                      goto LABEL_79;
                                  }
                                }
                                *v52 = *v48;
                              }
                              ++v48;
                            }
                            while ( (__int64 *)v49 != v48 );
                            v46 = *(__int64 **)a1;
                          }
                          if ( v46 )
                            sub_186B220(v46);
                          *(_QWORD *)a1 = v44;
                          *(_DWORD *)(a1 + 16) = 0;
                        }
                        j = *((_DWORD *)v8 - 1) - 1;
                      }
                    }
                    else
                    {
                      *k = 0;
                      *(_DWORD *)(a1 + 12) = v39;
                    }
                    goto LABEL_32;
                  }
                }
                else if ( !v31 )
                {
                  goto LABEL_32;
                }
              }
            }
            if ( *(__int64 **)a1 != v29 )
            {
              for ( k = *(__int64 **)a1; v29 != k; ++k )
              {
                v37 = *k;
                if ( (unsigned __int64)*k > 1 )
                {
                  if ( *(_DWORD *)(v37 + 12) == v25 && v23 == v37 )
                    goto LABEL_55;
                }
                else if ( !v37 )
                {
                  break;
                }
              }
            }
LABEL_32:
            ;
          }
          return (__int64 *)sub_186B220(v8 - 1);
        }
        return result;
      }
    }
  }
  return result;
}

