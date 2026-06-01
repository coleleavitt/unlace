__int64 __fastcall sub_198B9D0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 *v5; // rax
  __int64 *v6; // r12
  unsigned __int16 *v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r8
  unsigned int v10; // esi
  __int64 v11; // rdx
  unsigned __int64 v12; // r11
  __int64 v13; // rdx
  __int64 v14; // r9
  unsigned __int64 v15; // rdi
  __int64 result; // rax
  __int64 v17; // [rsp-8h] [rbp-20h]
  int v18; // [rsp+0h] [rbp-18h]

  v5 = sub_1988430(a1, *(_QWORD *)(a2 + 24), a3, a4);
  if ( !v5 )
    return 1;
  v6 = v5;
  v7 = (unsigned __int16 *)sub_BFA3B0(a2);
  v8 = sub_190CCA0(a1, v7, *(double *)a3.m128_u64, a4);
  if ( v8 == 1 )
    return 1;
  v9 = v8 & 0xFFFFFFFFFFFFFFFELL;
  if ( v6 != *(__int64 **)(a2 + 24) || (result = a2, *(_QWORD *)(a2 + 16) != v9) )
  {
    v10 = *(_DWORD *)(a2 + 32);
    v11 = *(unsigned int *)(a2 + 44);
    v12 = v11 | ((unsigned __int64)*(unsigned int *)(a2 + 36) << 32);
    v13 = v11 << 32;
    v14 = *(unsigned int *)(a2 + 40);
    v15 = *a1;
    switch ( (*(_WORD *)a2 + 431) & 0x1FF )
    {
      case 0:
        result = sub_16B28E0(v15, v10, 0x91u, v6, v9, v13 | v14, *(double *)a3.m128_u64, v12, v17, v18);
        break;
      case 1:
        result = sub_16B28E0(v15, v10, 0x90u, v6, v9, v13 | v14, *(double *)a3.m128_u64, v12, v17, v18);
        break;
      case 2:
        result = sub_16B28E0(v15, v10, 0x84u, v6, v9, v13 | v14, *(double *)a3.m128_u64, v12, v17, v18);
        break;
      case 3:
        result = sub_16B28E0(v15, v10, 0x82u, v6, v9, v13 | v14, *(double *)a3.m128_u64, v12, v17, v18);
        break;
      case 4:
        result = sub_16B28E0(v15, v10, 0x162u, v6, v9, v13 | v14, *(double *)a3.m128_u64, v12, v17, v18);
        break;
    }
  }
  return result;
}
