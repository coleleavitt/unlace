size_t __cdecl _platform_strlen(const char *__s)
{
  unsigned __int64 v1; // x1
  int8x16_t *v2; // x3
  int8x16_t v3; // q1
  uint8x16_t i; // q0
  uint8x16_t v5; // t1

  v1 = (unsigned __int64)__s & 0xFFFFFFFFFFFFFFF0LL;
  v2 = (int8x16_t *)&algn_5010[-((unsigned __int8)__s & 0xF)];
  v3 = *v2;
  for ( i = (uint8x16_t)vorrq_s8(*(int8x16_t *)((unsigned __int64)__s & 0xFFFFFFFFFFFFFFF0LL), *v2); ; i = v5 )
  {
    v3.i8[0] = vminvq_u8(i);
    if ( !v3.i32[0] )
      break;
    v5 = *(uint8x16_t *)(v1 + 16);
    v1 += 16LL;
  }
  return v1
       - (_QWORD)__s
       + vminvq_u8((uint8x16_t)vorrq_s8((int8x16_t)vcgtq_u8(i, (uint8x16_t)0LL), (int8x16_t)xmmword_5000));
}
