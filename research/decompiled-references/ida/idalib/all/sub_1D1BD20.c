__int64 __fastcall sub_1D1BD20(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v8; // rax

  v8 = sub_1D1B120((__int64)a1, *(_QWORD *)(a2 + 24), a7, a8, a3, a4, a5, a6);
  if ( v8 )
    return sub_18C3650(*a1, *(_DWORD *)(a2 + 16), *(_DWORD *)(a2 + 20), v8);
  else
    return 1;
}
