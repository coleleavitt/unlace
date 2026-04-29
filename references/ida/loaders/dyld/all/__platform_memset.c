void *__cdecl _platform_memset(void *__b, int __c, size_t __len)
{
  unsigned __int64 v3; // x1
  int64x2_t v4; // q0
  unsigned __int64 *v5; // x3
  int64x2_t *v6; // x3
  int64x2_t *v7; // x2
  bool v8; // cc
  unsigned __int64 k; // x2
  int64x2_t *v10; // x3
  int64x2_t *v11; // x3
  int64x2_t *v12; // x2
  unsigned __int64 j; // x2
  int64x2_t *v14; // x3
  bool v15; // cf
  size_t i; // x2

  v3 = 0x101010101010101LL * (unsigned __int8)__c;
  v4 = vdupq_n_s64(v3);
  v5 = (unsigned __int64 *)__b;
  if ( __len < 0x40 )
  {
    while ( 1 )
    {
      v15 = __len >= 8;
      __len -= 8LL;
      if ( !v15 )
        break;
      *v5++ = v3;
    }
    for ( i = __len + 8; i; --i )
    {
      *(_BYTE *)v5 = v3;
      v5 = (unsigned __int64 *)((char *)v5 + 1);
    }
  }
  else if ( __len < 0x8000 )
  {
    *(int64x2_t *)__b = v4;
    *((int64x2_t *)__b + 1) = v4;
    *((int64x2_t *)__b + 2) = v4;
    *((int64x2_t *)__b + 3) = v4;
    v11 = (int64x2_t *)(((unsigned __int64)__b + 64) & 0xFFFFFFFFFFFFFFC0LL);
    v12 = (int64x2_t *)((char *)__b + __len);
    v8 = v12 > &v11[4];
    for ( j = (char *)v12 - (char *)&v11[4]; v8; j -= 64LL )
    {
      *v11 = v4;
      v11[1] = v4;
      v11[2] = v4;
      v11[3] = v4;
      v11 += 4;
      v8 = j > 0x40;
    }
    v14 = (int64x2_t *)((char *)v11 + j);
    *v14 = v4;
    v14[1] = v4;
    v14[2] = v4;
    v14[3] = v4;
  }
  else
  {
    if ( !v3 )
      JUMPOUT(0x9A60);
    *(int64x2_t *)__b = v4;
    *((int64x2_t *)__b + 1) = v4;
    *((int64x2_t *)__b + 2) = v4;
    *((int64x2_t *)__b + 3) = v4;
    v6 = (int64x2_t *)(((unsigned __int64)__b + 64) & 0xFFFFFFFFFFFFFFC0LL);
    v7 = (int64x2_t *)((char *)__b + __len);
    v8 = v7 > &v6[4];
    for ( k = (char *)v7 - (char *)&v6[4]; v8; k -= 64LL )
    {
      *v6 = v4;
      v6[1] = v4;
      v6[2] = v4;
      v6[3] = v4;
      v6 += 4;
      v8 = k > 0x40;
    }
    v10 = (int64x2_t *)((char *)v6 + k);
    *v10 = v4;
    v10[1] = v4;
    v10[2] = v4;
    v10[3] = v4;
  }
  return __b;
}
