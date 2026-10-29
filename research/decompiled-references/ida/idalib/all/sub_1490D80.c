void __fastcall sub_1490D80(const __m128i *a1, __int64 a2, __int64 a3, __m128i a4, __m128 a5)
{
  __int64 v5; // [rsp+0h] [rbp-68h] BYREF
  void *v6; // [rsp+8h] [rbp-60h]
  __int64 v7; // [rsp+10h] [rbp-58h]
  _BYTE v8[16]; // [rsp+18h] [rbp-50h] BYREF
  __int8 *v9; // [rsp+28h] [rbp-40h] BYREF
  void *ptr; // [rsp+30h] [rbp-38h]
  __int64 v11; // [rsp+38h] [rbp-30h]
  _BYTE v12[40]; // [rsp+40h] [rbp-28h] BYREF

  v9 = &a1[31].m128i_i8[8];
  v5 = 0;
  v6 = v8;
  ptr = v12;
  v7 = 0x200000000LL;
  v11 = 0x200000000LL;
  sub_1490230(a1, (__int64)&v5, a3, a2, a4, a5);
  sub_147F500((__int64 *)(a2 + 736), *(char **)(a2 + 736), (char *)v6, (char *)v6 + 8 * (unsigned int)v7);
  LODWORD(v7) = 0;
  sub_15D8C50(a2 + 768, &v9);
  LODWORD(v11) = 0;
  if ( HIDWORD(v5) )
    *(_DWORD *)(a2 + 92) = HIDWORD(v5);
  sub_15DCED0(v9, &v9);
  if ( ptr != v12 )
    free(ptr);
  if ( v6 != v8 )
    free(v6);
}
