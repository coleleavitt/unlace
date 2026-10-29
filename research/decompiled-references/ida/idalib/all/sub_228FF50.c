void __fastcall sub_228FF50(const char **a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rcx
  char *v6; // rax
  char *v7; // rcx
  char v8; // si
  char v9; // al
  __int64 v10; // rbp
  __int64 v11; // rdi
  const void *v12; // r15
  size_t v13; // rbp
  const void *v14; // r13
  void *ptr; // [rsp+0h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+8h] [rbp-D0h]
  _BYTE v17[192]; // [rsp+18h] [rbp-C0h] BYREF

  *(_QWORD *)(a2 + 8) = 0;
  sub_22538C0(a1, a2);
  v5 = *(_QWORD *)(a2 + 8);
  if ( v5 )
  {
    v6 = *(char **)a2;
    v7 = (char *)(*(_QWORD *)a2 + v5);
    if ( a3 <= 1 )
    {
      while ( v6 != v7 )
      {
        if ( *v6 == 92 )
          *v6 = 47;
        ++v6;
      }
    }
    else
    {
      if ( v6 != v7 )
      {
        v8 = 92;
        if ( a3 != 3 )
          v8 = 47;
        do
        {
          while ( *v6 != 92 && *v6 != 47 )
          {
            if ( ++v6 == v7 )
              goto LABEL_11;
          }
          *v6++ = v8;
        }
        while ( v6 != v7 );
LABEL_11:
        v7 = *(char **)a2;
      }
      if ( *v7 == 126 )
      {
        if ( *(_QWORD *)(a2 + 8) == 1 || (v9 = v7[1], v9 == 47) || v9 == 92 )
        {
          ptr = v17;
          si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
          sub_228D5A0(&ptr);
          v10 = *(_QWORD *)(a2 + 8);
          v11 = si128.m128i_i64[0];
          v12 = (const void *)(*(_QWORD *)a2 + v10);
          v13 = v10 - 1;
          v14 = (const void *)(*(_QWORD *)a2 + 1LL);
          if ( v13 + si128.m128i_i64[0] > si128.m128i_i64[1] )
          {
            sub_2236E10((__int64)&ptr, v17, v13 + si128.m128i_i64[0], 1);
            v11 = si128.m128i_i64[0];
          }
          if ( v12 != v14 )
          {
            memcpy((char *)ptr + v11, v14, v13);
            v11 = si128.m128i_i64[0];
          }
          si128.m128i_i64[0] = v11 + v13;
          sub_9C3DB0((void **)a2, (const void **)&ptr);
          if ( ptr != v17 )
            free(ptr);
        }
      }
    }
  }
}
