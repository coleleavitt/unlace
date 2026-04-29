void *__cdecl _platform_memchr(void *__s, int __c, size_t __n)
{
  int8x16_t v3; // q1
  __int64 v4; // x1
  unsigned __int64 v5; // x0
  int8x16_t v6; // q2
  uint8x16_t v7; // q0
  unsigned __int64 v8; // x2
  int8x16_t v9; // t1
  bool v10; // cc
  void *result; // x0
  uint8x16_t v12; // q0
  int8x16_t v13; // q1
  __int64 v14; // x1
  unsigned __int64 v15; // x0
  int8x16_t v16; // q2
  uint8x16_t i; // q0
  int8x16_t v18; // t1
  uint8x16_t v19; // q0

  if ( !__n )
    return nullptr;
  if ( (__n & 0x8000000000000000LL) != 0LL )
  {
    v13 = vdupq_n_s8(__c);
    v14 = (unsigned __int8)__s & 0xF;
    v15 = (unsigned __int64)__s & 0xFFFFFFFFFFFFFFF0LL;
    v16 = *(int8x16_t *)&algn_70570[-v14];
    for ( i = (uint8x16_t)vorrq_s8(vsubq_s8(*(int8x16_t *)v15, v13), v16); ; i = (uint8x16_t)vsubq_s8(v18, v13) )
    {
      v16.i8[0] = vminvq_u8(i);
      if ( !v16.i32[0] )
        break;
      v18 = *(int8x16_t *)(v15 + 16);
      v15 += 16LL;
    }
    v19 = (uint8x16_t)vorrq_s8((int8x16_t)vcgtq_u8(i, (uint8x16_t)0LL), (int8x16_t)xmmword_70560);
    v19.i8[0] = vminvq_u8(v19);
    return (void *)(v15 + v19.u32[0]);
  }
  else
  {
    v3 = vdupq_n_s8(__c);
    v4 = (unsigned __int8)__s & 0xF;
    v5 = (unsigned __int64)__s & 0xFFFFFFFFFFFFFFF0LL;
    v6 = *(int8x16_t *)&algn_70570[-v4];
    v7 = (uint8x16_t)vorrq_s8(vsubq_s8(*(int8x16_t *)v5, v3), v6);
    v8 = __n + v4;
    while ( 1 )
    {
      v6.i8[0] = vminvq_u8(v7);
      if ( !v6.i32[0] )
        break;
      v10 = v8 > 0x10;
      v8 -= 16LL;
      if ( !v10 )
        return nullptr;
      v9 = *(int8x16_t *)(v5 + 16);
      v5 += 16LL;
      v7 = (uint8x16_t)vsubq_s8(v9, v3);
    }
    v12 = (uint8x16_t)vorrq_s8((int8x16_t)vcgtq_u8(v7, (uint8x16_t)0LL), (int8x16_t)xmmword_70560);
    v12.i8[0] = vminvq_u8(v12);
    result = (void *)(v5 + v12.u32[0]);
    if ( v12.u32[0] >= v8 )
      return nullptr;
  }
  return result;
}
