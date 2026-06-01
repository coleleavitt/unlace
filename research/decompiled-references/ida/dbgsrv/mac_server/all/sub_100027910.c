/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100027910
// Address: 0x0000000100027910

//----- (0000000100027910) ----------------------------------------------------
__int64 __fastcall sub_100027910(__int64 a1)
{
  __int64 v2; // r14
  __int64 v3; // rcx
  _BYTE *v5; // rax
  __int64 v6; // rcx
  unsigned __int8 *v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rdi
  _Unwind_Exception *v10; // rax
  int v11; // edx
  unsigned __int8 v12[8]; // [rsp+8h] [rbp-38h] BYREF
  __int128 v13; // [rsp+10h] [rbp-30h]
  __int64 v14; // [rsp+20h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 192);
  v3 = *(_QWORD *)(v2 + 72);
  if ( v3 )
  {
    if ( v3 + *(_DWORD *)(a1 + 448) + 1 != *(_QWORD *)(a1 + 144) )
      return set_qerrno();
  }
  else
  {
    *(_DWORD *)(a1 + 448) = *(_DWORD *)(a1 + 144) - 1;
    v3 = *(_QWORD *)(v2 + 72);
  }
  v5 = *(_BYTE **)(v2 + 64);
  if ( *(_QWORD *)(v2 + 80) < (unsigned __int64)(v3 + 1) )
  {
    v5 = qvector_reserve(v2 + 64, *(void **)(v2 + 64), v3 + 1, 0x20u);
    *(_QWORD *)(v2 + 64) = v5;
    v3 = *(_QWORD *)(v2 + 72);
  }
  v6 = 32 * v3;
  v5[v6] = 2;
  *(_OWORD *)&v5[v6 + 8] = 0;
  *(_QWORD *)&v5[v6 + 24] = 0;
  ++*(_QWORD *)(v2 + 72);
  if ( *(_QWORD *)(a1 + 432) != 1 )
  {
    if ( under_debugger == 1 )
      BUG();
    interr(0x59Du);
    if ( v11 )
      sub_100001690(v10);
    _Unwind_Resume(v10);
  }
  swap_idcvs((__int128 *)&v5[v6], *(__int128 **)(a1 + 424));
  v7 = (unsigned __int8 *)(*(_QWORD *)(a1 + 424) + 32LL * *(_QWORD *)(a1 + 432) - 32);
  v12[0] = 2;
  v13 = 0;
  v14 = 0;
  copy_idcv(v12, v7);
  v8 = *(_QWORD *)(a1 + 432);
  if ( v8 )
  {
    v9 = v8 - 1;
    *(_QWORD *)(a1 + 432) = v9;
    free_idcv((unsigned __int8 *)(*(_QWORD *)(a1 + 424) + 32 * v9));
  }
  free_idcv(v12);
  return 0;
}
// 100027A92: variable 'v11' is possibly undefined
// 100027A97: variable 'v10' is possibly undefined
// 1000AE23D: using guessed type char under_debugger;
