void __fastcall sub_E90C80(__int64 a1, _QWORD *a2, __int64 a3, __int32 a4, __int32 a5)
{
  __m128i *v7; // rax
  __m128i vars0; // [rsp+0h] [rbp+0h] BYREF
  __int64 vars10; // [rsp+10h] [rbp+10h]

  vars10 = a3;
  vars0.m128i_i64[0] = 0;
  vars0.m128i_i64[1] = 2;
  v7 = sub_E90B60(a2, &vars0);
  vars0.m128i_i32[0] = a4;
  *(_QWORD *)a1 = v7;
  sub_E8F520(&vars0, &vars0.m128i_i8[4], (void **)(a1 + 8), (_DWORD *)(a1 + 16), (unsigned int *)(a1 + 20));
  vars0.m128i_i32[0] = a5;
  sub_E8F520(&vars0, &vars0.m128i_i8[4], (void **)(a1 + 8), (_DWORD *)(a1 + 16), (unsigned int *)(a1 + 20));
}
