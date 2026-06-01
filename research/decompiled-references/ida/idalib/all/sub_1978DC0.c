__int64 __fastcall sub_1978DC0(__int64 *a1, const __m128i *a2, __m128 a3, __m128 a4)
{
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rdi
  __int64 v8; // rbp
  __int64 v10; // [rsp+0h] [rbp-38h] BYREF
  int v11; // [rsp+8h] [rbp-30h]
  __int64 v12; // [rsp+10h] [rbp-28h]

  v5 = *a1;
  v6 = a2->m128i_u32[3];
  v10 = 0;
  v7 = *(_QWORD *)(v5 + 760);
  v11 = 0;
  v12 = 0;
  sub_1B5B570(v7, 67, &v10, 0, v6);
  v8 = sub_1977630(a1, a2, a3, a4);
  sub_1B335B0(*(_QWORD *)(*a1 + 760), v8 & 0xFFFFFFFFFFFFFFFELL);
  return v8;
}
