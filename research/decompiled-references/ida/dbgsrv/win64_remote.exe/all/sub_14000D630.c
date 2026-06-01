/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000D630
// Address: 0x000000014000D630

//----- (000000014000D630) ----------------------------------------------------
__int64 __fastcall sub_14000D630(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbp
  unsigned __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v15; // [rsp+40h] [rbp-28h] BYREF

  v7 = *(_QWORD *)(a1 + 24);
  if ( a6 != -1 )
    *(_QWORD *)(*(_QWORD *)sub_140009AC0((_QWORD *)(a1 + 40), (__int64)&v15, (unsigned __int8 *)&a6) + 24LL) = v7;
  v11 = *(_QWORD *)(a1 + 24) + 1LL;
  if ( v11 > *(_QWORD *)(a1 + 32) )
    *(_QWORD *)(a1 + 16) = sub_14005ABE0(a1 + 16, *(void **)(a1 + 16), v11, 0x28u);
  v12 = *(_QWORD *)(a1 + 24);
  v13 = *(_QWORD *)(a1 + 16) + 40 * v12;
  *(_QWORD *)(a1 + 24) = v12 + 1;
  *(_DWORD *)v13 = 3;
  *(_QWORD *)(v13 + 8) = a6;
  *(_QWORD *)(v13 + 16) = a3;
  *(_QWORD *)(v13 + 24) = a4;
  *(_QWORD *)(v13 + 32) = a5;
  sub_14000D730(
    *(_QWORD *)(a1 + 8),
    *(const void **)a2,
    *(_DWORD *)(a2 + 8),
    *(_BYTE *)(a2 + 13),
    *(_BYTE *)(a2 + 12),
    *(const void ***)(a2 + 16),
    *(_QWORD *)(a2 + 24));
  return v7;
}
