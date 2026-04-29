size_t __cdecl _platform_strnlen(const char *__s1, size_t __n)
{
  unsigned __int64 v3; // x2
  int8x16_t *v4; // x3
  int8x16_t v5; // q1
  uint8x16_t v6; // q0
  size_t v7; // x1
  uint8x16_t v8; // t1
  bool v9; // cc
  unsigned int v10; // s1
  unsigned __int64 v11; // x0

  if ( (__n & 0x8000000000000000LL) != 0LL )
    return _platform_strlen(__s1);
  if ( !__n )
    return 0;
  v3 = (unsigned __int64)__s1 & 0xFFFFFFFFFFFFFFF0LL;
  v4 = (int8x16_t *)&algn_5010[-((unsigned __int8)__s1 & 0xF)];
  v5 = *v4;
  v6 = (uint8x16_t)vorrq_s8(*(int8x16_t *)((unsigned __int64)__s1 & 0xFFFFFFFFFFFFFFF0LL), *v4);
  v7 = __n + ((unsigned __int8)__s1 & 0xF);
  while ( 1 )
  {
    v5.i8[0] = vminvq_u8(v6);
    if ( !v5.i32[0] )
      break;
    v9 = v7 > 0x10;
    v7 -= 16LL;
    if ( !v9 )
      return v3 - (_QWORD)__s1 + v7 + 16;
    v8 = *(uint8x16_t *)(v3 + 16);
    v3 += 16LL;
    v6 = v8;
  }
  v10 = vminvq_u8((uint8x16_t)vorrq_s8((int8x16_t)vcgtq_u8(v6, (uint8x16_t)0LL), (int8x16_t)xmmword_5000));
  v11 = v3 - (_QWORD)__s1;
  if ( v7 >= v10 )
    v7 = v10;
  return v11 + v7;
}
