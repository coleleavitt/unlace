__int64 __fastcall sub_6AF280(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 result; // rax
  unsigned __int64 v21; // rbp
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  __int64 v25; // rax
  unsigned __int64 v26; // rcx

  v4 = *(unsigned int *)(a3 + 8);
  v5 = *(unsigned int *)(a3 + 12);
  v6 = *(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL;
  v7 = v4 + 1;
  if ( (*(_QWORD *)(a2 + 8) & 4) == 0 )
  {
    v8 = *(_QWORD *)(a2 + 16);
    if ( v5 < v7 )
    {
      sub_25D6060(a3, a3 + 16, v4 + 1, 4);
      v4 = *(unsigned int *)(a3 + 8);
    }
    *(_DWORD *)(*(_QWORD *)a3 + 4 * v4) = v6;
    v9 = HIDWORD(v6);
    v10 = *(unsigned int *)(a3 + 12);
    v11 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
    *(_DWORD *)(a3 + 8) = v11;
    if ( v10 < v11 + 1 )
    {
      sub_25D6060(a3, a3 + 16, v11 + 1, 4);
      v11 = *(unsigned int *)(a3 + 8);
    }
    *(_DWORD *)(*(_QWORD *)a3 + 4 * v11) = v9;
    v12 = *(unsigned int *)(a3 + 12);
    v13 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
    *(_DWORD *)(a3 + 8) = v13;
    if ( v12 < v13 + 1 )
    {
      sub_25D6060(a3, a3 + 16, v13 + 1, 4);
      v13 = *(unsigned int *)(a3 + 8);
    }
    *(_DWORD *)(*(_QWORD *)a3 + 4 * v13) = 0;
    v14 = *(unsigned int *)(a3 + 12);
    v15 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
    *(_DWORD *)(a3 + 8) = v15;
    if ( v14 < v15 + 1 )
    {
      sub_25D6060(a3, a3 + 16, v15 + 1, 4);
      v15 = *(unsigned int *)(a3 + 8);
    }
    *(_DWORD *)(*(_QWORD *)a3 + 4 * v15) = v8;
    v16 = HIDWORD(v8);
    v17 = *(unsigned int *)(a3 + 12);
    v18 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
    v19 = v18 + 1;
    *(_DWORD *)(a3 + 8) = v18;
    if ( v17 >= v18 + 1 )
      goto LABEL_11;
LABEL_19:
    sub_25D6060(a3, a3 + 16, v19, 4);
    v18 = *(unsigned int *)(a3 + 8);
    goto LABEL_11;
  }
  LODWORD(v16) = *(_DWORD *)(a2 + 16);
  if ( v5 < v7 )
  {
    sub_25D6060(a3, a3 + 16, v4 + 1, 4);
    v4 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v4) = v6;
  v21 = HIDWORD(v6);
  v22 = *(unsigned int *)(a3 + 12);
  v23 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v23;
  if ( v22 < v23 + 1 )
  {
    sub_25D6060(a3, a3 + 16, v23 + 1, 4);
    v23 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v23) = v21;
  v24 = *(unsigned int *)(a3 + 12);
  v25 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v25;
  if ( v24 < v25 + 1 )
  {
    sub_25D6060(a3, a3 + 16, v25 + 1, 4);
    v25 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v25) = 1;
  v26 = *(unsigned int *)(a3 + 12);
  v18 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  v19 = v18 + 1;
  *(_DWORD *)(a3 + 8) = v18;
  if ( v26 < v18 + 1 )
    goto LABEL_19;
LABEL_11:
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v18) = v16;
  result = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = result;
  return result;
}

