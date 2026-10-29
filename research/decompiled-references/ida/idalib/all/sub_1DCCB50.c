unsigned __int16 *__fastcall sub_1DCCB50(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int16 *result; // rax
  unsigned __int64 v9; // rdx

  result = sub_1DC71F0(a1, *(_QWORD *)(a2 + 16), a3, a4, a5, a6, a7, a8);
  if ( result != (unsigned __int16 *)((char *)&dword_0 + 1) )
  {
    v9 = (unsigned __int64)result & 0xFFFFFFFFFFFFFFFELL;
    if ( *(_DWORD *)(*a1 + 12632) )
      return sub_19D7F10(*(__int64 **)(*a1 + 736), *(_QWORD *)(a2 + 32), v9, a7, a8);
    result = (unsigned __int16 *)a2;
    if ( *(_QWORD *)(a2 + 16) != v9 )
      return sub_19D7F10(*(__int64 **)(*a1 + 736), *(_QWORD *)(a2 + 32), v9, a7, a8);
  }
  return result;
}
