__int64 __fastcall sub_14BDA20(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        unsigned int a4,
        unsigned __int8 a5,
        _BYTE *a6,
        __m128i a7)
{
  __int64 result; // rax
  __int64 v8; // [rsp+10h] [rbp-80h]
  char v9; // [rsp+27h] [rbp-69h] BYREF
  _BYTE v10[104]; // [rsp+28h] [rbp-68h] BYREF

  result = sub_14BB5C0(a1, a2, a3, &v9, a4, a5, a7, a6);
  if ( v9 )
  {
    v8 = result;
    sub_1564840(v10, a1, a1 + 16, 1614);
    sub_AEA040((__int64)v10);
    return v8;
  }
  return result;
}
