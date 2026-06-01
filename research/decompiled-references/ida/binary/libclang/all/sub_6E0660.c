unsigned __int64 __fastcall sub_6E0660(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rbp
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  _QWORD *v16; // rdi
  __int64 v17; // rax

  if ( !a2 )
  {
    sub_B0CC40(0);
    BUG();
  }
  v4 = sub_B0CC40(a2 - 24);
  v5 = *(_QWORD *)(a2 + 8);
  v6 = v4;
  v7 = *(unsigned int *)(a3 + 8);
  if ( *(unsigned int *)(a3 + 12) < (unsigned __int64)(v7 + 1) )
  {
    sub_25D6060(a3, a3 + 16, v7 + 1, 4);
    v7 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v7) = v5;
  v8 = HIDWORD(v5);
  v9 = *(unsigned int *)(a3 + 12);
  v10 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v10;
  if ( v9 < v10 + 1 )
  {
    sub_25D6060(a3, a3 + 16, v10 + 1, 4);
    v10 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v10) = v8;
  v11 = *(unsigned int *)(a3 + 12);
  v12 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v12;
  if ( v11 < v12 + 1 )
  {
    sub_25D6060(a3, a3 + 16, v12 + 1, 4);
    v12 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v12) = v6;
  v13 = HIDWORD(v6);
  v14 = *(unsigned int *)(a3 + 12);
  v15 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v15;
  if ( v14 < v15 + 1 )
  {
    sub_25D6060(a3, a3 + 16, v15 + 1, 4);
    v15 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v15) = v13;
  v16 = *(_QWORD **)a3;
  v17 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v17;
  return sub_6999F0(v16, (__int64)v16 + 4 * v17);
}

