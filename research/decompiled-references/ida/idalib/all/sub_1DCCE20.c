__int64 __fastcall sub_1DCCE20(
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
  unsigned __int16 *v15; // rbp
  unsigned __int16 *v16; // rax
  __int64 *v17; // rdi
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned int v20; // ecx
  unsigned __int64 v21[4]; // [rsp+8h] [rbp-20h] BYREF

  v9 = sub_1DC71F0(a1, *(_QWORD *)(a2 + 16), a3, a4, a5, a6, a7, a8);
  if ( v9 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return 1;
  v15 = v9;
  v16 = sub_1DC71F0(a1, *(_QWORD *)(a2 + 24), v10, v11, v12, v13, a7, a8);
  if ( v16 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return 1;
  v17 = (__int64 *)*a1;
  v18 = (unsigned __int64)v16 & 0xFFFFFFFFFFFFFFFELL;
  v19 = (unsigned __int64)v15 & 0xFFFFFFFFFFFFFFFELL;
  if ( !*(_DWORD *)(*a1 + 12632) && *(_QWORD *)(a2 + 16) == v19 && *(_QWORD *)(a2 + 24) == v18 )
    return a2;
  v20 = *(_DWORD *)(a2 + 32);
  v21[0] = v18;
  return sub_1930830(v17, 0, v19, 0, v21, 1, a7, a8, v20);
}
