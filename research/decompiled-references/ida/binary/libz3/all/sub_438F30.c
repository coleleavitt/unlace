__m128 *__fastcall sub_438F30(__int64 a1, __m128 *a2, unsigned int a3)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  double *v7; // rcx
  __int32 v8; // edi
  unsigned int v9; // edx
  __m128 **v10; // rsi
  __int64 v11; // rdx
  double *v12; // r8
  __m128 **i; // rdx
  __m128 *result; // rax
  __int64 *v15; // rbp

  v5 = a3;
  v6 = *(unsigned int *)(a1 + 16);
  v7 = *(double **)(a1 + 8);
  v8 = a2->m128_i32[3];
  v9 = v6 - 1;
  v6 *= 16;
  v10 = (__m128 **)((char *)v7 + v6);
  v11 = 16LL * (v8 & v9);
  v12 = &v7[(unsigned __int64)v11 / 8];
  if ( v11 != v6 )
  {
    for ( i = (__m128 **)&v7[(unsigned __int64)v11 / 8]; v10 != i; i += 2 )
    {
      result = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( result->m128_i32[3] == v8 && a2 == result )
          goto LABEL_10;
      }
      else if ( !result )
      {
        return result;
      }
    }
  }
  if ( v7 == v12 )
    return nullptr;
  while ( 1 )
  {
    while ( 1 )
    {
      result = *(__m128 **)v7;
      if ( *(_QWORD *)v7 > 1u )
        break;
      if ( !result )
        return result;
      v7 += 2;
      if ( v12 == v7 )
        return nullptr;
    }
    if ( result->m128_i32[3] == v8 && a2 == result )
      break;
    v7 += 2;
    if ( v12 == v7 )
      return nullptr;
  }
  i = (__m128 **)v7;
LABEL_10:
  v15 = (__int64 *)i[1];
  sub_438A50(a1, v15, v5 + 1, (__int64)v7, v12, a2);
  return *(__m128 **)(v15[3] + 8 * v5);
}

