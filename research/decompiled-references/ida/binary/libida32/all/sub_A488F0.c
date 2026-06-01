unsigned __int64 __fastcall sub_A488F0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __int64 v6; // rbp
  int v7; // r14d
  int v8; // r13d
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // ebp
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  _QWORD *v19; // rdi
  __int64 v20; // rax

  if ( !a2 )
    BUG();
  v4 = *(unsigned int *)(a3 + 8);
  v5 = *(_QWORD *)(a2 + 8);
  v6 = *(_QWORD *)(a2 - 8) >> 40;
  v7 = *(unsigned __int16 *)(a2 - 2);
  v8 = *(_WORD *)(a2 - 4) & 0x7FFF;
  if ( v4 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
  {
    sub_22134E0(a3, a3 + 16, v4 + 1, 4);
    v4 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v4) = v8;
  v9 = *(unsigned int *)(a3 + 12);
  v10 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v10;
  if ( v10 + 1 > v9 )
  {
    sub_22134E0(a3, a3 + 16, v10 + 1, 4);
    v10 = *(unsigned int *)(a3 + 8);
  }
  v11 = (unsigned int)(char)v6 >> 31;
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v10) = v7;
  v12 = *(unsigned int *)(a3 + 12);
  v13 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v13;
  if ( v13 + 1 > v12 )
  {
    sub_22134E0(a3, a3 + 16, v13 + 1, 4);
    v13 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v13) = v11;
  v14 = *(unsigned int *)(a3 + 12);
  v15 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v15;
  if ( v15 + 1 > v14 )
  {
    sub_22134E0(a3, a3 + 16, v15 + 1, 4);
    v15 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v15) = v5;
  v16 = HIDWORD(v5);
  v17 = *(unsigned int *)(a3 + 12);
  v18 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v18;
  if ( v18 + 1 > v17 )
  {
    sub_22134E0(a3, a3 + 16, v18 + 1, 4);
    v18 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v18) = v16;
  v19 = *(_QWORD **)a3;
  v20 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v20;
  return sub_961DD0(v19, (__int64)v19 + 4 * v20);
}

