void __fastcall sub_1DB85B0(_QWORD **a1, __int64 a2)
{
  char *v2; // rbp
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 *v6; // r9
  __m128i v7; // rax
  __m128i v8; // [rsp+0h] [rbp-38h] BYREF

  v2 = *(char **)sub_C0F1A0(*a1);
  v7.m128i_i64[0] = sub_16043A0(*(_QWORD **)(*a1[1] + 248LL), *(_QWORD **)(*a1[1] + 240LL), v3, v4, v5, v6);
  v8 = v7;
  sub_F07C00(v2, a2, 0, &v8, 0, 0, "\n", 1);
}
