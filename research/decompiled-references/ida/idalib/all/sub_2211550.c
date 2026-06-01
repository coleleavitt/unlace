__int64 __fastcall sub_2211550(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r15
  unsigned __int64 v4; // r8
  __int64 v5; // rbp
  __int64 v6; // rax
  _BYTE *v7; // rsi
  _UNKNOWN **v8; // rax
  __int64 v9; // rax
  unsigned __int64 v11; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __m128i si128; // [rsp+18h] [rbp-50h]
  _BYTE v14[64]; // [rsp+28h] [rbp-40h] BYREF

  v3 = *(_QWORD *)(a2 + 16);
  v4 = *(_QWORD *)(a2 + 8);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A7D60);
  ptr = v14;
  if ( v3 )
  {
    v14[0] = 32;
    v5 = 1;
    v6 = ++si128.m128i_i64[0];
    if ( v3 > 1 )
    {
      do
      {
        while ( (unsigned __int64)(v6 + 1) <= si128.m128i_i64[1] )
        {
          ++v5;
          *((_BYTE *)ptr + v6) = 32;
          v6 = ++si128.m128i_i64[0];
          if ( v3 == v5 )
            goto LABEL_5;
        }
        v11 = v4;
        sub_2236E10(&ptr, v14, v6 + 1, 1);
        ++v5;
        v4 = v11;
        *((_BYTE *)ptr + si128.m128i_i64[0]) = 32;
        v6 = ++si128.m128i_i64[0];
      }
      while ( v3 != v5 );
    }
  }
LABEL_5:
  if ( v4 <= 1 )
  {
    v7 = off_2C8F5C0;
    v8 = &off_2C8F5C0;
  }
  else
  {
    v7 = off_2C8F5B0;
    v8 = &off_2C8F5B0;
  }
  sub_A1FE50(&ptr, v7, (_BYTE *)v8[1] + (_QWORD)v7);
  v9 = sub_227BF10(a1, ptr, si128.m128i_i64[0]);
  sub_9954E0(v9, *(const void **)a2, *(_QWORD *)(a2 + 8));
  if ( ptr != v14 )
    free(ptr);
  return a1;
}
