__int64 *__fastcall sub_1F37750(__int64 **a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v8; // r12
  __int64 *v9; // rbp
  unsigned int v10; // eax
  __int64 *result; // rax
  __int64 v12; // rdx
  int v13; // r10d
  __int64 *v14; // r11
  __int64 *v15; // rcx
  __int64 *i; // rdx
  __int64 *v17; // rcx
  int v18; // r12d
  __int64 v19; // rsi
  int v20; // edi
  int v21; // r9d
  __int64 *v22; // r14
  unsigned int j; // edx
  __int64 *v24; // r8
  __int64 v25; // r15
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 *k; // rdx
  unsigned int v29; // edx
  __int64 v30; // [rsp+8h] [rbp-40h]

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
  result = (__int64 *)sub_22300B0(24LL * v10, 8, 64, a4, a5, a6);
  *a1 = result;
  if ( v9 )
  {
    v12 = *((unsigned int *)a1 + 4);
    a1[1] = nullptr;
    v13 = v12;
    v30 = 24 * v8;
    v14 = &v9[3 * v8];
    v15 = &result[3 * v12];
    for ( i = result; v15 != i; *((_DWORD *)i - 4) = -1 )
    {
      *i = -4096;
      i += 3;
    }
    v17 = v9;
    v18 = v13 - 1;
    if ( v14 != v9 )
    {
      while ( 1 )
      {
        v19 = *v17;
        if ( *v17 == -4096 )
        {
          if ( *((_DWORD *)v17 + 2) == -1 )
            goto LABEL_19;
LABEL_9:
          if ( !v13 )
            goto LABEL_23;
LABEL_10:
          v20 = *((_DWORD *)v17 + 2);
          v21 = 1;
          v22 = nullptr;
          for ( j = v18
                  & (((0xBF58476D1CE4E5B9LL
                     * ((unsigned int)(37 * v20)
                      | ((unsigned __int64)(((unsigned int)v19 >> 9) ^ ((unsigned int)v19 >> 4)) << 32))) >> 31)
                   ^ (756364221 * v20)); ; j = v18 & v29 )
          {
            v24 = &result[3 * j];
            v25 = *v24;
            if ( v19 == *v24 && v20 == *((_DWORD *)v24 + 2) )
              break;
            if ( v25 == -4096 )
            {
              if ( *((_DWORD *)v24 + 2) == -1 )
              {
                if ( v22 )
                  v24 = v22;
                break;
              }
            }
            else if ( v25 == -8192 && *((_DWORD *)v24 + 2) == -2 && !v22 )
            {
              v22 = &result[3 * j];
            }
            v29 = v21 + j;
            ++v21;
          }
          v26 = v17[2];
          v17 += 3;
          *v24 = v19;
          *((_DWORD *)v24 + 2) = v20;
          v24[2] = v26;
          ++*((_DWORD *)a1 + 2);
          if ( v14 == v17 )
            return (__int64 *)operator delete(v9, v30, 8);
        }
        else
        {
          if ( v19 != -8192 )
            goto LABEL_9;
          if ( *((_DWORD *)v17 + 2) != -2 )
          {
            if ( !v13 )
            {
LABEL_23:
              *(_QWORD *)&dword_0 = *v17;
              BUG();
            }
            goto LABEL_10;
          }
LABEL_19:
          v17 += 3;
          if ( v14 == v17 )
            return (__int64 *)operator delete(v9, v30, 8);
        }
      }
    }
    return (__int64 *)operator delete(v9, v30, 8);
  }
  else
  {
    v27 = *((unsigned int *)a1 + 4);
    a1[1] = nullptr;
    for ( k = &result[3 * v27]; k != result; *((_DWORD *)result - 4) = -1 )
    {
      *result = -4096;
      result += 3;
    }
  }
  return result;
}
