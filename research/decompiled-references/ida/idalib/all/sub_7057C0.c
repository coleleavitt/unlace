_QWORD *__fastcall sub_7057C0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v8; // rbx
  __int64 *v9; // rbp
  unsigned int v10; // edi
  _QWORD *result; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  _QWORD *v14; // rdx
  __int64 v15; // rbx
  __int64 *v16; // r8
  __int64 *i; // rax
  __int64 v18; // rdx
  int v19; // esi
  _QWORD *v20; // rcx
  int v21; // esi
  int v22; // r13d
  _QWORD *v23; // r11
  __int64 v24; // rdi
  __int64 v25; // r10

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
  v12 = *(unsigned int *)(a1 + 16);
  *(_QWORD *)a1 = result;
  v13 = 16 * v12;
  v14 = &result[(unsigned __int64)v13 / 8];
  if ( v9 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    v15 = 2 * v8;
    v16 = &v9[v15];
    if ( v13 )
    {
      if ( (v13 & 0x10) == 0 || (*result = -4096, result += 2, result != v14) )
      {
        do
        {
          *result = -4096;
          result += 4;
          *(result - 2) = -4096;
        }
        while ( result != v14 );
      }
    }
    for ( i = v9; v16 != i; i += 2 )
    {
      v18 = *i;
      if ( *i != -4096 && v18 != -8192 )
      {
        v19 = *(_DWORD *)(a1 + 16);
        v20 = nullptr;
        if ( v19 )
        {
          v21 = v19 - 1;
          v22 = 1;
          v23 = nullptr;
          LODWORD(v24) = v21 & (((unsigned int)v18 >> 9) ^ ((unsigned int)v18 >> 4));
          v20 = (_QWORD *)(*(_QWORD *)a1 + 16LL * (unsigned int)v24);
          v25 = *v20;
          if ( *v20 != v18 )
          {
            while ( v25 != -4096 )
            {
              if ( !v23 && v25 == -8192 )
                v23 = v20;
              v24 = v21 & (unsigned int)(v24 + v22);
              v20 = (_QWORD *)(*(_QWORD *)a1 + 16 * v24);
              v25 = *v20;
              if ( v18 == *v20 )
                goto LABEL_13;
              ++v22;
            }
            if ( v23 )
              v20 = v23;
          }
        }
LABEL_13:
        *v20 = v18;
        v20[1] = i[1];
        ++*(_DWORD *)(a1 + 8);
      }
    }
    return (_QWORD *)operator delete(v9, v15 * 8, 8);
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0;
    if ( result != v14 )
    {
      if ( (v13 & 0x10) == 0 || (*result = -4096, result += 2, result != v14) )
      {
        do
        {
          *result = -4096;
          result += 4;
          *(result - 2) = -4096;
        }
        while ( result != v14 );
      }
    }
  }
  return result;
}
