__int64 __fastcall sub_1DDB5F0(
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

  v8 = sub_1DD8310((__int64)a1, *(_DWORD *)(*(_QWORD *)(a2 + 24) + 24LL), *(_QWORD *)(a2 + 24), a6, a7, a8, a3, a4);
  if ( v8 )
    return sub_18C3650(*a1, *(_DWORD *)(a2 + 16), *(_DWORD *)(a2 + 20), v8);
  else
    return 1;
}
