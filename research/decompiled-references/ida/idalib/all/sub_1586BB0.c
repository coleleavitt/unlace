__int64 *__fastcall sub_1586BB0(__int64 **a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v8; // rbx
  __int64 *v9; // r14
  unsigned int v10; // eax
  __int64 *result; // rax
  __int64 *i; // rdx
  __int64 *j; // rbp
  __int64 v14; // rax
  int v15; // edx
  int v16; // ecx
  unsigned int v17; // edx
  __int64 *v18; // rdi
  __int64 v19; // rsi
  __int64 *v20; // r13
  __int64 *v21; // rbx
  unsigned __int64 v22; // r15
  unsigned __int64 v23; // rax
  _QWORD *v24; // rcx
  unsigned __int64 v25; // rax
  _QWORD *v26; // r14
  _QWORD *v27; // rdi
  void *v28; // rdi
  void **v29; // rax
  void **v30; // r14
  __int64 v31; // rcx
  __int64 *k; // rdx
  int v33; // r9d
  __int64 *v34; // r10
  _QWORD *v35; // [rsp+0h] [rbp-58h]
  void **v36; // [rsp+0h] [rbp-58h]
  __int64 *v37; // [rsp+8h] [rbp-50h]
  __int64 *v38; // [rsp+10h] [rbp-48h]
  __int64 v39; // [rsp+18h] [rbp-40h]

  v6 = (unsigned int)(a2 - 1);
  v8 = *((unsigned int *)a1 + 4);
  v9 = *a1;
  v38 = *a1;
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
  result = (__int64 *)sub_22300B0(88LL * v10, 8, 5LL * v10, a4, a5, a6);
  *a1 = result;
  if ( v9 )
  {
    a1[1] = nullptr;
    v39 = 88 * v8;
    v37 = &v38[11 * v8];
    for ( i = &result[11 * *((unsigned int *)a1 + 4)]; i != result; result += 11 )
      *result = -4096;
    for ( j = v38; v37 != j; j += 11 )
    {
      v14 = *j;
      if ( *j != -8192 && v14 != -4096 )
      {
        v15 = *((_DWORD *)a1 + 4);
        if ( !v15 )
        {
          *(_QWORD *)&dword_0 = *j;
          BUG();
        }
        v16 = v15 - 1;
        v17 = (v15 - 1) & (((unsigned int)v14 >> 9) ^ ((unsigned int)v14 >> 4));
        v18 = &(*a1)[11 * v17];
        v19 = *v18;
        if ( v14 != *v18 )
        {
          v33 = 1;
          v34 = nullptr;
          if ( v19 != -4096 )
          {
            while ( 1 )
            {
              if ( v19 == -8192 && !v34 )
                v34 = v18;
              v17 = v16 & (v33 + v17);
              v18 = &(*a1)[11 * v17];
              v19 = *v18;
              if ( v14 == *v18 )
                break;
              if ( v19 == -4096 )
              {
                if ( v34 )
                  v18 = v34;
                break;
              }
              ++v33;
            }
          }
        }
        *v18 = v14;
        v18[1] = (__int64)(v18 + 3);
        v18[2] = 0x200000000LL;
        if ( *((_DWORD *)j + 4) )
          sub_1582780((__int64)(v18 + 1), (__int64)(j + 1));
        ++*((_DWORD *)a1 + 2);
        v20 = (__int64 *)j[1];
        v21 = &v20[4 * *((unsigned int *)j + 4)];
        if ( v20 != v21 )
        {
          do
          {
            v21 -= 4;
            v22 = v21[1];
            if ( v22 )
            {
              v23 = v21[2];
              if ( v23 )
              {
                if ( v22 < v23 || v22 > v23 + 14848 )
                {
                  v24 = *(_QWORD **)(v22 + 528);
                  v25 = (unsigned __int64)*(unsigned int *)(v22 + 536) << 6;
                  v26 = (_QWORD *)((char *)v24 + v25);
                  if ( v24 != (_QWORD *)((char *)v24 + v25) )
                  {
                    do
                    {
                      while ( 1 )
                      {
                        v26 -= 8;
                        v27 = (_QWORD *)v26[3];
                        if ( v27 == v26 + 5 )
                          break;
                        v35 = v24;
                        operator delete(v27);
                        v24 = v35;
                        if ( v35 == v26 )
                          goto LABEL_20;
                      }
                    }
                    while ( v24 != v26 );
LABEL_20:
                    v26 = *(_QWORD **)(v22 + 528);
                  }
                  if ( v26 != (_QWORD *)(v22 + 544) )
                    free(v26);
                  v28 = *(void **)(v22 + 416);
                  if ( v28 != (void *)(v22 + 432) )
                    free(v28);
                  v29 = (void **)(v22 + 384);
                  v30 = (void **)(v22 + 64);
                  do
                  {
                    while ( *v29 != v29 + 2 )
                    {
                      v36 = v29;
                      operator delete(*v29);
                      v29 = v36 - 4;
                      if ( v30 == v36 - 4 )
                        goto LABEL_28;
                    }
                    v29 -= 4;
                  }
                  while ( v30 != v29 );
LABEL_28:
                  operator delete((void *)v22, 0x3A0u);
                }
                else
                {
                  v31 = *(unsigned int *)(v23 + 14976);
                  *(_DWORD *)(v23 + 14976) = v31 + 1;
                  *(_QWORD *)(v23 + 8 * v31 + 14848) = v22;
                }
              }
            }
          }
          while ( v20 != v21 );
          v21 = (__int64 *)j[1];
        }
        if ( v21 != j + 3 )
          free(v21);
      }
    }
    return (__int64 *)operator delete(v38, v39, 8);
  }
  else
  {
    a1[1] = nullptr;
    for ( k = &result[11 * *((unsigned int *)a1 + 4)]; k != result; result += 11 )
      *result = -4096;
  }
  return result;
}
