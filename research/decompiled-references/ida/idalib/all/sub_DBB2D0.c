__int64 __fastcall sub_DBB2D0(_QWORD *a1)
{
  __int64 v1; // r13
  __int64 v2; // r12
  __int64 v3; // r12
  __int64 v4; // r12
  __int64 v5; // rdi
  __m128i v7; // [rsp+0h] [rbp-78h] BYREF
  _BYTE v8[48]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v9; // [rsp+40h] [rbp-38h]
  int v10; // [rsp+48h] [rbp-30h]

  v1 = *a1;
  v2 = sub_E21760(*a1, 64);
  sub_E23260(v8);
  v9 = *(_QWORD *)(v2 + 48);
  v10 = *(_DWORD *)(v2 + 56);
  sub_E21790(v1, 64);
  v3 = *a1;
  v7 = _mm_loadu_si128((const __m128i *)sub_E21760(*a1, 16));
  sub_E21790(v3, 16);
  v4 = sub_E216C0(*a1, 64);
  sub_E231E0(v4, v8);
  v5 = *a1;
  *(_QWORD *)(v4 + 48) = v9;
  *(_DWORD *)(v4 + 56) = v10;
  *(__m128i *)sub_E216C0(v5, 16) = _mm_load_si128(&v7);
  sub_E232A0(v8);
  return 1;
}
