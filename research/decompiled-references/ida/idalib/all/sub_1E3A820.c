const __m128i *__fastcall sub_1E3A820(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128i a9)
{
  __int64 v9; // r12
  __int64 v10; // r13
  _QWORD *v11; // rax
  unsigned __int64 v12; // rax
  _QWORD *v13; // r9
  const __m128i *v14; // r12
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9

  v9 = *a1;
  v10 = a1[4];
  v11 = sub_F631C0(*(_QWORD *)(**(_QWORD **)(a2 + 64) & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, a5, a6);
  v12 = sub_1E38470(v9, *(_DWORD *)(a2 + 24), (__int64)v11, v10, 0, a7, a8, a9);
  if ( (unsigned __int8)sub_169E850(*a1, v12, *(_DWORD *)(v12 + 24), nullptr) )
    return nullptr;
  v13 = sub_1DD4AE0(*a1, *(void ***)(a2 + 64), a1[4], *(_DWORD *)(a2 + 24), *(_QWORD *)(a2 + 40), 0, a7, a8);
  if ( !v13 )
    return nullptr;
  v14 = (const __m128i *)sub_B9A4F0(
                           *(_QWORD **)(*a1 + 248),
                           a1[3],
                           *(_DWORD *)(a2 + 56),
                           *(_DWORD *)(a2 + 60),
                           *(_DWORD *)(a2 + 24),
                           v13);
  sub_A965E0(*(_QWORD *)(*a1 + 248), (__int64)v14, a2, v15, v16, v17);
  v18 = *(_BYTE *)(a2 + 29) & 0x60;
  v14[1].m128i_i8[13] = v18 | v14[1].m128i_i8[13] & 0x9F;
  sub_B94AD0((__m128i *)a1[3], (__int64)v14, v18, v19, v20, v21);
  if ( v14[1].m128i_i8[12] >= 0 )
    return sub_1E3A1B0(a1, a2, v14, 0, a7, a8, a9);
  return v14;
}
