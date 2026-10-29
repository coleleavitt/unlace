const char *__fastcall sub_11E7120(__int64 a1, __int64 a2)
{
  __m128i v2; // xmm1
  __m128i v3; // xmm2
  __int64 v4; // rcx
  const char *result; // rax
  __m128i v6; // [rsp+0h] [rbp-A8h] BYREF
  __m128i v7; // [rsp+10h] [rbp-98h] BYREF
  __m128i v8; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v9[48]; // [rsp+30h] [rbp-78h] BYREF
  __m128i v10; // [rsp+60h] [rbp-48h] BYREF
  __m128i v11; // [rsp+70h] [rbp-38h]
  __m128i v12; // [rsp+80h] [rbp-28h]

  sub_2289790(&v6, a1, a2, 0);
  sub_22895F0(v9, a1, a2);
  v2 = _mm_load_si128(&v7);
  v3 = _mm_load_si128(&v8);
  v10 = _mm_load_si128(&v6);
  v11 = v2;
  v12 = v3;
  if ( (unsigned __int8)sub_22897C0(&v10, v9) )
    return &byte_22F0C30;
  while ( 1 )
  {
    result = (const char *)v11.m128i_i64[0];
    if ( v11.m128i_i64[1] > 3uLL )
    {
      v4 = v11.m128i_i64[1] - 4;
      if ( *(_DWORD *)(v11.m128i_i64[0] + v11.m128i_i64[1] - 4) == 1801745198 )
        break;
    }
    sub_2289610(&v10, v9, v11.m128i_i64[1], v4);
    if ( (unsigned __int8)sub_22897C0(&v10, v9) )
      return &byte_22F0C30;
  }
  return result;
}
