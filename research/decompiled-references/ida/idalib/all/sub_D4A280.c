__int64 __fastcall sub_D4A280(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  unsigned int v5; // ebp
  __int64 v6; // rax
  void *v7; // r12
  __int64 v8; // rdx
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v12; // rax
  __m128i v13; // [rsp+0h] [rbp-88h] BYREF
  void *v14; // [rsp+10h] [rbp-78h]
  __int64 v15; // [rsp+18h] [rbp-70h]
  __m128i v16; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v17[24]; // [rsp+30h] [rbp-58h] BYREF
  int v18; // [rsp+48h] [rbp-40h]
  __int64 v19; // [rsp+50h] [rbp-38h]
  int v20; // [rsp+58h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 176);
  v13 = _mm_loadu_si128((const __m128i *)sub_E21760(v3, 16));
  sub_E21790(v3, 16);
  v4 = *(_QWORD *)(a1 + 176);
  v16 = _mm_load_si128(&v13);
  sub_E21760(v4, 48);
  sub_E23260(v17);
  sub_E21790(v4, 48);
  v5 = sub_DCBF60(a1, a2, v17);
  if ( (_BYTE)v5 )
  {
    if ( !v18 && v19 && v20 )
    {
      sub_E24D00(v17);
      sub_E23CF0(v17);
    }
    v6 = sub_CFE5B0((__int64)v17);
    if ( v6 )
    {
      sub_B78170(v6);
      v7 = sub_D4A0D0((__int64)&v16);
      v9 = v8;
      v10 = sub_D0E1E0((__int64)v17);
      v15 = v9;
      v14 = v7;
      *(_QWORD *)v10 = v7;
      *(_DWORD *)(v10 + 8) = v15;
    }
    else
    {
      v12 = sub_D0E1E0((__int64)v17);
      *(_QWORD *)v12 = v16.m128i_i64[0];
      *(_DWORD *)(v12 + 8) = v16.m128i_i32[2];
    }
  }
  sub_E232A0(v17);
  return v5;
}
