__int64 *__fastcall sub_2045A40(__int64 **a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v8; // rbx
  __int64 *v9; // r13
  unsigned int v10; // eax
  __int64 *result; // rax
  __int64 v12; // rdx
  __int64 *v13; // r14
  __int64 *i; // rdx
  __int64 *v15; // rbx
  __int64 v16; // rdx
  int v17; // eax
  int v18; // ecx
  unsigned int v19; // eax
  __int64 v20; // rdi
  __int64 v21; // r8
  __int64 v22; // rax
  int v23; // edx
  int v24; // edx
  __int64 *v25; // r15
  __int64 *v26; // rbp
  void *v27; // rdi
  __int64 *v28; // r15
  __int64 v29; // rdx
  __int64 *j; // rdx
  int v31; // r9d
  __int64 v32; // r10
  __int64 v33; // [rsp+8h] [rbp-40h]

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
  result = (__int64 *)sub_22300B0(48LL * v10, 8, 64, a4, a5, a6);
  *a1 = result;
  if ( v9 )
  {
    v12 = *((unsigned int *)a1 + 4);
    a1[1] = nullptr;
    v33 = 48 * v8;
    v13 = &v9[6 * v8];
    for ( i = &result[6 * v12]; i != result; result += 6 )
      *result = -4096;
    v15 = v9;
    if ( v13 != v9 )
    {
      do
      {
        v16 = *v15;
        if ( *v15 == -8192 || v16 == -4096 )
        {
          v28 = v15 + 6;
        }
        else
        {
          v17 = *((_DWORD *)a1 + 4);
          if ( !v17 )
          {
            *(_QWORD *)&dword_0 = *v15;
            BUG();
          }
          v18 = v17 - 1;
          v19 = (v17 - 1) & (((unsigned int)v16 >> 9) ^ ((unsigned int)v16 >> 4));
          v20 = (__int64)&(*a1)[6 * v19];
          v21 = *(_QWORD *)v20;
          if ( v16 != *(_QWORD *)v20 )
          {
            v31 = 1;
            v32 = 0;
            if ( v21 != -4096 )
            {
              while ( 1 )
              {
                if ( v21 == -8192 && !v32 )
                  v32 = v20;
                v19 = v18 & (v31 + v19);
                v20 = (__int64)&(*a1)[6 * v19];
                v21 = *(_QWORD *)v20;
                if ( v16 == *(_QWORD *)v20 )
                  break;
                if ( v21 == -4096 )
                {
                  if ( v32 )
                    v20 = v32;
                  break;
                }
                ++v31;
              }
            }
          }
          *(_QWORD *)(v20 + 8) = 0;
          v22 = v15[1];
          *(_QWORD *)(v20 + 16) = 0;
          *(_DWORD *)(v20 + 24) = 0;
          *(_QWORD *)(v20 + 8) = v22;
          LODWORD(v22) = *((_DWORD *)v15 + 4);
          *(_QWORD *)v20 = v16;
          v15[1] = 0;
          *(_DWORD *)(v20 + 16) = v22;
          v23 = *((_DWORD *)v15 + 5);
          *((_DWORD *)v15 + 4) = 0;
          LODWORD(v22) = *(_DWORD *)(v20 + 20);
          *(_DWORD *)(v20 + 20) = v23;
          v24 = *((_DWORD *)v15 + 6);
          *((_DWORD *)v15 + 5) = v22;
          LODWORD(v22) = *(_DWORD *)(v20 + 24);
          *(_DWORD *)(v20 + 24) = v24;
          *((_DWORD *)v15 + 6) = v22;
          *(_QWORD *)(v20 + 32) = v20 + 48;
          *(_QWORD *)(v20 + 40) = 0;
          if ( *((_DWORD *)v15 + 10) )
            sub_20456D0(v20 + 32, (__int64)(v15 + 4));
          ++*((_DWORD *)a1 + 2);
          v25 = (__int64 *)v15[4];
          v26 = &v25[4 * *((unsigned int *)v15 + 10)];
          if ( v25 != v26 )
          {
            do
            {
              while ( 1 )
              {
                v26 -= 4;
                v27 = (void *)v26[1];
                if ( !v27 )
                  break;
                operator delete(v27);
                if ( v25 == v26 )
                  goto LABEL_16;
              }
            }
            while ( v25 != v26 );
LABEL_16:
            v26 = (__int64 *)v15[4];
          }
          v28 = v15 + 6;
          if ( v26 != v15 + 6 )
            free(v26);
          operator delete(v15[1], 16LL * *((unsigned int *)v15 + 6), 8);
        }
        v15 = v28;
      }
      while ( v13 != v28 );
    }
    return (__int64 *)operator delete(v9, v33, 8);
  }
  else
  {
    v29 = *((unsigned int *)a1 + 4);
    a1[1] = nullptr;
    for ( j = &result[6 * v29]; j != result; result += 6 )
      *result = -4096;
  }
  return result;
}
