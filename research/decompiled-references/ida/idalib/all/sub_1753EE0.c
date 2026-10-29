__int64 *__fastcall sub_1753EE0(unsigned int **a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v8; // rbp
  unsigned int *v9; // r12
  unsigned int v10; // eax
  __int64 *result; // rax
  __int64 *i; // rdx
  __int64 v13; // rdx
  int v14; // eax
  int v15; // esi
  unsigned int v16; // edi
  __int64 v17; // rax
  __int64 v18; // r9
  unsigned int *v19; // r13
  __int64 v20; // r15
  __int64 v21; // r8
  __int64 v22; // r14
  void **v23; // rdi
  __int64 v24; // rdx
  __int64 *j; // rdx
  int v26; // r10d
  __int64 v27; // r11
  __int64 *v28; // [rsp+8h] [rbp-F0h]
  unsigned int *v29; // [rsp+28h] [rbp-D0h]
  void *ptr; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v31; // [rsp+38h] [rbp-C0h]
  _DWORD v32[46]; // [rsp+40h] [rbp-B8h] BYREF

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
  result = (__int64 *)sub_22300B0(656LL * v10, 8, 5LL * v10, a4, a5, a6);
  *a1 = (unsigned int *)result;
  if ( v9 )
  {
    a1[1] = nullptr;
    v28 = (__int64 *)&v9[164 * v8];
    for ( i = &result[82 * *((unsigned int *)a1 + 4)]; i != result; result += 82 )
      *result = -4096;
    if ( v28 != (__int64 *)v9 )
    {
      v29 = v9;
      do
      {
        v13 = *(_QWORD *)v9;
        if ( *(_QWORD *)v9 != -8192 && v13 != -4096 )
        {
          v14 = *((_DWORD *)a1 + 4);
          if ( !v14 )
          {
            *(_QWORD *)&dword_0 = *(_QWORD *)v9;
            BUG();
          }
          v15 = v14 - 1;
          v16 = (v14 - 1) & (((unsigned int)v13 >> 9) ^ ((unsigned int)v13 >> 4));
          v17 = (__int64)&(*a1)[164 * v16];
          v18 = *(_QWORD *)v17;
          if ( v13 != *(_QWORD *)v17 )
          {
            v26 = 1;
            v27 = 0;
            if ( v18 != -4096 )
            {
              while ( 1 )
              {
                if ( v18 == -8192 && !v27 )
                  v27 = v17;
                v16 = v15 & (v26 + v16);
                v17 = (__int64)&(*a1)[164 * v16];
                v18 = *(_QWORD *)v17;
                if ( v13 == *(_QWORD *)v17 )
                  break;
                if ( v18 == -4096 )
                {
                  if ( v27 )
                    v17 = v27;
                  break;
                }
                ++v26;
              }
            }
          }
          *(_QWORD *)v17 = v13;
          v19 = (unsigned int *)(v17 + 8);
          *(_QWORD *)(v17 + 8) = 1;
          ptr = v32;
          v31 = 0x2000000001LL;
          v32[0] = -1;
          if ( (*(_BYTE *)(v17 + 8) & 1) != 0 )
          {
            v20 = v17 + 16;
            v21 = 640;
          }
          else
          {
            v20 = *(_QWORD *)(v17 + 16);
            v21 = 160LL * *(unsigned int *)(v17 + 24);
          }
          v22 = v20 + v21;
          if ( v20 + v21 != v20 )
          {
            do
            {
              while ( 1 )
              {
                *(_DWORD *)(v20 + 8) = 0;
                *(_QWORD *)v20 = v20 + 16;
                *(_DWORD *)(v20 + 12) = 32;
                if ( (_DWORD)v31 )
                  break;
                v20 += 160;
                if ( v22 == v20 )
                  goto LABEL_19;
              }
              v23 = (void **)v20;
              v20 += 160;
              sub_A6DB70(v23, (char **)&ptr);
            }
            while ( v22 != v20 );
LABEL_19:
            if ( ptr != v32 )
              free(ptr);
          }
          sub_1753A70(v19, v9 + 2);
          ++*((_DWORD *)a1 + 2);
          sub_1747E80((__int64)(v9 + 2));
          if ( (v9[2] & 1) == 0 )
            operator delete(*((_QWORD *)v9 + 2), 160LL * v9[6], 8);
        }
        v9 += 164;
      }
      while ( v28 != (__int64 *)v9 );
      v9 = v29;
    }
    return (__int64 *)operator delete(v9, 656 * v8, 8);
  }
  else
  {
    v24 = *((unsigned int *)a1 + 4);
    a1[1] = nullptr;
    for ( j = &result[82 * v24]; j != result; result += 82 )
      *result = -4096;
  }
  return result;
}
