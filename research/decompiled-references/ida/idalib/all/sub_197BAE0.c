__int64 __fastcall sub_197BAE0(
        _QWORD *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        unsigned __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v8; // rax
  __int64 v9; // rax

  v8 = *(_QWORD *)(a2 + 8);
  if ( v8 )
  {
    v9 = sub_197B880((__int64)a1, *(_QWORD *)(a2 + 8), 0, a6, a7, a8, a3, a4);
    if ( v9 == 1 )
      return 1;
    v8 = v9 & 0xFFFFFFFFFFFFFFFELL;
  }
  return sub_1C46CA0(*a1, *(unsigned int *)(a2 + 4), v8, 0);
}
