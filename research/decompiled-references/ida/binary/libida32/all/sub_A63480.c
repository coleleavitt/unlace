__int64 __fastcall sub_A63480(_QWORD *a1, const void *a2, size_t a3, int a4)
{
  __int64 v6; // rdi
  int v7; // r12d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rax
  int v16; // r12d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rax

  v6 = a1[2188];
  if ( (*(_BYTE *)(a1[290] + 1LL) & 8) != 0 )
  {
    v7 = sub_6D2E30(v6, a2, a3);
    v12 = sub_6E4280((__int64 *)(*(_QWORD *)(a1[283] + 80LL) + 72LL), *(_QWORD *)(a1[283] + 80LL), v8, v9, v10, v11);
    if ( v12 )
      LODWORD(v12) = (_DWORD)v12 + 40;
    v13 = sub_B72D20((_DWORD)a1, a4, (_DWORD)v12, 0, 0, v7, 0, 0);
  }
  else
  {
    v16 = sub_6D2E30(v6, a2, a3);
    v21 = sub_6E4280((__int64 *)(*(_QWORD *)(a1[283] + 80LL) + 72LL), *(_QWORD *)(a1[283] + 80LL), v17, v18, v19, v20);
    if ( v21 )
      LODWORD(v21) = (_DWORD)v21 + 40;
    v13 = sub_B5C610((_DWORD)a1, a4, (_DWORD)v21, 0, 0, v16, 0);
  }
  *(_BYTE *)(v13 + 29) |= 2u;
  v14 = sub_B0E220(a1, 0, 0, 0);
  sub_B68F20(v13, v14);
  return v13;
}

