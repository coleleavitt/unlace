bool __fastcall sub_1C00760(__int64 a1, __m128 *a2, __int64 a3, unsigned __int64 a4, __m128 a5, __m128 a6)
{
  unsigned __int64 v6; // r8
  bool result; // al
  bool v8; // [rsp+1h] [rbp-139h]
  char v9; // [rsp+11h] [rbp-129h] BYREF
  void *ptr; // [rsp+12h] [rbp-128h] BYREF
  int v11; // [rsp+1Ah] [rbp-120h]
  __int64 v12; // [rsp+22h] [rbp-118h] BYREF

  v6 = a2[14].m128_u64[1];
  result = 0;
  if ( (*(_BYTE *)(v6 + 60) & 0x10) != 0 && (*(_BYTE *)(v6 + 96) & 1) != 0 )
  {
    sub_1C004B0(
      (__int64)&ptr,
      a1,
      a2,
      0,
      a3,
      a4,
      a5,
      a6,
      (unsigned __int8 (__fastcall *)(__int64, __int64))sub_1BC7650,
      (__int64)&v9);
    result = v11 != 0;
    if ( ptr != &v12 )
    {
      v8 = v11 != 0;
      free(ptr);
      return v8;
    }
  }
  return result;
}
