__int64 __fastcall sub_155BF10(__int64 a1, int a2, __int32 *a3, unsigned int a4, __m128i a5, __m128 a6)
{
  __int64 v6; // r12
  __int64 v8; // [rsp+0h] [rbp-68h] BYREF
  void *v9; // [rsp+8h] [rbp-60h]
  __int64 v10; // [rsp+10h] [rbp-58h]
  _BYTE v11[16]; // [rsp+18h] [rbp-50h] BYREF
  __int64 v12; // [rsp+28h] [rbp-40h] BYREF
  void *ptr; // [rsp+30h] [rbp-38h]
  __int64 v14; // [rsp+38h] [rbp-30h]
  _BYTE v15[40]; // [rsp+40h] [rbp-28h] BYREF

  v12 = a1 + 504;
  v8 = 0;
  v9 = v11;
  v10 = 0x200000000LL;
  ptr = v15;
  v14 = 0x200000000LL;
  v6 = sub_155B830(a1, a2, a3, &v8, a4, a5, a6);
  sub_15DCED0(v12, &v12);
  if ( ptr != v15 )
    free(ptr);
  if ( v9 != v11 )
    free(v9);
  return v6;
}
