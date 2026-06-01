int *__fastcall sub_21E8B50(int **a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v8; // r12
  int *v9; // rbp
  unsigned int v10; // edi
  int *result; // rax
  __int64 v12; // rdx
  int *v13; // r13
  int *i; // rdx
  int *v15; // rbx
  int v16; // eax
  int v17; // edx
  int v18; // edx
  unsigned int v19; // ecx
  unsigned __int64 v20; // rdi
  int v21; // esi
  void *v22; // r12
  int *v23; // rax
  int *v24; // rdi
  void *v25; // rdi
  __int64 v26; // rdx
  int *j; // rdx
  int v28; // r9d
  unsigned __int64 v29; // r10
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
  result = (int *)sub_22300B0((unsigned __int64)v10 << 7, 8, a3, a4, a5, a6);
  *a1 = result;
  if ( v9 )
  {
    v12 = *((unsigned int *)a1 + 4);
    a1[1] = nullptr;
    v30 = v8 << 7;
    v13 = &v9[32 * v8];
    for ( i = &result[32 * v12]; i != result; result += 32 )
      *result = -1;
    if ( v13 != v9 )
    {
      v15 = v9;
      do
      {
        while ( 1 )
        {
          v16 = *v15;
          if ( (unsigned int)(*v15 + 2) > 1 )
          {
            v17 = *((_DWORD *)a1 + 4);
            if ( !v17 )
            {
              dword_0 = 0;
              BUG();
            }
            v18 = v17 - 1;
            v19 = v18 & (37 * v16);
            v20 = (unsigned __int64)&(*a1)[32 * (unsigned __int64)v19];
            v21 = *(_DWORD *)v20;
            if ( v16 != *(_DWORD *)v20 )
            {
              v28 = 1;
              v29 = 0;
              if ( v21 != -1 )
              {
                while ( 1 )
                {
                  if ( !v29 && v21 == -2 )
                    v29 = v20;
                  v19 = v18 & (v28 + v19);
                  v20 = (unsigned __int64)&(*a1)[32 * (unsigned __int64)v19];
                  v21 = *(_DWORD *)v20;
                  if ( v16 == *(_DWORD *)v20 )
                    break;
                  if ( v21 == -1 )
                  {
                    if ( v29 )
                      v20 = v29;
                    break;
                  }
                  ++v28;
                }
              }
            }
            *(_DWORD *)v20 = v16;
            v22 = v15 + 12;
            *(_QWORD *)(v20 + 8) = *((_QWORD *)v15 + 1);
            *(_QWORD *)(v20 + 16) = *((_QWORD *)v15 + 2);
            *(_BYTE *)(v20 + 24) = *((_BYTE *)v15 + 24);
            *(_QWORD *)(v20 + 32) = v20 + 48;
            v23 = *((int **)v15 + 4);
            if ( v23 == v15 + 12 )
            {
              *(__m128i *)(v20 + 48) = _mm_loadu_si128((const __m128i *)v15 + 3);
            }
            else
            {
              *(_QWORD *)(v20 + 32) = v23;
              *(_QWORD *)(v20 + 48) = *((_QWORD *)v15 + 6);
            }
            *(_QWORD *)(v20 + 40) = *((_QWORD *)v15 + 5);
            *((_QWORD *)v15 + 4) = v22;
            *((_QWORD *)v15 + 5) = 0;
            *((_BYTE *)v15 + 48) = 0;
            *(_QWORD *)(v20 + 64) = v20 + 80;
            *(_QWORD *)(v20 + 72) = 0x300000000LL;
            if ( v15[18] )
              sub_200E7A0((char ***)(v20 + 64), (char ***)v15 + 8);
            v24 = *((int **)v15 + 8);
            ++*((_DWORD *)a1 + 2);
            if ( v24 != v15 + 20 )
              free(v24);
            v25 = *((void **)v15 + 4);
            if ( v25 != v22 )
              break;
          }
          v15 += 32;
          if ( v13 == v15 )
            return (int *)operator delete(v9, v30, 8);
        }
        operator delete(v25);
        v15 += 32;
      }
      while ( v13 != v15 );
    }
    return (int *)operator delete(v9, v30, 8);
  }
  else
  {
    v26 = *((unsigned int *)a1 + 4);
    a1[1] = nullptr;
    for ( j = &result[32 * v26]; j != result; result += 32 )
      *result = -1;
  }
  return result;
}
