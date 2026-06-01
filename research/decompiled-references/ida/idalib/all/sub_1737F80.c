__int64 *__fastcall sub_1737F80(__int64 **a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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
  __int64 v17; // rcx
  int v18; // eax
  int v19; // edx
  unsigned int v20; // eax
  unsigned __int64 v21; // r15
  __int64 v22; // rdi
  __int64 *v23; // rdi
  __int64 v24; // rdx
  __int64 *j; // rdx
  int v26; // r8d
  unsigned __int64 v27; // r9

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
  result = (__int64 *)sub_22300B0((unsigned __int64)v10 << 6, 8, a3, a4, a5, a6);
  *a1 = result;
  if ( v9 )
  {
    v12 = *((unsigned int *)a1 + 4);
    v13 = v8 << 6;
    a1[1] = nullptr;
    v14 = (__int64 *)((char *)v9 + v13);
    for ( i = &result[8 * v12]; i != result; result += 8 )
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
          v21 = (unsigned __int64)&(*a1)[8 * (unsigned __int64)v20];
          v22 = *(_QWORD *)v21;
          if ( v17 != *(_QWORD *)v21 )
          {
            v26 = 1;
            v27 = 0;
            if ( v22 != -4096 )
            {
              while ( 1 )
              {
                if ( v22 == -8192 && !v27 )
                  v27 = v21;
                v20 = v19 & (v26 + v20);
                v21 = (unsigned __int64)&(*a1)[8 * (unsigned __int64)v20];
                v22 = *(_QWORD *)v21;
                if ( v17 == *(_QWORD *)v21 )
                  break;
                if ( v22 == -4096 )
                {
                  if ( v27 )
                    v21 = v27;
                  break;
                }
                ++v26;
              }
            }
          }
          *(_QWORD *)v21 = v17;
          *(_QWORD *)(v21 + 8) = v16[1];
          sub_1737F30(v21 + 16, (__int64)(v16 + 2));
          *(_DWORD *)(v21 + 48) = *((_DWORD *)v16 + 12);
          *(_QWORD *)(v21 + 56) = v16[7];
          ++*((_DWORD *)a1 + 2);
          if ( *((_BYTE *)v16 + 40) )
          {
            v23 = (__int64 *)v16[2];
            if ( v23 != v16 + 4 )
              free(v23);
          }
        }
        v16 += 8;
      }
      while ( v14 != v16 );
    }
    return (__int64 *)operator delete(v9, v13, 8);
  }
  else
  {
    v24 = *((unsigned int *)a1 + 4);
    a1[1] = nullptr;
    for ( j = &result[8 * v24]; j != result; result += 8 )
      *result = -4096;
  }
  return result;
}
