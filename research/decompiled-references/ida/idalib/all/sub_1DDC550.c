unsigned __int64 __fastcall sub_1DDC550(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int16 *v8; // rax

  v8 = sub_1DDC230(a1, *(_QWORD *)(a2 + 8), 0, a3, a4, a6, a7, a8);
  if ( v8 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return 1;
  else
    return sub_1C46CA0(*a1, *(_DWORD *)(a2 + 4), (__int64 *)((unsigned __int64)v8 & 0xFFFFFFFFFFFFFFFELL), 0, a3, a4);
}
