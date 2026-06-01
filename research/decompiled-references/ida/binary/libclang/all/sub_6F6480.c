_QWORD *__fastcall sub_6F6480(__int64 a1, int a2)
{
  unsigned __int64 v2; // rax
  __int64 v4; // rbx
  __int64 *v5; // rbp
  unsigned int v6; // edi
  _QWORD *result; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  _QWORD *v10; // rdx
  __int64 *v11; // rdi
  __int64 *i; // rax
  __int64 v13; // rdx
  int v14; // ecx
  int v15; // r8d
  int v16; // r14d
  _QWORD *v17; // r11
  __int64 v18; // rsi
  _QWORD *v19; // rcx
  __int64 v20; // r10

  v2 = (unsigned int)(a2 - 1);
  v4 = *(unsigned int *)(a1 + 16);
  v5 = *(__int64 **)a1;
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
  *(_DWORD *)(a1 + 16) = v6;
  result = (_QWORD *)sub_25CC9C0(16LL * v6, 8);
  v8 = *(unsigned int *)(a1 + 16);
  *(_QWORD *)a1 = result;
  v9 = 16 * v8;
  v10 = &result[(unsigned __int64)v9 / 8];
  if ( v5 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    v11 = &v5[2 * v4];
    if ( v9 )
    {
      if ( (v9 & 0x10) == 0 || (*result = -4096, result += 2, result != v10) )
      {
        do
        {
          *result = -4096;
          result += 4;
          *(result - 2) = -4096;
        }
        while ( result != v10 );
      }
    }
    for ( i = v5; v11 != i; i += 2 )
    {
      v13 = *i;
      if ( *i != -4096 && v13 != -8192 )
      {
        v14 = *(_DWORD *)(a1 + 16);
        if ( !v14 )
        {
          *(_QWORD *)&dword_0 = *i;
          BUG();
        }
        v15 = v14 - 1;
        v16 = 1;
        v17 = nullptr;
        LODWORD(v18) = (v14 - 1) & (((unsigned int)v13 >> 9) ^ ((unsigned int)v13 >> 4));
        v19 = (_QWORD *)(*(_QWORD *)a1 + 16LL * (unsigned int)v18);
        v20 = *v19;
        if ( v13 != *v19 )
        {
          while ( v20 != -4096 )
          {
            if ( !v17 && v20 == -8192 )
              v17 = v19;
            v18 = v15 & (unsigned int)(v18 + v16);
            v19 = (_QWORD *)(*(_QWORD *)a1 + 16 * v18);
            v20 = *v19;
            if ( v13 == *v19 )
              goto LABEL_13;
            ++v16;
          }
          if ( v17 )
            v19 = v17;
        }
LABEL_13:
        *v19 = v13;
        v19[1] = i[1];
        ++*(_DWORD *)(a1 + 8);
      }
    }
    return (_QWORD *)operator delete();
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0;
    if ( result != v10 )
    {
      if ( (v9 & 0x10) == 0 || (*result = -4096, result += 2, result != v10) )
      {
        do
        {
          *result = -4096;
          result += 4;
          *(result - 2) = -4096;
        }
        while ( result != v10 );
      }
    }
  }
  return result;
}

