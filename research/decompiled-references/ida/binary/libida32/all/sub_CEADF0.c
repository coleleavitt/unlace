__int64 __fastcall sub_CEADF0(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 *v7; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  bool v11; // zf
  __int64 v12; // rax
  __int64 v13; // rax
  __m128i v14; // xmm0
  __int64 v15; // r14
  __int64 v16; // rax
  __m128i v18; // [rsp+0h] [rbp-108h] BYREF
  _BYTE v19[48]; // [rsp+10h] [rbp-F8h] BYREF
  _BYTE v20[24]; // [rsp+40h] [rbp-C8h] BYREF
  int v21; // [rsp+58h] [rbp-B0h]
  __int64 *v22; // [rsp+60h] [rbp-A8h]
  _BYTE v23[48]; // [rsp+70h] [rbp-98h] BYREF
  int v24[26]; // [rsp+A0h] [rbp-68h] BYREF

  sub_DFF430(v20, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 168) + 224LL) + 8LL * a2));
  v4 = sub_DFDA20(*(_QWORD *)(a1 + 176), 48);
  sub_DFF4A0(v19, v4);
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
  sub_E01600(v24, v19, v5);
  v6 = sub_B77A50(a3, 1);
  sub_A30FE0(v6, v24);
  if ( v21 == 1 )
  {
    v7 = v22;
  }
  else
  {
    if ( (unsigned int)(v21 - 2) <= 1 )
      BUG();
    v7 = (__int64 *)v22[4];
  }
  v8 = *v7;
  v9 = *(unsigned int *)(a1 + 452);
  v10 = v8 & 0xFFFFFFFFFFFFFFFCLL;
  v11 = (v8 & 2) == 0;
  v12 = 0;
  if ( !v11 )
    v12 = v10;
  v18.m128i_i64[0] = v12;
  v13 = *(unsigned int *)(a1 + 448);
  v18.m128i_i64[0] = a3;
  v14 = (__m128i)_mm_loadh_ps((const double *)v18.m128i_i64);
  if ( v13 + 1 > v9 )
  {
    v18 = v14;
    sub_22134E0(a1 + 440, a1 + 456, v13 + 1, 16);
    v13 = *(unsigned int *)(a1 + 448);
    v14 = _mm_load_si128(&v18);
  }
  *(__m128i *)(*(_QWORD *)(a1 + 440) + 16 * v13) = v14;
  v15 = *(_QWORD *)(a1 + 176);
  ++*(_DWORD *)(a1 + 448);
  sub_DFDA20(v15, 48);
  sub_DFF520(v23);
  sub_DFDA50(v15, 48);
  v16 = sub_CEACF0((__int64)v20);
  sub_DFF6C0(v16, v23);
  sub_DFF560(v23);
  sub_E00FC0(v20);
  if ( v24[0] > 1u )
    sub_A2BBA0(v24);
  sub_DFF560(v19);
  sub_DFF560(v20);
  return 1;
}

