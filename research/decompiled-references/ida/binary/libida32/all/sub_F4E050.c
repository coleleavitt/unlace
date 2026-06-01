_DWORD *__fastcall sub_F4E050(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  unsigned int v8; // ebx
  int *v9; // rbp
  unsigned int v10; // edi
  _DWORD *result; // rax
  __int64 v12; // rcx
  _DWORD *v13; // rdx
  int v14; // r9d
  int *v15; // r8
  _DWORD *v16; // rcx
  int *v17; // rdx
  int i; // ebx
  int v19; // ecx
  unsigned int v20; // r10d
  _DWORD *v21; // rdi
  int v22; // r11d
  __int64 v23; // rcx
  _DWORD *j; // rdx
  int v25; // r13d
  _DWORD *v26; // r14

  v6 = (unsigned int)(a2 - 1);
  v8 = *((_DWORD *)a1 + 4);
  v9 = (int *)*a1;
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
  result = (_DWORD *)sub_220C370(16LL * v10, 8, a3, a4, a5, a6);
  *a1 = (__int64)result;
  if ( v9 )
  {
    v12 = *((unsigned int *)a1 + 4);
    v13 = result;
    a1[1] = 0;
    v14 = v12;
    v15 = &v9[4 * v8];
    v16 = &result[4 * v12];
    if ( result != v16 )
    {
      do
      {
        *v13 = 0x7FFFFFFF;
        v13 += 4;
      }
      while ( v16 != v13 );
    }
    v17 = v9;
    for ( i = v14 - 1; v15 != v17; *((_QWORD *)v21 + 1) = v23 )
    {
      while ( 1 )
      {
        v19 = *v17;
        if ( (unsigned int)(*v17 + 0x7FFFFFFF) <= 0xFFFFFFFD )
          break;
        v17 += 4;
        if ( v15 == v17 )
          return (_DWORD *)operator delete();
      }
      if ( !v14 )
      {
        dword_0 = 0;
        BUG();
      }
      v20 = i & (37 * v19);
      v21 = &result[4 * v20];
      v22 = *v21;
      if ( v19 != *v21 )
      {
        v25 = 1;
        v26 = nullptr;
        if ( v22 != 0x7FFFFFFF )
        {
          while ( 1 )
          {
            if ( !v26 && v22 == 0x80000000 )
              v26 = v21;
            v20 = i & (v25 + v20);
            v21 = &result[4 * v20];
            v22 = *v21;
            if ( v19 == *v21 )
              break;
            if ( v22 == 0x7FFFFFFF )
            {
              if ( v26 )
                v21 = v26;
              break;
            }
            ++v25;
          }
        }
      }
      *v21 = v19;
      v23 = *((_QWORD *)v17 + 1);
      v17 += 4;
      ++*((_DWORD *)a1 + 2);
    }
    return (_DWORD *)operator delete();
  }
  else
  {
    a1[1] = 0;
    for ( j = &result[4 * *((unsigned int *)a1 + 4)]; j != result; result += 4 )
      *result = 0x7FFFFFFF;
  }
  return result;
}

