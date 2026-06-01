void __fastcall sub_1A24D50(
        __int64 a1,
        __int64 a2,
        char *a3,
        __int64 *a4,
        unsigned __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        _DWORD *a9,
        __int64 a10)
{
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9

  sub_1A155A0(a1, a2, a3, a4, a5, a6, (__m128i)a7, *(double *)a8.m128_u64, a6, (__int64)a9, 0, a10);
  if ( *(char *)(*(_QWORD *)(a1 + 232) + 1LL) < 0
    && !*a3
    && !*a9
    && a9[46] == 30
    && a9[47] == 1
    && ((_BYTE)a10 || sub_F61BB0(*(_QWORD *)(a6 & 0xFFFFFFFFFFFFFFF0LL), a2, v13, v14, v15, v16)) )
  {
    sub_1A219C0(a1, a2, (__int64)a3, (__int64)a4, a5, a9, a7, a8, 1, nullptr);
  }
}
