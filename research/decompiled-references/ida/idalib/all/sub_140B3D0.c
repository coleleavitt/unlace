__int64 __fastcall sub_140B3D0(
        __int64 a1,
        char *a2,
        char *a3,
        __int64 a4,
        unsigned __int8 (__fastcall *a5)(const __m128i *, __int64))
{
  __int64 v8; // rax
  __m128i *v9; // rbx
  __int64 v11; // [rsp+8h] [rbp-40h]

  v8 = (__int64)(0x8E38E38E38E38E39LL * ((__int64)&a2[-a1] >> 3) + 1) / 2;
  v9 = (__m128i *)(a1 + 72 * v8);
  v11 = 72 * v8;
  if ( v8 <= a4 )
  {
    sub_140A7B0(a1, (char *)(a1 + 72 * v8), a3, a5);
    sub_140A7B0((__int64)v9, a2, a3, a5);
  }
  else
  {
    sub_140B3D0(a1, a1 + 72 * v8, a3);
    sub_140B3D0(v9, a2, a3);
  }
  return sub_140AC00(
           a1,
           v9,
           (__int64)a2,
           0x8E38E38E38E38E39LL * (v11 >> 3),
           0x8E38E38E38E38E39LL * ((a2 - (char *)v9) >> 3),
           (__int64)a3,
           a4,
           (unsigned __int8 (__fastcall *)(__m128i *, char *, unsigned __int64))a5);
}
