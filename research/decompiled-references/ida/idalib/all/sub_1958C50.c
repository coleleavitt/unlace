__int64 __fastcall sub_1958C50(__int64 a1, int *a2, double a3, __m128 a4)
{
  __int64 v4; // r13
  int v5; // eax
  int v6; // edx
  int v7; // ecx
  _DWORD v9[3]; // [rsp+Ch] [rbp-1B4h] BYREF
  __m128i v10; // [rsp+18h] [rbp-1A8h] BYREF
  __int64 v11; // [rsp+28h] [rbp-198h]
  __int128 v12; // [rsp+38h] [rbp-188h] BYREF
  void *v13[2]; // [rsp+48h] [rbp-178h]
  __int128 v14; // [rsp+58h] [rbp-168h]
  void *v15; // [rsp+68h] [rbp-158h] BYREF
  __int64 v16; // [rsp+70h] [rbp-150h]
  _BYTE v17[128]; // [rsp+78h] [rbp-148h] BYREF
  void *ptr; // [rsp+F8h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+100h] [rbp-C0h]
  _BYTE v20[184]; // [rsp+108h] [rbp-B8h] BYREF

  v4 = 0;
  v5 = a2[1];
  v6 = a2[3];
  v7 = *a2;
  v12 = 0;
  v9[1] = v6;
  v9[2] = v5;
  v9[0] = v7;
  v15 = v17;
  ptr = v20;
  v16 = 0x1000000000LL;
  *(_OWORD *)v13 = 0;
  v14 = 0;
  v10.m128i_i64[0] = 0;
  v10.m128i_i32[2] = 0;
  v11 = 0;
  v19 = 0x1000000000LL;
  if ( !(unsigned __int8)sub_1958720(
                           a1,
                           (__int64)a2,
                           (__int64 *)&v15,
                           (__int64)&v12,
                           &v10,
                           (__int64)&ptr,
                           (__m128)0LL,
                           a4) )
    v4 = sub_1B606F0(
           *(_QWORD *)(*(_QWORD *)a1 + 760LL),
           (int)a2 + 80,
           2,
           (int)a2 + 88,
           2,
           (unsigned int)&v12,
           (__int64)&v10,
           a2[24],
           (__int64)v15,
           (unsigned int)v16,
           (__int64)v9,
           (__int64)ptr,
           (unsigned int)v19);
  if ( ptr != v20 )
    free(ptr);
  if ( HIDWORD(v13[1]) )
    free(v13[0]);
  if ( v15 != v17 )
    free(v15);
  return v4;
}
