/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001BB00
// Address: 0x000000010001BB00

//----- (000000010001BB00) ----------------------------------------------------
__int64 __fastcall sub_10001BB00(__int64 a1, __int128 *a2)
{
  __int64 v2; // rbx
  __int64 v3; // r14
  int v4; // eax
  __int64 *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // r11
  unsigned __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int64 v14; // r15
  char **v16; // r15
  char *v17; // rax
  char *v18; // rcx
  __int64 v19; // rcx
  __int128 v20; // [rsp+0h] [rbp-70h]
  __int128 v21; // [rsp+10h] [rbp-60h]
  __int128 v22; // [rsp+20h] [rbp-50h]
  __int128 v23; // [rsp+30h] [rbp-40h]

  v22 = *a2;
  v23 = a2[1];
  v2 = *((_QWORD *)a2 + 5);
  v21 = a2[4];
  v20 = a2[3];
  v3 = *(_QWORD *)(a1 + 40) + *((_QWORD *)a2 + 4);
  v4 = *(_DWORD *)(a1 + 52) - 1;
  *(_DWORD *)(a1 + 52) = v4;
  if ( v4 > 0
    && *(_QWORD *)(**(_QWORD **)(a1 + 24) + 72LL * *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) - 40)
    && (v5 = *(__int64 **)(a1 + 16), (v6 = 80 * v5[1]) != 0) )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
    v8 = v3 & v7;
    v9 = v7 & (v3 + v2);
    v10 = *v5;
    v11 = 0;
    while ( 1 )
    {
      v12 = *(_QWORD *)(v10 + v11 + 32);
      v13 = *(_QWORD *)(v10 + v11 + 40);
      v14 = v7 & (v13 + v12);
      if ( v8 > (v7 & v12) && v8 < v14 )
        break;
      if ( v9 > (v7 & v12) && v9 < v14 )
        break;
      v11 += 80;
      if ( v6 == v11 )
        goto LABEL_11;
    }
    return sub_100010070(
             (int)"Section 0x%llX of size %llX intersects with the existing section(0x%llX, size %llX). Skipped",
             v3,
             v2,
             v12,
             v13,
             v9);
  }
  else
  {
LABEL_11:
    v16 = *(char ***)(a1 + 16);
    v17 = *v16;
    v18 = v16[1];
    if ( v16[2] < v18 + 1 )
    {
      v17 = (char *)qvector_reserve(*(_QWORD *)(a1 + 16), v17, (unsigned __int64)(v18 + 1), 0x50u);
      *v16 = v17;
      v18 = v16[1];
    }
    v19 = 80LL * (_QWORD)v18;
    *(_OWORD *)&v17[v19 + 16] = v23;
    *(_OWORD *)&v17[v19] = v22;
    *(_QWORD *)&v17[v19 + 32] = v3;
    *(_QWORD *)&v17[v19 + 40] = v2;
    *(_OWORD *)&v17[v19 + 48] = v20;
    *(_OWORD *)&v17[v19 + 64] = v21;
    ++v16[1];
    return __stack_chk_guard;
  }
}
