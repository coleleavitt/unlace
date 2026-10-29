__int64 __fastcall sub_1BAFBD0(
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
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // r13
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // r12
  __int64 v19; // rsi
  unsigned int v20; // eax
  unsigned int v21; // ebx
  unsigned __int64 v22[6]; // [rsp+8h] [rbp-30h] BYREF

  v8 = sub_1B73BE0(a1, *(_QWORD *)(a2 + 16), a3, a6, a7, a4, a5);
  if ( v8 == 1 )
    return 1;
  v13 = v8;
  v14 = sub_1B73BE0(a1, *(_QWORD *)(a2 + 24), v9, a6, a7, v10, v11);
  if ( v14 == 1 )
    return 1;
  v15 = *a1;
  v16 = v13 & 0xFFFFFFFFFFFFFFFELL;
  v17 = *(_QWORD *)(a2 + 16);
  v18 = v14 & 0xFFFFFFFFFFFFFFFELL;
  v19 = *(unsigned int *)(v15 + 12632);
  if ( (_DWORD)v19 || v17 != v16 || (result = a2, *(_QWORD *)(a2 + 24) != v18) )
  {
    v20 = sub_EEB7E0(v17, v19, *(double *)a6.m128_u64);
    v21 = *(_DWORD *)(a2 + 4);
    v22[0] = v18;
    return sub_1930830((__int64 *)v15, 0, v16, v20, v22, 1, a6, a7, v21);
  }
  return result;
}
