void __fastcall sub_228EF50(char **a1, unsigned int a2)
{
  char *v2; // rdx
  char *v3; // rax
  char *v4; // rdx
  bool v5; // zf
  char v6; // si
  char v7; // al
  char *v8; // rbp
  char *v9; // r13
  char *v10; // r15
  __int64 v11; // rax
  size_t v12; // rbp
  void *ptr; // [rsp+0h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+8h] [rbp-D0h]
  _BYTE v15[192]; // [rsp+18h] [rbp-C0h] BYREF

  v2 = a1[1];
  if ( v2 )
  {
    v3 = *a1;
    v4 = &v2[(_QWORD)*a1];
    if ( a2 > 1 )
    {
      if ( v3 != v4 )
      {
        v5 = a2 == 3;
        v6 = 92;
        if ( !v5 )
          v6 = 47;
        do
        {
          while ( *v3 != 92 && *v3 != 47 )
          {
            if ( ++v3 == v4 )
              goto LABEL_17;
          }
          *v3++ = v6;
        }
        while ( v3 != v4 );
LABEL_17:
        v4 = *a1;
      }
      if ( *v4 == 126 )
      {
        if ( a1[1] == (_BYTE *)&dword_0 + 1 || (v7 = v4[1], v7 == 47) || v7 == 92 )
        {
          si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
          ptr = v15;
          sub_228D5A0(&ptr);
          v8 = a1[1];
          v9 = *a1 + 1;
          v10 = &v8[(_QWORD)*a1];
          v11 = si128.m128i_i64[0];
          v12 = (size_t)(v8 - 1);
          if ( v12 + si128.m128i_i64[0] > si128.m128i_i64[1] )
          {
            sub_2236E10((__int64)&ptr, v15, v12 + si128.m128i_i64[0], 1);
            v11 = si128.m128i_i64[0];
          }
          if ( v10 != v9 )
          {
            memcpy((char *)ptr + v11, v9, v12);
            v11 = si128.m128i_i64[0];
          }
          si128.m128i_i64[0] = v11 + v12;
          sub_9C3DB0((void **)a1, (const void **)&ptr);
          if ( ptr != v15 )
            free(ptr);
        }
      }
    }
    else
    {
      for ( ; v3 != v4; ++v3 )
      {
        if ( *v3 == 92 )
          *v3 = 47;
      }
    }
  }
}
