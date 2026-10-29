void __fastcall sub_E90D10(__m128i **a1, _QWORD *a2, __int64 a3, __int64 a4, __int32 a5)
{
  __m128i *v7; // rax
  __int64 v8; // rdx
  __m128i vars0; // [rsp+0h] [rbp+0h] BYREF
  __int64 vars10; // [rsp+10h] [rbp+10h]

  v7 = *a1;
  v8 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  vars0.m128i_i64[0] = 0;
  vars10 = v8;
  vars0.m128i_i64[1] = (unsigned __int64)v7 & 0xFFFFFFFFFFFFFFF9LL | 4;
  *a1 = sub_E90B60(a2, &vars0);
  vars0.m128i_i64[0] = a4;
  sub_E8F520(&vars0, &vars0.m128i_i8[8], (void **)a1 + 1, (_DWORD *)a1 + 4, (unsigned int *)a1 + 5);
  vars0.m128i_i32[0] = a5;
  sub_E8F520(&vars0, &vars0.m128i_i8[4], (void **)a1 + 1, (_DWORD *)a1 + 4, (unsigned int *)a1 + 5);
}
