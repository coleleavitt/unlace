/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100028140
// Address: 0x0000000100028140

//----- (0000000100028140) ----------------------------------------------------
__int64 __fastcall sub_100028140(__int64 a1)
{
  unsigned __int64 v1; // r13
  __int64 v3; // r12
  __int64 v4; // r13
  unsigned int v5; // r15d
  unsigned __int8 *v6; // rsi
  _QWORD *v7; // r14
  __int64 v8; // rdi
  __int64 v9; // rdi
  unsigned __int8 *v10; // rsi
  __int64 v11; // rdi
  _Unwind_Exception *v13; // rax
  int v14; // edx
  unsigned __int8 v15[8]; // [rsp+0h] [rbp-70h] BYREF
  __int128 v16; // [rsp+8h] [rbp-68h]
  __int64 v17; // [rsp+18h] [rbp-58h]
  unsigned __int8 v18[8]; // [rsp+20h] [rbp-50h] BYREF
  __int128 v19; // [rsp+28h] [rbp-48h]
  __int64 v20; // [rsp+38h] [rbp-38h]

  v1 = *(_QWORD *)(a1 + 432);
  if ( v1 <= 2 )
  {
    if ( under_debugger == 1 )
      BUG();
    interr(0x59Fu);
    if ( v14 )
      sub_100001690(v13);
    _Unwind_Resume(v13);
  }
  v3 = *(_QWORD *)(a1 + 424);
  v4 = 32 * v1;
  v5 = -1;
  if ( (unsigned __int8)sub_1000409F0(v3 + v4 - 96) )
  {
    swap_idcvs(
      (__int128 *)(v3 + v4 - 96),
      (__int128 *)(v4 + v3 + ((32 * (*(_QWORD *)(v4 + v3 - 88) == 0)) | 0xFFFFFFFFFFFFFFC0LL)));
    v6 = (unsigned __int8 *)(*(_QWORD *)(a1 + 424) + 32LL * *(_QWORD *)(a1 + 432) - 32);
    v18[0] = 2;
    v19 = 0;
    v20 = 0;
    copy_idcv(v18, v6);
    v7 = (_QWORD *)(a1 + 432);
    v8 = *(_QWORD *)(a1 + 432);
    if ( v8 )
    {
      v9 = v8 - 1;
      *(_QWORD *)(a1 + 432) = v9;
      free_idcv((unsigned __int8 *)(*(_QWORD *)(a1 + 424) + 32 * v9));
    }
    free_idcv(v18);
    v10 = (unsigned __int8 *)(*(_QWORD *)(a1 + 424) + 32LL * *(_QWORD *)(a1 + 432) - 32);
    v15[0] = 2;
    v16 = 0;
    v17 = 0;
    copy_idcv(v15, v10);
    if ( *v7 )
    {
      v11 = *v7 - 1LL;
      *(_QWORD *)(a1 + 432) = v11;
      free_idcv((unsigned __int8 *)(*(_QWORD *)(a1 + 424) + 32 * v11));
    }
    v5 = 0;
    free_idcv(v15);
  }
  return v5;
}
// 1000282D0: variable 'v14' is possibly undefined
// 1000282D5: variable 'v13' is possibly undefined
// 1000AE23D: using guessed type char under_debugger;
