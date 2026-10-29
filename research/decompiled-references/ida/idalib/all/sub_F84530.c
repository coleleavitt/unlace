_QWORD *__fastcall sub_F84530(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // r12
  unsigned int v9; // eax
  _QWORD *result; // rax
  __int64 v11; // rdx
  __int64 v12; // r13
  __m128i *v13; // r15
  _QWORD *i; // rdx
  __m128i *v15; // rbx
  __m128i *v16; // rax
  __m128i *v17; // rax
  __int32 v18; // edx
  __int64 v19; // rdx
  _QWORD *j; // rdx
  __m128i *v21; // [rsp+8h] [rbp-40h] BYREF

  v6 = (unsigned int)(a2 - 1);
  v7 = *(unsigned int *)(a1 + 16);
  v8 = *(_QWORD *)a1;
  v9 = (((((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
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
  if ( v9 < 0x40 )
    v9 = 64;
  *(_DWORD *)(a1 + 16) = v9;
  result = (_QWORD *)sub_22300B0(48LL * v9, 8, 64, a4, a5, a6);
  *(_QWORD *)a1 = result;
  if ( v8 )
  {
    v11 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v12 = 48 * v7;
    v13 = (__m128i *)(v8 + 48 * v7);
    for ( i = &result[6 * v11]; i != result; *(result - 5) = 0 )
    {
      *result = 0;
      result += 6;
    }
    if ( v13 != (__m128i *)v8 )
    {
      v15 = (__m128i *)v8;
      while ( 1 )
      {
        v18 = v15->m128i_i32[2];
        if ( v15->m128i_i64[0] )
          break;
        if ( v18 )
        {
LABEL_10:
          sub_F7EE10((__int64 *)a1, v15->m128i_i64, &v21);
          v16 = v21;
          v21->m128i_i64[0] = v15->m128i_i64[0];
          v16->m128i_i32[2] = v15->m128i_i32[2];
          v17 = v21;
          v21[1] = _mm_loadu_si128(v15 + 1);
          v17[2] = _mm_loadu_si128(v15 + 2);
          ++*(_DWORD *)(a1 + 8);
LABEL_11:
          v15 += 3;
          if ( v13 == v15 )
            return (_QWORD *)operator delete(v8, v12, 8);
        }
        else
        {
          v15 += 3;
          if ( v13 == v15 )
            return (_QWORD *)operator delete(v8, v12, 8);
        }
      }
      if ( !v18 && v15->m128i_i64[0] == -1 )
        goto LABEL_11;
      goto LABEL_10;
    }
    return (_QWORD *)operator delete(v8, v12, 8);
  }
  else
  {
    v19 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    for ( j = &result[6 * v19]; j != result; *(result - 5) = 0 )
    {
      *result = 0;
      result += 6;
    }
  }
  return result;
}
