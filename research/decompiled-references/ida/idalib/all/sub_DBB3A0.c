__int64 __fastcall sub_DBB3A0(_QWORD *a1)
{
  __int64 v1; // rbp
  __int64 v2; // r13
  __int64 v3; // r12
  __m128i *v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rbx
  __m128i v8; // [rsp+0h] [rbp-78h] BYREF
  _BYTE v9[48]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v10; // [rsp+40h] [rbp-38h]
  int v11; // [rsp+48h] [rbp-30h]

  v1 = *a1;
  v8 = _mm_loadu_si128((const __m128i *)sub_E21760(*a1, 16));
  sub_E21790(v1, 16);
  v2 = *a1;
  v3 = sub_E21760(*a1, 64);
  sub_E23260(v9);
  v10 = *(_QWORD *)(v3 + 48);
  v11 = *(_DWORD *)(v3 + 56);
  sub_E21790(v2, 64);
  v4 = (__m128i *)sub_E216C0(*a1, 16);
  v5 = *a1;
  *v4 = _mm_load_si128(&v8);
  v6 = sub_E216C0(v5, 64);
  sub_E231E0(v6, v9);
  *(_QWORD *)(v6 + 48) = v10;
  *(_DWORD *)(v6 + 56) = v11;
  sub_E232A0(v9);
  return 1;
}
