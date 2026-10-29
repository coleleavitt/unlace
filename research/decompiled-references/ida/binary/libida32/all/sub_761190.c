__int64 __fastcall sub_761190(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbp
  __int64 v3; // rcx
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  char v12[8]; // [rsp+0h] [rbp-48h] BYREF
  __int128 v13; // [rsp+8h] [rbp-40h]
  __int64 v14; // [rsp+18h] [rbp-30h]
  unsigned __int64 v15; // [rsp+28h] [rbp-20h]

  v2 = *(_QWORD **)(a1 + 184);
  v3 = *(_QWORD *)(a1 + 136);
  v15 = __readfsqword(0x28u);
  v5 = v2[9];
  if ( v5 )
  {
    if ( v5 + *(_DWORD *)(a1 + 440) + 1 != v3 )
      return set_qerrno(1268, a2);
  }
  else
  {
    *(_DWORD *)(a1 + 440) = v3 - 1;
    v5 = v2[9];
  }
  v6 = v2[8];
  if ( v2[10] < (unsigned __int64)(v5 + 1) )
  {
    v10 = qvector_reserve(v2 + 8, v6, v5 + 1, 32);
    v2[8] = v10;
    v6 = v10;
    v5 = v2[9];
  }
  v7 = v6 + 32 * v5;
  *(_BYTE *)v7 = 2;
  *(_QWORD *)(v7 + 24) = 0;
  *(_OWORD *)(v7 + 8) = 0;
  ++v2[9];
  if ( *(_QWORD *)(a1 + 424) != 1 )
  {
    if ( !under_debugger )
      interr(1437);
    BUG();
  }
  swap_idcvs(v7, *(_QWORD *)(a1 + 416));
  v12[0] = 2;
  v13 = 0;
  v14 = 0;
  copy_idcv(v12);
  v8 = *(_QWORD *)(a1 + 424);
  if ( v8 )
  {
    v11 = v8 - 1;
    *(_QWORD *)(a1 + 424) = v11;
    free_idcv(*(_QWORD *)(a1 + 416) + 32 * v11);
  }
  free_idcv(v12);
  return 0;
}

