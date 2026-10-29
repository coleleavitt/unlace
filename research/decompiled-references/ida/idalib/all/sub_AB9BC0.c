__int64 *__fastcall sub_AB9BC0(__int64 **a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v8; // rbx
  __int64 *v9; // rbp
  unsigned int v10; // eax
  __int64 *result; // rax
  __int64 v12; // rcx
  __int64 v13; // r13
  __int64 *v14; // r14
  __int64 *i; // rdx
  __int64 *v16; // rbx
  unsigned __int64 v17; // rdx
  int v18; // eax
  int v19; // esi
  unsigned int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 *v23; // rcx
  void *v24; // rdx
  void *v25; // rdi
  __int64 *j; // rdx
  int v27; // r9d
  __int64 v28; // r10

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
  result = (__int64 *)sub_22300B0(56LL * v10, 8, 64, a4, a5, a6);
  *a1 = result;
  if ( v9 )
  {
    v12 = *((unsigned int *)a1 + 4);
    a1[1] = nullptr;
    v13 = 56 * v8;
    v14 = &v9[7 * v8];
    for ( i = &result[7 * v12]; i != result; result += 7 )
      *result = 0;
    if ( v14 != v9 )
    {
      v16 = v9;
      do
      {
        while ( 1 )
        {
          v17 = *v16;
          if ( (unsigned __int64)(*v16 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
          {
            v18 = *((_DWORD *)a1 + 4);
            if ( !v18 )
            {
              *(_QWORD *)&dword_0 = *v16;
              BUG();
            }
            v19 = v18 - 1;
            v20 = (v18 - 1) & (v17 ^ (v17 >> 9));
            v21 = (__int64)&(*a1)[7 * v20];
            v22 = *(_QWORD *)v21;
            if ( v17 != *(_QWORD *)v21 )
            {
              v27 = 1;
              v28 = 0;
              if ( v22 )
              {
                while ( 1 )
                {
                  if ( !v28 && v22 == -1 )
                    v28 = v21;
                  v20 = v19 & (v27 + v20);
                  v21 = (__int64)&(*a1)[7 * v20];
                  v22 = *(_QWORD *)v21;
                  if ( v17 == *(_QWORD *)v21 )
                    break;
                  if ( !v22 )
                  {
                    if ( v28 )
                      v21 = v28;
                    break;
                  }
                  ++v27;
                }
              }
            }
            *(_QWORD *)v21 = *v16;
            *(_QWORD *)(v21 + 8) = v16[1];
            *(_QWORD *)(v21 + 16) = v16[2];
            *(_QWORD *)(v21 + 24) = v21 + 40;
            v23 = (__int64 *)v16[3];
            v24 = v16 + 5;
            if ( v23 == v16 + 5 )
            {
              *(__m128i *)(v21 + 40) = _mm_loadu_si128((const __m128i *)(v16 + 5));
            }
            else
            {
              *(_QWORD *)(v21 + 24) = v23;
              *(_QWORD *)(v21 + 40) = v16[5];
            }
            *(_QWORD *)(v21 + 32) = v16[4];
            v16[3] = (__int64)v24;
            v16[4] = 0;
            *((_BYTE *)v16 + 40) = 0;
            ++*((_DWORD *)a1 + 2);
            v25 = (void *)v16[3];
            if ( v25 != v24 )
              break;
          }
          v16 += 7;
          if ( v14 == v16 )
            return (__int64 *)operator delete(v9, v13, 8);
        }
        operator delete(v25);
        v16 += 7;
      }
      while ( v14 != v16 );
    }
    return (__int64 *)operator delete(v9, v13, 8);
  }
  else
  {
    a1[1] = nullptr;
    for ( j = &result[7 * *((unsigned int *)a1 + 4)]; j != result; result += 7 )
      *result = 0;
  }
  return result;
}
