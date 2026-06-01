__int64 __fastcall sub_7815D0(__int64 a1)
{
  _QWORD *v1; // rbp
  __int64 v2; // rcx
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  char v11[8]; // [rsp+0h] [rbp-48h] BYREF
  __int128 v12; // [rsp+8h] [rbp-40h]
  __int64 v13; // [rsp+18h] [rbp-30h]
  unsigned __int64 v14; // [rsp+28h] [rbp-20h]

  v1 = *(_QWORD **)(a1 + 192);
  v2 = *(_QWORD *)(a1 + 144);
  v14 = __readfsqword(0x28u);
  v4 = v1[9];
  if ( v4 )
  {
    if ( v4 + *(_DWORD *)(a1 + 448) + 1 != v2 )
      return set_qerrno(1268);
  }
  else
  {
    *(_DWORD *)(a1 + 448) = v2 - 1;
    v4 = v1[9];
  }
  v5 = v1[8];
  if ( v1[10] < (unsigned __int64)(v4 + 1) )
  {
    v9 = qvector_reserve(v1 + 8, v5, v4 + 1, 32);
    v1[8] = v9;
    v5 = v9;
    v4 = v1[9];
  }
  v6 = v5 + 32 * v4;
  *(_BYTE *)v6 = 2;
  *(_QWORD *)(v6 + 24) = 0;
  *(_OWORD *)(v6 + 8) = 0;
  ++v1[9];
  if ( *(_QWORD *)(a1 + 432) != 1 )
  {
    if ( !under_debugger )
      interr(1437);
    BUG();
  }
  swap_idcvs(v6, *(_QWORD *)(a1 + 424));
  v11[0] = 2;
  v12 = 0;
  v13 = 0;
  copy_idcv(v11);
  v7 = *(_QWORD *)(a1 + 432);
  if ( v7 )
  {
    v10 = v7 - 1;
    *(_QWORD *)(a1 + 432) = v10;
    free_idcv(*(_QWORD *)(a1 + 424) + 32 * v10);
  }
  free_idcv(v11);
  return 0;
}
