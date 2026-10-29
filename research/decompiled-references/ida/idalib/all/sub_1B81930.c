__int64 __fastcall sub_1B81930(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        unsigned __int64 a6,
        __int64 a7)
{
  _QWORD *v7; // rdx
  __int64 v8; // rax

  v7 = *(_QWORD **)(a2 + 16);
  if ( !v7 )
    return sub_1A894D0(*(__int64 **)(*a1 + 736), *(_DWORD *)(a2 + 8), v7, a3, a4);
  v8 = sub_1B7CAD0(a1, *(unsigned __int16 **)(a2 + 16), a3, a4, (__int64)v7, a6, a7);
  if ( v8 != 1 )
  {
    v7 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFELL);
    return sub_1A894D0(*(__int64 **)(*a1 + 736), *(_DWORD *)(a2 + 8), v7, a3, a4);
  }
  return 1;
}
