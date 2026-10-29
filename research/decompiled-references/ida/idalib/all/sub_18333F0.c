void __fastcall sub_18333F0(__int64 a1, __int64 a2, const __m128i *a3, __m128i a4, double a5)
{
  __int64 v6; // r9
  __m128i *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  void *v12; // [rsp+0h] [rbp-28h] BYREF
  __int64 v13; // [rsp+8h] [rbp-20h]

  v12 = nullptr;
  v13 = 0;
  if ( (unsigned __int8)sub_181F2D0(a1, (__int64)a3, &v12, nullptr, a4, a5) )
  {
    v7 = sub_1832BE0(a1, a2, a3, v12, v13, v6);
    if ( v7 )
      sub_B8CC60(a2, (__int64)v7, v8, v9, v10, v11);
  }
}
