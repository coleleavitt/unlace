void __fastcall sub_E90E50(__m128i **a1, _QWORD *a2, __int64 a3, __int32 a4, __int32 a5)
{
  __m128i *v7; // rax
  __m128i *v8; // rax
  __m128i vars0; // [rsp+0h] [rbp+0h] BYREF
  __int64 vars10; // [rsp+10h] [rbp+10h]

  v7 = *a1;
  vars10 = a3;
  vars0.m128i_i64[0] = 0;
  vars0.m128i_i64[1] = (unsigned __int64)v7 & 0xFFFFFFFFFFFFFFF9LL | 2;
  v8 = sub_E90B60(a2, &vars0);
  vars0.m128i_i32[0] = a4;
  *a1 = v8;
  sub_E8F520(&vars0, &vars0.m128i_i8[4], (void **)a1 + 1, (_DWORD *)a1 + 4, (unsigned int *)a1 + 5);
  vars0.m128i_i32[0] = a5;
  sub_E8F520(&vars0, &vars0.m128i_i8[4], (void **)a1 + 1, (_DWORD *)a1 + 4, (unsigned int *)a1 + 5);
}
