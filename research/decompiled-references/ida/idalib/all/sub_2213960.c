double __fastcall sub_2213960(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, float *a7)
{
  const char *v9; // rax
  double result; // xmm0_8
  float v11; // xmm1_4
  void *v12; // rdi
  __int64 v13; // r15
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __m128i endptr; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v18; // [rsp+20h] [rbp-C8h]
  __int64 v19; // [rsp+28h] [rbp-C0h]
  __int16 v20; // [rsp+30h] [rbp-B8h]
  __m128i v21[2]; // [rsp+40h] [rbp-A8h] BYREF
  __int16 v22; // [rsp+60h] [rbp-88h]
  void *ptr; // [rsp+70h] [rbp-78h] BYREF
  __m128i si128; // [rsp+78h] [rbp-70h]
  _BYTE v25[96]; // [rsp+88h] [rbp-60h] BYREF

  v22 = 261;
  v21[0].m128i_i64[0] = a5;
  v21[0].m128i_i64[1] = a6;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
  ptr = v25;
  v9 = (const char *)sub_2253CC0(v21, &ptr);
  result = strtod(v9, (char **)&endptr);
  if ( !*(_BYTE *)endptr.m128i_i64[0] )
  {
    if ( ptr != v25 )
      free(ptr);
LABEL_4:
    v11 = result;
    *a7 = v11;
    return result;
  }
  v12 = ptr;
  if ( ptr != v25 )
    free(ptr);
  v13 = sub_227D6D0(v12, &endptr);
  v20 = 1283;
  v21[0].m128i_i64[0] = (__int64)"' value invalid for floating point argument!";
  v22 = 259;
  endptr.m128i_i64[0] = (__int64)"'";
  v18 = a5;
  v19 = a6;
  sub_A41580((__m128i *)&ptr, &endptr, v21, v14, v15, v16);
  if ( !(unsigned __int8)sub_2212D60(a2, (__int64)&ptr, 0, 0, v13) )
    goto LABEL_4;
  return result;
}
