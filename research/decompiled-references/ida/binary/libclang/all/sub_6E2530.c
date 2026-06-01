unsigned __int64 __fastcall sub_6E2530(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r12d
  char v4; // r14
  int v5; // r13d
  unsigned __int64 v7; // rbp
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int64 v18; // rcx

  if ( !a2 )
    BUG();
  v4 = 0;
  v5 = *(_DWORD *)(a2 - 4);
  v7 = *(_QWORD *)(a2 + 8);
  if ( v5 )
  {
    v8 = *(unsigned int *)(a3 + 8);
    v18 = *(unsigned int *)(a3 + 12);
    v3 = v5 - 1;
    v4 = 1;
    v5 = 1;
    v10 = v8 + 1;
    if ( v18 >= v8 + 1 )
      goto LABEL_4;
  }
  else
  {
    v8 = *(unsigned int *)(a3 + 8);
    v9 = *(unsigned int *)(a3 + 12);
    v10 = v8 + 1;
    if ( v9 >= v8 + 1 )
      goto LABEL_4;
  }
  sub_25D6060(a3, a3 + 16, v10, 4);
  v8 = *(unsigned int *)(a3 + 8);
LABEL_4:
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v8) = v7;
  v11 = HIDWORD(v7);
  v12 = *(unsigned int *)(a3 + 12);
  v13 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v13;
  if ( v12 < v13 + 1 )
  {
    sub_25D6060(a3, a3 + 16, v13 + 1, 4);
    v13 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v13) = v11;
  v14 = *(unsigned int *)(a3 + 12);
  v15 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v15;
  if ( v14 < v15 + 1 )
  {
    sub_25D6060(a3, a3 + 16, v15 + 1, 4);
    v15 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v15) = v5;
  v16 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v16;
  if ( v4 )
  {
    if ( *(unsigned int *)(a3 + 12) < (unsigned __int64)(v16 + 1) )
    {
      sub_25D6060(a3, a3 + 16, v16 + 1, 4);
      v16 = *(unsigned int *)(a3 + 8);
    }
    *(_DWORD *)(*(_QWORD *)a3 + 4 * v16) = v3;
    v16 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
    *(_DWORD *)(a3 + 8) = v16;
  }
  return sub_6999F0(*(_QWORD **)a3, *(_QWORD *)a3 + 4 * v16);
}

