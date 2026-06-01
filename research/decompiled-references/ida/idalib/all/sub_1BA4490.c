__m128 *__fastcall sub_1BA4490(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r12
  __int64 v16; // rax

  v7 = sub_1B7CAD0(a1, *(unsigned __int16 **)(a2 + 16), a6, a7, a3, a4, a5);
  if ( v7 == 1 )
    return (__m128 *)(&dword_0 + 1);
  v15 = sub_1A89000(
          *(__int64 **)(*a1 + 736),
          *(_DWORD *)(a2 + 8),
          (_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFELL),
          v8,
          v9,
          v10,
          a6,
          a7);
  if ( v15 == 1 )
    return (__m128 *)(&dword_0 + 1);
  v16 = sub_1B7AA40(a1, *(_WORD **)(a2 + 24), 0, a6, a7, v12, v13, v14);
  if ( v16 == 1 )
    return (__m128 *)(&dword_0 + 1);
  else
    return sub_1A861A0(
             *(__int64 **)(*a1 + 736),
             *(_DWORD *)(a2 + 8),
             (__m128 *)(v15 & 0xFFFFFFFFFFFFFFFELL),
             v16 & 0xFFFFFFFFFFFFFFFELL);
}
