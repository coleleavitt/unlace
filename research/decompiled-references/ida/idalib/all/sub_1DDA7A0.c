__int64 __fastcall sub_1DDA7A0(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v8; // rax

  v8 = sub_1DD8310((__int64)a1, *(_DWORD *)(*(_QWORD *)(a2 + 8) + 24LL), *(_QWORD *)(a2 + 8), a6, a7, a8, a3, a4);
  if ( v8 )
    return sub_1C36B30(*a1, *(_DWORD *)(a2 + 4), *(_DWORD *)(a2 + 16), v8);
  else
    return 1;
}
