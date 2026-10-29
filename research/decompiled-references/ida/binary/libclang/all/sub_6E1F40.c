unsigned __int64 __fastcall sub_6E1F40(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  int v5; // r14d
  int v6; // r13d
  int v7; // r12d
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  _QWORD *v18; // rdi
  __int64 v19; // rax

  if ( !a2 )
    BUG();
  v4 = *(unsigned int *)(a3 + 8);
  v5 = *(_DWORD *)(a2 + 8);
  v6 = *(unsigned __int16 *)(a2 + 12);
  v7 = *(unsigned __int16 *)(a2 + 14);
  v8 = *(_QWORD *)(a2 + 16);
  if ( *(unsigned int *)(a3 + 12) < (unsigned __int64)(v4 + 1) )
  {
    sub_25D6060(a3, a3 + 16, v4 + 1, 4);
    v4 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v4) = v5;
  v9 = *(unsigned int *)(a3 + 12);
  v10 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v10;
  if ( v9 < v10 + 1 )
  {
    sub_25D6060(a3, a3 + 16, v10 + 1, 4);
    v10 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v10) = v6;
  v11 = *(unsigned int *)(a3 + 12);
  v12 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v12;
  if ( v11 < v12 + 1 )
  {
    sub_25D6060(a3, a3 + 16, v12 + 1, 4);
    v12 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v12) = v7;
  v13 = *(unsigned int *)(a3 + 12);
  v14 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v14;
  if ( v13 < v14 + 1 )
  {
    sub_25D6060(a3, a3 + 16, v14 + 1, 4);
    v14 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v14) = v8;
  v15 = HIDWORD(v8);
  v16 = *(unsigned int *)(a3 + 12);
  v17 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v17;
  if ( v16 < v17 + 1 )
  {
    sub_25D6060(a3, a3 + 16, v17 + 1, 4);
    v17 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v17) = v15;
  v18 = *(_QWORD **)a3;
  v19 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v19;
  return sub_6999F0(v18, (__int64)v18 + 4 * v19);
}

