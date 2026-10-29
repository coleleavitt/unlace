_DWORD *__fastcall sub_FFFE50(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v8; // r13
  __int64 v9; // rbp
  unsigned int v10; // edi
  _DWORD *result; // rax
  __int64 v12; // rdx
  __int64 v13; // r14
  _DWORD *i; // rdx
  __int64 v15; // rbx
  int *v16; // rax
  __m128i v17; // xmm0
  int v18; // edx
  _DWORD *j; // rdx
  int *v20; // [rsp+8h] [rbp-40h] BYREF

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
  result = (_DWORD *)sub_220C370(32LL * v10, 4, a3, a4, a5, a6);
  *(_QWORD *)a1 = result;
  if ( v9 )
  {
    v12 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v13 = v9 + 32 * v8;
    for ( i = &result[8 * v12]; i != result; *(result - 7) = 0 )
    {
      *result = 0;
      result += 8;
    }
    if ( v13 != v9 )
    {
      v15 = v9;
      while ( !*(_DWORD *)v15 )
      {
        if ( *(_DWORD *)(v15 + 4) )
        {
LABEL_9:
          sub_FFA820((__int64 *)a1, (unsigned int *)v15, &v20);
          v16 = v20;
          v17 = _mm_loadu_si128((const __m128i *)(v15 + 8));
          *v20 = *(_DWORD *)v15;
          v18 = *(_DWORD *)(v15 + 4);
          *(__m128i *)(v16 + 2) = v17;
          v16[1] = v18;
          *((_QWORD *)v16 + 3) = *(_QWORD *)(v15 + 24);
          ++*(_DWORD *)(a1 + 8);
LABEL_10:
          v15 += 32;
          if ( v13 == v15 )
            return (_DWORD *)operator delete();
        }
        else
        {
          v15 += 32;
          if ( v13 == v15 )
            return (_DWORD *)operator delete();
        }
      }
      if ( *(_DWORD *)v15 == -1 && *(_DWORD *)(v15 + 4) == -1 )
        goto LABEL_10;
      goto LABEL_9;
    }
    return (_DWORD *)operator delete();
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

