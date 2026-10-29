int __cdecl _platform_strncmp(const char *__s1, const char *__s2, size_t __n)
{
  int v3; // w3
  __int64 v4; // x4
  unsigned int v5; // t1
  int v6; // t1
  unsigned __int64 v9; // x7
  size_t v10; // x6
  int8x16_t v11; // t1
  int8x16_t v12; // q0
  int8x16_t v13; // t1
  int8x16_t v14; // q1
  uint8x16_t v15; // q0
  __int64 v16; // x4
  unsigned int v17; // t1
  int v18; // t1
  int8x16_t v20; // t1
  int8x16_t v21; // q0
  int8x16_t v22; // t1
  int8x16_t v23; // q1
  bool v24; // cc
  uint8x16_t v25; // q0

  v3 = 0;
  if ( !__n )
    return v3;
  while ( ((unsigned __int8)__s1 & 0xF) != 0 )
  {
    v5 = *(unsigned __int8 *)__s1++;
    v4 = v5;
    v6 = *(unsigned __int8 *)__s2++;
    v3 = v4 - v6;
    if ( v4 == v6 && (_DWORD)v4 != 0 )
    {
      if ( --__n )
        continue;
    }
    return v3;
  }
  if ( ((unsigned __int8)__s2 & 0xF) == 0 )
    goto LABEL_30;
  v9 = -(__int64)__s2 & 0xFF0;
  if ( !v9 )
    goto LABEL_16;
LABEL_11:
  if ( __n > v9 )
  {
    v10 = __n - v9;
    while ( 1 )
    {
      v11 = *(int8x16_t *)__s1;
      __s1 += 16;
      v12 = v11;
      v13 = *(int8x16_t *)__s2;
      __s2 += 16;
      v14 = vceqq_s8(v12, v13);
      v15 = (uint8x16_t)vandq_s8(v12, v14);
      v14.i8[0] = vminvq_u8(v15);
      if ( !v14.i32[0] )
        break;
      v9 -= 16LL;
      if ( !v9 )
      {
        __n = v10;
LABEL_16:
        while ( 1 )
        {
          v17 = *(unsigned __int8 *)__s1++;
          v16 = v17;
          v18 = *(unsigned __int8 *)__s2++;
          v3 = v16 - v18;
          if ( v16 != v18 || (_DWORD)v16 == 0 )
            return v3;
          if ( !--__n )
            return v3;
          if ( ((unsigned __int8)__s1 & 0xF) == 0 )
          {
            v9 = 4080;
            goto LABEL_11;
          }
        }
      }
    }
  }
  else
  {
LABEL_30:
    while ( 1 )
    {
      v20 = *(int8x16_t *)__s1;
      __s1 += 16;
      v21 = v20;
      v22 = *(int8x16_t *)__s2;
      __s2 += 16;
      v23 = vceqq_s8(v21, v22);
      v15 = (uint8x16_t)vandq_s8(v21, v23);
      v23.i8[0] = vminvq_u8(v15);
      if ( !v23.i32[0] )
        break;
      v24 = __n > 0x10;
      __n -= 16LL;
      if ( !v24 )
        return 0;
    }
  }
  v25 = (uint8x16_t)vorrq_s8((int8x16_t)vcgtq_u8(v15, (uint8x16_t)0LL), (int8x16_t)xmmword_5FC0);
  v25.i8[0] = vminvq_u8(v25);
  if ( v25.u32[0] >= __n )
    return 0;
  else
    return (unsigned __int8)__s1[v25.u32[0] - 16] - (unsigned __int8)__s2[v25.u32[0] - 16];
}
