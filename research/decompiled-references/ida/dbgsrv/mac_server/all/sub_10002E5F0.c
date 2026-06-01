/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002E5F0
// Address: 0x000000010002E5F0

//----- (000000010002E5F0) ----------------------------------------------------
__int64 __fastcall sub_10002E5F0(__int64 a1, unsigned __int64 a2, unsigned __int8 *a3)
{
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // r15
  unsigned __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // r12
  __int64 v10; // rdi
  __int64 v12; // r13
  __int64 v13; // r12
  __int64 v14; // rdi
  unsigned __int8 v15[8]; // [rsp+0h] [rbp-50h] BYREF
  __int128 v16; // [rsp+8h] [rbp-48h]
  __int64 v17; // [rsp+18h] [rbp-38h]

  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 > a2 )
  {
    v5 = 32 * a2;
    do
    {
      free_idcv((unsigned __int8 *)(v5 + *(_QWORD *)a1));
      --v4;
      v5 += 32LL;
    }
    while ( a2 != v4 );
LABEL_4:
    *(_QWORD *)(a1 + 8) = a2;
    return __stack_chk_guard;
  }
  if ( v4 >= a2 )
    return __stack_chk_guard;
  if ( *(_QWORD *)a1 > (unsigned __int64)a3 || *(_QWORD *)a1 + 32LL * *(_QWORD *)(a1 + 16) <= (unsigned __int64)a3 )
  {
    if ( *(_QWORD *)(a1 + 16) < a2 )
    {
      *(_QWORD *)a1 = qvector_reserve(a1, *(void **)a1, a2, 0x20u);
      v4 = *(_QWORD *)(a1 + 8);
    }
    v12 = a2 - v4;
    if ( a2 > v4 )
    {
      v13 = 32 * v4;
      do
      {
        v14 = *(_QWORD *)a1 + v13;
        *(_BYTE *)v14 = 2;
        *(_OWORD *)(v14 + 8) = 0;
        *(_QWORD *)(v14 + 24) = 0;
        copy_idcv((unsigned __int8 *)v14, a3);
        v13 += 32;
        --v12;
      }
      while ( v12 );
    }
    goto LABEL_4;
  }
  v15[0] = 2;
  v16 = 0;
  v17 = 0;
  copy_idcv(v15, a3);
  if ( *(_QWORD *)(a1 + 16) < a2 )
    *(_QWORD *)a1 = qvector_reserve(a1, *(void **)a1, a2, 0x20u);
  v7 = *(_QWORD *)(a1 + 8);
  v8 = a2 - v7;
  if ( a2 > v7 )
  {
    v9 = 32 * v7;
    do
    {
      v10 = *(_QWORD *)a1 + v9;
      *(_BYTE *)v10 = 2;
      *(_OWORD *)(v10 + 8) = 0;
      *(_QWORD *)(v10 + 24) = 0;
      copy_idcv((unsigned __int8 *)v10, v15);
      v9 += 32;
      --v8;
    }
    while ( v8 );
  }
  *(_QWORD *)(a1 + 8) = a2;
  free_idcv(v15);
  return __stack_chk_guard;
}
