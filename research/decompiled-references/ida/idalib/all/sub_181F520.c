void __fastcall sub_181F520(__int64 a1, __int64 a2, const __m128i *a3, __m128i a4, double a5)
{
  bool v6; // zf
  __int64 v7; // r12
  __m128i *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  const void *v13; // [rsp+0h] [rbp-28h] BYREF
  __int64 v14; // [rsp+8h] [rbp-20h]

  v6 = a3[3].m128i_i16[4] == 0;
  v13 = nullptr;
  v14 = 0;
  if ( !v6 )
    sub_181F2D0(a1, (__int64)a3, &v13, nullptr, a4, a5);
  v7 = sub_B8BF90(a2);
  v8 = sub_B33CF0(*(_QWORD *)(a1 + 248), v13, v14, a3);
  sub_B8CC60(v7, (__int64)v8, v9, v10, v11, v12);
}
