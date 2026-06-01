__int64 __fastcall sub_1CE9900(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v9; // rax
  __int64 result; // rax
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rax
  unsigned int v13; // ebp
  __int64 *v14; // rdi
  unsigned __int64 v15; // rcx

  v9 = sub_1CE94F0(a1, *(_QWORD *)(a2 + 24), 0, a3, a4, a6, a7, a8);
  if ( v9 == 1 )
    return 1;
  v11 = v9 & 0xFFFFFFFFFFFFFFFELL;
  v12 = sub_1783A50((_QWORD *)*a1, *(_QWORD *)(*a1 + 608), *(_DWORD *)(a2 + 16));
  v13 = *(_DWORD *)(a2 + 16);
  v14 = (__int64 *)*a1;
  v15 = v12 & 0xFFFFFFFFFFFFFFFELL;
  if ( (*(_DWORD *)a2 & 0x80000) == 0 )
    return sub_178D010(v14, v13, v11, v15, (__m128i)a3);
  result = sub_1783580((__int64)v14, v13, v11, v15);
  if ( result != 1 )
    return sub_178C3D0(*a1, v13, v11, result & 0xFFFFFFFFFFFFFFFELL, 1, (__m128i)a3);
  return result;
}
