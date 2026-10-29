_QWORD *__fastcall sub_20648B0(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v8; // rbx
  __int64 *v9; // rbp
  unsigned int v10; // eax
  _QWORD *result; // rax
  __int64 v12; // rcx
  __int64 *v13; // r14
  _QWORD *i; // rdx
  __int64 *j; // r13
  __int64 v16; // rax
  int v17; // ecx
  int v18; // esi
  unsigned int v19; // ecx
  _QWORD *v20; // rdi
  __int64 v21; // r9
  __int64 *v22; // r15
  __int64 *v23; // rbx
  _QWORD *k; // rdx
  int v25; // r10d
  _QWORD *v26; // r11
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
  result = (_QWORD *)sub_22300B0(56LL * v10, 8, 64, a4, a5, a6);
  *a1 = (__int64)result;
  if ( v9 )
  {
    v12 = *((unsigned int *)a1 + 4);
    a1[1] = 0;
    v27 = 56 * v8;
    v13 = &v9[7 * v8];
    for ( i = &result[7 * v12]; i != result; result += 7 )
      *result = -4096;
    for ( j = v9; v13 != j; j += 7 )
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
        v20 = (_QWORD *)(*a1 + 56LL * v19);
        v21 = *v20;
        if ( v16 != *v20 )
        {
          v25 = 1;
          v26 = nullptr;
          if ( v21 != -4096 )
          {
            while ( 1 )
            {
              if ( v21 == -8192 && !v26 )
                v26 = v20;
              v19 = v18 & (v25 + v19);
              v20 = (_QWORD *)(*a1 + 56LL * v19);
              v21 = *v20;
              if ( v16 == *v20 )
                break;
              if ( v21 == -4096 )
              {
                if ( v26 )
                  v20 = v26;
                break;
              }
              ++v25;
            }
          }
        }
        *v20 = v16;
        v20[1] = v20 + 3;
        v20[2] = 0x400000000LL;
        if ( *((_DWORD *)j + 4) )
          sub_20645B0((__int64)(v20 + 1), (__int64)(j + 1));
        ++*((_DWORD *)a1 + 2);
        v22 = (__int64 *)j[1];
        v23 = &v22[*((unsigned int *)j + 4)];
        if ( v22 != v23 )
        {
          do
          {
            while ( *--v23 )
            {
              sub_20A0850(v23);
              if ( v22 == v23 )
                goto LABEL_16;
            }
          }
          while ( v22 != v23 );
LABEL_16:
          v23 = (__int64 *)j[1];
        }
        if ( v23 != j + 3 )
          free(v23);
      }
    }
    return (_QWORD *)operator delete(v9, v27, 8);
  }
  else
  {
    a1[1] = 0;
    for ( k = &result[7 * *((unsigned int *)a1 + 4)]; k != result; result += 7 )
      *result = -4096;
  }
  return result;
}
