__int64 __fastcall sub_177F6F0(__int64 *a1, const __m128i *a2, double a3)
{
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 v9; // [rsp+0h] [rbp-38h] BYREF
  int v10; // [rsp+8h] [rbp-30h]
  __int64 v11; // [rsp+10h] [rbp-28h]

  v4 = *a1;
  v5 = a2->m128i_u32[3];
  v9 = 0;
  v6 = *(_QWORD *)(v4 + 760);
  v10 = 0;
  v11 = 0;
  sub_1B5B570(v6, 113, &v9, 0, v5);
  v7 = sub_177E2E0(a1, a2, a3);
  sub_1B335B0(*(_QWORD *)(*a1 + 760), v7 & 0xFFFFFFFFFFFFFFFELL);
  return v7;
}
