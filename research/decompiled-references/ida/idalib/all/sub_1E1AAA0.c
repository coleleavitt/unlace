unsigned __int16 *__fastcall sub_1E1AAA0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  unsigned __int16 *result; // rax
  unsigned __int64 v8; // rdx

  result = (unsigned __int16 *)sub_1E11560(a1, *(unsigned __int16 **)(a2 + 16), a6, a7, a3, a4, a5);
  if ( result != (unsigned __int16 *)((char *)&dword_0 + 1) )
  {
    v8 = (unsigned __int64)result & 0xFFFFFFFFFFFFFFFELL;
    if ( *(_DWORD *)(*a1 + 12632) )
      return sub_19D7F10(*(__int64 **)(*a1 + 736), *(_QWORD *)(a2 + 32), v8, a6, a7);
    result = (unsigned __int16 *)a2;
    if ( *(_QWORD *)(a2 + 16) != v8 )
      return sub_19D7F10(*(__int64 **)(*a1 + 736), *(_QWORD *)(a2 + 32), v8, a6, a7);
  }
  return result;
}
