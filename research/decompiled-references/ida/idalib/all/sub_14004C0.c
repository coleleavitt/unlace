__int64 *__fastcall sub_14004C0(__int64 **a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v8; // rbx
  __int64 *v9; // rbp
  unsigned int v10; // edi
  __int64 *result; // rax
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 *v14; // r14
  __int64 *i; // rdx
  __int64 *v16; // r13
  __int64 v17; // rsi
  int v18; // eax
  int v19; // ecx
  unsigned int v20; // edx
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // rdx
  int v24; // ecx
  int v25; // ecx
  __int64 v26; // rdx
  __int64 *j; // rdx
  int v28; // r9d
  __int64 v29; // r10

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
  result = (__int64 *)sub_22300B0(32LL * v10, 8, a3, a4, a5, a6);
  *a1 = result;
  if ( v9 )
  {
    v12 = *((unsigned int *)a1 + 4);
    v13 = 4 * v8;
    a1[1] = nullptr;
    v14 = &v9[v13];
    for ( i = &result[4 * v12]; i != result; result += 4 )
      *result = -4096;
    if ( v14 != v9 )
    {
      v16 = v9;
      do
      {
        v17 = *v16;
        if ( *v16 != -8192 && v17 != -4096 )
        {
          v18 = *((_DWORD *)a1 + 4);
          if ( !v18 )
          {
            *(_QWORD *)&dword_0 = *v16;
            BUG();
          }
          v19 = v18 - 1;
          v20 = (v18 - 1) & (((unsigned int)v17 >> 9) ^ ((unsigned int)v17 >> 4));
          v21 = (__int64)&(*a1)[4 * v20];
          v22 = *(_QWORD *)v21;
          if ( v17 != *(_QWORD *)v21 )
          {
            v28 = 1;
            v29 = 0;
            if ( v22 != -4096 )
            {
              while ( 1 )
              {
                if ( v22 == -8192 && !v29 )
                  v29 = v21;
                v20 = v19 & (v28 + v20);
                v21 = (__int64)&(*a1)[4 * v20];
                v22 = *(_QWORD *)v21;
                if ( v17 == *(_QWORD *)v21 )
                  break;
                if ( v22 == -4096 )
                {
                  if ( v29 )
                    v21 = v29;
                  break;
                }
                ++v28;
              }
            }
          }
          *(_QWORD *)(v21 + 8) = 0;
          v23 = v16[1];
          *(_QWORD *)(v21 + 16) = 0;
          *(_DWORD *)(v21 + 24) = 0;
          *(_QWORD *)(v21 + 8) = v23;
          LODWORD(v23) = *((_DWORD *)v16 + 4);
          *(_QWORD *)v21 = v17;
          v16[1] = 0;
          *(_DWORD *)(v21 + 16) = v23;
          v24 = *((_DWORD *)v16 + 5);
          *((_DWORD *)v16 + 4) = 0;
          LODWORD(v23) = *(_DWORD *)(v21 + 20);
          *(_DWORD *)(v21 + 20) = v24;
          v25 = *((_DWORD *)v16 + 6);
          *((_DWORD *)v16 + 5) = v23;
          LODWORD(v23) = *(_DWORD *)(v21 + 24);
          *(_DWORD *)(v21 + 24) = v25;
          *((_DWORD *)v16 + 6) = v23;
          ++*((_DWORD *)a1 + 2);
          if ( *((_DWORD *)v16 + 6) )
            BUG();
          operator delete(0, 0, 8);
        }
        v16 += 4;
      }
      while ( v14 != v16 );
    }
    return (__int64 *)operator delete(v9, v13 * 8, 8);
  }
  else
  {
    v26 = *((unsigned int *)a1 + 4);
    a1[1] = nullptr;
    for ( j = &result[4 * v26]; j != result; result += 4 )
      *result = -4096;
  }
  return result;
}
