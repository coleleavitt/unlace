__int64 __fastcall sub_DBB610(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // r12
  __int64 v3; // rax
  __m128i v5; // [rsp+0h] [rbp-58h] BYREF
  _BYTE v6[72]; // [rsp+10h] [rbp-48h] BYREF

  v1 = *(_QWORD *)(a1 + 176);
  sub_E21760(v1, 48);
  sub_E23260(v6);
  sub_E21790(v1, 48);
  v2 = *(_QWORD *)(a1 + 176);
  v5 = _mm_loadu_si128((const __m128i *)sub_E21760(v2, 16));
  sub_E21790(v2, 16);
  v3 = sub_E216C0(*(_QWORD *)(a1 + 176), 48);
  sub_E231E0(v3, v6);
  *(__m128i *)sub_E216C0(*(_QWORD *)(a1 + 176), 16) = _mm_load_si128(&v5);
  sub_E232A0(v6);
  return 1;
}
