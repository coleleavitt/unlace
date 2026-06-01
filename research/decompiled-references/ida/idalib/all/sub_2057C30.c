_QWORD *__fastcall sub_2057C30(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v8; // rbx
  __int64 *v9; // rbp
  unsigned int v10; // edi
  _QWORD *result; // rax
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 *v14; // r14
  _QWORD *i; // rdx
  __int64 *v16; // r13
  __int64 v17; // rax
  int v18; // edx
  int v19; // esi
  unsigned int v20; // ecx
  _QWORD *v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // r15
  __int64 v25; // rdx
  _QWORD *j; // rdx
  int v27; // r11d
  _QWORD *v28; // r9

  v6 = (unsigned int)(a2 - 1);
  v8 = *(unsigned int *)(a1 + 16);
  v9 = *(__int64 **)a1;
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
  result = (_QWORD *)sub_22300B0(16LL * v10, 8, a3, a4, a5, a6);
  *(_QWORD *)a1 = result;
  if ( v9 )
  {
    v12 = *(unsigned int *)(a1 + 16);
    v13 = 2 * v8;
    *(_QWORD *)(a1 + 8) = 0;
    v14 = &v9[v13];
    for ( i = &result[2 * v12]; i != result; result += 2 )
      *result = -4096;
    if ( v14 != v9 )
    {
      v16 = v9;
      do
      {
        v17 = *v16;
        if ( *v16 != -8192 && v17 != -4096 )
        {
          v18 = *(_DWORD *)(a1 + 16);
          if ( !v18 )
          {
            *(_QWORD *)&dword_0 = *v16;
            BUG();
          }
          v19 = v18 - 1;
          v20 = (v18 - 1) & (((unsigned int)v17 >> 9) ^ ((unsigned int)v17 >> 4));
          v21 = (_QWORD *)(*(_QWORD *)a1 + 16LL * v20);
          v22 = *v21;
          if ( v17 != *v21 )
          {
            v27 = 1;
            v28 = nullptr;
            if ( v22 != -4096 )
            {
              while ( 1 )
              {
                if ( v22 == -8192 && !v28 )
                  v28 = v21;
                v20 = v19 & (v27 + v20);
                v21 = (_QWORD *)(*(_QWORD *)a1 + 16LL * v20);
                v22 = *v21;
                if ( v17 == *v21 )
                  break;
                if ( v22 == -4096 )
                {
                  if ( v28 )
                    v21 = v28;
                  break;
                }
                ++v27;
              }
            }
          }
          *v21 = v17;
          v23 = v16[1];
          v16[1] = 0;
          v21[1] = v23;
          v24 = v16[1];
          ++*(_DWORD *)(a1 + 8);
          if ( v24 )
          {
            sub_20CC0C0(v24);
            sub_20C9BF0(v24);
          }
        }
        v16 += 2;
      }
      while ( v14 != v16 );
    }
    return (_QWORD *)operator delete(v9, v13 * 8, 8);
  }
  else
  {
    v25 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    for ( j = &result[2 * v25]; j != result; result += 2 )
      *result = -4096;
  }
  return result;
}
