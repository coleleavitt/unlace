unsigned __int64 __fastcall sub_1DCB060(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __m128 a5,
        __m128 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v8; // r8
  unsigned __int16 *v9; // rax

  v8 = *(_QWORD *)(a2 + 16);
  if ( !v8 )
    return sub_1B116A0(*(__int64 **)(*a1 + 760), *(_DWORD *)a2, *(_DWORD *)(a2 + 4), *(_DWORD *)(a2 + 12), v8, a5, a6);
  v9 = sub_1DC71F0(a1, *(_QWORD *)(a2 + 16), a3, a4, v8, a8, a5, a6);
  if ( v9 != (unsigned __int16 *)((char *)&dword_0 + 1) )
  {
    v8 = (unsigned __int64)v9 & 0xFFFFFFFFFFFFFFFELL;
    return sub_1B116A0(*(__int64 **)(*a1 + 760), *(_DWORD *)a2, *(_DWORD *)(a2 + 4), *(_DWORD *)(a2 + 12), v8, a5, a6);
  }
  return 0;
}
