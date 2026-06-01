__int64 __fastcall sub_11EE640(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char *a7,
        __int64 a8,
        char *a9,
        __int64 a10)
{
  bool v12; // zf
  __int64 v13; // rax
  __int64 (__fastcall *v14)(__int64, void **); // rdx
  char *v16; // [rsp+40h] [rbp-198h] BYREF
  __int64 v17; // [rsp+48h] [rbp-190h]
  __int16 v18; // [rsp+60h] [rbp-178h]
  _QWORD v19[4]; // [rsp+70h] [rbp-168h] BYREF
  __int16 v20; // [rsp+90h] [rbp-148h]
  _BYTE v21[32]; // [rsp+A0h] [rbp-138h] BYREF
  __int16 v22; // [rsp+C0h] [rbp-118h]
  void *v23; // [rsp+D0h] [rbp-108h] BYREF
  __int64 v24; // [rsp+D8h] [rbp-100h]
  __int16 v25; // [rsp+F0h] [rbp-E8h]
  void *ptr; // [rsp+100h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+108h] [rbp-D0h]
  __int64 v28; // [rsp+118h] [rbp-C0h] BYREF
  __int16 v29; // [rsp+120h] [rbp-B8h]

  v19[0] = a5;
  v29 = 257;
  v25 = 257;
  v22 = 257;
  v19[1] = a6;
  v20 = 261;
  sub_228A3B0(a4, v19, v21, &v23, &ptr);
  v29 = 261;
  ptr = *(void **)a4;
  si128.m128i_i64[0] = *(_QWORD *)(a4 + 8);
  sub_112FA80(a2, a3, (__int64)&ptr);
  v12 = *(_QWORD *)(a4 + 8) == 0;
  ptr = &v28;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  if ( !v12 )
    sub_9C3DB0(&ptr, (const void **)a4);
  if ( a8 )
  {
    v25 = 257;
    v22 = 257;
    v18 = 261;
    v16 = a7;
    v20 = 257;
    v17 = a8;
    sub_228A3B0(&ptr, &v16, v19, v21, &v23);
  }
  if ( a10 )
  {
    v25 = 257;
    v22 = 257;
    v20 = 257;
    v18 = 261;
    v16 = a9;
    v17 = a10;
    sub_228A3B0(&ptr, &v16, v19, v21, &v23);
  }
  v25 = 261;
  v23 = ptr;
  v24 = si128.m128i_i64[0];
  sub_112FA80(a2, a3, (__int64)&v23);
  if ( ptr != &v28 )
    free(ptr);
  v12 = *(_QWORD *)(a4 + 8) == 0;
  ptr = &v28;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  if ( !v12 )
    sub_9C3DB0(&ptr, (const void **)a4);
  v25 = 257;
  v22 = 257;
  v20 = 257;
  v16 = "backward";
  v18 = 259;
  sub_228A3B0(&ptr, &v16, v19, v21, &v23);
  v25 = 261;
  v23 = ptr;
  v24 = si128.m128i_i64[0];
  sub_112FA80(a2, a3, (__int64)&v23);
  if ( ptr != &v28 )
    free(ptr);
  v13 = sub_112C5D0(a1);
  v14 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v13 + 96LL);
  v29 = 261;
  ptr = *(void **)a4;
  si128.m128i_i64[0] = *(_QWORD *)(a4 + 8);
  return v14(v13, &ptr);
}
