__int64 __fastcall sub_1DC8F40(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        unsigned __int64 a6,
        __int64 a7,
        __int64 a8)
{
  _QWORD *v8; // rdx
  __int64 result; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rax

  v8 = *(_QWORD **)(a2 + 16);
  if ( v8 )
  {
    result = (__int64)sub_1DC71F0(a1, *(_QWORD *)(a2 + 16), (unsigned __int64)v8, a6, a7, a8, a3, a4);
    if ( result == 1 )
      return result;
    v10 = *a1;
    v11 = result & 0xFFFFFFFFFFFFFFFELL;
    v8 = (_QWORD *)v11;
    if ( *(_DWORD *)(*a1 + 12632) || *(_QWORD *)(a2 + 16) != v11 )
      return sub_1A894D0(*(__int64 **)(v10 + 736), *(_DWORD *)(a2 + 8), v8, a3, a4);
  }
  else
  {
    v10 = *a1;
    if ( *(_DWORD *)(*a1 + 12632) )
      return sub_1A894D0(*(__int64 **)(v10 + 736), *(_DWORD *)(a2 + 8), v8, a3, a4);
  }
  return a2;
}
