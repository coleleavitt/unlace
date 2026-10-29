unsigned __int64 __fastcall sub_A49670(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __int64 v6; // r13
  unsigned __int64 v7; // rbp
  __int64 v8; // r13
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // r13d
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  _QWORD *v20; // rdi
  __int64 v21; // rax

  v4 = *(unsigned int *)(a3 + 8);
  v5 = *(_QWORD *)(a2 + 16);
  v6 = *(_QWORD *)(a2 + 8);
  v7 = v6 & 0xFFFFFFFFFFFFFFF8LL;
  v8 = v6 >> 2;
  if ( v4 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
  {
    sub_22134E0(a3, a3 + 16, v4 + 1, 4);
    v4 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v4) = v7;
  v9 = HIDWORD(v7);
  v10 = *(unsigned int *)(a3 + 12);
  v11 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v11;
  if ( v11 + 1 > v10 )
  {
    sub_22134E0(a3, a3 + 16, v11 + 1, 4);
    v11 = *(unsigned int *)(a3 + 8);
  }
  v12 = v8 & 1;
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v11) = v9;
  v13 = *(unsigned int *)(a3 + 12);
  v14 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v14;
  if ( v14 + 1 > v13 )
  {
    sub_22134E0(a3, a3 + 16, v14 + 1, 4);
    v14 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v14) = v12;
  v15 = *(unsigned int *)(a3 + 12);
  v16 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v16;
  if ( v16 + 1 > v15 )
  {
    sub_22134E0(a3, a3 + 16, v16 + 1, 4);
    v16 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v16) = v5;
  v17 = HIDWORD(v5);
  v18 = *(unsigned int *)(a3 + 12);
  v19 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v19;
  if ( v19 + 1 > v18 )
  {
    sub_22134E0(a3, a3 + 16, v19 + 1, 4);
    v19 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v19) = v17;
  v20 = *(_QWORD **)a3;
  v21 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v21;
  return sub_961DD0(v20, (__int64)v20 + 4 * v21);
}

