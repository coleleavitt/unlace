_QWORD *__fastcall sub_6E2A40(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v9; // r13
  __int64 *v10; // rbp
  unsigned int v11; // edi
  _QWORD *result; // rax
  __int64 v13; // r8
  _QWORD *v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rcx
  _QWORD *v17; // rdx
  __int64 v18; // r13
  __int64 *v19; // r15
  __int64 *i; // rbx
  __int64 v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rdx
  int v24; // r10d
  void *v25; // r14

  v6 = (unsigned int)(a2 - 1);
  v7 = 8;
  v9 = *(unsigned int *)(a1 + 16);
  v10 = *(__int64 **)a1;
  v11 = (((((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
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
  if ( v11 < 0x40 )
    v11 = 64;
  *(_DWORD *)(a1 + 16) = v11;
  result = (_QWORD *)sub_22300B0(16LL * v11, 8, a3, a4, a5, a6);
  v15 = *(unsigned int *)(a1 + 16);
  *(_QWORD *)a1 = result;
  v16 = 16 * v15;
  v17 = &result[(unsigned __int64)v16 / 8];
  if ( v10 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    v18 = 2 * v9;
    v19 = &v10[v18];
    if ( v16 )
    {
      if ( (v16 & 0x10) == 0 || (*result = -4096, result += 2, result != v17) )
      {
        do
        {
          *result = -4096;
          result += 4;
          *(result - 2) = -4096;
        }
        while ( result != v17 );
      }
    }
    for ( i = v10; v19 != i; i += 2 )
    {
      v21 = *i;
      if ( *i != -4096 && v21 != -8192 )
      {
        v22 = *(unsigned int *)(a1 + 16);
        v23 = nullptr;
        if ( (_DWORD)v22 )
        {
          v22 = (unsigned int)(v22 - 1);
          v24 = 1;
          v14 = nullptr;
          v7 = (unsigned int)v22 & (((unsigned int)v21 >> 9) ^ ((unsigned int)v21 >> 4));
          v23 = (_QWORD *)(*(_QWORD *)a1 + 16 * v7);
          v13 = *v23;
          if ( *v23 != v21 )
          {
            while ( v13 != -4096 )
            {
              if ( !v14 && v13 == -8192 )
                v14 = v23;
              v7 = (unsigned int)v22 & ((_DWORD)v7 + v24);
              v23 = (_QWORD *)(*(_QWORD *)a1 + 16 * v7);
              v13 = *v23;
              if ( v21 == *v23 )
                goto LABEL_13;
              ++v24;
            }
            if ( v14 )
              v23 = v14;
          }
        }
LABEL_13:
        *v23 = v21;
        v23[1] = i[1];
        i[1] = 0;
        ++*(_DWORD *)(a1 + 8);
        v25 = (void *)i[1];
        if ( v25 )
        {
          sub_F7D1D0(i[1], v7, v23, v22, v13, v14);
          v7 = 104;
          operator delete(v25, 0x68u);
        }
      }
    }
    return (_QWORD *)operator delete(v10, v18 * 8, 8);
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0;
    if ( result != v17 )
    {
      if ( (v16 & 0x10) == 0 || (*result = -4096, result += 2, result != v17) )
      {
        do
        {
          *result = -4096;
          result += 4;
          *(result - 2) = -4096;
        }
        while ( result != v17 );
      }
    }
  }
  return result;
}
