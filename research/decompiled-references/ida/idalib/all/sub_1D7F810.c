__int64 *__fastcall sub_1D7F810(__int64 **a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v8; // rbx
  __int64 *v9; // r14
  unsigned int v10; // eax
  __int64 *result; // rax
  __int64 v12; // rcx
  __int64 *v13; // rdx
  __int64 *j; // rbp
  __int64 v15; // rax
  int v16; // edx
  int v17; // ecx
  unsigned int v18; // edx
  __int64 *v19; // rdi
  __int64 v20; // rsi
  __int64 *v21; // r13
  __int64 *v22; // rbx
  unsigned __int64 v23; // r15
  unsigned __int64 v24; // rax
  _QWORD *v25; // rcx
  unsigned __int64 v26; // rax
  _QWORD *v27; // r14
  _QWORD *v28; // rdi
  void *v29; // rdi
  void **v30; // rax
  void **v31; // r14
  __int64 v32; // rcx
  __int64 *k; // rdx
  int v34; // r9d
  __int64 *v35; // r10
  _QWORD *v36; // [rsp+0h] [rbp-58h]
  void **v37; // [rsp+0h] [rbp-58h]
  __int64 *i; // [rsp+8h] [rbp-50h]
  __int64 *v39; // [rsp+10h] [rbp-48h]
  __int64 v40; // [rsp+18h] [rbp-40h]

  v6 = (unsigned int)(a2 - 1);
  v8 = *((unsigned int *)a1 + 4);
  v9 = *a1;
  v39 = *a1;
  v10 = (((((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
         | ((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4)
         | ((v6 | (v6 >> 1)) >> 2)
         | v6
         | (v6 >> 1)) >> 16)
       | ((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
       | ((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4)
       | ((v6 | (v6 >> 1)) >> 2)
       | v6
       | (v6 >> 1))
      + 1;
  if ( v10 < 0x40 )
    v10 = 64;
  *((_DWORD *)a1 + 4) = v10;
  result = (__int64 *)sub_22300B0(56LL * v10, 8, 64, a4, a5, a6);
  *a1 = result;
  if ( v9 )
  {
    v12 = *((unsigned int *)a1 + 4);
    a1[1] = nullptr;
    v40 = 56 * v8;
    v13 = &result[7 * v12];
    for ( i = &v39[7 * v8]; v13 != result; result += 7 )
      *result = -4096;
    for ( j = v39; i != j; j += 7 )
    {
      v15 = *j;
      if ( *j != -8192 && v15 != -4096 )
      {
        v16 = *((_DWORD *)a1 + 4);
        if ( !v16 )
        {
          *(_QWORD *)&dword_0 = *j;
          BUG();
        }
        v17 = v16 - 1;
        v18 = (v16 - 1) & (((unsigned int)v15 >> 9) ^ ((unsigned int)v15 >> 4));
        v19 = &(*a1)[7 * v18];
        v20 = *v19;
        if ( v15 != *v19 )
        {
          v34 = 1;
          v35 = nullptr;
          if ( v20 != -4096 )
          {
            while ( 1 )
            {
              if ( v20 == -8192 && !v35 )
                v35 = v19;
              v18 = v17 & (v34 + v18);
              v19 = &(*a1)[7 * v18];
              v20 = *v19;
              if ( v15 == *v19 )
                break;
              if ( v20 == -4096 )
              {
                if ( v35 )
                  v19 = v35;
                break;
              }
              ++v34;
            }
          }
        }
        *v19 = v15;
        v19[1] = (__int64)(v19 + 3);
        v19[2] = 0x100000000LL;
        if ( *((_DWORD *)j + 4) )
          sub_1582780((__int64)(v19 + 1), (__int64)(j + 1));
        ++*((_DWORD *)a1 + 2);
        v21 = (__int64 *)j[1];
        v22 = &v21[4 * *((unsigned int *)j + 4)];
        if ( v21 != v22 )
        {
          do
          {
            v22 -= 4;
            v23 = v22[1];
            if ( v23 )
            {
              v24 = v22[2];
              if ( v24 )
              {
                if ( v23 < v24 || v23 > v24 + 14848 )
                {
                  v25 = *(_QWORD **)(v23 + 528);
                  v26 = (unsigned __int64)*(unsigned int *)(v23 + 536) << 6;
                  v27 = (_QWORD *)((char *)v25 + v26);
                  if ( v25 != (_QWORD *)((char *)v25 + v26) )
                  {
                    do
                    {
                      while ( 1 )
                      {
                        v27 -= 8;
                        v28 = (_QWORD *)v27[3];
                        if ( v28 == v27 + 5 )
                          break;
                        v36 = v25;
                        operator delete(v28);
                        v25 = v36;
                        if ( v36 == v27 )
                          goto LABEL_20;
                      }
                    }
                    while ( v25 != v27 );
LABEL_20:
                    v27 = *(_QWORD **)(v23 + 528);
                  }
                  if ( v27 != (_QWORD *)(v23 + 544) )
                    free(v27);
                  v29 = *(void **)(v23 + 416);
                  if ( v29 != (void *)(v23 + 432) )
                    free(v29);
                  v30 = (void **)(v23 + 384);
                  v31 = (void **)(v23 + 64);
                  do
                  {
                    while ( *v30 != v30 + 2 )
                    {
                      v37 = v30;
                      operator delete(*v30);
                      v30 = v37 - 4;
                      if ( v31 == v37 - 4 )
                        goto LABEL_28;
                    }
                    v30 -= 4;
                  }
                  while ( v31 != v30 );
LABEL_28:
                  operator delete((void *)v23, 0x3A0u);
                }
                else
                {
                  v32 = *(unsigned int *)(v24 + 14976);
                  *(_DWORD *)(v24 + 14976) = v32 + 1;
                  *(_QWORD *)(v24 + 8 * v32 + 14848) = v23;
                }
              }
            }
          }
          while ( v21 != v22 );
          v22 = (__int64 *)j[1];
        }
        if ( v22 != j + 3 )
          free(v22);
      }
    }
    return (__int64 *)operator delete(v39, v40, 8);
  }
  else
  {
    a1[1] = nullptr;
    for ( k = &result[7 * *((unsigned int *)a1 + 4)]; k != result; result += 7 )
      *result = -4096;
  }
  return result;
}
