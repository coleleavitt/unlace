_QWORD *__fastcall sub_1587800(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 *v8; // rbx
  __int64 v9; // r13
  unsigned int v10; // edi
  _QWORD *result; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rdx
  __int64 *j; // r13
  __int64 v15; // rdi
  int v16; // eax
  int v17; // esi
  unsigned int v18; // edx
  _QWORD *v19; // rax
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rdx
  _QWORD *v26; // rax
  _QWORD *v27; // rbx
  unsigned __int64 v28; // r15
  unsigned __int64 v29; // rax
  _QWORD *v30; // r14
  unsigned __int64 v31; // rax
  _QWORD *v32; // r12
  _QWORD *v33; // rdi
  void *v34; // rdi
  void **v35; // r12
  void **v36; // r14
  __int64 v37; // rsi
  __int64 v38; // rdx
  _QWORD *k; // rdx
  int v40; // r10d
  _QWORD *v41; // r11
  __int64 *i; // [rsp+0h] [rbp-58h]
  _QWORD *v43; // [rsp+8h] [rbp-50h]
  __int64 *v44; // [rsp+10h] [rbp-48h]
  __int64 v45; // [rsp+18h] [rbp-40h]

  v6 = (unsigned int)(a2 - 1);
  v8 = *(__int64 **)a1;
  v9 = *(unsigned int *)(a1 + 16);
  v44 = *(__int64 **)a1;
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
  *(_DWORD *)(a1 + 16) = v10;
  result = (_QWORD *)sub_22300B0(32LL * v10, 8, a3, a4, a5, a6);
  *(_QWORD *)a1 = result;
  if ( v8 )
  {
    v12 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v45 = 32 * v9;
    v13 = &result[4 * v12];
    for ( i = &v44[4 * v9]; v13 != result; result += 4 )
      *result = -4096;
    for ( j = v44; i != j; j += 4 )
    {
      v15 = *j;
      if ( *j != -8192 && v15 != -4096 )
      {
        v16 = *(_DWORD *)(a1 + 16);
        if ( !v16 )
        {
          *(_QWORD *)&dword_0 = *j;
          BUG();
        }
        v17 = v16 - 1;
        v18 = (v16 - 1) & (((unsigned int)v15 >> 9) ^ ((unsigned int)v15 >> 4));
        v19 = (_QWORD *)(*(_QWORD *)a1 + 32LL * v18);
        v20 = *v19;
        if ( v15 != *v19 )
        {
          v40 = 1;
          v41 = nullptr;
          if ( v20 != -4096 )
          {
            while ( 1 )
            {
              if ( v20 == -8192 && !v41 )
                v41 = v19;
              v18 = v17 & (v40 + v18);
              v19 = (_QWORD *)(*(_QWORD *)a1 + 32LL * v18);
              v20 = *v19;
              if ( v15 == *v19 )
                break;
              if ( v20 == -4096 )
              {
                if ( v41 )
                  v19 = v41;
                break;
              }
              ++v40;
            }
          }
        }
        v21 = *j;
        v19[2] = 0;
        v19[3] = 0;
        v19[1] = 0;
        *v19 = v21;
        v19[1] = j[1];
        v22 = j[2];
        j[1] = 0;
        v23 = v19[2];
        v19[2] = v22;
        v24 = j[3];
        j[2] = v23;
        v25 = v19[3];
        v19[3] = v24;
        v26 = (_QWORD *)j[2];
        v27 = (_QWORD *)j[1];
        j[3] = v25;
        v43 = v26;
        ++*(_DWORD *)(a1 + 8);
        if ( v26 != v27 )
        {
          do
          {
            v28 = v27[1];
            if ( v28 )
            {
              v29 = v27[2];
              if ( v29 )
              {
                if ( v28 < v29 || v28 > v29 + 14848 )
                {
                  v30 = *(_QWORD **)(v28 + 528);
                  v31 = (unsigned __int64)*(unsigned int *)(v28 + 536) << 6;
                  v32 = (_QWORD *)((char *)v30 + v31);
                  if ( v30 != (_QWORD *)((char *)v30 + v31) )
                  {
                    do
                    {
                      while ( 1 )
                      {
                        v32 -= 8;
                        v33 = (_QWORD *)v32[3];
                        if ( v33 == v32 + 5 )
                          break;
                        operator delete(v33);
                        if ( v30 == v32 )
                          goto LABEL_18;
                      }
                    }
                    while ( v30 != v32 );
LABEL_18:
                    v32 = *(_QWORD **)(v28 + 528);
                  }
                  if ( v32 != (_QWORD *)(v28 + 544) )
                    free(v32);
                  v34 = *(void **)(v28 + 416);
                  if ( v34 != (void *)(v28 + 432) )
                    free(v34);
                  v35 = (void **)(v28 + 384);
                  v36 = (void **)(v28 + 64);
                  do
                  {
                    while ( *v35 != v35 + 2 )
                    {
                      operator delete(*v35);
                      v35 -= 4;
                      if ( v36 == v35 )
                        goto LABEL_26;
                    }
                    v35 -= 4;
                  }
                  while ( v36 != v35 );
LABEL_26:
                  operator delete((void *)v28, 0x3A0u);
                }
                else
                {
                  v37 = *(unsigned int *)(v29 + 14976);
                  *(_DWORD *)(v29 + 14976) = v37 + 1;
                  *(_QWORD *)(v29 + 8 * v37 + 14848) = v28;
                }
              }
            }
            v27 += 4;
          }
          while ( v43 != v27 );
          v27 = (_QWORD *)j[1];
        }
        if ( v27 )
          operator delete(v27);
      }
    }
    return (_QWORD *)operator delete(v44, v45, 8);
  }
  else
  {
    v38 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    for ( k = &result[4 * v38]; k != result; result += 4 )
      *result = -4096;
  }
  return result;
}
