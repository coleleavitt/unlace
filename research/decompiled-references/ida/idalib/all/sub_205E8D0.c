__int64 __fastcall sub_205E8D0(char a1, __int64 a2, __int64 a3, char a4)
{
  __m128 v4; // xmm0
  __int64 *v5; // rax
  __m128i v6; // xmm1
  __m128i v7; // xmm2
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // rbx
  double v12[2]; // [rsp+0h] [rbp-F8h] BYREF
  __m128 v13; // [rsp+10h] [rbp-E8h] BYREF
  __int16 v14; // [rsp+20h] [rbp-D8h]
  __m128i v15; // [rsp+28h] [rbp-D0h] BYREF
  __m128i v16; // [rsp+38h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+48h] [rbp-B0h]
  _BYTE v18[32]; // [rsp+50h] [rbp-A8h] BYREF
  char v19; // [rsp+70h] [rbp-88h]
  __int16 v20; // [rsp+80h] [rbp-78h] BYREF
  __m128i v21; // [rsp+88h] [rbp-70h]
  __m128i v22; // [rsp+98h] [rbp-60h]
  __int64 v23; // [rsp+A8h] [rbp-50h]
  _BYTE v24[32]; // [rsp+B0h] [rbp-48h] BYREF
  char v25; // [rsp+D0h] [rbp-28h]

  *(_QWORD *)&v12[0] = a3;
  *(_QWORD *)&v12[1] = a2;
  LOBYTE(v14) = a1;
  v4 = _mm_loadh_ps(v12);
  HIBYTE(v14) = a4;
  v13 = v4;
  v15.m128i_i64[0] = (__int64)&v13;
  v15.m128i_i64[1] = 2;
  v16 = 0u;
  v17 = 0;
  v19 = 0;
  v5 = (__int64 *)sub_20CB0D0(a2);
  v6 = _mm_loadu_si128(&v15);
  v7 = _mm_loadu_si128(&v16);
  v8 = *v5;
  v25 = 0;
  v21 = v6;
  v20 = v14;
  v9 = v8 + 1704;
  v22 = v7;
  v23 = v17;
  if ( v19 )
  {
    sub_20150B0((__int64)v24, (__int64)v18);
    v25 = 1;
  }
  v10 = sub_205DE40(v9, *(_QWORD *)(a2 + 8), (__int64)&v20);
  if ( v25 )
    sub_200ED00((__int64)v24);
  if ( v19 )
    sub_200ED00((__int64)v18);
  return v10;
}
