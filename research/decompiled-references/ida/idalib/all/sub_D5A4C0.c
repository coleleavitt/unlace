__int64 __fastcall sub_D5A4C0(__int64 a1)
{
  const __m128i *v1; // r13
  const __m128i *v2; // r15
  unsigned __int32 v3; // r14d
  unsigned int v4; // ebx
  void **v6; // rax
  __m128i v7; // xmm7
  void **v8; // rax
  __m128i v9; // xmm7
  char v10; // r13
  const __m128i *v11; // [rsp+10h] [rbp-148h]
  const __m128i *v12; // [rsp+18h] [rbp-140h]
  __int64 v13; // [rsp+20h] [rbp-138h]
  char v14; // [rsp+47h] [rbp-111h]
  __m128i v15; // [rsp+50h] [rbp-108h] BYREF
  __m128i v16; // [rsp+60h] [rbp-F8h] BYREF
  __m128i v17; // [rsp+70h] [rbp-E8h] BYREF
  __m128i v18; // [rsp+80h] [rbp-D8h] BYREF
  _BYTE v19[48]; // [rsp+90h] [rbp-C8h] BYREF
  _BYTE v20[48]; // [rsp+C0h] [rbp-98h] BYREF
  _OWORD v21[6]; // [rsp+F0h] [rbp-68h] BYREF

  sub_D09010((__int64)v19, *(_QWORD *)(a1 + 176));
  sub_D09010((__int64)v20, *(_QWORD *)(a1 + 176));
  v13 = sub_E21760(*(_QWORD *)(a1 + 176), 48);
  sub_CFE430((__int64)v21, (__int64)v20, 0);
  v1 = (const __m128i *)sub_D0E1E0((__int64)v21);
  sub_E232A0(v21);
  sub_CFE430((__int64)v21, (__int64)v20, 1);
  v12 = (const __m128i *)sub_D0E1E0((__int64)v21);
  sub_E232A0(v21);
  sub_CFE430((__int64)v21, (__int64)v19, 0);
  v2 = (const __m128i *)sub_D0E1E0((__int64)v21);
  sub_E232A0(v21);
  sub_CFE430((__int64)v21, (__int64)v19, 1);
  v11 = (const __m128i *)sub_D0E1E0((__int64)v21);
  sub_E232A0(v21);
  v3 = v1->m128i_u32[2];
  v15.m128i_i32[2] = 0;
  v15.m128i_i64[0] = 0;
  v18 = _mm_loadu_si128(v1);
  v21[0] = _mm_loadu_si128(v2);
  if ( (unsigned __int8)sub_D596D0(v18.m128i_i64, (__int64 *)v21, v3, (void **)&v15)
    || (v16.m128i_i64[0] = 0,
        v16.m128i_i32[2] = 0,
        v18 = _mm_loadu_si128(v12),
        v21[0] = _mm_loadu_si128(v11),
        (unsigned __int8)sub_D596D0(v18.m128i_i64, (__int64 *)v21, v3, (void **)&v16))
    || (sub_CFE430((__int64)v21, v13, 0),
        v6 = (void **)sub_D0E1E0((__int64)v21),
        v7 = _mm_load_si128(&v16),
        v17 = _mm_load_si128(&v15),
        v18 = v7,
        v14 = sub_D59A80(v17.m128i_i64, v18.m128i_i64, v3, v6),
        sub_E232A0(v21),
        v14)
    || (sub_CFE430((__int64)v21, v13, 0),
        sub_E24D00(v21),
        sub_E232A0(v21),
        v18 = _mm_loadu_si128(v1),
        v21[0] = _mm_loadu_si128(v11),
        (unsigned __int8)sub_D596D0(v18.m128i_i64, (__int64 *)v21, v3, (void **)&v15))
    || (v18 = _mm_loadu_si128(v12),
        v21[0] = _mm_loadu_si128(v2),
        (unsigned __int8)sub_D596D0(v18.m128i_i64, (__int64 *)v21, v3, (void **)&v16))
    || (sub_CFE430((__int64)v21, v13, 1),
        v8 = (void **)sub_D0E1E0((__int64)v21),
        v9 = _mm_load_si128(&v16),
        v17 = _mm_load_si128(&v15),
        v18 = v9,
        v10 = sub_D52700(v17.m128i_i64, v18.m128i_i64, v3, v8),
        sub_E232A0(v21),
        v10) )
  {
    v4 = 0;
  }
  else
  {
    sub_CFE430((__int64)v21, v13, 1);
    sub_E24D00(v21);
    v4 = 1;
    sub_E232A0(v21);
    sub_E24D00(v13);
  }
  sub_E232A0(v20);
  sub_E232A0(v19);
  return v4;
}
