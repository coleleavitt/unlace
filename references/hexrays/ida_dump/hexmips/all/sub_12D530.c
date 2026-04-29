char __fastcall sub_12D530(
        __int64 a1,
        const __m128i *a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        unsigned __int8 a6,
        unsigned int a7)
{
  if ( *(_DWORD *)(a4 + 4) != -1 )
    return sub_12D290(a1, a2, a3, a4, a5, a6, a7);
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 96) + 145LL) )
    return sub_117990((unsigned __int8 *)a4) == (char)a6;
  return a6 == 0;
}
