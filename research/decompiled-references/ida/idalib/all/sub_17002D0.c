_QWORD *__fastcall sub_17002D0(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v8; // rbx
  __int64 *v9; // rbp
  unsigned int v10; // edi
  _QWORD *result; // rax
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 *v14; // r12
  _QWORD *i; // rdx
  __int64 *j; // r13
  __int64 v17; // rdx
  int v18; // edi
  __int64 v19; // rcx
  __int64 *v20; // rsi
  __int64 *v21; // r10
  int v22; // r8d
  int v23; // r9d
  unsigned int k; // eax
  __int64 *v25; // rdi
  __int64 v26; // r11
  __int64 v27; // rdi
  void **v28; // rax
  __int64 v29; // rdx
  _QWORD *m; // rdx
  unsigned int v31; // eax

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
  result = (_QWORD *)sub_22300B0(32LL * v10, 8, a3, a4, a5, a6);
  *a1 = (__int64)result;
  if ( v9 )
  {
    v12 = *((unsigned int *)a1 + 4);
    v13 = 32 * v8;
    a1[1] = 0;
    v14 = &v9[(unsigned __int64)v13 / 8];
    for ( i = &result[4 * v12]; i != result; *(result - 3) = -1 )
    {
      *result = -4096;
      result += 4;
    }
    for ( j = v9; v14 != j; j += 4 )
    {
      while ( 1 )
      {
        v17 = *j;
        if ( *j != -4096 )
          break;
        if ( j[1] == -1 )
        {
LABEL_19:
          j += 4;
          if ( v14 == j )
            return (_QWORD *)operator delete(v9, v13, 8);
        }
        else
        {
LABEL_9:
          v18 = *((_DWORD *)a1 + 4);
          if ( !v18 )
          {
            *(_QWORD *)&dword_0 = *j;
            BUG();
          }
          v19 = j[1];
          v20 = (__int64 *)*a1;
          v21 = nullptr;
          v22 = v18 - 1;
          v23 = 1;
          for ( k = (v18 - 1)
                  & (((0xBF58476D1CE4E5B9LL
                     * ((unsigned int)((0xBF58476D1CE4E5B9LL * v19) >> 31) ^ (484763065 * *((_DWORD *)j + 2))
                      | ((unsigned __int64)(((unsigned int)v17 >> 9) ^ ((unsigned int)v17 >> 4)) << 32))) >> 31)
                   ^ (484763065 * (((0xBF58476D1CE4E5B9LL * v19) >> 31) ^ (484763065 * *((_DWORD *)j + 2)))));
                ;
                k = v22 & v31 )
          {
            v25 = &v20[4 * k];
            v26 = *v25;
            if ( v17 == *v25 && v19 == v25[1] )
              break;
            if ( v26 == -4096 )
            {
              if ( v25[1] == -1 )
              {
                if ( v21 )
                  v25 = v21;
                break;
              }
            }
            else if ( v26 == -8192 && v25[1] == -2 && !v21 )
            {
              v21 = &v20[4 * k];
            }
            v31 = v23 + k;
            ++v23;
          }
          v25[2] = 0;
          *((_DWORD *)v25 + 6) = 0;
          *v25 = v17;
          v25[1] = v19;
          *((_DWORD *)v25 + 6) = *((_DWORD *)j + 6);
          v25[2] = j[2];
          j[2] = 0;
          ++*((_DWORD *)a1 + 2);
          v27 = j[2];
          if ( !v27 )
            goto LABEL_19;
          if ( (v27 & 4) == 0 )
            goto LABEL_19;
          v28 = (void **)(v27 & 0xFFFFFFFFFFFFFFF8LL);
          if ( (v27 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
            goto LABEL_19;
          if ( *v28 != v28 + 2 )
          {
            free(*v28);
            v28 = (void **)(v27 & 0xFFFFFFFFFFFFFFF8LL);
          }
          j += 4;
          operator delete(v28, 0x50u);
          if ( v14 == j )
            return (_QWORD *)operator delete(v9, v13, 8);
        }
      }
      if ( v17 != -8192 || j[1] != -2 )
        goto LABEL_9;
    }
    return (_QWORD *)operator delete(v9, v13, 8);
  }
  else
  {
    v29 = *((unsigned int *)a1 + 4);
    a1[1] = 0;
    for ( m = &result[4 * v29]; m != result; *(result - 3) = -1 )
    {
      *result = -4096;
      result += 4;
    }
  }
  return result;
}
