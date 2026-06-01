unsigned __int64 __fastcall sub_1D62EB0(_QWORD *a1, __int64 a2, const __m128i *a3, double a4, __m128 a5)
{
  __m128 si128; // xmm0
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 result; // rax
  unsigned __int64 v10; // [rsp+8h] [rbp-70h]
  void *v11; // [rsp+10h] [rbp-68h] BYREF
  __m128 v12; // [rsp+18h] [rbp-60h]
  _DWORD v13[9]; // [rsp+28h] [rbp-50h] BYREF
  char v14; // [rsp+4Ch] [rbp-2Ch]

  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23AA8B0);
  v13[8] = 0;
  v12 = si128;
  v11 = v13;
  v14 = 0;
  if ( (unsigned int)sub_F6C560(a2) > si128.m128_u64[0] )
    sub_1EA60C0(&v11);
  result = sub_1D4F8E0(a1, (__int64)&v11, a2, a3, v7, v8, si128, a5);
  if ( v11 != v13 )
  {
    if ( v11 )
    {
      v10 = result;
      operator delete[](v11);
      return v10;
    }
  }
  return result;
}
