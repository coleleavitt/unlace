__int64 __fastcall sub_177F290(__int64 *a1, const __m128i *a2, double a3)
{
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rbp
  __int64 v11; // [rsp+0h] [rbp-38h] BYREF
  int v12; // [rsp+8h] [rbp-30h]
  __int64 v13; // [rsp+10h] [rbp-28h]

  v5 = *a1;
  v6 = a2->m128i_u32[3];
  v7 = a2->m128i_u32[2];
  v11 = 0;
  v8 = *(_QWORD *)(v5 + 760);
  v12 = 0;
  v13 = 0;
  sub_1B5B570(v8, v7, &v11, 0, v6);
  v9 = sub_177E2E0(a1, a2, a3);
  sub_1B335B0(*(_QWORD *)(*a1 + 760), v9 & 0xFFFFFFFFFFFFFFFELL);
  return v9;
}
