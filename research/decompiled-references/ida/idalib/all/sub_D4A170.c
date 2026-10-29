__int64 __fastcall sub_D4A170(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rbx
  unsigned int v6; // ebp
  __int64 v7; // rax
  void *v8; // r12
  __int64 v9; // rdx
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v13; // rax
  __m128i v14; // [rsp+0h] [rbp-58h] BYREF
  void *v15; // [rsp+10h] [rbp-48h]
  __int64 v16; // [rsp+18h] [rbp-40h]
  __m128i v17; // [rsp+20h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a1 + 176);
  v14 = _mm_loadu_si128((const __m128i *)sub_E21760(v3, 16));
  sub_E21790(v3, 16);
  v4 = *(_QWORD *)(a1 + 176);
  v17 = _mm_load_si128(&v14);
  v5 = sub_E21760(v4, 48);
  v6 = sub_DCBF60(a1, a2, v5);
  if ( !(_BYTE)v6 )
    return v6;
  if ( !*(_DWORD *)(v5 + 24) && *(_QWORD *)(v5 + 32) )
  {
    if ( *(_DWORD *)(v5 + 40) )
    {
      sub_E24D00(v5);
      sub_E23CF0(v5);
    }
  }
  v7 = sub_CFE5B0(v5);
  if ( v7 )
  {
    sub_B78170(v7);
    v8 = sub_D4A0D0((__int64)&v17);
    v10 = v9;
    v11 = sub_D0E1E0(v5);
    v16 = v10;
    v15 = v8;
    *(_QWORD *)v11 = v8;
    *(_DWORD *)(v11 + 8) = v16;
    return v6;
  }
  v13 = sub_D0E1E0(v5);
  *(_QWORD *)v13 = v17.m128i_i64[0];
  *(_DWORD *)(v13 + 8) = v17.m128i_i32[2];
  return v6;
}
