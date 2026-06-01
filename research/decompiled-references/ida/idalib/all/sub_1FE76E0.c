__m128i *__fastcall sub_1FE76E0(__m128i *a1, int *a2)
{
  int v2; // ecx
  unsigned __int64 v3; // rcx
  char *v4; // rsi
  __m128i *v5; // rax
  __int64 v6; // rcx
  __m128i *v7; // rdx
  unsigned __int64 v9; // rcx
  char *v10; // rsi
  char v11; // [rsp+14h] [rbp-44h] BYREF
  _BYTE v12[11]; // [rsp+15h] [rbp-43h] BYREF
  void *v13[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v14[40]; // [rsp+30h] [rbp-28h] BYREF

  v2 = *a2;
  if ( *a2 < 0 )
  {
    v9 = 1LL << -(char)v2;
    if ( v9 )
    {
      v10 = v12;
      while ( 1 )
      {
        *--v10 = v9 % 0xA + 48;
        if ( v9 <= 9 )
          break;
        v9 /= 0xAu;
      }
    }
    else
    {
      v11 = 48;
      v10 = &v11;
    }
    v13[0] = v14;
    sub_1FE43F0(v13, v10, (__int64)v12);
    v5 = (__m128i *)sub_99BDC0(v13, 0, 0, "mf", 2u);
    a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
    v6 = v5->m128i_i64[0];
    v7 = v5 + 1;
    if ( (__m128i *)v5->m128i_i64[0] != &v5[1] )
      goto LABEL_5;
  }
  else
  {
    v3 = 1LL << v2;
    if ( v3 )
    {
      v4 = v12;
      while ( 1 )
      {
        *--v4 = v3 % 0xA + 48;
        if ( v3 <= 9 )
          break;
        v3 /= 0xAu;
      }
    }
    else
    {
      v11 = 48;
      v4 = &v11;
    }
    v13[0] = v14;
    sub_1FE43F0(v13, v4, (__int64)v12);
    v5 = (__m128i *)sub_99BDC0(v13, 0, 0, "m", 1u);
    a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
    v6 = v5->m128i_i64[0];
    v7 = v5 + 1;
    if ( (__m128i *)v5->m128i_i64[0] != &v5[1] )
    {
LABEL_5:
      a1->m128i_i64[0] = v6;
      a1[1].m128i_i64[0] = v5[1].m128i_i64[0];
      goto LABEL_6;
    }
  }
  a1[1] = _mm_loadu_si128(v5 + 1);
LABEL_6:
  a1->m128i_i64[1] = v5->m128i_i64[1];
  v5->m128i_i64[0] = (__int64)v7;
  v5->m128i_i64[1] = 0;
  v5[1].m128i_i8[0] = 0;
  if ( v13[0] != v14 )
    operator delete(v13[0]);
  return a1;
}
