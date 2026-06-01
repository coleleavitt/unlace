__int64 __fastcall swift_demangle_getDemangledName(char *a1, char *dest, size_t n, __int64 a4, __int64 a5, __int64 a6)
{
  void (__fastcall *v7)(__int128 *, __int128 *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64); // rax
  __m128i v8; // xmm1
  __int64 v9; // r12
  __int64 v11; // [rsp+0h] [rbp-C8h]
  __m128i v12; // [rsp+18h] [rbp-B0h] BYREF
  __int128 v13; // [rsp+28h] [rbp-A0h] BYREF
  void (__fastcall *v14)(__int128 *, __int128 *, __int64); // [rsp+38h] [rbp-90h]
  __int64 (__fastcall *v15)(__int64, void (__fastcall **)(__int64, _QWORD, _QWORD), _QWORD *, _QWORD *); // [rsp+40h] [rbp-88h]
  _QWORD v16[3]; // [rsp+50h] [rbp-78h] BYREF
  __m128i v17; // [rsp+68h] [rbp-60h]
  __int128 v18; // [rsp+78h] [rbp-50h] BYREF
  void (__fastcall *v19)(__int128 *, __int128 *, __int64); // [rsp+88h] [rbp-40h]
  __int64 (__fastcall *v20)(__int64, void (__fastcall **)(__int64, _QWORD, _QWORD), _QWORD *, _QWORD *); // [rsp+90h] [rbp-38h]
  unsigned __int64 v21; // [rsp+98h] [rbp-30h]

  v21 = __readfsqword(0x28u);
  v13 = 0;
  v12 = 0u;
  v14 = nullptr;
  v15 = nullptr;
  v11 = 0x101010101010100LL;
  v7 = nullptr;
  if ( sub_237A0 )
  {
    *(_QWORD *)&v13 = sub_237A0;
    v15 = sub_AD80;
    v7 = (void (__fastcall *)(__int128 *, __int128 *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))sub_ADD0;
    v14 = (void (__fastcall *)(__int128 *, __int128 *, __int64))sub_ADD0;
  }
  v8 = _mm_loadu_si128(&v12);
  LOBYTE(v11) = 1;
  v16[0] = 0x101010101010101LL;
  v16[1] = 0x101000000000101LL;
  v16[2] = 0x100010101LL;
  v19 = nullptr;
  v20 = nullptr;
  v17 = v8;
  v18 = 0;
  if ( v7 )
  {
    v7(
      &v18,
      &v13,
      2,
      0x101000000000101LL,
      a5,
      a6,
      v11,
      0x101000000000101LL,
      0x100010101LL,
      v12.m128i_i64[0],
      v12.m128i_i64[1]);
    v20 = v15;
    v19 = v14;
  }
  if ( (unsigned __int8)sub_BFD0(a1) )
    v9 = sub_AE10(a1, dest, n, (__int64)v16);
  else
    v9 = 0;
  if ( v19 )
    v19(&v18, &v18, 3);
  if ( v14 )
    v14(&v13, &v13, 3);
  return v9;
}
