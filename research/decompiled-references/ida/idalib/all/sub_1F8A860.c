_DWORD *__fastcall sub_1F8A860(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v8; // rbx
  __int64 v9; // rbp
  unsigned int v10; // edi
  _DWORD *result; // rax
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // r14
  _DWORD *i; // rdx
  __int64 v16; // r13
  int v17; // eax
  int v18; // edx
  int v19; // ecx
  unsigned int v20; // edi
  __int64 v21; // rdx
  int v22; // esi
  __int64 v23; // rax
  void **v24; // r15
  _DWORD *j; // rdx
  int v26; // r9d
  __int64 v27; // r10

  v6 = (unsigned int)(a2 - 1);
  v8 = *((unsigned int *)a1 + 4);
  v9 = *a1;
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
  result = (_DWORD *)sub_22300B0(16LL * v10, 8, a3, a4, a5, a6);
  *a1 = (__int64)result;
  if ( v9 )
  {
    v12 = *((unsigned int *)a1 + 4);
    v13 = 16 * v8;
    a1[1] = 0;
    v14 = v9 + v13;
    for ( i = &result[4 * v12]; i != result; result += 4 )
      *result = 0;
    if ( v14 != v9 )
    {
      v16 = v9;
      do
      {
        while ( 1 )
        {
          v17 = *(_DWORD *)v16;
          if ( (unsigned int)(*(_DWORD *)v16 + 1) > 1 )
          {
            v18 = *((_DWORD *)a1 + 4);
            if ( !v18 )
            {
              dword_0 = *(_DWORD *)v16;
              BUG();
            }
            v19 = v18 - 1;
            v20 = (v18 - 1) & v17;
            v21 = *a1 + 16LL * v20;
            v22 = *(_DWORD *)v21;
            if ( v17 != *(_DWORD *)v21 )
            {
              v26 = 1;
              v27 = 0;
              if ( v22 )
              {
                while ( 1 )
                {
                  if ( !v27 && v22 == -1 )
                    v27 = v21;
                  v20 = v19 & (v26 + v20);
                  v21 = *a1 + 16LL * v20;
                  v22 = *(_DWORD *)v21;
                  if ( v17 == *(_DWORD *)v21 )
                    break;
                  if ( !v22 )
                  {
                    if ( v27 )
                      v21 = v27;
                    break;
                  }
                  ++v26;
                }
              }
            }
            *(_DWORD *)v21 = *(_DWORD *)v16;
            v23 = *(_QWORD *)(v16 + 8);
            *(_QWORD *)(v16 + 8) = 0;
            *(_QWORD *)(v21 + 8) = v23;
            v24 = *(void ***)(v16 + 8);
            ++*((_DWORD *)a1 + 2);
            if ( v24 )
              break;
          }
          v16 += 16;
          if ( v14 == v16 )
            return (_DWORD *)operator delete(v9, v13, 8);
        }
        if ( *v24 != v24 + 2 )
          free(*v24);
        v16 += 16;
        operator delete(v24, 0x418u);
      }
      while ( v14 != v16 );
    }
    return (_DWORD *)operator delete(v9, v13, 8);
  }
  else
  {
    a1[1] = 0;
    for ( j = &result[4 * *((unsigned int *)a1 + 4)]; j != result; result += 4 )
      *result = 0;
  }
  return result;
}
