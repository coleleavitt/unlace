__int64 __fastcall sub_1DD2EE0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 *v6; // rax
  __int64 *v7; // r12
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int16 *v13; // rax
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // r8
  unsigned int v16; // esi
  __int64 v17; // rdx
  unsigned __int64 v18; // r10
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 result; // rax
  __int64 v22; // [rsp-8h] [rbp-20h]
  int v23; // [rsp+0h] [rbp-18h]

  v6 = sub_1DD1930((__int64)a1, *(_QWORD *)(a2 + 24), a3, a4);
  if ( !v6 )
    return 1;
  v7 = v6;
  v8 = sub_BFA3B0(a2);
  v13 = sub_1DC71F0(a1, v8, v9, v10, v11, v12, a3, a4);
  if ( v13 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return 1;
  v14 = *a1;
  v15 = (unsigned __int64)v13 & 0xFFFFFFFFFFFFFFFELL;
  if ( *(_DWORD *)(*a1 + 12632) || v7 != *(__int64 **)(a2 + 24) || (result = a2, *(_QWORD *)(a2 + 16) != v15) )
  {
    v16 = *(_DWORD *)(a2 + 32);
    v17 = *(unsigned int *)(a2 + 44);
    v18 = v17 | ((unsigned __int64)*(unsigned int *)(a2 + 36) << 32);
    v19 = *(unsigned int *)(a2 + 40);
    v20 = v17 << 32;
    switch ( (*(_WORD *)a2 + 431) & 0x1FF )
    {
      case 0:
        result = sub_16B28E0(v14, v16, 0x91u, v7, v15, v20 | v19, *(double *)a3.m128_u64, v18, v22, v23);
        break;
      case 1:
        result = sub_16B28E0(v14, v16, 0x90u, v7, v15, v20 | v19, *(double *)a3.m128_u64, v18, v22, v23);
        break;
      case 2:
        result = sub_16B28E0(v14, v16, 0x84u, v7, v15, v20 | v19, *(double *)a3.m128_u64, v18, v22, v23);
        break;
      case 3:
        result = sub_16B28E0(v14, v16, 0x82u, v7, v15, v20 | v19, *(double *)a3.m128_u64, v18, v22, v23);
        break;
      case 4:
        result = sub_16B28E0(v14, v16, 0x162u, v7, v15, v20 | v19, *(double *)a3.m128_u64, v18, v22, v23);
        break;
    }
  }
  return result;
}
