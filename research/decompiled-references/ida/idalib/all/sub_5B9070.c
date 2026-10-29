unsigned __int64 *__fastcall sub_5B9070(__m128i *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v6; // rax
  unsigned __int64 *v7; // rdi
  unsigned __int64 *v8; // rsi
  __int64 v9; // rax
  unsigned __int64 *v10; // r8
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 *v13; // rdx
  unsigned __int64 *v15; // rdx
  unsigned __int64 v16; // rcx

  v6 = sub_5B8DA0(a1, a2);
  if ( !v6 )
    return nullptr;
  v7 = (unsigned __int64 *)v6;
  v8 = (unsigned __int64 *)a1[111].m128i_i64[1];
  v9 = 2LL * *(unsigned int *)(a2 + 68);
  v10 = &v7[v9];
  if ( v8 != nullptr && v8 >= v7 && v8 < v10 )
  {
    if ( *v8 >= a3 )
    {
      if ( a3 >= *v8 )
        return v8;
      if ( v8 == v7 )
        return nullptr;
      v15 = v8 - 2;
      a1[111].m128i_i64[1] = (__int64)(v8 - 2);
      v16 = *(v8 - 2);
      v8 -= 2;
      if ( v16 < a3 )
        return v8;
    }
    else
    {
      v15 = v8 + 2;
      a1[111].m128i_i64[1] = (__int64)(v8 + 2);
      if ( v8 + 2 == v10 || (v16 = v8[2], a3 < v16) )
      {
        a1[111].m128i_i64[1] = (__int64)v8;
        return v8;
      }
    }
    if ( a3 == v16 )
      return v15;
  }
  v11 = (v9 * 8) >> 4;
  v8 = v7;
  while ( v11 > 0 )
  {
    while ( 1 )
    {
      v12 = v11 >> 1;
      v13 = &v8[2 * (v11 >> 1)];
      if ( *v13 < a3 )
        break;
      v11 >>= 1;
      if ( v12 <= 0 )
        goto LABEL_8;
    }
    v8 = v13 + 2;
    v11 = v11 - 1 - v12;
  }
LABEL_8:
  a1[111].m128i_i64[1] = (__int64)v8;
  if ( v10 != v8 && a3 >= *v8 )
    return v8;
  if ( v7 != v8 )
  {
    v8 -= 2;
    return v8;
  }
  return nullptr;
}
