__int64 __fastcall sub_1DCD610(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int16 *v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 result; // rax
  unsigned __int16 *v14; // r12
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int16 *v19; // r13
  unsigned __int16 *v20; // rax
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // r8

  v8 = sub_1DC71F0(a1, *(_QWORD *)(a2 + 24), a3, a4, a5, a6, a7, a8);
  if ( v8 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return 1;
  v14 = v8;
  v19 = sub_1DC71F0(a1, *(_QWORD *)(a2 + 32), v9, v10, v11, v12, a7, a8);
  if ( v19 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return 1;
  v20 = sub_1DC71F0(a1, *(_QWORD *)(a2 + 40), v15, v16, v17, v18, a7, a8);
  if ( v20 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return 1;
  v21 = (unsigned __int64)v20 & 0xFFFFFFFFFFFFFFFELL;
  v22 = (unsigned __int64)v14 & 0xFFFFFFFFFFFFFFFELL;
  v23 = (unsigned __int64)v19 & 0xFFFFFFFFFFFFFFFELL;
  if ( *(_DWORD *)(*a1 + 12632) )
    return sub_1923BC0(*a1, *(_DWORD *)(a2 + 16), *(unsigned int *)(a2 + 20), v22, v23, v21, a7, a8);
  if ( *(_QWORD *)(a2 + 24) != v22 )
    return sub_1923BC0(*a1, *(_DWORD *)(a2 + 16), *(unsigned int *)(a2 + 20), v22, v23, v21, a7, a8);
  if ( *(_QWORD *)(a2 + 32) != v23 )
    return sub_1923BC0(*a1, *(_DWORD *)(a2 + 16), *(unsigned int *)(a2 + 20), v22, v23, v21, a7, a8);
  result = a2;
  if ( *(_QWORD *)(a2 + 40) != v21 )
    return sub_1923BC0(*a1, *(_DWORD *)(a2 + 16), *(unsigned int *)(a2 + 20), v22, v23, v21, a7, a8);
  return result;
}
