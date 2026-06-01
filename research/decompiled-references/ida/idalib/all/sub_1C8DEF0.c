__int64 __fastcall sub_1C8DEF0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 *v5; // rax
  __int64 *v6; // r12
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  unsigned __int16 *v11; // rax
  __int64 result; // rax
  unsigned __int64 v13; // r8
  unsigned int v14; // esi
  __int64 v15; // rdx
  unsigned __int64 v16; // r10
  __int64 v17; // rdx
  __int64 v18; // r9
  unsigned __int64 v19; // rdi
  __int64 v20; // [rsp-8h] [rbp-20h]
  int v21; // [rsp+0h] [rbp-18h]

  v5 = sub_1C8AA80(a1, *(_QWORD *)(a2 + 24), a3, a4);
  if ( !v5 )
    return 1;
  v6 = v5;
  v7 = sub_BFA3B0(a2);
  v11 = sub_1C7CFE0(a1, v7, a3, a4, v8, v9, v10);
  if ( v11 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return 1;
  v13 = (unsigned __int64)v11 & 0xFFFFFFFFFFFFFFFELL;
  v14 = *(_DWORD *)(a2 + 32);
  v15 = *(unsigned int *)(a2 + 44);
  v16 = v15 | ((unsigned __int64)*(unsigned int *)(a2 + 36) << 32);
  v17 = v15 << 32;
  v18 = *(unsigned int *)(a2 + 40);
  v19 = *a1;
  switch ( (*(_WORD *)a2 + 431) & 0x1FF )
  {
    case 0:
      result = sub_16B28E0(v19, v14, 0x91u, v6, v13, v17 | v18, *(double *)a3.m128_u64, v16, v20, v21);
      break;
    case 1:
      result = sub_16B28E0(v19, v14, 0x90u, v6, v13, v17 | v18, *(double *)a3.m128_u64, v16, v20, v21);
      break;
    case 2:
      result = sub_16B28E0(v19, v14, 0x84u, v6, v13, v17 | v18, *(double *)a3.m128_u64, v16, v20, v21);
      break;
    case 3:
      result = sub_16B28E0(v19, v14, 0x82u, v6, v13, v17 | v18, *(double *)a3.m128_u64, v16, v20, v21);
      break;
    case 4:
      result = sub_16B28E0(v19, v14, 0x162u, v6, v13, v17 | v18, *(double *)a3.m128_u64, v16, v20, v21);
      break;
  }
  return result;
}
