__m128i *__fastcall sub_204CCA0(__m128i *a1, __int64 a2, __int8 a3)
{
  __m128 v3; // xmm1
  char (__fastcall *v5)(char *, _BYTE *); // [rsp+8h] [rbp-60h] BYREF
  _BYTE v6[16]; // [rsp+10h] [rbp-58h] BYREF
  __m128 v7; // [rsp+20h] [rbp-48h]
  __m128i v8; // [rsp+30h] [rbp-38h] BYREF
  __int64 (__fastcall *v9)(__m128i *, __m128i *, int); // [rsp+40h] [rbp-28h]
  char (__fastcall *v10)(char *, _BYTE *); // [rsp+48h] [rbp-20h]

  v5 = sub_204B120;
  v6[0] = a3;
  v8.m128i_i8[0] = a3;
  v3 = _mm_loadh_ps((const double *)&v5);
  v10 = sub_204B120;
  v7 = v3;
  v9 = (__int64 (__fastcall *)(__m128i *, __m128i *, int))sub_204B100;
  sub_204C890(a1, a2, &v8);
  if ( v9 )
    v9(&v8, &v8, 3);
  if ( v7.m128_u64[0] )
    ((void (__fastcall *)(_BYTE *, _BYTE *, __int64))v7.m128_u64[0])(v6, v6, 3);
  return a1;
}
