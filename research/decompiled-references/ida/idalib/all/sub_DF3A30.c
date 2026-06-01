__int64 __fastcall sub_DF3A30(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // r13
  const __m128i *v3; // r13
  const __m128i *v4; // r15
  unsigned int v5; // r14d
  unsigned int v6; // ebx
  void **v8; // rax
  __m128i v9; // xmm7
  void **v10; // rax
  __m128i v11; // xmm7
  char v12; // r13
  const __m128i *v13; // [rsp+10h] [rbp-148h]
  const __m128i *v14; // [rsp+18h] [rbp-140h]
  __int64 v15; // [rsp+20h] [rbp-138h]
  char v16; // [rsp+47h] [rbp-111h]
  __m128i v17; // [rsp+50h] [rbp-108h] BYREF
  __m128i v18; // [rsp+60h] [rbp-F8h] BYREF
  __m128i v19; // [rsp+70h] [rbp-E8h] BYREF
  __m128i v20; // [rsp+80h] [rbp-D8h] BYREF
  _BYTE v21[48]; // [rsp+90h] [rbp-C8h] BYREF
  _BYTE v22[48]; // [rsp+C0h] [rbp-98h] BYREF
  _OWORD v23[6]; // [rsp+F0h] [rbp-68h] BYREF

  v1 = *(_QWORD *)(a1 + 176);
  sub_E21760(v1, 48);
  sub_E23260(v22);
  sub_E21790(v1, 48);
  v2 = *(_QWORD *)(a1 + 176);
  sub_E21760(v2, 48);
  sub_E23260(v21);
  sub_E21790(v2, 48);
  v15 = sub_E21760(*(_QWORD *)(a1 + 176), 48);
  sub_CFE430((__int64)v23, (__int64)v21, 0);
  v3 = (const __m128i *)sub_D0E230((__int64)v23);
  sub_E232A0(v23);
  sub_CFE430((__int64)v23, (__int64)v21, 1);
  v14 = (const __m128i *)sub_D0E230((__int64)v23);
  sub_E232A0(v23);
  sub_CFE430((__int64)v23, (__int64)v22, 0);
  v4 = (const __m128i *)sub_D0E230((__int64)v23);
  sub_E232A0(v23);
  sub_CFE430((__int64)v23, (__int64)v22, 1);
  v13 = (const __m128i *)sub_D0E230((__int64)v23);
  sub_E232A0(v23);
  v5 = v3->m128i_u32[2];
  v17.m128i_i32[2] = 0;
  v17.m128i_i64[0] = 0;
  v23[0] = _mm_loadu_si128(v3);
  v20 = _mm_loadu_si128(v4);
  if ( (unsigned __int8)sub_D5AE70((__int64)v23, (__int64)&v20, v5, (void **)&v17)
    || (v18.m128i_i64[0] = 0,
        v18.m128i_i32[2] = 0,
        v23[0] = _mm_loadu_si128(v14),
        v20 = _mm_loadu_si128(v13),
        (unsigned __int8)sub_D5AE70((__int64)v23, (__int64)&v20, v5, (void **)&v18))
    || (sub_CFE430((__int64)v23, v15, 0),
        v8 = (void **)sub_D0E230((__int64)v23),
        v9 = _mm_load_si128(&v18),
        v20 = _mm_load_si128(&v17),
        v19 = v9,
        v16 = sub_D5B310((__int64)&v20, (__int64)&v19, v5, v8),
        sub_E232A0(v23),
        v16)
    || (sub_CFE430((__int64)v23, v15, 0),
        sub_E24D00(v23),
        sub_E232A0(v23),
        v23[0] = _mm_loadu_si128(v3),
        v20 = _mm_loadu_si128(v13),
        (unsigned __int8)sub_D5AE70((__int64)v23, (__int64)&v20, v5, (void **)&v17))
    || (v23[0] = _mm_loadu_si128(v14),
        v20 = _mm_loadu_si128(v4),
        (unsigned __int8)sub_D5AE70((__int64)v23, (__int64)&v20, v5, (void **)&v18))
    || (sub_CFE430((__int64)v23, v15, 1),
        v10 = (void **)sub_D0E230((__int64)v23),
        v11 = _mm_load_si128(&v18),
        v20 = _mm_load_si128(&v17),
        v19 = v11,
        v12 = sub_D531D0((__int64)&v20, (__int64)&v19, v5, v10),
        sub_E232A0(v23),
        v12) )
  {
    v6 = 0;
  }
  else
  {
    sub_CFE430((__int64)v23, v15, 1);
    sub_E24D00(v23);
    v6 = 1;
    sub_E232A0(v23);
    sub_E24D00(v15);
  }
  sub_E232A0(v21);
  sub_E232A0(v22);
  return v6;
}
