unsigned __int64 __fastcall sub_1D927A0(__int64 *a1, __int64 a2, __int64 a3, unsigned __int64 a4, __m128 a5, __m128 a6)
{
  unsigned __int64 v6; // r8
  __int64 v7; // rax

  v6 = *(_QWORD *)(a2 + 16);
  if ( !v6 )
    return sub_1B116A0(*(__int64 **)(*a1 + 760), *(_DWORD *)a2, *(_DWORD *)(a2 + 4), *(_DWORD *)(a2 + 12), v6, a5, a6);
  v7 = sub_1D8B300(a1, *(unsigned __int16 **)(a2 + 16), a5, a6, a3, a4, v6);
  if ( v7 != 1 )
  {
    v6 = v7 & 0xFFFFFFFFFFFFFFFELL;
    return sub_1B116A0(*(__int64 **)(*a1 + 760), *(_DWORD *)a2, *(_DWORD *)(a2 + 4), *(_DWORD *)(a2 + 12), v6, a5, a6);
  }
  return 0;
}
