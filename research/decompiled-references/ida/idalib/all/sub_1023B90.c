_DWORD *__fastcall sub_1023B90(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v8; // r13
  __int64 v9; // rbp
  unsigned int v10; // edi
  _DWORD *result; // rax
  __int64 v12; // rdx
  __int64 v13; // r13
  __int64 v14; // r14
  _DWORD *i; // rdx
  __int64 v16; // rbx
  int *v17; // rax
  __m128i v18; // xmm0
  int v19; // edx
  _DWORD *j; // rdx
  int *v21; // [rsp+8h] [rbp-40h] BYREF

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
  result = (_DWORD *)sub_22300B0(32LL * v10, 4, a3, a4, a5, a6);
  *(_QWORD *)a1 = result;
  if ( v9 )
  {
    v12 = *(unsigned int *)(a1 + 16);
    v13 = 32 * v8;
    *(_QWORD *)(a1 + 8) = 0;
    v14 = v9 + v13;
    for ( i = &result[8 * v12]; i != result; *(result - 7) = 0 )
    {
      *result = 0;
      result += 8;
    }
    if ( v14 != v9 )
    {
      v16 = v9;
      while ( !*(_DWORD *)v16 )
      {
        if ( *(_DWORD *)(v16 + 4) )
        {
LABEL_9:
          sub_101E560((__int64 *)a1, (unsigned int *)v16, &v21);
          v17 = v21;
          v18 = _mm_loadu_si128((const __m128i *)(v16 + 8));
          *v21 = *(_DWORD *)v16;
          v19 = *(_DWORD *)(v16 + 4);
          *(__m128i *)(v17 + 2) = v18;
          v17[1] = v19;
          *((_QWORD *)v17 + 3) = *(_QWORD *)(v16 + 24);
          ++*(_DWORD *)(a1 + 8);
LABEL_10:
          v16 += 32;
          if ( v14 == v16 )
            return (_DWORD *)operator delete(v9, v13, 4);
        }
        else
        {
          v16 += 32;
          if ( v14 == v16 )
            return (_DWORD *)operator delete(v9, v13, 4);
        }
      }
      if ( *(_DWORD *)v16 == -1 && *(_DWORD *)(v16 + 4) == -1 )
        goto LABEL_10;
      goto LABEL_9;
    }
    return (_DWORD *)operator delete(v9, v13, 4);
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0;
    for ( j = &result[8 * *(unsigned int *)(a1 + 16)]; j != result; *(result - 7) = 0 )
    {
      *result = 0;
      result += 8;
    }
  }
  return result;
}
