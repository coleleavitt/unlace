_QWORD *__fastcall sub_1A3F490(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v8; // rbx
  __int64 *v9; // rbp
  unsigned int v10; // eax
  _QWORD *result; // rax
  _QWORD *i; // rdx
  __int64 *j; // r13
  int v14; // ecx
  void *v15; // rdi
  __int64 v16; // rax
  int v17; // edx
  int v18; // ecx
  unsigned int v19; // edx
  __int64 v20; // rbx
  __int64 v21; // rdi
  void *v22; // rax
  void *v23; // r12
  unsigned int v24; // r14d
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r14
  __int64 v28; // rbx
  void *v29; // rdx
  int v30; // eax
  const void *v31; // rsi
  size_t v32; // rdx
  __int64 v33; // rdx
  _QWORD *k; // rdx
  int v35; // r10d
  __int64 v36; // r11
  __int64 *v37; // [rsp+8h] [rbp-50h]
  __int64 v38; // [rsp+18h] [rbp-40h]

  v6 = (unsigned int)(a2 - 1);
  v8 = *((unsigned int *)a1 + 4);
  v9 = (__int64 *)*a1;
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
  result = (_QWORD *)sub_22300B0(80LL * v10, 8, 64, a4, a5, a6);
  *a1 = (__int64)result;
  if ( v9 )
  {
    a1[1] = 0;
    v38 = 80 * v8;
    v37 = &v9[10 * v8];
    for ( i = &result[10 * *((unsigned int *)a1 + 4)]; i != result; result += 10 )
      *result = -4096;
    for ( j = v9; v37 != j; j += 10 )
    {
      v16 = *j;
      if ( *j != -8192 && v16 != -4096 )
      {
        v17 = *((_DWORD *)a1 + 4);
        if ( !v17 )
        {
          *(_QWORD *)&dword_0 = *j;
          BUG();
        }
        v18 = v17 - 1;
        v19 = (v17 - 1) & (((unsigned int)v16 >> 9) ^ ((unsigned int)v16 >> 4));
        v20 = *a1 + 80LL * v19;
        v21 = *(_QWORD *)v20;
        if ( v16 != *(_QWORD *)v20 )
        {
          v35 = 1;
          v36 = 0;
          if ( v21 != -4096 )
          {
            while ( 1 )
            {
              if ( v21 == -8192 && !v36 )
                v36 = v20;
              v19 = v18 & (v35 + v19);
              v20 = *a1 + 80LL * v19;
              v21 = *(_QWORD *)v20;
              if ( v16 == *(_QWORD *)v20 )
                break;
              if ( v21 == -4096 )
              {
                if ( v36 )
                  v20 = v36;
                break;
              }
              ++v35;
            }
          }
        }
        *(_QWORD *)v20 = v16;
        v22 = (void *)(v20 + 24);
        *(_QWORD *)(v20 + 16) = 0x200000000LL;
        v23 = j + 3;
        v24 = *((_DWORD *)j + 4);
        *(_QWORD *)(v20 + 8) = v20 + 24;
        if ( (__int64 *)(v20 + 8) != j + 1 && v24 )
        {
          v29 = (void *)j[1];
          if ( v29 == v23 )
          {
            v31 = j + 3;
            v32 = 4LL * v24;
            if ( v24 <= 2uLL
              || (sub_2237220(v20 + 8, v20 + 24, v24, 4),
                  v22 = *(void **)(v20 + 8),
                  v31 = (const void *)j[1],
                  (v32 = 4LL * *((unsigned int *)j + 4)) != 0) )
            {
              memcpy(v22, v31, v32);
            }
            *(_DWORD *)(v20 + 16) = v24;
            *((_DWORD *)j + 4) = 0;
          }
          else
          {
            *(_DWORD *)(v20 + 16) = v24;
            v30 = *((_DWORD *)j + 5);
            *(_QWORD *)(v20 + 8) = v29;
            *(_DWORD *)(v20 + 20) = v30;
            j[1] = (__int64)v23;
            *((_DWORD *)j + 5) = 0;
            *((_DWORD *)j + 4) = 0;
          }
        }
        v25 = j[6];
        v26 = v20 + 40;
        if ( v25 )
        {
          v14 = *((_DWORD *)j + 10);
          *(_QWORD *)(v20 + 48) = v25;
          *(_DWORD *)(v20 + 40) = v14;
          *(_QWORD *)(v20 + 56) = j[7];
          *(_QWORD *)(v20 + 64) = j[8];
          *(_QWORD *)(v25 + 8) = v26;
          *(_QWORD *)(v20 + 72) = j[9];
          j[6] = 0;
          j[7] = (__int64)(j + 5);
          j[8] = (__int64)(j + 5);
          j[9] = 0;
          ++*((_DWORD *)a1 + 2);
        }
        else
        {
          *(_QWORD *)(v20 + 48) = 0;
          *(_QWORD *)(v20 + 56) = v26;
          *(_QWORD *)(v20 + 64) = v26;
          v27 = j[6];
          *(_DWORD *)(v20 + 40) = 0;
          *(_QWORD *)(v20 + 72) = 0;
          ++*((_DWORD *)a1 + 2);
          if ( v27 )
          {
            do
            {
              sub_16022F0((__int64)(j + 4), *(_QWORD **)(v27 + 24));
              v28 = *(_QWORD *)(v27 + 16);
              operator delete((void *)v27);
              v27 = v28;
            }
            while ( v28 );
          }
        }
        v15 = (void *)j[1];
        if ( v15 != v23 )
          free(v15);
      }
    }
    return (_QWORD *)operator delete(v9, v38, 8);
  }
  else
  {
    v33 = *((unsigned int *)a1 + 4);
    a1[1] = 0;
    for ( k = &result[10 * v33]; k != result; result += 10 )
      *result = -4096;
  }
  return result;
}
