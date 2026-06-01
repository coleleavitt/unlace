unsigned __int16 *__fastcall sub_1B85D20(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v7; // rax

  v7 = sub_1B7CAD0(a1, *(unsigned __int16 **)(a2 + 16), a6, a7, a3, a4, a5);
  if ( v7 == 1 )
    return (_WORD *)(&dword_0 + 1);
  else
    return sub_19D7F10(*(__int64 **)(*a1 + 736), *(_QWORD *)(a2 + 32), v7 & 0xFFFFFFFFFFFFFFFELL, a6, a7);
}
