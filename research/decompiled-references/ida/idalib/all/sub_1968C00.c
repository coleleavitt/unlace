__int64 __fastcall sub_1968C00(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 *v5; // rax
  __int64 *v6; // r12
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 result; // rax
  unsigned __int64 v10; // r8
  unsigned int v11; // esi
  __int64 v12; // rdx
  unsigned __int64 v13; // r10
  __int64 v14; // rdx
  __int64 v15; // r9
  unsigned __int64 v16; // rdi
  __int64 v17; // [rsp-8h] [rbp-20h]
  int v18; // [rsp+0h] [rbp-18h]

  v5 = sub_19425F0(a1, *(_QWORD *)(a2 + 24), a3, a4);
  if ( !v5 )
    return 1;
  v6 = v5;
  v7 = sub_BFA3B0(a2);
  v8 = sub_1933BC0(a1, v7, *(double *)a3.m128_u64, a4);
  if ( v8 == 1 )
    return 1;
  v10 = v8 & 0xFFFFFFFFFFFFFFFELL;
  v11 = *(_DWORD *)(a2 + 32);
  v12 = *(unsigned int *)(a2 + 44);
  v13 = v12 | ((unsigned __int64)*(unsigned int *)(a2 + 36) << 32);
  v14 = v12 << 32;
  v15 = *(unsigned int *)(a2 + 40);
  v16 = *a1;
  switch ( (*(_WORD *)a2 + 431) & 0x1FF )
  {
    case 0:
      result = sub_16B28E0(v16, v11, 0x91u, v6, v10, v14 | v15, *(double *)a3.m128_u64, v13, v17, v18);
      break;
    case 1:
      result = sub_16B28E0(v16, v11, 0x90u, v6, v10, v14 | v15, *(double *)a3.m128_u64, v13, v17, v18);
      break;
    case 2:
      result = sub_16B28E0(v16, v11, 0x84u, v6, v10, v14 | v15, *(double *)a3.m128_u64, v13, v17, v18);
      break;
    case 3:
      result = sub_16B28E0(v16, v11, 0x82u, v6, v10, v14 | v15, *(double *)a3.m128_u64, v13, v17, v18);
      break;
    case 4:
      result = sub_16B28E0(v16, v11, 0x162u, v6, v10, v14 | v15, *(double *)a3.m128_u64, v13, v17, v18);
      break;
  }
  return result;
}
