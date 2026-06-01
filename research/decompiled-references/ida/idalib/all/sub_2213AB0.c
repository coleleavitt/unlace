__int64 __fastcall sub_2213AB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, double *a7)
{
  const char *v9; // rax
  double v10; // xmm0_8
  _BYTE *v11; // rdi
  __int64 result; // rax
  void *v13; // rdi
  __int64 v14; // r15
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __m128i endptr; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v19; // [rsp+20h] [rbp-C8h]
  __int64 v20; // [rsp+28h] [rbp-C0h]
  __int16 v21; // [rsp+30h] [rbp-B8h]
  __m128i v22[2]; // [rsp+40h] [rbp-A8h] BYREF
  __int16 v23; // [rsp+60h] [rbp-88h]
  void *ptr; // [rsp+70h] [rbp-78h] BYREF
  __m128i si128; // [rsp+78h] [rbp-70h]
  _BYTE v26[96]; // [rsp+88h] [rbp-60h] BYREF

  v23 = 261;
  v22[0].m128i_i64[0] = a5;
  v22[0].m128i_i64[1] = a6;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
  ptr = v26;
  v9 = (const char *)sub_2253CC0(v22, &ptr);
  v10 = strtod(v9, (char **)&endptr);
  if ( *(_BYTE *)endptr.m128i_i64[0] )
  {
    v13 = ptr;
    if ( ptr != v26 )
      free(ptr);
    v14 = sub_227D6D0(v13, &endptr);
    v21 = 1283;
    v22[0].m128i_i64[0] = (__int64)"' value invalid for floating point argument!";
    v23 = 259;
    endptr.m128i_i64[0] = (__int64)"'";
    v19 = a5;
    v20 = a6;
    sub_A41580((__m128i *)&ptr, &endptr, v22, v15, v16, v17);
    return sub_2212D60(a2, (__int64)&ptr, 0, 0, v14);
  }
  else
  {
    v11 = ptr;
    *a7 = v10;
    result = 0;
    if ( v11 != v26 )
    {
      free(v11);
      return 0;
    }
  }
  return result;
}
