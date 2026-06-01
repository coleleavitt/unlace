__int64 __fastcall sub_6AF4B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // r13
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  unsigned __int64 v24; // rbp
  unsigned __int64 v25; // rcx
  __int64 v26; // rax
  unsigned __int64 v27; // rcx
  __int64 v28; // rax
  unsigned __int64 v29; // rcx

  v7 = *(unsigned int *)(a5 + 8);
  v8 = *(unsigned int *)(a5 + 12);
  v9 = v7 + 1;
  v10 = *(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 8) & 4) == 0 )
  {
    v11 = *(_QWORD *)(a2 + 16);
    if ( v8 < v9 )
    {
      sub_25D6060(a5, a5 + 16, v7 + 1, 4);
      v7 = *(unsigned int *)(a5 + 8);
    }
    *(_DWORD *)(*(_QWORD *)a5 + 4 * v7) = v10;
    v12 = HIDWORD(v10);
    v13 = *(unsigned int *)(a5 + 12);
    v14 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
    *(_DWORD *)(a5 + 8) = v14;
    if ( v13 < v14 + 1 )
    {
      sub_25D6060(a5, a5 + 16, v14 + 1, 4);
      v14 = *(unsigned int *)(a5 + 8);
    }
    *(_DWORD *)(*(_QWORD *)a5 + 4 * v14) = v12;
    v15 = *(unsigned int *)(a5 + 12);
    v16 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
    *(_DWORD *)(a5 + 8) = v16;
    if ( v15 < v16 + 1 )
    {
      sub_25D6060(a5, a5 + 16, v16 + 1, 4);
      v16 = *(unsigned int *)(a5 + 8);
    }
    *(_DWORD *)(*(_QWORD *)a5 + 4 * v16) = 0;
    v17 = *(unsigned int *)(a5 + 12);
    v18 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
    *(_DWORD *)(a5 + 8) = v18;
    if ( v17 < v18 + 1 )
    {
      sub_25D6060(a5, a5 + 16, v18 + 1, 4);
      v18 = *(unsigned int *)(a5 + 8);
    }
    *(_DWORD *)(*(_QWORD *)a5 + 4 * v18) = v11;
    v19 = HIDWORD(v11);
    v20 = *(unsigned int *)(a5 + 12);
    v21 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
    v22 = v21 + 1;
    *(_DWORD *)(a5 + 8) = v21;
    if ( v20 >= v21 + 1 )
      goto LABEL_11;
LABEL_19:
    sub_25D6060(a5, a5 + 16, v22, 4);
    v21 = *(unsigned int *)(a5 + 8);
    goto LABEL_11;
  }
  LODWORD(v19) = *(_DWORD *)(a2 + 16);
  if ( v8 < v9 )
  {
    sub_25D6060(a5, a5 + 16, v7 + 1, 4);
    v7 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v7) = v10;
  v24 = HIDWORD(v10);
  v25 = *(unsigned int *)(a5 + 12);
  v26 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
  *(_DWORD *)(a5 + 8) = v26;
  if ( v25 < v26 + 1 )
  {
    sub_25D6060(a5, a5 + 16, v26 + 1, 4);
    v26 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v26) = v24;
  v27 = *(unsigned int *)(a5 + 12);
  v28 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
  *(_DWORD *)(a5 + 8) = v28;
  if ( v27 < v28 + 1 )
  {
    sub_25D6060(a5, a5 + 16, v28 + 1, 4);
    v28 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v28) = 1;
  v29 = *(unsigned int *)(a5 + 12);
  v21 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
  v22 = v21 + 1;
  *(_DWORD *)(a5 + 8) = v21;
  if ( v29 < v21 + 1 )
    goto LABEL_19;
LABEL_11:
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v21) = v19;
  ++*(_DWORD *)(a5 + 8);
  return sub_25ABE00(a5, a3);
}

