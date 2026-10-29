void __fastcall sub_11EDE80(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r13
  __int64 v6; // r12
  char v7; // r15
  char v8; // al
  _BYTE *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // [rsp+0h] [rbp-248h]
  _QWORD v12[4]; // [rsp+10h] [rbp-238h] BYREF
  __int16 v13; // [rsp+30h] [rbp-218h]
  _QWORD v14[4]; // [rsp+40h] [rbp-208h] BYREF
  __int16 v15; // [rsp+60h] [rbp-1E8h]
  _QWORD v16[4]; // [rsp+70h] [rbp-1D8h] BYREF
  __int16 v17; // [rsp+90h] [rbp-1B8h]
  void *v18; // [rsp+A0h] [rbp-1A8h] BYREF
  __int64 v19; // [rsp+A8h] [rbp-1A0h]
  __int16 v20; // [rsp+C0h] [rbp-188h]
  void *v21; // [rsp+D0h] [rbp-178h] BYREF
  __int64 v22; // [rsp+D8h] [rbp-170h]
  __int64 v23; // [rsp+E8h] [rbp-160h] BYREF
  void *ptr; // [rsp+170h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+178h] [rbp-D0h]
  _BYTE v26[192]; // [rsp+188h] [rbp-C0h] BYREF

  v11 = *(_QWORD *)(a1 + 8);
  sub_11EDD40((__int64)&v21, a1, a2);
  v5 = sub_10DCD30(a2, 0xBEDu);
  v6 = v5 | sub_10DCD30(a2, 0xBEFu);
  v7 = sub_21B7850(a2, 3033, 2130, 0);
  v8 = sub_21B7850(a2, 2130, 3033, 0);
  if ( v6 )
  {
    if ( v5 && !v8 )
      goto LABEL_12;
  }
  else
  {
    ptr = v26;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    if ( v22 )
      sub_9C3DB0(&ptr, (const void **)&v21);
    v20 = 257;
    v16[0] = "include";
    v17 = 259;
    v14[0] = "local";
    v15 = 259;
    v12[0] = "usr";
    v13 = 259;
    sub_228A3B0(&ptr, v12, v14, v16, &v18);
    v20 = 261;
    v18 = ptr;
    v19 = si128.m128i_i64[0];
    sub_112FA80(a2, a3, (__int64)&v18);
    if ( ptr != v26 )
      free(ptr);
  }
  if ( !v7 )
  {
    v9 = *(_BYTE **)(v11 + 248);
    v10 = *(_QWORD *)(v11 + 256);
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    ptr = v26;
    sub_A1FE50(&ptr, v9, &v9[v10]);
    v12[0] = "include";
    v20 = 257;
    v15 = 257;
    v17 = 257;
    v13 = 259;
    sub_228A3B0(&ptr, v12, v14, v16, &v18);
    v20 = 261;
    v18 = ptr;
    v19 = si128.m128i_i64[0];
    sub_112FA80(a2, a3, (__int64)&v18);
    if ( ptr != v26 )
      free(ptr);
  }
  if ( !v6 )
  {
    ptr = v26;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    if ( v22 )
      sub_9C3DB0(&ptr, (const void **)&v21);
    v20 = 257;
    v17 = 257;
    v14[0] = "include";
    v15 = 259;
    v13 = 259;
    v12[0] = "usr";
    sub_228A3B0(&ptr, v12, v14, v16, &v18);
    v20 = 261;
    v18 = ptr;
    v19 = si128.m128i_i64[0];
    sub_112FAC0(a2, a3, (__int64)&v18);
    if ( ptr != v26 )
      free(ptr);
  }
LABEL_12:
  if ( v21 != &v23 )
    free(v21);
}
