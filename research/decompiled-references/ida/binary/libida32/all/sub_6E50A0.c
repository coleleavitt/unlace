_QWORD *__fastcall sub_6E50A0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v8; // rbx
  __int64 *v9; // rbp
  unsigned int v10; // edi
  _QWORD *result; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  _QWORD *v14; // rdx
  __int64 *v15; // r8
  __int64 *i; // rax
  __int64 v17; // rdx
  int v18; // esi
  _QWORD *v19; // rcx
  int v20; // esi
  int v21; // r13d
  _QWORD *v22; // r11
  __int64 v23; // rdi
  __int64 v24; // r10

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
  result = (_QWORD *)sub_220C370(16LL * v10, 8, a3, a4, a5, a6);
  v12 = *(unsigned int *)(a1 + 16);
  *(_QWORD *)a1 = result;
  v13 = 16 * v12;
  v14 = &result[(unsigned __int64)v13 / 8];
  if ( v9 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    v15 = &v9[2 * v8];
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
    for ( i = v9; v15 != i; i += 2 )
    {
      v17 = *i;
      if ( *i != -4096 && v17 != -8192 )
      {
        v18 = *(_DWORD *)(a1 + 16);
        v19 = nullptr;
        if ( v18 )
        {
          v20 = v18 - 1;
          v21 = 1;
          v22 = nullptr;
          LODWORD(v23) = v20 & (((unsigned int)v17 >> 9) ^ ((unsigned int)v17 >> 4));
          v19 = (_QWORD *)(*(_QWORD *)a1 + 16LL * (unsigned int)v23);
          v24 = *v19;
          if ( *v19 != v17 )
          {
            while ( v24 != -4096 )
            {
              if ( !v22 && v24 == -8192 )
                v22 = v19;
              v23 = v20 & (unsigned int)(v23 + v21);
              v19 = (_QWORD *)(*(_QWORD *)a1 + 16 * v23);
              v24 = *v19;
              if ( v17 == *v19 )
                goto LABEL_13;
              ++v21;
            }
            if ( v22 )
              v19 = v22;
          }
        }
LABEL_13:
        *v19 = v17;
        v19[1] = i[1];
        ++*(_DWORD *)(a1 + 8);
      }
    }
    return (_QWORD *)operator delete();
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

