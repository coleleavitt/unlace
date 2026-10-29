__int64 __fastcall sub_176D850(__int64 *a1, __int64 a2, __m128 a3)
{
  void **v5; // rax
  __int64 *v6; // r12
  unsigned __int16 *v7; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r8
  unsigned int v11; // esi
  __int64 v12; // rdx
  unsigned __int64 v13; // r10
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 result; // rax
  __int64 v17; // [rsp-8h] [rbp-20h]
  int v18; // [rsp+0h] [rbp-18h]

  v5 = sub_176A140(a1, *(void ***)(a2 + 24), a3);
  if ( !v5 )
    return 1;
  v6 = (__int64 *)v5;
  v7 = (unsigned __int16 *)sub_BFA3B0(a2);
  v8 = sub_175B800(a1, v7);
  if ( v8 == 1 )
    return 1;
  v9 = *a1;
  v10 = v8 & 0xFFFFFFFFFFFFFFFELL;
  if ( *(_DWORD *)(*a1 + 12632) || v6 != *(__int64 **)(a2 + 24) || (result = a2, *(_QWORD *)(a2 + 16) != v10) )
  {
    v11 = *(_DWORD *)(a2 + 32);
    v12 = *(unsigned int *)(a2 + 44);
    v13 = v12 | ((unsigned __int64)*(unsigned int *)(a2 + 36) << 32);
    v14 = *(unsigned int *)(a2 + 40);
    v15 = v12 << 32;
    switch ( (*(_WORD *)a2 + 431) & 0x1FF )
    {
      case 0:
        result = sub_16B28E0(v9, v11, 0x91u, v6, v10, v15 | v14, *(double *)a3.m128_u64, v13, v17, v18);
        break;
      case 1:
        result = sub_16B28E0(v9, v11, 0x90u, v6, v10, v15 | v14, *(double *)a3.m128_u64, v13, v17, v18);
        break;
      case 2:
        result = sub_16B28E0(v9, v11, 0x84u, v6, v10, v15 | v14, *(double *)a3.m128_u64, v13, v17, v18);
        break;
      case 3:
        result = sub_16B28E0(v9, v11, 0x82u, v6, v10, v15 | v14, *(double *)a3.m128_u64, v13, v17, v18);
        break;
      case 4:
        result = sub_16B28E0(v9, v11, 0x162u, v6, v10, v15 | v14, *(double *)a3.m128_u64, v13, v17, v18);
        break;
    }
  }
  return result;
}
