__int64 __fastcall sub_1C02150(
        __m128 *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v8; // rbp
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 *v13; // rsi
  unsigned int v14; // eax
  __int64 v15; // rbx
  __int64 *v16; // [rsp+8h] [rbp-170h] BYREF
  __int64 v17; // [rsp+10h] [rbp-168h] BYREF
  __int64 v18; // [rsp+18h] [rbp-160h] BYREF
  _BYTE v19[144]; // [rsp+20h] [rbp-158h] BYREF
  __m128i v20[2]; // [rsp+B0h] [rbp-C8h] BYREF
  void *ptr; // [rsp+D0h] [rbp-A8h]
  __int64 v22; // [rsp+E0h] [rbp-98h] BYREF

  v8 = 1;
  v16 = a2;
  if ( !(unsigned __int8)sub_1BC8220((__int64)a1, (__int64 *)&v16, (__m128i)a7, a8, a3, a4, a5, a6) )
  {
    sub_1BFA5E0(v20, (__int64)a1, (unsigned __int64)v16, a7, a8);
    v12 = *(_QWORD *)(a1[15].m128_u64[1] + 18640);
    if ( (v20[0].m128i_i32[0] & 0x7FFFFFFF) == 5 )
    {
      v13 = v16;
      v8 = 1;
      if ( !(unsigned __int8)sub_1C01CD0(a1, (unsigned __int64)v16, v12, v10, v11, a7, a8) )
      {
        v14 = sub_EEB7E0((unsigned __int64)v16, (__int64)v13, *(double *)a7.m128_u64);
        sub_168B9F0((__int64)v19, &a1->m128_i64[1], v14, 0x1462u, 0);
        v17 = v16[1];
        v15 = sub_162B6D0((__int64)v19, &v17);
        v18 = sub_EEC8C0((unsigned __int64)v16, (__int64)&v17, *(double *)a7.m128_u64);
        sub_1587DB0(v15, &v18);
        sub_15F7200(v19);
      }
    }
    else
    {
      v8 = sub_19AFC70((__int64)a1, v16, v12, (__int64)v20, 3, 0, a7, a8);
    }
    if ( (v20[0].m128i_i32[0] & 0x7FFFFFFF) == 3 && ptr != &v22 )
      free(ptr);
  }
  return v8;
}
