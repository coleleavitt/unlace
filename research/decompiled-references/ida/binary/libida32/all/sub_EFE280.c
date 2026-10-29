void __fastcall sub_EFE280(__int64 a1, __int64 a2, unsigned __int64 a3, int *a4)
{
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // ebx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rbx
  __int64 v16; // rax
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // r12
  __int64 v23; // rdi

  v7 = *(unsigned int *)(a1 + 8);
  if ( v7 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
  {
    sub_22134E0(a1, a1 + 16, v7 + 1, 4);
    v7 = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v7) = a3;
  v8 = HIDWORD(a3);
  v9 = *(unsigned int *)(a1 + 12);
  v10 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
  *(_DWORD *)(a1 + 8) = v10;
  if ( v10 + 1 > v9 )
  {
    sub_22134E0(a1, a1 + 16, v10 + 1, 4);
    v10 = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v10) = v8;
  v11 = *(unsigned int *)(a1 + 12);
  v12 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
  *(_DWORD *)(a1 + 8) = v12;
  v13 = *a4;
  if ( v12 + 1 > v11 )
  {
    sub_22134E0(a1, a1 + 16, v12 + 1, 4);
    v12 = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v12) = v13;
  v14 = *(unsigned int *)(a1 + 12);
  v15 = *((_QWORD *)a4 + 2);
  v16 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
  *(_DWORD *)(a1 + 8) = v16;
  if ( v16 + 1 > v14 )
  {
    sub_22134E0(a1, a1 + 16, v16 + 1, 4);
    v16 = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v16) = v15;
  v17 = HIDWORD(v15);
  v18 = *(unsigned int *)(a1 + 12);
  v19 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
  *(_DWORD *)(a1 + 8) = v19;
  if ( v19 + 1 > v18 )
  {
    sub_22134E0(a1, a1 + 16, v19 + 1, 4);
    v19 = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v19) = v17;
  v20 = *((_QWORD *)a4 + 2);
  v21 = *((_QWORD *)a4 + 1);
  ++*(_DWORD *)(a1 + 8);
  v22 = v21 + 24 * v20;
  while ( v22 != v21 )
  {
    v23 = v21;
    v21 += 24;
    sub_EF9920(v23, a1, a2);
  }
}

