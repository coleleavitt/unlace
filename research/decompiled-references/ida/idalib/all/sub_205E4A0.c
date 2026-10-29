__int64 __fastcall sub_205E4A0(unsigned int a1, _BYTE *a2, __int64 **a3, char a4)
{
  char v5; // bp
  __int64 result; // rax
  __int64 v8; // rdi
  __m128i v9; // xmm0
  __m128i v10; // xmm1
  __int64 v11; // [rsp+0h] [rbp-E8h]
  __int64 v12; // [rsp+0h] [rbp-E8h]
  _BYTE *v13; // [rsp+8h] [rbp-E0h] BYREF
  char v14; // [rsp+10h] [rbp-D8h]
  char v15; // [rsp+11h] [rbp-D7h]
  __m128i v16; // [rsp+18h] [rbp-D0h] BYREF
  __m128i v17; // [rsp+28h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+38h] [rbp-B0h]
  _BYTE v19[32]; // [rsp+40h] [rbp-A8h] BYREF
  char v20; // [rsp+60h] [rbp-88h]
  _BYTE v21[8]; // [rsp+70h] [rbp-78h] BYREF
  __m128i v22; // [rsp+78h] [rbp-70h]
  __m128i v23; // [rsp+88h] [rbp-60h]
  __int64 v24; // [rsp+98h] [rbp-50h]
  __int64 v25; // [rsp+A0h] [rbp-48h] BYREF
  char v26; // [rsp+C0h] [rbp-28h]

  v5 = a1;
  v13 = a2;
  result = sub_204DB70(a1, a2, (__int64)a3);
  if ( !result && !a4 )
  {
    v8 = **a3;
    v14 = v5;
    v16.m128i_i64[0] = (__int64)&v13;
    v16.m128i_i64[1] = 1;
    v9 = _mm_loadu_si128(&v16);
    v17 = 0u;
    v10 = _mm_loadu_si128(&v17);
    v21[0] = v5;
    v15 = 0;
    v18 = 0;
    v20 = 0;
    v21[1] = 0;
    v22 = v9;
    v23 = v10;
    v24 = 0;
    v26 = 0;
    result = sub_205DE40(v8 + 1704, (__int64)a3, (__int64)v21);
    if ( v26 )
    {
      v12 = result;
      sub_200ED00((__int64)&v25);
      result = v12;
    }
    if ( v20 )
    {
      v11 = result;
      sub_200ED00((__int64)v19);
      return v11;
    }
  }
  return result;
}
