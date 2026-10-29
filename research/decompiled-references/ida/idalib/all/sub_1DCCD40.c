__int64 __fastcall sub_1DCCD40(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int16 *v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 result; // rax
  unsigned __int16 *v15; // r12
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int16 *v20; // r13
  unsigned __int16 *v21; // rax
  __int64 v22; // r9
  _QWORD *v23; // rcx
  _QWORD *v24; // rsi
  _QWORD *v25; // rdx

  v9 = sub_1DC71F0(a1, *(_QWORD *)(a2 + 16), a3, a4, a5, a6, a7, a8);
  if ( v9 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return 1;
  v15 = v9;
  v20 = sub_1DC71F0(a1, *(_QWORD *)(a2 + 24), v10, v11, v12, v13, a7, a8);
  if ( v20 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return 1;
  v21 = sub_1DC71F0(a1, *(_QWORD *)(a2 + 32), v16, v17, v18, v19, a7, a8);
  if ( v21 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return 1;
  v23 = (_QWORD *)((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFFELL);
  v24 = (_QWORD *)((unsigned __int64)v15 & 0xFFFFFFFFFFFFFFFELL);
  v25 = (_QWORD *)((unsigned __int64)v20 & 0xFFFFFFFFFFFFFFFELL);
  if ( *(_DWORD *)(*a1 + 12632) )
    return sub_190A860(*a1, v24, v25, v23, *(unsigned int *)(a2 + 4), v22, (__m128i)a7, a8);
  if ( v24 != *(_QWORD **)(a2 + 16) )
    return sub_190A860(*a1, v24, v25, v23, *(unsigned int *)(a2 + 4), v22, (__m128i)a7, a8);
  if ( *(_QWORD **)(a2 + 24) != v25 )
    return sub_190A860(*a1, v24, v25, v23, *(unsigned int *)(a2 + 4), v22, (__m128i)a7, a8);
  result = a2;
  if ( *(_QWORD **)(a2 + 32) != v23 )
    return sub_190A860(*a1, v24, v25, v23, *(unsigned int *)(a2 + 4), v22, (__m128i)a7, a8);
  return result;
}
