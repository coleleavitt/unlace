/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000D530
// Address: 0x000000014000D530

//----- (000000014000D530) ----------------------------------------------------
__int64 __fastcall sub_14000D530(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v8; // rbp
  unsigned __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v17; // [rsp+40h] [rbp-28h] BYREF

  v8 = *(_QWORD *)(a1 + 24);
  if ( a7 != -1 )
    *(_QWORD *)(*(_QWORD *)sub_140009AC0((_QWORD *)(a1 + 40), (__int64)&v17, (unsigned __int8 *)&a7) + 24LL) = v8;
  v12 = *(_QWORD *)(a1 + 24) + 1LL;
  if ( v12 > *(_QWORD *)(a1 + 32) )
    *(_QWORD *)(a1 + 16) = sub_14005ABE0(a1 + 16, *(void **)(a1 + 16), v12, 0x28u);
  v13 = *(_QWORD *)(a1 + 24);
  v14 = *(_QWORD *)(a1 + 16) + 40 * v13;
  *(_QWORD *)(a1 + 24) = v13 + 1;
  *(_DWORD *)v14 = a2;
  v15 = a7;
  *(_QWORD *)(v14 + 24) = a5;
  *(_QWORD *)(v14 + 32) = a6;
  *(_QWORD *)(v14 + 8) = v15;
  *(_QWORD *)(v14 + 16) = a4;
  sub_14000D730(
    *(_QWORD *)(a1 + 8),
    *(const void **)a3,
    *(_DWORD *)(a3 + 8),
    *(_BYTE *)(a3 + 13),
    *(_BYTE *)(a3 + 12),
    *(const void ***)(a3 + 16),
    *(_QWORD *)(a3 + 24));
  return v8;
}
