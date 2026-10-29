int __cdecl _platform_memcmp(const void *__s1, const void *__s2, size_t __n)
{
  bool v3; // cf
  size_t v4; // x2
  int8x16_t v5; // t1
  int8x16_t v6; // q0
  int8x16_t v7; // t1
  int8x16_t v8; // q1
  size_t v9; // x2
  int v10; // w3
  uint8x16_t v11; // q1
  __int64 v13; // x4
  unsigned int v14; // t1
  int v15; // t1

  v3 = __n >= 0x10;
  v4 = __n - 16;
  if ( v3 )
  {
    while ( 1 )
    {
      v5 = *(int8x16_t *)__s1;
      __s1 = (char *)__s1 + 16;
      v6 = v5;
      v7 = *(int8x16_t *)__s2;
      __s2 = (char *)__s2 + 16;
      v8 = vceqq_s8(v6, v7);
      v6.i8[0] = vminvq_u8((uint8x16_t)v8);
      if ( !v6.i32[0] )
        break;
      v3 = v4 >= 0x10;
      v4 -= 16LL;
      if ( !v3 )
        goto LABEL_5;
    }
    v11 = (uint8x16_t)vorrq_s8(v8, (int8x16_t)xmmword_8A60);
    v11.i8[0] = vminvq_u8(v11);
    return *((unsigned __int8 *)__s1 + v11.u32[0] - 16) - *((unsigned __int8 *)__s2 + v11.u32[0] - 16);
  }
  else
  {
LABEL_5:
    v9 = v4 + 16;
    v10 = 0;
    do
    {
      v3 = v9-- != 0;
      if ( !v3 )
        break;
      v14 = *(unsigned __int8 *)__s1;
      __s1 = (char *)__s1 + 1;
      v13 = v14;
      v15 = *(unsigned __int8 *)__s2;
      __s2 = (char *)__s2 + 1;
      v10 = v13 - v15;
    }
    while ( v13 == v15 );
    return v10;
  }
}
