__int64 __fastcall sub_D47B10(_QWORD *a1)
{
  __int64 v1; // rbp
  __int64 v2; // rbp
  __int64 v3; // rsi
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // r12
  __int32 v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r13
  __m128i v13; // [rsp+0h] [rbp-98h] BYREF
  __m128i v14; // [rsp+10h] [rbp-88h] BYREF
  __m128i v15; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v16[4]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v17[9]; // [rsp+50h] [rbp-48h] BYREF

  v1 = a1[22];
  v13 = _mm_loadu_si128((const __m128i *)sub_E21760(v1, 16));
  sub_E21790(v1, 16);
  v15 = _mm_load_si128(&v13);
  v2 = sub_21F8CF0(v15.m128i_u32[2]);
  if ( ((unsigned __int64)(unsigned int)sub_21F9130(v2) + 63) >> 6 == 1 )
  {
    v9 = sub_21F8E40(v2);
    v8 = 0;
  }
  else
  {
    v3 = (unsigned int)sub_21F9130(v2);
    v6 = a1[71];
    v7 = 8 * ((unsigned __int64)(v3 + 63) >> 6);
    v8 = (v6 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    a1[81] += v7;
    if ( a1[72] >= (unsigned __int64)(v7 + v8) && v6 )
      a1[71] = v7 + v8;
    else
      v8 = sub_986170((__int64)(a1 + 71), v7, v7, 3, v4, v5);
    v9 = sub_21F8E40(v2);
  }
  v14.m128i_i64[0] = v8;
  v14.m128i_i32[2] = v9;
  sub_CFEAE0((__int64)v16, (__int64)&v15);
  v11 = sub_21F90D0(v16, &v15, v10);
  if ( v16[0] == v11 )
    sub_21FFE60(v17, v16);
  else
    sub_21F97A0(v17, v16);
  if ( v17[0] == v11 )
    sub_21FFF70(v17);
  else
    sub_21FA410(v17);
  sub_CFED10((__int64)&v14, v17);
  sub_9955A0(v17);
  sub_9955A0(v16);
  *(__m128i *)sub_E216C0(a1[22], 16) = _mm_load_si128(&v14);
  return 1;
}
