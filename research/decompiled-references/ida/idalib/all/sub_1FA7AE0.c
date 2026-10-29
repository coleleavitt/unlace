_DWORD *__fastcall sub_1FA7AE0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v8; // rbp
  __int64 v9; // r12
  unsigned int v10; // edi
  _DWORD *result; // rax
  __int64 v12; // rdx
  __int64 v13; // rbp
  __int64 v14; // r13
  _DWORD *i; // rdx
  __int64 v16; // rbx
  __m128i *v17; // rdi
  __int32 v18; // eax
  void *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rdx
  _DWORD *j; // rdx
  __m128i *v23; // [rsp+18h] [rbp-40h] BYREF

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
  result = (_DWORD *)sub_22300B0(552LL * v10, 8, a3, a4, a5, a6);
  *(_QWORD *)a1 = result;
  if ( v9 )
  {
    v12 = *(unsigned int *)(a1 + 16);
    v13 = 552 * v8;
    *(_QWORD *)(a1 + 8) = 0;
    v14 = v9 + v13;
    for ( i = &result[138 * v12]; i != result; *(result - 134) = -1 )
    {
      *result = -1;
      result += 138;
      *((_QWORD *)result - 68) = 1;
    }
    if ( v14 != v9 )
    {
      v16 = v9;
      while ( *(_DWORD *)v16 == -1 )
      {
        v20 = *(_QWORD *)(v16 + 8);
        if ( v20 == 1 )
        {
          if ( *(_DWORD *)(v16 + 16) != -1 )
            break;
        }
        else if ( v20 != 2 || *(_DWORD *)(v16 + 16) != -2 )
        {
          break;
        }
LABEL_12:
        v16 += 552;
        if ( v14 == v16 )
          return (_DWORD *)operator delete(v9, v13, 8);
      }
      sub_1F7DFF0((__int64 *)a1, v16, &v23);
      v17 = v23;
      *v23 = _mm_loadu_si128((const __m128i *)v16);
      v18 = *(_DWORD *)(v16 + 16);
      v17[2].m128i_i64[0] = 0x4000000000LL;
      v17[1].m128i_i32[0] = v18;
      v17[1].m128i_i64[1] = (__int64)&v17[2].m128i_i64[1];
      if ( *(_DWORD *)(v16 + 32) )
        sub_1F7DEB0((char ***)&v17[1].m128i_i64[1], (char ***)(v16 + 24));
      v19 = *(void **)(v16 + 24);
      ++*(_DWORD *)(a1 + 8);
      if ( v19 != (void *)(v16 + 40) )
        free(v19);
      goto LABEL_12;
    }
    return (_DWORD *)operator delete(v9, v13, 8);
  }
  else
  {
    v21 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    for ( j = &result[138 * v21]; j != result; *(result - 134) = -1 )
    {
      *result = -1;
      result += 138;
      *((_QWORD *)result - 68) = 1;
    }
  }
  return result;
}
