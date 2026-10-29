unsigned __int64 __fastcall sub_A47C10(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rbp
  int v6; // r12d
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  _QWORD *v12; // rdi
  __int64 v13; // rax

  if ( !a2 )
    BUG();
  v4 = *(unsigned int *)(a3 + 8);
  v5 = *(_QWORD *)(a2 - 8);
  v6 = *(_WORD *)(a2 - 12) >> 2;
  if ( v4 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
  {
    sub_22134E0(a3, a3 + 16, v4 + 1, 4);
    v4 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v4) = v6;
  v7 = *(unsigned int *)(a3 + 12);
  v8 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v8;
  if ( v8 + 1 > v7 )
  {
    sub_22134E0(a3, a3 + 16, v8 + 1, 4);
    v8 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v8) = v5;
  v9 = HIDWORD(v5);
  v10 = *(unsigned int *)(a3 + 12);
  v11 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v11;
  if ( v11 + 1 > v10 )
  {
    sub_22134E0(a3, a3 + 16, v11 + 1, 4);
    v11 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v11) = v9;
  v12 = *(_QWORD **)a3;
  v13 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v13;
  return sub_961DD0(v12, (__int64)v12 + 4 * v13);
}

