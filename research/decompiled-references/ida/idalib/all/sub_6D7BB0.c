__int64 *__fastcall sub_6D7BB0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __m128i v5; // xmm0
  __int64 *v6; // rsi
  const char *v7; // rdx
  __m128i v9; // [rsp+0h] [rbp-D8h] BYREF
  void *ptr; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v11; // [rsp+18h] [rbp-C0h]
  _QWORD v12[2]; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v13; // [rsp+40h] [rbp-98h]
  __int64 v14; // [rsp+50h] [rbp-88h]
  __int64 v15; // [rsp+58h] [rbp-80h]
  void **v16; // [rsp+60h] [rbp-78h]
  void *v17[2]; // [rsp+70h] [rbp-68h] BYREF
  _QWORD v18[11]; // [rsp+80h] [rbp-58h] BYREF

  v3 = *(_QWORD *)(a2 + 48);
  v18[3] = __readfsqword(0x28u);
  v15 = 0x100000000LL;
  v17[0] = v18;
  v5 = _mm_loadu_si128((const __m128i *)(v3 + 17464));
  v12[0] = &off_2BEBE68;
  v17[1] = nullptr;
  v9 = v5;
  v13 = 0;
  LOBYTE(v18[0]) = 0;
  v9.m128i_i32[0] = _mm_cvtsi128_si32(v5) & 0xFDBF8FFF | 0x2001000;
  v16 = v17;
  v12[1] = 0;
  v14 = 0;
  sub_227B8B0(v12, 0, 0, 0);
  sub_B76540(a3, v12, &v9);
  sub_6D77F0((__int64)&ptr, a2, (const char *)v17[0]);
  v6 = (__int64 *)(a2 + 560);
  v7 = haystack;
  if ( v11 )
    v7 = (const char *)ptr;
  sub_6D6020(a1, v6, v7);
  if ( ptr )
  {
    v11 = 0;
    qfree(ptr);
  }
  v12[0] = &off_2BEBE68;
  sub_227B7A0(v12);
  if ( v17[0] != v18 )
    operator delete(v17[0], v18[0] + 1LL);
  return a1;
}
