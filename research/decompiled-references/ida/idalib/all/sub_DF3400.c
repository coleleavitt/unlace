__int64 __fastcall sub_DF3400(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // r13
  const __m128i *v3; // r13
  const __m128i *v4; // r14
  __int32 v5; // ecx
  unsigned int v6; // ebx
  void **v8; // rax
  __m128i v9; // xmm7
  void **v10; // rax
  __m128i v11; // xmm7
  char v12; // r13
  const __m128i *v13; // [rsp+0h] [rbp-148h]
  const __m128i *v14; // [rsp+8h] [rbp-140h]
  __int64 v15; // [rsp+10h] [rbp-138h]
  unsigned __int32 v16; // [rsp+1Ch] [rbp-12Ch]
  char v17; // [rsp+1Ch] [rbp-12Ch]
  __m128i v18; // [rsp+40h] [rbp-108h] BYREF
  __m128i v19; // [rsp+50h] [rbp-F8h] BYREF
  __m128i v20; // [rsp+60h] [rbp-E8h] BYREF
  __m128i v21; // [rsp+70h] [rbp-D8h] BYREF
  _BYTE v22[48]; // [rsp+80h] [rbp-C8h] BYREF
  _BYTE v23[48]; // [rsp+B0h] [rbp-98h] BYREF
  _OWORD v24[6]; // [rsp+E0h] [rbp-68h] BYREF

  v1 = *(_QWORD *)(a1 + 176);
  sub_E21760(v1, 48);
  sub_E23260(v23);
  sub_E21790(v1, 48);
  v2 = *(_QWORD *)(a1 + 176);
  sub_E21760(v2, 48);
  sub_E23260(v22);
  sub_E21790(v2, 48);
  v15 = sub_E21760(*(_QWORD *)(a1 + 176), 48);
  sub_CFE430((__int64)v24, (__int64)v22, 0);
  v3 = (const __m128i *)sub_D0E1E0((__int64)v24);
  sub_E232A0(v24);
  sub_CFE430((__int64)v24, (__int64)v22, 1);
  v14 = (const __m128i *)sub_D0E1E0((__int64)v24);
  sub_E232A0(v24);
  sub_CFE430((__int64)v24, (__int64)v23, 0);
  v4 = (const __m128i *)sub_D0E1E0((__int64)v24);
  sub_E232A0(v24);
  sub_CFE430((__int64)v24, (__int64)v23, 1);
  v13 = (const __m128i *)sub_D0E1E0((__int64)v24);
  sub_E232A0(v24);
  v5 = v3->m128i_i32[2];
  v18.m128i_i64[0] = 0;
  v18.m128i_i32[2] = 0;
  v16 = v5;
  v24[0] = _mm_loadu_si128(v3);
  v21 = _mm_loadu_si128(v4);
  if ( (unsigned __int8)sub_DBED30((__int64)v24, (__int64)&v21, (void **)&v18)
    || (v19.m128i_i64[0] = 0,
        v19.m128i_i32[2] = 0,
        v24[0] = _mm_loadu_si128(v14),
        v21 = _mm_loadu_si128(v13),
        (unsigned __int8)sub_DBED30((__int64)v24, (__int64)&v21, (void **)&v19))
    || (sub_CFE430((__int64)v24, v15, 0),
        v8 = (void **)sub_D0E1E0((__int64)v24),
        v9 = _mm_load_si128(&v19),
        v21 = _mm_load_si128(&v18),
        v20 = v9,
        v17 = sub_D59A80(v21.m128i_i64, v20.m128i_i64, v16, v8),
        sub_E232A0(v24),
        v17)
    || (sub_CFE430((__int64)v24, v15, 0),
        sub_E24D00(v24),
        sub_E232A0(v24),
        v24[0] = _mm_loadu_si128(v3),
        v21 = _mm_loadu_si128(v13),
        (unsigned __int8)sub_DBED30((__int64)v24, (__int64)&v21, (void **)&v18))
    || (v24[0] = _mm_loadu_si128(v14),
        v21 = _mm_loadu_si128(v4),
        (unsigned __int8)sub_DBED30((__int64)v24, (__int64)&v21, (void **)&v19))
    || (sub_CFE430((__int64)v24, v15, 1),
        v10 = (void **)sub_D0E1E0((__int64)v24),
        v11 = _mm_load_si128(&v19),
        v21 = _mm_load_si128(&v18),
        v20 = v11,
        v12 = sub_DBEEA0((__int64)&v21, (__int64)&v20, v10),
        sub_E232A0(v24),
        v12) )
  {
    v6 = 0;
  }
  else
  {
    sub_CFE430((__int64)v24, v15, 1);
    sub_E24D00(v24);
    v6 = 1;
    sub_E232A0(v24);
    sub_E24D00(v15);
  }
  sub_E232A0(v22);
  sub_E232A0(v23);
  return v6;
}
