__int64 __fastcall sub_1FFE50(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3,
        __m128i *a4,
        unsigned __int64 a5,
        __int64 a6,
        char a7)
{
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rdi
  __int64 v11; // [rsp-10h] [rbp-10h]

  if ( (**(_DWORD **)(a1 + 56) & 0x40000) != 0 )
    return 0;
  if ( (unsigned int)sub_1FD8E0(a1, a2, a3, a4, a5, a6, a7) )
    return 4294967260LL;
  v10 = *(_QWORD *)(a1 + 56);
  if ( (*(_BYTE *)(*(_QWORD *)(v10 + 1496) + 604LL) & 0x10) == 0 )
    return 4294967276LL;
  sub_1EB4F0(v10, -1, 20, v11, v8, v9);
  return 0;
}
