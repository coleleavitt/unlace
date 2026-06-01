void __fastcall sub_1165970(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v5; // rdi
  __int64 v6; // rdi
  size_t v7; // rdx
  char *v8; // r15
  size_t v9; // r12
  const char *v10; // [rsp+0h] [rbp-198h] BYREF
  __int16 v11; // [rsp+20h] [rbp-178h]
  char *v12; // [rsp+30h] [rbp-168h] BYREF
  __int16 v13; // [rsp+50h] [rbp-148h]
  char *v14; // [rsp+60h] [rbp-138h] BYREF
  __int16 v15; // [rsp+80h] [rbp-118h]
  _QWORD v16[4]; // [rsp+90h] [rbp-108h] BYREF
  __int16 v17; // [rsp+B0h] [rbp-E8h]
  void *ptr; // [rsp+C0h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+C8h] [rbp-D0h]
  _BYTE v20[192]; // [rsp+D8h] [rbp-C0h] BYREF

  v5 = *(__int64 **)(a1 + 8);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  ptr = v20;
  if ( (unsigned int)sub_10DD170(v5, a2) == 1 )
  {
    v6 = 0;
    si128.m128i_i64[0] = 0;
    v8 = sub_1165840(a1, a2);
    v9 = v7;
    if ( v7 > si128.m128i_i64[1] )
    {
      sub_2236E10(&ptr, v20, v7, 1);
      v6 = si128.m128i_i64[0];
    }
    if ( v9 )
    {
      memcpy((char *)ptr + v6, v8, v9);
      v6 = si128.m128i_i64[0];
    }
    v17 = 257;
    si128.m128i_i64[0] = v6 + v9;
    v14 = "openmp";
    v15 = 259;
    v12 = "include";
    v13 = 259;
    v11 = 259;
    v10 = "opt/IBM/openxlCSDK";
    sub_228A3B0(&ptr, &v10, &v12, &v14, v16);
    v17 = 261;
    v16[0] = ptr;
    v16[1] = si128.m128i_i64[0];
    sub_112FA80(a2, a3, (__int64)v16);
  }
  if ( ptr != v20 )
    free(ptr);
}
