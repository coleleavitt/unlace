unsigned __int64 __fastcall sub_6E11F0(__int64 a1, _QWORD *a2, __int64 a3)
{
  int v4; // r12d
  __int64 v5; // rbp
  __int64 v6; // rax
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // r13
  int v9; // r14d
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  _QWORD *v24; // rdi
  __int64 v25; // rax

  if ( !a2 )
    BUG();
  if ( (*((_BYTE *)a2 - 5) & 8) != 0 )
  {
    v4 = a2[3];
    v5 = HIDWORD(a2[3]);
  }
  else
  {
    LODWORD(v5) = 0;
    v4 = 0;
  }
  v6 = *(unsigned int *)(a3 + 8);
  v7 = a2[1];
  v8 = a2[2];
  v9 = (unsigned __int8)(*((_WORD *)a2 - 3) >> 3);
  if ( *(unsigned int *)(a3 + 12) < (unsigned __int64)(v6 + 1) )
  {
    sub_25D6060(a3, a3 + 16, v6 + 1, 4);
    v6 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v6) = v9;
  v10 = *(unsigned int *)(a3 + 12);
  v11 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v11;
  if ( v10 < v11 + 1 )
  {
    sub_25D6060(a3, a3 + 16, v11 + 1, 4);
    v11 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v11) = v7;
  v12 = HIDWORD(v7);
  v13 = *(unsigned int *)(a3 + 12);
  v14 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v14;
  if ( v13 < v14 + 1 )
  {
    sub_25D6060(a3, a3 + 16, v14 + 1, 4);
    v14 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v14) = v12;
  v15 = *(unsigned int *)(a3 + 12);
  v16 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v16;
  if ( v15 < v16 + 1 )
  {
    sub_25D6060(a3, a3 + 16, v16 + 1, 4);
    v16 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v16) = v8;
  v17 = HIDWORD(v8);
  v18 = *(unsigned int *)(a3 + 12);
  v19 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v19;
  if ( v18 < v19 + 1 )
  {
    sub_25D6060(a3, a3 + 16, v19 + 1, 4);
    v19 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v19) = v17;
  v20 = *(unsigned int *)(a3 + 12);
  v21 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v21;
  if ( v20 < v21 + 1 )
  {
    sub_25D6060(a3, a3 + 16, v21 + 1, 4);
    v21 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v21) = v4;
  v22 = *(unsigned int *)(a3 + 12);
  v23 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v23;
  if ( v22 < v23 + 1 )
  {
    sub_25D6060(a3, a3 + 16, v23 + 1, 4);
    v23 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v23) = v5;
  v24 = *(_QWORD **)a3;
  v25 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v25;
  return sub_6999F0(v24, (__int64)v24 + 4 * v25);
}

