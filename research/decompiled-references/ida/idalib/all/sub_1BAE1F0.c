__int64 __fastcall sub_1BAE1F0(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 result; // rax
  __int64 v13; // r12
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // r9
  _QWORD *v20; // rcx
  _QWORD *v21; // rsi
  _QWORD *v22; // rdx

  v8 = sub_1B73BE0(a1, *(_QWORD *)(a2 + 16), a3, a6, a7, a4, a5);
  if ( v8 == 1 )
    return 1;
  v13 = v8;
  v17 = sub_1B73BE0(a1, *(_QWORD *)(a2 + 24), v9, a6, a7, v10, v11);
  if ( v17 == 1 )
    return 1;
  v18 = sub_1B73BE0(a1, *(_QWORD *)(a2 + 32), v14, a6, a7, v15, v16);
  if ( v18 == 1 )
    return 1;
  v20 = (_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFELL);
  v21 = (_QWORD *)(v13 & 0xFFFFFFFFFFFFFFFELL);
  v22 = (_QWORD *)(v17 & 0xFFFFFFFFFFFFFFFELL);
  if ( *(_DWORD *)(*a1 + 12632) )
    return sub_190A860(*a1, v21, v22, v20, *(unsigned int *)(a2 + 4), v19, (__m128i)a6, a7);
  if ( v21 != *(_QWORD **)(a2 + 16) )
    return sub_190A860(*a1, v21, v22, v20, *(unsigned int *)(a2 + 4), v19, (__m128i)a6, a7);
  if ( *(_QWORD **)(a2 + 24) != v22 )
    return sub_190A860(*a1, v21, v22, v20, *(unsigned int *)(a2 + 4), v19, (__m128i)a6, a7);
  result = a2;
  if ( *(_QWORD **)(a2 + 32) != v20 )
    return sub_190A860(*a1, v21, v22, v20, *(unsigned int *)(a2 + 4), v19, (__m128i)a6, a7);
  return result;
}
