__int64 __fastcall sub_778F20(unsigned __int64 a1, __int64 a2, const __m128i *a3)
{
  unsigned __int64 v3; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-60h] BYREF
  __m128i v8; // [rsp+10h] [rbp-58h] BYREF
  _BYTE v9[32]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v10; // [rsp+40h] [rbp-28h]

  v3 = *(_QWORD *)(a1 + 40);
  v6 = v3;
  if ( (v3 & 7) != 0 || v3 > 7 )
    return sub_790FC0(&v6);
  v8 = _mm_loadu_si128(a3);
  v8.m128i_i8[1] |= 8u;
  v5 = sub_798D40(a1);
  v7 = sub_6E8EE0(v5, a1);
  v10 = 257;
  return sub_B2AEC0(&v7, a2, &v8, v9, 0);
}

