__int64 __fastcall sub_A382D0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // r13d
  __int64 v6; // rbp
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  unsigned __int64 v11; // r14
  int v12; // r15d
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  unsigned __int64 v25; // rcx
  __int64 v26; // rax
  unsigned __int64 v28; // [rsp+0h] [rbp-40h]
  unsigned __int64 v29; // [rsp+0h] [rbp-40h]
  int v30; // [rsp+0h] [rbp-40h]

  if ( !a2 )
    BUG();
  if ( (*((_BYTE *)a2 - 5) & 8) != 0 )
  {
    v5 = a2[3];
    v6 = HIDWORD(a2[3]);
  }
  else
  {
    LODWORD(v6) = 0;
    v5 = 0;
  }
  v9 = a2[1];
  v10 = *(unsigned int *)(a5 + 8);
  v11 = a2[2];
  v12 = (unsigned __int8)(*((_WORD *)a2 - 3) >> 3);
  if ( v10 + 1 > (unsigned __int64)*(unsigned int *)(a5 + 12) )
  {
    v28 = a2[1];
    sub_22134E0(a5, a5 + 16, v10 + 1, 4);
    v10 = *(unsigned int *)(a5 + 8);
    v9 = v28;
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v10) = v12;
  v13 = *(unsigned int *)(a5 + 12);
  v14 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
  *(_DWORD *)(a5 + 8) = v14;
  if ( v14 + 1 > v13 )
  {
    v29 = v9;
    sub_22134E0(a5, a5 + 16, v14 + 1, 4);
    v14 = *(unsigned int *)(a5 + 8);
    v9 = v29;
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v14) = v9;
  v15 = HIDWORD(v9);
  v16 = *(unsigned int *)(a5 + 12);
  v17 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
  *(_DWORD *)(a5 + 8) = v17;
  if ( v17 + 1 > v16 )
  {
    v30 = v15;
    sub_22134E0(a5, a5 + 16, v17 + 1, 4);
    v17 = *(unsigned int *)(a5 + 8);
    LODWORD(v15) = v30;
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v17) = v15;
  v18 = *(unsigned int *)(a5 + 12);
  v19 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
  *(_DWORD *)(a5 + 8) = v19;
  if ( v19 + 1 > v18 )
  {
    sub_22134E0(a5, a5 + 16, v19 + 1, 4);
    v19 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v19) = v11;
  v20 = HIDWORD(v11);
  v21 = *(unsigned int *)(a5 + 12);
  v22 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
  *(_DWORD *)(a5 + 8) = v22;
  if ( v22 + 1 > v21 )
  {
    sub_22134E0(a5, a5 + 16, v22 + 1, 4);
    v22 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v22) = v20;
  v23 = *(unsigned int *)(a5 + 12);
  v24 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
  *(_DWORD *)(a5 + 8) = v24;
  if ( v24 + 1 > v23 )
  {
    sub_22134E0(a5, a5 + 16, v24 + 1, 4);
    v24 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v24) = v5;
  v25 = *(unsigned int *)(a5 + 12);
  v26 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
  *(_DWORD *)(a5 + 8) = v26;
  if ( v26 + 1 > v25 )
  {
    sub_22134E0(a5, a5 + 16, v26 + 1, 4);
    v26 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v26) = v6;
  ++*(_DWORD *)(a5 + 8);
  return sub_21FF190(a5, a3);
}

