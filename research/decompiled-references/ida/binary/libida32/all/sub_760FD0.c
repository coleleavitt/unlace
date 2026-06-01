__int64 __fastcall sub_760FD0(__int64 a1)
{
  unsigned __int64 v1; // rbp
  __int64 v2; // r13
  __int64 v4; // rbp
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  char v11[8]; // [rsp+0h] [rbp-58h] BYREF
  __int128 v12; // [rsp+8h] [rbp-50h]
  __int64 v13; // [rsp+18h] [rbp-40h]
  unsigned __int64 v14; // [rsp+28h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 424);
  if ( v1 <= 2 )
  {
    if ( !under_debugger )
      interr(1439);
    BUG();
  }
  v2 = *(_QWORD *)(a1 + 416);
  v4 = 32 * (v1 - 3);
  if ( !(unsigned __int8)sub_7772E0(v2 + v4) )
    return 0xFFFFFFFFLL;
  v5 = v2 + v4 + 64;
  if ( *(_DWORD *)(v2 + v4 + 8) )
    v5 = v2 + v4 + 32;
  swap_idcvs(v2 + v4, v5);
  v11[0] = 2;
  v12 = 0;
  v13 = 0;
  copy_idcv(v11);
  v6 = *(_QWORD *)(a1 + 424);
  if ( v6 )
  {
    v10 = v6 - 1;
    *(_QWORD *)(a1 + 424) = v10;
    free_idcv(*(_QWORD *)(a1 + 416) + 32 * v10);
  }
  free_idcv(v11);
  v11[0] = 2;
  v12 = 0;
  v13 = 0;
  copy_idcv(v11);
  v7 = *(_QWORD *)(a1 + 424);
  if ( v7 )
  {
    v9 = v7 - 1;
    *(_QWORD *)(a1 + 424) = v9;
    free_idcv(*(_QWORD *)(a1 + 416) + 32 * v9);
  }
  free_idcv(v11);
  return 0;
}

