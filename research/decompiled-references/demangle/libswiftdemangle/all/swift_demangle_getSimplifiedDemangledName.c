__int64 __fastcall swift_demangle_getSimplifiedDemangledName(
        char *a1,
        char *dest,
        size_t n,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  void (__fastcall *v7)(__int128 *, __int128 *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64); // rax
  __m128i v8; // xmm1
  __int64 v9; // r12
  __int64 v11; // [rsp+0h] [rbp-C8h]
  __int64 v12; // [rsp+8h] [rbp-C0h]
  __int64 v13; // [rsp+10h] [rbp-B8h]
  __m128i v14; // [rsp+18h] [rbp-B0h] BYREF
  __int128 v15; // [rsp+28h] [rbp-A0h] BYREF
  void (__fastcall *v16)(__int128 *, __int128 *, __int64); // [rsp+38h] [rbp-90h]
  __int64 (__fastcall *v17)(__int64, void (__fastcall **)(__int64, _QWORD, _QWORD), _QWORD *, _QWORD *); // [rsp+40h] [rbp-88h]
  _QWORD v18[3]; // [rsp+50h] [rbp-78h] BYREF
  __m128i v19; // [rsp+68h] [rbp-60h]
  __int128 v20; // [rsp+78h] [rbp-50h] BYREF
  void (__fastcall *v21)(__int128 *, __int128 *, __int64); // [rsp+88h] [rbp-40h]
  __int64 (__fastcall *v22)(__int64, void (__fastcall **)(__int64, _QWORD, _QWORD), _QWORD *, _QWORD *); // [rsp+90h] [rbp-38h]
  unsigned __int64 v23; // [rsp+98h] [rbp-30h]

  v23 = __readfsqword(0x28u);
  v15 = 0;
  v14 = 0u;
  v16 = nullptr;
  v17 = nullptr;
  BYTE1(v11) = 1;
  BYTE1(v12) = 1;
  v13 = 0x100010101LL;
  v7 = nullptr;
  if ( sub_237A0 )
  {
    *(_QWORD *)&v15 = sub_237A0;
    v17 = sub_AD80;
    v7 = (void (__fastcall *)(__int128 *, __int128 *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))sub_ADD0;
    v16 = (void (__fastcall *)(__int128 *, __int128 *, __int64))sub_ADD0;
  }
  LOBYTE(v11) = 1;
  v8 = _mm_loadu_si128(&v14);
  WORD1(v12) = 257;
  WORD1(v11) = 0;
  HIDWORD(v11) = 0;
  LOBYTE(v12) = 0;
  HIDWORD(v12) = 257;
  BYTE4(v13) = 0;
  v18[0] = 257;
  v18[1] = 0x10101010100LL;
  v18[2] = 65793;
  v21 = nullptr;
  v22 = nullptr;
  v19 = v8;
  v20 = 0;
  if ( v7 )
  {
    v7(&v20, &v15, 2, 0x10101010100LL, a5, a6, v11, v12, v13, v14.m128i_i64[0], v14.m128i_i64[1]);
    v22 = v17;
    v21 = v16;
  }
  if ( (unsigned __int8)sub_BFD0(a1) )
    v9 = sub_AE10(a1, dest, n, (__int64)v18);
  else
    v9 = 0;
  if ( v21 )
    v21(&v20, &v20, 3);
  if ( v16 )
    v16(&v15, &v15, 3);
  return v9;
}
