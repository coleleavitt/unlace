__int64 __fastcall sub_205EC40(__int64 a1, __int64 a2, char *a3, __int64 a4)
{
  __int64 result; // rax
  __m128 v7; // xmm0
  __int64 *v8; // rax
  __m128i v9; // xmm1
  __m128i v10; // xmm2
  __int64 v11; // rbp
  __int64 v12; // rbp
  __int64 v13; // [rsp+8h] [rbp-110h] BYREF
  __m128 v14; // [rsp+10h] [rbp-108h] BYREF
  char *v15; // [rsp+20h] [rbp-F8h]
  __int16 v16; // [rsp+30h] [rbp-E8h]
  __m128i v17; // [rsp+38h] [rbp-E0h] BYREF
  __m128i v18; // [rsp+48h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+58h] [rbp-C0h]
  _BYTE v20[32]; // [rsp+60h] [rbp-B8h] BYREF
  char v21; // [rsp+80h] [rbp-98h]
  __int16 v22; // [rsp+90h] [rbp-88h] BYREF
  __m128i v23; // [rsp+98h] [rbp-80h]
  __m128i v24; // [rsp+A8h] [rbp-70h]
  __int64 v25; // [rsp+B8h] [rbp-60h]
  _BYTE v26[32]; // [rsp+C0h] [rbp-58h] BYREF
  char v27; // [rsp+E0h] [rbp-38h]

  result = sub_204E0F0(a1, a2, a3);
  if ( !result && a4 != *(_QWORD *)(a1 + 8) )
  {
    v13 = a2;
    v16 = 62;
    v15 = a3;
    v7 = _mm_loadh_ps((const double *)&v13);
    v17.m128i_i64[0] = (__int64)&v14;
    v14 = v7;
    v17.m128i_i64[1] = 3;
    v18 = 0u;
    v19 = 0;
    v21 = 0;
    v8 = (__int64 *)sub_20CB0D0(a1);
    v9 = _mm_loadu_si128(&v17);
    v10 = _mm_loadu_si128(&v18);
    v11 = *v8;
    v27 = 0;
    v23 = v9;
    v22 = v16;
    v12 = v11 + 1704;
    v24 = v10;
    v25 = v19;
    if ( v21 )
    {
      sub_20150B0((__int64)v26, (__int64)v20);
      v27 = 1;
    }
    result = sub_205DE40(v12, *(_QWORD *)(a1 + 8), (__int64)&v22);
    if ( v27 )
    {
      v13 = result;
      sub_200ED00((__int64)v26);
      result = v13;
    }
    if ( v21 )
    {
      v13 = result;
      sub_200ED00((__int64)v20);
      return v13;
    }
  }
  return result;
}
