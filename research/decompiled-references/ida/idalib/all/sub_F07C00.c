void __fastcall sub_F07C00(
        char *a1,
        __int64 a2,
        __int64 a3,
        const __m128i *a4,
        int a5,
        __int64 a6,
        _BYTE *a7,
        __int64 a8)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // [rsp+0h] [rbp-78h] BYREF
  int v14; // [rsp+8h] [rbp-70h]
  __int64 v15; // [rsp+10h] [rbp-68h]
  __m128i v16; // [rsp+18h] [rbp-60h]
  void *v17; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v18[8]; // [rsp+38h] [rbp-40h] BYREF

  v15 = a3;
  v13 = a2;
  v14 = a5;
  v16 = _mm_loadu_si128(a4);
  v17 = v18;
  sub_F03D80(&v17, a7, (__int64)&a7[a8]);
  v18[2] = a6;
  sub_F05430(&v13, a1, v9, v10, v11, v12, *(double *)v16.m128i_i64);
  if ( v17 != v18 )
    operator delete(v17);
}
