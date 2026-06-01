_QWORD *__fastcall sub_129A750(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rax
  char *v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // r12
  _BYTE *v6; // rsi
  _QWORD v8[4]; // [rsp+10h] [rbp-198h] BYREF
  __int16 v9; // [rsp+30h] [rbp-178h]
  _BYTE v10[32]; // [rsp+40h] [rbp-168h] BYREF
  __int16 v11; // [rsp+60h] [rbp-148h]
  _BYTE v12[32]; // [rsp+70h] [rbp-138h] BYREF
  __int16 v13; // [rsp+90h] [rbp-118h]
  _BYTE v14[32]; // [rsp+A0h] [rbp-108h] BYREF
  __int16 v15; // [rsp+C0h] [rbp-E8h]
  void *ptr; // [rsp+D0h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+D8h] [rbp-D0h]
  _BYTE v18[192]; // [rsp+E8h] [rbp-C0h] BYREF

  v2 = *a2;
  v3 = v18;
  v4 = *a2 + 32 * a2[1];
  ptr = v18;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  if ( v4 == v2 )
  {
    v6 = v18;
  }
  else
  {
    v5 = v2;
    do
    {
      v9 = 260;
      v13 = 257;
      v11 = 257;
      v8[0] = v5;
      v5 += 32;
      v15 = 257;
      sub_228A3B0(&ptr, v8, v10, v12, v14);
    }
    while ( v4 != v5 );
    v6 = ptr;
    v3 = (char *)ptr + si128.m128i_i64[0];
  }
  *a1 = a1 + 2;
  sub_129A690(a1, v6, (__int64)v3);
  if ( ptr != v18 )
    free(ptr);
  return a1;
}
