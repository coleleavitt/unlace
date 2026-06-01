__int64 __fastcall sub_1BB6130(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 *v6; // rax
  __int64 *v7; // r12
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // r8
  unsigned int v15; // esi
  __int64 v16; // rdx
  unsigned __int64 v17; // r10
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 result; // rax
  __int64 v21; // [rsp-8h] [rbp-20h]
  int v22; // [rsp+0h] [rbp-18h]

  v6 = sub_1BB2A80(a1, *(_QWORD *)(a2 + 24), a3, a4);
  if ( !v6 )
    return 1;
  v7 = v6;
  v8 = sub_BFA3B0(a2);
  v12 = sub_1B73BE0(a1, v8, v9, a3, a4, v10, v11);
  if ( v12 == 1 )
    return 1;
  v13 = *a1;
  v14 = v12 & 0xFFFFFFFFFFFFFFFELL;
  if ( *(_DWORD *)(*a1 + 12632) || v7 != *(__int64 **)(a2 + 24) || (result = a2, *(_QWORD *)(a2 + 16) != v14) )
  {
    v15 = *(_DWORD *)(a2 + 32);
    v16 = *(unsigned int *)(a2 + 44);
    v17 = v16 | ((unsigned __int64)*(unsigned int *)(a2 + 36) << 32);
    v18 = *(unsigned int *)(a2 + 40);
    v19 = v16 << 32;
    switch ( (*(_WORD *)a2 + 431) & 0x1FF )
    {
      case 0:
        result = sub_16B28E0(v13, v15, 0x91u, v7, v14, v19 | v18, *(double *)a3.m128_u64, v17, v21, v22);
        break;
      case 1:
        result = sub_16B28E0(v13, v15, 0x90u, v7, v14, v19 | v18, *(double *)a3.m128_u64, v17, v21, v22);
        break;
      case 2:
        result = sub_16B28E0(v13, v15, 0x84u, v7, v14, v19 | v18, *(double *)a3.m128_u64, v17, v21, v22);
        break;
      case 3:
        result = sub_16B28E0(v13, v15, 0x82u, v7, v14, v19 | v18, *(double *)a3.m128_u64, v17, v21, v22);
        break;
      case 4:
        result = sub_16B28E0(v13, v15, 0x162u, v7, v14, v19 | v18, *(double *)a3.m128_u64, v17, v21, v22);
        break;
    }
  }
  return result;
}
