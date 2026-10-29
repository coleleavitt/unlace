_QWORD *__fastcall sub_14044D0(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rcx
  __int64 v8; // rbx
  __int64 *v9; // rbp
  unsigned int v10; // eax
  _QWORD *result; // rax
  __int64 *v12; // r12
  _QWORD *i; // rcx
  __int64 *j; // r15
  __int64 v15; // rax
  int v16; // ecx
  int v17; // esi
  unsigned int v18; // ecx
  __int64 v19; // rdi
  __int64 v20; // r9
  void **v21; // r13
  void **v22; // rbx
  __int64 v23; // rdx
  _QWORD *k; // rdx
  int v25; // r10d
  __int64 v26; // r11
  __int64 v27; // [rsp+8h] [rbp-40h]

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
  result = (_QWORD *)sub_22300B0(104LL * v10, 8, a3, 3LL * v10, a5, a6);
  *a1 = (__int64)result;
  if ( v9 )
  {
    a1[1] = 0;
    v27 = 104 * v8;
    v12 = &v9[13 * v8];
    for ( i = &result[13 * *((unsigned int *)a1 + 4)]; i != result; result += 13 )
      *result = -4096;
    for ( j = v9; v12 != j; j += 13 )
    {
      v15 = *j;
      if ( *j != -8192 && v15 != -4096 )
      {
        v16 = *((_DWORD *)a1 + 4);
        if ( !v16 )
        {
          *(_QWORD *)&dword_0 = *j;
          BUG();
        }
        v17 = v16 - 1;
        v18 = (v16 - 1) & (((unsigned int)v15 >> 9) ^ ((unsigned int)v15 >> 4));
        v19 = *a1 + 104LL * v18;
        v20 = *(_QWORD *)v19;
        if ( v15 != *(_QWORD *)v19 )
        {
          v25 = 1;
          v26 = 0;
          if ( v20 != -4096 )
          {
            while ( 1 )
            {
              if ( v20 == -8192 && !v26 )
                v26 = v19;
              v18 = v17 & (v25 + v18);
              v19 = *a1 + 104LL * v18;
              v20 = *(_QWORD *)v19;
              if ( v15 == *(_QWORD *)v19 )
                break;
              if ( v20 == -4096 )
              {
                if ( v26 )
                  v19 = v26;
                break;
              }
              ++v25;
            }
          }
        }
        *(_QWORD *)v19 = v15;
        *(_BYTE *)(v19 + 8) = j[1] & 1 | *(_BYTE *)(v19 + 8) & 0xFE;
        *(_DWORD *)(v19 + 12) = *((_DWORD *)j + 3);
        *(_DWORD *)(v19 + 16) = *((_DWORD *)j + 4);
        *(_QWORD *)(v19 + 24) = v19 + 40;
        *(_QWORD *)(v19 + 32) = 0x200000000LL;
        if ( *((_DWORD *)j + 8) )
          sub_CEFDD0(v19 + 24, (__int64)(j + 3));
        ++*((_DWORD *)a1 + 2);
        v21 = (void **)j[3];
        v22 = &v21[4 * *((unsigned int *)j + 8)];
        if ( v21 != v22 )
        {
          do
          {
            while ( 1 )
            {
              v22 -= 4;
              if ( *v22 == v22 + 2 )
                break;
              operator delete(*v22);
              if ( v21 == v22 )
                goto LABEL_16;
            }
          }
          while ( v21 != v22 );
LABEL_16:
          v22 = (void **)j[3];
        }
        if ( v22 != (void **)(j + 5) )
          free(v22);
      }
    }
    return (_QWORD *)operator delete(v9, v27, 8);
  }
  else
  {
    v23 = *((unsigned int *)a1 + 4);
    a1[1] = 0;
    for ( k = &result[13 * v23]; k != result; result += 13 )
      *result = -4096;
  }
  return result;
}
