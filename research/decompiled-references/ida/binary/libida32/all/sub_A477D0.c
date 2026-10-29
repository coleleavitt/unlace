unsigned __int64 __fastcall sub_A477D0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  int v5; // r13d
  int v6; // r14d
  unsigned __int8 v7; // bp
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  _QWORD *v18; // rdi
  __int64 v19; // rax

  if ( !a2 )
    BUG();
  v4 = *(unsigned int *)(a3 + 8);
  v5 = *(unsigned __int8 *)(a2 - 8);
  v6 = *(_DWORD *)(a2 - 4);
  v7 = (*(_BYTE *)(a2 - 6) >> 3) & 0xF;
  v8 = *(_QWORD *)(a2 + 8);
  if ( v4 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
  {
    sub_22134E0(a3, a3 + 16, v4 + 1, 4);
    v4 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v4) = v8;
  v9 = HIDWORD(v8);
  v10 = *(unsigned int *)(a3 + 12);
  v11 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v11;
  if ( v11 + 1 > v10 )
  {
    sub_22134E0(a3, a3 + 16, v11 + 1, 4);
    v11 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v11) = v9;
  v12 = *(unsigned int *)(a3 + 12);
  v13 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v13;
  if ( v13 + 1 > v12 )
  {
    sub_22134E0(a3, a3 + 16, v13 + 1, 4);
    v13 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v13) = v6;
  v14 = *(unsigned int *)(a3 + 12);
  v15 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v15;
  if ( v15 + 1 > v14 )
  {
    sub_22134E0(a3, a3 + 16, v15 + 1, 4);
    v15 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v15) = v5;
  v16 = *(unsigned int *)(a3 + 12);
  v17 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v17;
  if ( v17 + 1 > v16 )
  {
    sub_22134E0(a3, a3 + 16, v17 + 1, 4);
    v17 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v17) = v7;
  v18 = *(_QWORD **)a3;
  v19 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v19;
  return sub_961DD0(v18, (__int64)v18 + 4 * v19);
}

