/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_624F0
// Address: 0x00000000000624F0

//----- (00000000000624F0) ----------------------------------------------------
__int64 __fastcall sub_624F0(__int64 a1, double a2, __m128 a3)
{
  _QWORD *v4; // r14
  __int64 v5; // rax
  _QWORD *v7; // rdi
  _BYTE *v8; // rdi
  __int64 v9; // rax
  char *v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rdi
  char v13[8]; // [rsp+0h] [rbp-38h] BYREF
  __int128 v14; // [rsp+8h] [rbp-30h]
  __int64 v15; // [rsp+18h] [rbp-20h]
  unsigned __int64 v16; // [rsp+20h] [rbp-18h]

  v16 = __readfsqword(0x28u);
  v4 = *(_QWORD **)(a1 + 192);
  v5 = v4[9];
  if ( v5 )
  {
    if ( v5 + *(_DWORD *)(a1 + 448) + 1 != *(_QWORD *)(a1 + 144) )
      return set_qerrno(0x4F4u);
  }
  else
  {
    *(_DWORD *)(a1 + 448) = *(_DWORD *)(a1 + 144) - 1;
    v5 = v4[9];
  }
  v7 = v4 + 8;
  if ( v4[10] >= (unsigned __int64)(v5 + 1) )
  {
    v8 = (_BYTE *)*v7;
  }
  else
  {
    v8 = qvector_reserve((__int64)v7, (char *)v4[8], v5 + 1, 0x20u);
    v4[8] = v8;
    v5 = v4[9];
  }
  v9 = 32 * v5;
  v8[v9] = 2;
  *(_OWORD *)&v8[v9 + 8] = 0;
  *(_QWORD *)&v8[v9 + 24] = 0;
  *(_QWORD *)&v8[v9 + 8] = 0;
  ++v4[9];
  if ( *(_QWORD *)(a1 + 432) != 1 )
  {
    if ( !(_BYTE)under_debugger )
      interr(1437);
    BUG();
  }
  swap_idcvs((__int128 *)&v8[v9], *(__int128 **)(a1 + 424));
  v10 = (char *)(*(_QWORD *)(a1 + 424) + 32LL * *(_QWORD *)(a1 + 432) - 32);
  v13[0] = 2;
  v14 = 0;
  v15 = 0;
  copy_idcv(v13, v10, 0.0, a3);
  v11 = *(_QWORD *)(a1 + 432);
  if ( v11 )
  {
    v12 = v11 - 1;
    *(_QWORD *)(a1 + 432) = v12;
    free_idcv((char *)(*(_QWORD *)(a1 + 424) + 32 * v12), 0.0, a3);
  }
  free_idcv(v13, 0.0, a3);
  return 0;
}
// 158B40: using guessed type __int64 under_debugger;
