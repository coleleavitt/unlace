__int64 __fastcall sub_197BB40(
        unsigned __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        unsigned __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v8; // rax
  __int64 v9; // rax

  v8 = *(_QWORD *)(a2 + 16);
  if ( v8 )
  {
    v9 = sub_197B880((__int64)a1, *(_QWORD *)(a2 + 16), 0, a6, a7, a8, a3, a4);
    if ( v9 == 1 )
      return 1;
    v8 = v9 & 0xFFFFFFFFFFFFFFFELL;
  }
  return sub_178B6E0(*a1, *(unsigned int *)(a2 + 8), v8, *(_BYTE *)(a2 + 32) & 1, (__m128i)a3);
}
