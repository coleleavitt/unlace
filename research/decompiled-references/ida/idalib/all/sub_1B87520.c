__int64 __fastcall sub_1B87520(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int16 *v13; // rsi
  __int64 v14; // r12
  __int64 v15; // rax
  unsigned int v16; // r14d
  unsigned __int64 v17; // r13
  unsigned int v18; // eax
  unsigned __int64 v19[6]; // [rsp+8h] [rbp-30h] BYREF

  v8 = sub_1B7CAD0(a1, *(unsigned __int16 **)(a2 + 16), a6, a7, a3, a4, a5);
  if ( v8 == 1 )
    return 1;
  v13 = *(unsigned __int16 **)(a2 + 24);
  v14 = v8;
  v15 = sub_1B7CAD0(a1, v13, a6, a7, v9, v10, v11);
  if ( v15 == 1 )
    return 1;
  v16 = *(_DWORD *)(a2 + 4);
  v17 = v15 & 0xFFFFFFFFFFFFFFFELL;
  v18 = sub_EEB7E0(*(_QWORD *)(a2 + 16), (__int64)v13, *(double *)a6.m128_u64);
  v19[0] = v17;
  return sub_1930830((__int64 *)*a1, 0, v14 & 0xFFFFFFFFFFFFFFFELL, v18, v19, 1, a6, a7, v16);
}
