__int64 __fastcall sub_DCF490(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rdi
  unsigned int v5; // r12d
  __int64 v7; // rax
  __m128i v8; // [rsp+0h] [rbp-B8h] BYREF
  __m128i v9; // [rsp+10h] [rbp-A8h] BYREF
  _BYTE v10[48]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v11[48]; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int8 v12; // [rsp+80h] [rbp-38h]

  v3 = *(_QWORD *)(a1 + 176);
  v8 = _mm_loadu_si128((const __m128i *)sub_DFDA20(v3, 16));
  sub_DFDA50(v3, 16);
  v4 = *(_QWORD *)(a1 + 176);
  v9 = _mm_load_si128(&v8);
  sub_DFDA20(v4, 48);
  sub_DFF520(v10);
  sub_DFDA50(v4, 48);
  sub_D34D70((__int64)v11, a1, a2, v9.m128i_i64, (__int64)v10, 1);
  v5 = v12;
  if ( v12 )
  {
    v7 = sub_DFD980(*(_QWORD *)(a1 + 176), 48);
    sub_DFF4A0(v7, v11);
    if ( v12 )
      sub_DFF560(v11);
  }
  sub_DFF560(v10);
  return v5;
}

