__int64 __fastcall sub_DC2D80(_QWORD *a1)
{
  __int64 v1; // rbp
  __int64 v2; // r12
  __int64 v3; // rdx
  __int64 v4; // rax
  _QWORD *v5; // rdx
  bool v6; // bp
  __m128i v8; // [rsp+0h] [rbp-58h] BYREF
  __m128i v9; // [rsp+10h] [rbp-48h] BYREF
  _QWORD v10[7]; // [rsp+20h] [rbp-38h] BYREF

  v1 = *a1;
  v8 = _mm_loadu_si128((const __m128i *)sub_E21760(*a1, 16));
  sub_E21790(v1, 16);
  v2 = *a1;
  v9 = _mm_load_si128(&v8);
  sub_CFEAE0((__int64)v10, (__int64)&v9);
  v4 = sub_21F90D0(v10, &v9, v3);
  v5 = (_QWORD *)v10[1];
  if ( v10[0] != v4 )
    v5 = v10;
  v6 = (*((_BYTE *)v5 + 20) & 7) != 3;
  sub_9955A0(v10);
  *(_BYTE *)sub_E216C0(v2, 8) = v6;
  return 1;
}
