__int64 __fastcall sub_197BC00(
        unsigned __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        unsigned __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  unsigned __int64 v12; // rax
  unsigned int v13; // ebp
  __int64 *v14; // rdi
  unsigned __int64 v15; // rcx
  __int64 v16; // rax

  v9 = *(_QWORD *)(a2 + 24);
  if ( v9 )
  {
    v10 = sub_197B880((__int64)a1, *(_QWORD *)(a2 + 24), 0, a6, a7, a8, a3, a4);
    if ( v10 == 1 )
      return 1;
    v9 = v10 & 0xFFFFFFFFFFFFFFFELL;
  }
  v12 = sub_1783A50((_QWORD *)*a1, *(_QWORD *)(*a1 + 608), *(_DWORD *)(a2 + 16));
  v13 = *(_DWORD *)(a2 + 16);
  v14 = (__int64 *)*a1;
  v15 = v12 & 0xFFFFFFFFFFFFFFFELL;
  if ( (*(_DWORD *)a2 & 0x80000) == 0 )
    return sub_178D010(v14, v13, v9, v15, (__m128i)a3);
  v16 = sub_1783580((__int64)v14, v13, v9, v15);
  if ( v16 == 1 )
    return 1;
  else
    return sub_178C3D0(*a1, v13, v9, v16 & 0xFFFFFFFFFFFFFFFELL, 1, (__m128i)a3);
}
