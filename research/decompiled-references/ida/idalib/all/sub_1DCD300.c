__int64 __fastcall sub_1DCD300(
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
  unsigned __int16 *v15; // rbp
  unsigned __int16 *v16; // rax
  __int64 v17; // r13
  unsigned __int64 v18; // rbp
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // r12
  __int64 v21; // rsi
  unsigned int v22; // eax
  unsigned int v23; // ebx
  unsigned __int64 v24[6]; // [rsp+8h] [rbp-30h] BYREF

  v9 = sub_1DC71F0(a1, *(_QWORD *)(a2 + 16), a3, a4, a5, a6, a7, a8);
  if ( v9 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return 1;
  v15 = v9;
  v16 = sub_1DC71F0(a1, *(_QWORD *)(a2 + 24), v10, v11, v12, v13, a7, a8);
  if ( v16 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return 1;
  v17 = *a1;
  v18 = (unsigned __int64)v15 & 0xFFFFFFFFFFFFFFFELL;
  v19 = *(_QWORD *)(a2 + 16);
  v20 = (unsigned __int64)v16 & 0xFFFFFFFFFFFFFFFELL;
  v21 = *(unsigned int *)(v17 + 12632);
  if ( (_DWORD)v21 || v19 != v18 || (result = a2, *(_QWORD *)(a2 + 24) != v20) )
  {
    v22 = sub_EEB7E0(v19, v21, *(double *)a7.m128_u64);
    v23 = *(_DWORD *)(a2 + 4);
    v24[0] = v20;
    return sub_1930830((__int64 *)v17, 0, v18, v22, v24, 1, a7, a8, v23);
  }
  return result;
}
