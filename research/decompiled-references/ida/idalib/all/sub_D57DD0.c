__int64 __fastcall sub_D57DD0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  unsigned int v5; // r13d
  __int64 v7; // rax
  __m128i v8; // [rsp+0h] [rbp-B8h] BYREF
  __m128i v9; // [rsp+10h] [rbp-A8h] BYREF
  _BYTE v10[24]; // [rsp+20h] [rbp-98h] BYREF
  int v11; // [rsp+38h] [rbp-80h]
  _BYTE v12[48]; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int8 v13; // [rsp+80h] [rbp-38h]

  v3 = *(_QWORD *)(a1 + 176);
  v8 = _mm_loadu_si128((const __m128i *)sub_E21760(v3, 16));
  sub_E21790(v3, 16);
  v4 = *(_QWORD *)(a1 + 176);
  v9 = _mm_load_si128(&v8);
  sub_E21760(v4, 48);
  sub_E23260(v10);
  sub_E21790(v4, 48);
  if ( !v11 )
  {
    sub_CFE160((__int64)v12, (__int64)v10);
    sub_E23400(v10, v12);
    sub_E232A0(v12);
  }
  sub_D579C0((__int64)v12, a1, a2, v9.m128i_i64, (__int64)v10, 1);
  v5 = v13;
  if ( v13 )
  {
    v7 = sub_E216C0(*(_QWORD *)(a1 + 176), 48);
    sub_E231E0(v7, v12);
    if ( v13 )
      sub_E232A0(v12);
  }
  sub_E232A0(v10);
  return v5;
}
