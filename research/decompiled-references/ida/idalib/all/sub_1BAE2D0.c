__int64 __fastcall sub_1BAE2D0(
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
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 *v15; // rdi
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned int v18; // ecx
  unsigned __int64 v19[4]; // [rsp+8h] [rbp-20h] BYREF

  v8 = sub_1B73BE0(a1, *(_QWORD *)(a2 + 16), a3, a6, a7, a4, a5);
  if ( v8 == 1 )
    return 1;
  v13 = v8;
  v14 = sub_1B73BE0(a1, *(_QWORD *)(a2 + 24), v9, a6, a7, v10, v11);
  if ( v14 == 1 )
    return 1;
  v15 = (__int64 *)*a1;
  v16 = v14 & 0xFFFFFFFFFFFFFFFELL;
  v17 = v13 & 0xFFFFFFFFFFFFFFFELL;
  if ( !*(_DWORD *)(*a1 + 12632) && *(_QWORD *)(a2 + 16) == v17 && *(_QWORD *)(a2 + 24) == v16 )
    return a2;
  v18 = *(_DWORD *)(a2 + 32);
  v19[0] = v16;
  return sub_1930830(v15, 0, v17, 0, v19, 1, a6, a7, v18);
}
