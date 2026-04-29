char *__cdecl _platform_strchr(char *__s, int __c)
{
  int8x16_t v2; // q3
  __int64 v3; // x2
  unsigned __int64 v4; // x0
  int8x16_t v5; // q1
  uint8x16_t i; // q0
  int8x16_t v7; // t1
  uint8x16_t v8; // q0
  char *result; // x0

  v2 = vdupq_n_s8(__c);
  v3 = (unsigned __int8)__s & 0xF;
  v4 = (unsigned __int64)__s & 0xFFFFFFFFFFFFFFF0LL;
  v5 = *(int8x16_t *)&algn_9510[-v3];
  for ( i = (uint8x16_t)vorrq_s8(vbicq_s8(*(int8x16_t *)v4, vceqq_s8(*(int8x16_t *)v4, v2)), v5);
        ;
        i = (uint8x16_t)vbicq_s8(v7, v5) )
  {
    v5.i8[0] = vminvq_u8(i);
    if ( !v5.i32[0] )
      break;
    v7 = *(int8x16_t *)(v4 + 16);
    v4 += 16LL;
    v5 = vceqq_s8(v7, v2);
  }
  v8 = (uint8x16_t)vorrq_s8((int8x16_t)vcgtq_u8(i, (uint8x16_t)0LL), (int8x16_t)xmmword_9500);
  v8.i8[0] = vminvq_u8(v8);
  result = (char *)(v4 + v8.u32[0]);
  if ( (unsigned __int8)__c != (unsigned __int64)(unsigned __int8)*result )
    return nullptr;
  return result;
}
