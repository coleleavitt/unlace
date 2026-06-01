void __fastcall sub_180CF90(unsigned int **a1, __m128i *a2)
{
  unsigned __int8 v2; // r12
  __m128i v3; // rax
  __int64 v4; // rax
  __m128i v5; // [rsp+0h] [rbp-E8h] BYREF
  void *v6[2]; // [rsp+10h] [rbp-D8h] BYREF
  _BYTE v7[16]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v8[184]; // [rsp+30h] [rbp-B8h] BYREF

  v2 = sub_22B82D0(**a1, a2);
  v3.m128i_i64[0] = sub_22B8130(**a1, a2, v2);
  v5 = v3;
  if ( !v2 )
  {
    sub_168B9F0((__int64)v8, (__int64 *)a1[1] + 1, **(_DWORD **)a1[2], 0x19D1u, 0);
    sub_2257830(v6, a2);
    v4 = sub_1682AF0((__int64)v8, (__int64)v6);
    sub_1682BA0(v4, (__int64)a1[3]);
    if ( v6[0] != v7 )
      operator delete(v6[0]);
    sub_15F7200(v8);
    sub_168B9F0((__int64)v8, (__int64 *)a1[1] + 1, **(_DWORD **)a1[2], 0x16ABu, 0);
    sub_2257830(v6, &v5);
    sub_1682AF0((__int64)v8, (__int64)v6);
    if ( v6[0] != v7 )
      operator delete(v6[0]);
    sub_15F7200(v8);
  }
  *a2 = _mm_load_si128(&v5);
}
