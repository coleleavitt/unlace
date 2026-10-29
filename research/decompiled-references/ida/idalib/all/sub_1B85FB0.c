__int64 __fastcall sub_1B85FB0(
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
  __int64 v13; // rax
  unsigned int v14; // ecx
  __int64 *v15; // rdi
  unsigned __int64 v16[4]; // [rsp+8h] [rbp-20h] BYREF

  v7 = sub_1B7CAD0(a1, *(unsigned __int16 **)(a2 + 16), a6, a7, a3, a4, a5);
  if ( v7 == 1 )
    return 1;
  v12 = v7;
  v13 = sub_1B7CAD0(a1, *(unsigned __int16 **)(a2 + 24), a6, a7, v8, v9, v10);
  if ( v13 == 1 )
    return 1;
  v14 = *(_DWORD *)(a2 + 32);
  v15 = (__int64 *)*a1;
  v16[0] = v13 & 0xFFFFFFFFFFFFFFFELL;
  return sub_1930830(v15, 0, v12 & 0xFFFFFFFFFFFFFFFELL, 0, v16, 1, a6, a7, v14);
}
