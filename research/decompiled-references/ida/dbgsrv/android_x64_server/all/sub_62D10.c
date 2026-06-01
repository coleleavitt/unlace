/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_62D10
// Address: 0x0000000000062D10

//----- (0000000000062D10) ----------------------------------------------------
__int64 __fastcall sub_62D10(__int64 a1, double a2, __m128 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // r13
  __int64 v6; // rbp
  unsigned int v7; // r14d
  char *v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rdi
  char *v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rdi
  char v15[8]; // [rsp+0h] [rbp-78h] BYREF
  __int128 v16; // [rsp+8h] [rbp-70h]
  __int64 v17; // [rsp+18h] [rbp-60h]
  char v18[8]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v19; // [rsp+28h] [rbp-50h]
  __int64 v20; // [rsp+38h] [rbp-40h]
  unsigned __int64 v21; // [rsp+40h] [rbp-38h]

  v21 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 432);
  if ( v3 <= 2 )
  {
    if ( !(_BYTE)under_debugger )
      interr(1439);
    BUG();
  }
  v5 = *(_QWORD *)(a1 + 424);
  v6 = 32 * (v3 - 3);
  v7 = -1;
  if ( (unsigned __int8)sub_7CAF0(v6 + v5, a2, a3) )
  {
    swap_idcvs((__int128 *)(v6 + v5), (__int128 *)(32 * ((*(_QWORD *)(v5 + v6 + 8) == 0) + v3) + v5 - 64));
    v8 = (char *)(*(_QWORD *)(a1 + 424) + 32LL * *(_QWORD *)(a1 + 432) - 32);
    v18[0] = 2;
    v19 = 0;
    v20 = 0;
    copy_idcv(v18, v8, 0.0, a3);
    v9 = *(_QWORD *)(a1 + 432);
    if ( v9 )
    {
      v10 = v9 - 1;
      *(_QWORD *)(a1 + 432) = v10;
      free_idcv((char *)(*(_QWORD *)(a1 + 424) + 32 * v10), 0.0, a3);
    }
    free_idcv(v18, 0.0, a3);
    v11 = (char *)(*(_QWORD *)(a1 + 424) + 32LL * *(_QWORD *)(a1 + 432) - 32);
    v15[0] = 2;
    v16 = 0;
    v17 = 0;
    copy_idcv(v15, v11, 0.0, a3);
    v12 = *(_QWORD *)(a1 + 432);
    if ( v12 )
    {
      v13 = v12 - 1;
      *(_QWORD *)(a1 + 432) = v13;
      free_idcv((char *)(*(_QWORD *)(a1 + 424) + 32 * v13), 0.0, a3);
    }
    v7 = 0;
    free_idcv(v15, 0.0, a3);
  }
  return v7;
}
// 158B40: using guessed type __int64 under_debugger;
