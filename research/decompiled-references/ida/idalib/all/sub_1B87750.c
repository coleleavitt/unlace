__int64 __fastcall sub_1B87750(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v12; // r12
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r13
  __int64 v17; // rax

  v7 = sub_1B7CAD0(a1, *(unsigned __int16 **)(a2 + 24), a6, a7, a3, a4, a5);
  if ( v7 == 1 )
    return 1;
  v12 = v7;
  v16 = sub_1B7CAD0(a1, *(unsigned __int16 **)(a2 + 32), a6, a7, v8, v9, v10);
  if ( v16 == 1 )
    return 1;
  v17 = sub_1B7CAD0(a1, *(unsigned __int16 **)(a2 + 40), a6, a7, v13, v14, v15);
  if ( v17 == 1 )
    return 1;
  else
    return sub_1923BC0(
             *a1,
             *(_DWORD *)(a2 + 16),
             *(unsigned int *)(a2 + 20),
             v12 & 0xFFFFFFFFFFFFFFFELL,
             v16 & 0xFFFFFFFFFFFFFFFELL,
             v17 & 0xFFFFFFFFFFFFFFFELL,
             a6,
             a7);
}
