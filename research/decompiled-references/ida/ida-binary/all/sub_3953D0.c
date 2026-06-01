void __fastcall sub_3953D0(
        __m128i *a1,
        __m128i *a2,
        __int64 *a3,
        unsigned __int8 (__fastcall *a4)(__int64 *, __int64 *))
{
  __int64 v5; // rsi
  __m128i *v9; // r15
  __m128i *v10; // rdi
  __int64 v11; // r15
  __int64 v12; // rcx
  __int64 v13; // [rsp+0h] [rbp-48h]

  v5 = (char *)a2 - (char *)a1;
  v13 = (__int64)a3 + v5;
  if ( v5 <= 288 )
  {
    sub_394250(a1, a2, a4);
  }
  else
  {
    v9 = a1;
    do
    {
      v10 = v9;
      v9 += 21;
      sub_394250(v10, v9, a4);
    }
    while ( (char *)a2 - (char *)v9 > 288 );
    sub_394250(v9, a2, a4);
    if ( v5 > 336 )
    {
      v11 = 7;
      do
      {
        sub_395300(a1->m128i_i8, (__int64)a2, a3, v11, (unsigned __int8 (__fastcall *)(__int64, const char *))a4);
        v12 = 2 * v11;
        v11 *= 4;
        sub_395300((const char *)a3, v13, a1->m128i_i64, v12, (unsigned __int8 (__fastcall *)(__int64, const char *))a4);
      }
      while ( (__int64)(0xAAAAAAAAAAAAAAABLL * (v5 >> 4)) > v11 );
    }
  }
}
