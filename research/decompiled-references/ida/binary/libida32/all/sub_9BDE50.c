_QWORD *__fastcall sub_9BDE50(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  unsigned int v8; // ebx
  __int64 *v9; // rbp
  unsigned int v10; // edi
  _QWORD *result; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rdx
  int v14; // r9d
  __int64 *v15; // r8
  _QWORD *v16; // rcx
  __int64 *v17; // rcx
  int v18; // r11d
  __int64 v19; // rdx
  unsigned int v20; // r10d
  _QWORD *v21; // rdi
  __int64 v22; // rbx
  int v23; // edx
  __int64 v24; // rdx
  _QWORD *i; // rdx
  int v26; // r13d
  _QWORD *v27; // r14

  v6 = (unsigned int)(a2 - 1);
  v8 = *((_DWORD *)a1 + 4);
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
  result = (_QWORD *)sub_220C370(16LL * v10, 8, a3, a4, a5, a6);
  *a1 = (__int64)result;
  if ( v9 )
  {
    v12 = *((unsigned int *)a1 + 4);
    v13 = result;
    a1[1] = 0;
    v14 = v12;
    v15 = &v9[2 * v8];
    v16 = &result[2 * v12];
    if ( result != v16 )
    {
      do
      {
        *v13 = -4096;
        v13 += 2;
      }
      while ( v16 != v13 );
    }
    if ( v15 != v9 )
    {
      v17 = v9;
      v18 = v14 - 1;
      do
      {
        v19 = *v17;
        if ( *v17 != -8192 && v19 != -4096 )
        {
          if ( !v14 )
          {
            *(_QWORD *)&dword_0 = *v17;
            BUG();
          }
          v20 = v18 & (((unsigned int)v19 >> 9) ^ ((unsigned int)v19 >> 4));
          v21 = &result[2 * v20];
          v22 = *v21;
          if ( v19 != *v21 )
          {
            v26 = 1;
            v27 = nullptr;
            if ( v22 != -4096 )
            {
              while ( 1 )
              {
                if ( v22 == -8192 && !v27 )
                  v27 = v21;
                v20 = v18 & (v26 + v20);
                v21 = &result[2 * v20];
                v22 = *v21;
                if ( v19 == *v21 )
                  break;
                if ( v22 == -4096 )
                {
                  if ( v27 )
                    v21 = v27;
                  break;
                }
                ++v26;
              }
            }
          }
          *v21 = v19;
          v23 = *((_DWORD *)v17 + 2);
          ++*((_DWORD *)a1 + 2);
          *((_DWORD *)v21 + 2) = v23;
        }
        v17 += 2;
      }
      while ( v15 != v17 );
    }
    return (_QWORD *)operator delete();
  }
  else
  {
    v24 = *((unsigned int *)a1 + 4);
    a1[1] = 0;
    for ( i = &result[2 * v24]; i != result; result += 2 )
      *result = -4096;
  }
  return result;
}

