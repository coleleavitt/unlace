void __fastcall sub_1A09010(__int64 *a1, _BYTE *a2, const __m128i *a3)
{
  unsigned int v4; // eax
  __int64 v5; // r8
  __int64 v6; // r9
  __m128i *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9

  v4 = sub_15D8710((__int64)a3);
  v7 = sub_1A08B90(a1, a2, a3, v4, v5, v6);
  if ( v7 )
    sub_B8CC60((__int64)a2, (__int64)v7, v8, v9, v10, v11);
}
