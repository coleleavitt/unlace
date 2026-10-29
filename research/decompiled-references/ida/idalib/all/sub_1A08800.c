void __fastcall sub_1A08800(__int64 *a1, __int64 a2, const __m128i *a3)
{
  __m128i *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int32 v9[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  if ( (unsigned __int8)sub_16211A0(*a1, a3, a3[5].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL, v9, 0xFFFFFFFFLL, 0) )
  {
    v4 = sub_19FBD80(a1, a2, a3, v9[0]);
    if ( v4 )
      sub_B8CC60(a2, (__int64)v4, v5, v6, v7, v8);
  }
}
