__int64 __fastcall sub_6AC600(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v7; // r13
  __int64 v8; // r12
  char v9; // r14
  unsigned __int64 v10; // r12
  __int64 v11; // rax
  unsigned __int8 v12; // r14
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // rcx
  __int64 v22; // rax

  v7 = *(_QWORD *)(a2 + 16);
  v8 = *(_QWORD *)(a2 + 8);
  v9 = v8 >> 2;
  v10 = v8 & 0xFFFFFFFFFFFFFFF8LL;
  v11 = *(unsigned int *)(a5 + 8);
  v12 = v9 & 1;
  if ( *(unsigned int *)(a5 + 12) < (unsigned __int64)(v11 + 1) )
  {
    sub_25D6060(a5, a5 + 16, v11 + 1, 4);
    v11 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v11) = v10;
  v13 = HIDWORD(v10);
  v14 = *(unsigned int *)(a5 + 12);
  v15 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
  *(_DWORD *)(a5 + 8) = v15;
  if ( v14 < v15 + 1 )
  {
    sub_25D6060(a5, a5 + 16, v15 + 1, 4);
    v15 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v15) = v13;
  v16 = *(unsigned int *)(a5 + 12);
  v17 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
  *(_DWORD *)(a5 + 8) = v17;
  if ( v16 < v17 + 1 )
  {
    sub_25D6060(a5, a5 + 16, v17 + 1, 4);
    v17 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v17) = v12;
  v18 = *(unsigned int *)(a5 + 12);
  v19 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
  *(_DWORD *)(a5 + 8) = v19;
  if ( v18 < v19 + 1 )
  {
    sub_25D6060(a5, a5 + 16, v19 + 1, 4);
    v19 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v19) = v7;
  v20 = HIDWORD(v7);
  v21 = *(unsigned int *)(a5 + 12);
  v22 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
  *(_DWORD *)(a5 + 8) = v22;
  if ( v21 < v22 + 1 )
  {
    sub_25D6060(a5, a5 + 16, v22 + 1, 4);
    v22 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v22) = v20;
  ++*(_DWORD *)(a5 + 8);
  return sub_25ABE00(a5, a3);
}

