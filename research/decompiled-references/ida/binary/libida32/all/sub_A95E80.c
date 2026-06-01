__int64 *__fastcall sub_A95E80(__int64 **a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v8; // rbx
  __int64 *v9; // rbp
  unsigned int v10; // eax
  __int64 *result; // rax
  __int64 v12; // rcx
  __int64 *v13; // r14
  __int64 *i; // rdx
  __int64 *v15; // rbx
  unsigned __int64 v16; // rdx
  int v17; // eax
  int v18; // esi
  unsigned int v19; // ecx
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 *v22; // rcx
  void *v23; // rdx
  void *v24; // rdi
  __int64 *j; // rdx
  int v26; // r9d
  __int64 v27; // r10

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
  result = (__int64 *)sub_220C370(56LL * v10, 8, 64, a4, a5, a6);
  *a1 = result;
  if ( v9 )
  {
    v12 = *((unsigned int *)a1 + 4);
    a1[1] = nullptr;
    v13 = &v9[7 * v8];
    for ( i = &result[7 * v12]; i != result; result += 7 )
      *result = 0;
    if ( v13 != v9 )
    {
      v15 = v9;
      do
      {
        while ( 1 )
        {
          v16 = *v15;
          if ( (unsigned __int64)(*v15 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
          {
            v17 = *((_DWORD *)a1 + 4);
            if ( !v17 )
            {
              *(_QWORD *)&dword_0 = *v15;
              BUG();
            }
            v18 = v17 - 1;
            v19 = (v17 - 1) & (v16 ^ (v16 >> 9));
            v20 = (__int64)&(*a1)[7 * v19];
            v21 = *(_QWORD *)v20;
            if ( v16 != *(_QWORD *)v20 )
            {
              v26 = 1;
              v27 = 0;
              if ( v21 )
              {
                while ( 1 )
                {
                  if ( !v27 && v21 == -1 )
                    v27 = v20;
                  v19 = v18 & (v26 + v19);
                  v20 = (__int64)&(*a1)[7 * v19];
                  v21 = *(_QWORD *)v20;
                  if ( v16 == *(_QWORD *)v20 )
                    break;
                  if ( !v21 )
                  {
                    if ( v27 )
                      v20 = v27;
                    break;
                  }
                  ++v26;
                }
              }
            }
            *(_QWORD *)v20 = *v15;
            *(_QWORD *)(v20 + 8) = v15[1];
            *(_QWORD *)(v20 + 16) = v15[2];
            *(_QWORD *)(v20 + 24) = v20 + 40;
            v22 = (__int64 *)v15[3];
            v23 = v15 + 5;
            if ( v22 == v15 + 5 )
            {
              *(__m128i *)(v20 + 40) = _mm_loadu_si128((const __m128i *)(v15 + 5));
            }
            else
            {
              *(_QWORD *)(v20 + 24) = v22;
              *(_QWORD *)(v20 + 40) = v15[5];
            }
            *(_QWORD *)(v20 + 32) = v15[4];
            v15[3] = (__int64)v23;
            v15[4] = 0;
            *((_BYTE *)v15 + 40) = 0;
            ++*((_DWORD *)a1 + 2);
            v24 = (void *)v15[3];
            if ( v24 != v23 )
              break;
          }
          v15 += 7;
          if ( v13 == v15 )
            return (__int64 *)operator delete();
        }
        operator delete(v24);
        v15 += 7;
      }
      while ( v13 != v15 );
    }
    return (__int64 *)operator delete();
  }
  else
  {
    a1[1] = nullptr;
    for ( j = &result[7 * *((unsigned int *)a1 + 4)]; j != result; result += 7 )
      *result = 0;
  }
  return result;
}

