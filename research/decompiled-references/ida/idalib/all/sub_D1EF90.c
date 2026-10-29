__int64 __fastcall sub_D1EF90(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r12
  unsigned int v4; // ebp
  __int64 v5; // rax
  __m128i v7; // [rsp+0h] [rbp-78h] BYREF
  __m128i v8; // [rsp+10h] [rbp-68h]
  _BYTE v9[24]; // [rsp+20h] [rbp-58h] BYREF
  int v10; // [rsp+38h] [rbp-40h]
  __int64 v11; // [rsp+40h] [rbp-38h]
  int v12; // [rsp+48h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 176);
  v7 = _mm_loadu_si128((const __m128i *)sub_E21760(v2, 16));
  sub_E21790(v2, 16);
  v3 = *(_QWORD *)(a1 + 176);
  sub_E21760(v3, 48);
  sub_E23260(v9);
  sub_E21790(v3, 48);
  v4 = sub_DCBF60(a1, a2, v9);
  if ( (_BYTE)v4 )
  {
    if ( !v10 && v11 && v12 )
    {
      sub_E24D00(v9);
      sub_E23CF0(v9);
    }
    v5 = sub_D0E1E0((__int64)v9);
    v8 = _mm_load_si128(&v7);
    *(_QWORD *)v5 = v8.m128i_i64[0];
    *(_DWORD *)(v5 + 8) = v8.m128i_i32[2];
  }
  sub_E232A0(v9);
  return v4;
}
