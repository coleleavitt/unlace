int __cdecl _platform_strcmp(const char *__s1, const char *__s2)
{
  __int64 v2; // x4
  unsigned int v3; // t1
  int v4; // t1
  int v5; // w3
  __int64 v8; // x7
  int8x16_t v9; // t1
  int8x16_t v10; // q0
  int8x16_t v11; // t1
  int8x16_t v12; // q1
  uint8x16_t v13; // q0
  __int64 v14; // x4
  unsigned int v15; // t1
  int v16; // t1
  int8x16_t v18; // t1
  int8x16_t v19; // q0
  int8x16_t v20; // t1
  int8x16_t v21; // q1
  uint8x16_t v22; // q0

  while ( ((unsigned __int8)__s1 & 0xF) != 0 )
  {
    v3 = *(unsigned __int8 *)__s1++;
    v2 = v3;
    v4 = *(unsigned __int8 *)__s2++;
    v5 = v2 - v4;
    if ( v2 != v4 || (_DWORD)v2 == 0 )
      return v5;
  }
  if ( ((unsigned __int8)__s2 & 0xF) != 0 )
  {
    v8 = -(__int64)__s2 & 0xFF0;
    if ( !v8 )
      goto LABEL_12;
LABEL_10:
    while ( 1 )
    {
      v9 = *(int8x16_t *)__s1;
      __s1 += 16;
      v10 = v9;
      v11 = *(int8x16_t *)__s2;
      __s2 += 16;
      v12 = vceqq_s8(v10, v11);
      v13 = (uint8x16_t)vandq_s8(v10, v12);
      v12.i8[0] = vminvq_u8(v13);
      if ( !v12.i32[0] )
        break;
      v8 -= 16;
      if ( !v8 )
      {
LABEL_12:
        while ( 1 )
        {
          v15 = *(unsigned __int8 *)__s1++;
          v14 = v15;
          v16 = *(unsigned __int8 *)__s2++;
          v5 = v14 - v16;
          if ( v14 != v16 || (_DWORD)v14 == 0 )
            return v5;
          if ( ((unsigned __int8)__s1 & 0xF) == 0 )
          {
            v8 = 4080;
            goto LABEL_10;
          }
        }
      }
    }
  }
  else
  {
    do
    {
      v18 = *(int8x16_t *)__s1;
      __s1 += 16;
      v19 = v18;
      v20 = *(int8x16_t *)__s2;
      __s2 += 16;
      v21 = vceqq_s8(v19, v20);
      v13 = (uint8x16_t)vandq_s8(v19, v21);
      v21.i8[0] = vminvq_u8(v13);
    }
    while ( v21.i32[0] );
  }
  v22 = (uint8x16_t)vorrq_s8((int8x16_t)vcgtq_u8(v13, (uint8x16_t)0LL), (int8x16_t)xmmword_62A0);
  v22.i8[0] = vminvq_u8(v22);
  return (unsigned __int8)__s1[v22.u32[0] - 16] - (unsigned __int8)__s2[v22.u32[0] - 16];
}
