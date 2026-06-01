void __fastcall sub_EE9640(
        char *a1,
        __int64 a2,
        __int64 a3,
        const __m128i *a4,
        int a5,
        __int64 a6,
        _BYTE *a7,
        __int64 a8)
{
  __int64 v9; // [rsp+0h] [rbp-78h] BYREF
  int v10; // [rsp+8h] [rbp-70h]
  __int64 v11; // [rsp+10h] [rbp-68h]
  __m128i v12; // [rsp+18h] [rbp-60h]
  void *v13; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v14[8]; // [rsp+38h] [rbp-40h] BYREF

  v11 = a3;
  v9 = a2;
  v10 = a5;
  v12 = _mm_loadu_si128(a4);
  v13 = v14;
  sub_EE0040(&v13, a7, (__int64)&a7[a8]);
  v14[2] = a6;
  sub_EE95C0(&v9, a1, *(double *)v12.m128i_i64);
  if ( v13 != v14 )
    operator delete(v13);
}

