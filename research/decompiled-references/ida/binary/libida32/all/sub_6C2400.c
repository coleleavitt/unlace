_QWORD *__fastcall sub_6C2400(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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
  __int64 *v18; // r15
  __int64 *i; // rbx
  __int64 v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // rdx
  int v23; // r10d
  void *v24; // r14

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
  result = (_QWORD *)sub_220C370(16LL * v11, 8, a3, a4, a5, a6);
  v15 = *(unsigned int *)(a1 + 16);
  *(_QWORD *)a1 = result;
  v16 = 16 * v15;
  v17 = &result[(unsigned __int64)v16 / 8];
  if ( v10 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    v18 = &v10[2 * v9];
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
    for ( i = v10; v18 != i; i += 2 )
    {
      v20 = *i;
      if ( *i != -4096 && v20 != -8192 )
      {
        v21 = *(unsigned int *)(a1 + 16);
        v22 = nullptr;
        if ( (_DWORD)v21 )
        {
          v21 = (unsigned int)(v21 - 1);
          v23 = 1;
          v14 = nullptr;
          v7 = (unsigned int)v21 & (((unsigned int)v20 >> 9) ^ ((unsigned int)v20 >> 4));
          v22 = (_QWORD *)(*(_QWORD *)a1 + 16 * v7);
          v13 = *v22;
          if ( *v22 != v20 )
          {
            while ( v13 != -4096 )
            {
              if ( !v14 && v13 == -8192 )
                v14 = v22;
              v7 = (unsigned int)v21 & ((_DWORD)v7 + v23);
              v22 = (_QWORD *)(*(_QWORD *)a1 + 16 * v7);
              v13 = *v22;
              if ( v20 == *v22 )
                goto LABEL_13;
              ++v23;
            }
            if ( v14 )
              v22 = v14;
          }
        }
LABEL_13:
        *v22 = v20;
        v22[1] = i[1];
        i[1] = 0;
        ++*(_DWORD *)(a1 + 8);
        v24 = (void *)i[1];
        if ( v24 )
        {
          sub_F59490(i[1], v7, v22, v21, v13, v14);
          v7 = 104;
          operator delete(v24, 0x68u);
        }
      }
    }
    return (_QWORD *)operator delete();
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

