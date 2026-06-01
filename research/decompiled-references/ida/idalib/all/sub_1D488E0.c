__int64 __fastcall sub_1D488E0(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        unsigned __int64 a6,
        __int64 a7)
{
  _QWORD *v7; // rdx
  __int64 result; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rax

  v7 = *(_QWORD **)(a2 + 16);
  if ( v7 )
  {
    result = sub_1D434A0(a1, *(unsigned __int16 **)(a2 + 16), a3, a4, (__int64)v7, a6, a7);
    if ( result == 1 )
      return result;
    v9 = *a1;
    v10 = result & 0xFFFFFFFFFFFFFFFELL;
    v7 = (_QWORD *)v10;
    if ( *(_DWORD *)(*a1 + 12632) || *(_QWORD *)(a2 + 16) != v10 )
      return sub_1A894D0(*(__int64 **)(v9 + 736), *(_DWORD *)(a2 + 8), v7, a3, a4);
  }
  else
  {
    v9 = *a1;
    if ( *(_DWORD *)(*a1 + 12632) )
      return sub_1A894D0(*(__int64 **)(v9 + 736), *(_DWORD *)(a2 + 8), v7, a3, a4);
  }
  return a2;
}
