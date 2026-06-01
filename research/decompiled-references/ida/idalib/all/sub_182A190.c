void __fastcall sub_182A190(__int64 a1, __int64 a2, const __m128i *a3, __m128i a4, double a5)
{
  const void *v6; // r14
  __int64 v7; // r13
  __m128i *v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // [rsp+Ch] [rbp-4Ch] BYREF
  const void *v14; // [rsp+10h] [rbp-48h] BYREF
  __int64 v15; // [rsp+18h] [rbp-40h]

  v14 = nullptr;
  v15 = 0;
  v13 = 0;
  if ( (unsigned __int8)sub_181F2D0(a1, (__int64)a3, &v14, &v13, a4, a5) )
  {
    if ( !(unsigned __int8)sub_18294F0(a1, v13, (__int64)v14, v15) )
    {
      v6 = v14;
      v7 = v15;
      v8 = (__m128i *)sub_1806F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 56, 3u);
      sub_B30200(v8, *(_QWORD *)(a1 + 248), a3, v6, v7);
      sub_B8CC60(a2, (__int64)v8, v9, v10, v11, v12);
    }
  }
}
