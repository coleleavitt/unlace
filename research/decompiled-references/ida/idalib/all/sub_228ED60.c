__int64 __fastcall sub_228ED60(_QWORD *a1, _BYTE *a2, size_t a3, const char *a4, size_t a5, unsigned int a6)
{
  size_t v9; // r15
  _BYTE *v10; // r12
  __int64 i; // rdx
  char v13; // al
  char v14; // r9
  const char *v15[4]; // [rsp+10h] [rbp-188h] BYREF
  __int16 v16; // [rsp+30h] [rbp-168h]
  void *ptr; // [rsp+40h] [rbp-158h] BYREF
  __m128i si128; // [rsp+48h] [rbp-150h]
  _BYTE v19[320]; // [rsp+58h] [rbp-140h] BYREF

  if ( a3 | a5 )
  {
    v9 = a1[1];
    v10 = (_BYTE *)*a1;
    if ( a6 > 1 )
    {
      if ( v9 < a3 )
        return 0;
      if ( a3 )
      {
        for ( i = 0; a3 != i; ++i )
        {
          v13 = v10[i];
          v14 = a2[i];
          if ( v13 == 47 )
          {
            if ( v14 != 47 && v14 != 92 )
              return 0;
          }
          else if ( v14 == 47 )
          {
            if ( v13 != 92 )
              return 0;
          }
          else
          {
            if ( (v13 == 92) != (v14 == 92) )
              return 0;
            if ( v13 != 92 )
            {
              if ( (unsigned __int8)(v13 - 65) < 0x1Au )
                v13 += 32;
              if ( (unsigned __int8)(v14 - 65) < 0x1Au )
                v14 += 32;
              if ( v14 != v13 )
                return 0;
            }
          }
        }
      }
    }
    else
    {
      if ( v9 < a3 )
        return 0;
      if ( !a3 )
      {
        if ( a5 )
        {
LABEL_8:
          ptr = v19;
          v16 = 1285;
          si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
          v15[0] = a4;
          v15[1] = (const char *)a5;
          v15[2] = &v10[a3];
          v15[3] = (const char *)(v9 - a3);
          sub_22538C0(v15, (__int64)&ptr);
          sub_228E730(a1, &ptr);
          if ( ptr != v19 )
            free(ptr);
          return 1;
        }
        return 1;
      }
      if ( memcmp((const void *)*a1, a2, a3) )
        return 0;
    }
    if ( a5 != a3 )
      goto LABEL_8;
    if ( a5 )
    {
      memmove(v10, a4, a5);
      return 1;
    }
    return 1;
  }
  return 0;
}
