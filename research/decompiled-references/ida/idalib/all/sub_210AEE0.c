_DWORD *__fastcall sub_210AEE0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v8; // rbx
  __int64 v9; // r12
  unsigned int v10; // edi
  _DWORD *result; // rax
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // r15
  _DWORD *i; // rdx
  __int64 v16; // r13
  __int64 v17; // rax
  __m128i v18; // xmm0
  int v19; // edx
  __int64 v20; // rax
  __int64 v21; // rdx
  _DWORD *j; // rdx
  __int64 v23[8]; // [rsp+8h] [rbp-40h] BYREF

  v6 = (unsigned int)(a2 - 1);
  v8 = *(unsigned int *)(a1 + 16);
  v9 = *(_QWORD *)a1;
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
  result = (_DWORD *)sub_22300B0(32LL * v10, 8, a3, a4, a5, a6);
  *(_QWORD *)a1 = result;
  if ( v9 )
  {
    v12 = *(unsigned int *)(a1 + 16);
    v13 = 32 * v8;
    *(_QWORD *)(a1 + 8) = 0;
    v14 = v9 + v13;
    for ( i = &result[8 * v12]; i != result; *((_QWORD *)result - 2) = 0 )
    {
      *result = -1;
      result += 8;
      *(result - 7) = -1;
      *((_QWORD *)result - 3) = -1;
    }
    if ( v14 != v9 )
    {
      v16 = v9;
      while ( 1 )
      {
        v20 = *(_QWORD *)(v16 + 8);
        if ( v20 == -1 )
          break;
        if ( v20 == -2 && *(_DWORD *)(v16 + 4) == -2 && *(_DWORD *)v16 == -2 )
        {
          v16 += 32;
          if ( v14 == v16 )
            return (_DWORD *)operator delete(v9, v13, 8);
        }
        else
        {
LABEL_9:
          sub_2106050((__int64 *)a1, v16, v23);
          v17 = v23[0];
          v18 = _mm_loadu_si128((const __m128i *)(v16 + 8));
          *(_DWORD *)(v23[0] + 4) = *(_DWORD *)(v16 + 4);
          v19 = *(_DWORD *)v16;
          *(__m128i *)(v17 + 8) = v18;
          *(_DWORD *)v17 = v19;
          *(_DWORD *)(v17 + 24) = *(_DWORD *)(v16 + 24);
          ++*(_DWORD *)(a1 + 8);
LABEL_10:
          v16 += 32;
          if ( v14 == v16 )
            return (_DWORD *)operator delete(v9, v13, 8);
        }
      }
      if ( *(_DWORD *)(v16 + 4) == -1 && *(_DWORD *)v16 == -1 )
        goto LABEL_10;
      goto LABEL_9;
    }
    return (_DWORD *)operator delete(v9, v13, 8);
  }
  else
  {
    v21 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    for ( j = &result[8 * v21]; j != result; *((_QWORD *)result - 2) = 0 )
    {
      *result = -1;
      result += 8;
      *(result - 7) = -1;
      *((_QWORD *)result - 3) = -1;
    }
  }
  return result;
}
