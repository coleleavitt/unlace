__int64 __fastcall sub_205EAD0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // r13
  __m128 v6; // xmm0
  __int64 *v7; // rax
  __m128i v8; // xmm1
  __m128i v9; // xmm2
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // [rsp+8h] [rbp-100h] BYREF
  __m128 v13; // [rsp+10h] [rbp-F8h] BYREF
  __int16 v14; // [rsp+20h] [rbp-E8h]
  __m128i v15; // [rsp+28h] [rbp-E0h] BYREF
  __m128i v16; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+48h] [rbp-C0h]
  _BYTE v18[32]; // [rsp+50h] [rbp-B8h] BYREF
  char v19; // [rsp+70h] [rbp-98h]
  __int16 v20; // [rsp+80h] [rbp-88h] BYREF
  __m128i v21; // [rsp+88h] [rbp-80h]
  __m128i v22; // [rsp+98h] [rbp-70h]
  __int64 v23; // [rsp+A8h] [rbp-60h]
  _BYTE v24[32]; // [rsp+B0h] [rbp-58h] BYREF
  char v25; // [rsp+D0h] [rbp-38h]

  result = sub_204DBB0((unsigned __int8 *)a1, a2);
  if ( !result )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL);
    if ( a3 != v5 )
    {
      v12 = a2;
      v14 = 61;
      v15.m128i_i64[0] = (__int64)&v13;
      v6 = _mm_loadh_ps((const double *)&v12);
      v19 = 0;
      v13 = v6;
      v15.m128i_i64[1] = 2;
      v16 = 0u;
      v17 = 0;
      v7 = (__int64 *)sub_20CB0D0(a1);
      v8 = _mm_loadu_si128(&v15);
      v9 = _mm_loadu_si128(&v16);
      v10 = *v7;
      v25 = 0;
      v21 = v8;
      v20 = v14;
      v11 = v10 + 1704;
      v22 = v9;
      v23 = v17;
      if ( v19 )
      {
        sub_20150B0((__int64)v24, (__int64)v18);
        v25 = 1;
      }
      result = sub_205DE40(v11, v5, (__int64)&v20);
      if ( v25 )
      {
        v12 = result;
        sub_200ED00((__int64)v24);
        result = v12;
      }
      if ( v19 )
      {
        v12 = result;
        sub_200ED00((__int64)v18);
        return v12;
      }
    }
  }
  return result;
}
