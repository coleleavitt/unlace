_QWORD *__fastcall sub_7C0AC0(__int64 *a1, int a2)
{
  unsigned __int64 v2; // rdx
  __int64 v4; // r12
  __int64 *v5; // rbp
  unsigned int v6; // eax
  _QWORD *result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rdx
  __int64 *v11; // r13
  __int64 *i; // r8
  __int64 v13; // rdi
  int v14; // r9d
  int v15; // r11d
  int v16; // r9d
  __int64 *v17; // r10
  int v18; // esi
  __int64 *v19; // r12
  unsigned int j; // eax
  unsigned int v21; // eax
  __int64 *v22; // rdx
  __int64 v23; // rcx

  v2 = (unsigned int)(a2 - 1);
  v4 = *((unsigned int *)a1 + 4);
  v5 = (__int64 *)*a1;
  v6 = (((((((((v2 | (v2 >> 1)) >> 2) | v2 | (v2 >> 1)) >> 4) | ((v2 | (v2 >> 1)) >> 2) | v2 | (v2 >> 1)) >> 8)
        | ((((v2 | (v2 >> 1)) >> 2) | v2 | (v2 >> 1)) >> 4)
        | ((v2 | (v2 >> 1)) >> 2)
        | v2
        | (v2 >> 1)) >> 16)
      | ((((((v2 | (v2 >> 1)) >> 2) | v2 | (v2 >> 1)) >> 4) | ((v2 | (v2 >> 1)) >> 2) | v2 | (v2 >> 1)) >> 8)
      | ((((v2 | (v2 >> 1)) >> 2) | v2 | (v2 >> 1)) >> 4)
      | ((v2 | (v2 >> 1)) >> 2)
      | v2
      | (v2 >> 1))
     + 1;
  if ( v6 < 0x40 )
    v6 = 64;
  *((_DWORD *)a1 + 4) = v6;
  result = (_QWORD *)sub_25CC9C0(24LL * v6, 8);
  v8 = *((unsigned int *)a1 + 4);
  *a1 = (__int64)result;
  v9 = 24 * v8;
  v10 = &result[3 * v8];
  if ( v5 )
  {
    a1[1] = 0;
    v11 = &v5[3 * v4];
    if ( v9 )
    {
      if ( (((_BYTE)v10 - (_BYTE)result) & 8) == 0
        || (*result = -4096, result += 3, *(result - 2) = 0xFFFFFFFFLL, result != v10) )
      {
        do
        {
          *result = -4096;
          result += 6;
          *(result - 5) = 0xFFFFFFFFLL;
          *(result - 3) = -4096;
          *(result - 2) = 0xFFFFFFFFLL;
        }
        while ( result != v10 );
      }
    }
    for ( i = v5; v11 != i; i += 3 )
    {
      v13 = *i;
      if ( *i == -4096 )
      {
        if ( *((_DWORD *)i + 2) != -1 )
          goto LABEL_11;
      }
      else if ( v13 != -8192 || *((_DWORD *)i + 2) != -2 )
      {
LABEL_11:
        v14 = *((_DWORD *)a1 + 4);
        if ( !v14 )
        {
          *(_QWORD *)&dword_0 = *i;
          BUG();
        }
        v15 = *((_DWORD *)i + 2);
        v16 = v14 - 1;
        v17 = (__int64 *)*a1;
        v18 = 1;
        v19 = nullptr;
        for ( j = v16
                & (((0xBF58476D1CE4E5B9LL
                   * ((unsigned int)(37 * v15)
                    | ((unsigned __int64)(((unsigned int)v13 >> 9) ^ ((unsigned int)v13 >> 4)) << 32))) >> 31)
                 ^ (756364221 * v15)); ; j = v16 & v21 )
        {
          v22 = &v17[3 * j];
          v23 = *v22;
          if ( v13 == *v22 && v15 == *((_DWORD *)v22 + 2) )
            break;
          if ( v23 == -4096 )
          {
            if ( *((_DWORD *)v22 + 2) == -1 )
            {
              if ( v19 )
                v22 = v19;
              break;
            }
          }
          else if ( v23 == -8192 && *((_DWORD *)v22 + 2) == -2 && !v19 )
          {
            v19 = &v17[3 * j];
          }
          v21 = v18 + j;
          ++v18;
        }
        *v22 = v13;
        *((_DWORD *)v22 + 2) = *((_DWORD *)i + 2);
        *((_DWORD *)v22 + 4) = *((_DWORD *)i + 4);
        ++*((_DWORD *)a1 + 2);
      }
    }
    return (_QWORD *)operator delete();
  }
  else
  {
    a1[1] = 0;
    if ( result != v10 )
    {
      if ( (((_BYTE)v10 - (_BYTE)result) & 8) == 0
        || (*result = -4096, result += 3, *(result - 2) = 0xFFFFFFFFLL, result != v10) )
      {
        do
        {
          *result = -4096;
          result += 6;
          *(result - 5) = 0xFFFFFFFFLL;
          *(result - 3) = -4096;
          *(result - 2) = 0xFFFFFFFFLL;
        }
        while ( result != v10 );
      }
    }
  }
  return result;
}

