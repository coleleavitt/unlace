unsigned __int64 __fastcall sub_A49400(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rcx
  char v7; // r12
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // r13
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // ebp
  unsigned int v18; // edx
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  _QWORD *v21; // rdi
  __int64 v22; // rax
  _QWORD v24[6]; // [rsp+0h] [rbp-30h] BYREF

  if ( !a2 )
    BUG();
  v4 = *(unsigned int *)(a3 + 8);
  v5 = *(_QWORD *)(a2 + 8);
  v6 = *(unsigned int *)(a3 + 12);
  v7 = *(_BYTE *)(a2 - 15) & 4;
  v8 = *(_QWORD *)(a2 - 8);
  v24[0] = v5;
  if ( v4 + 1 > v6 )
  {
    sub_22134E0(a3, a3 + 16, v4 + 1, 4);
    v4 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v4) = v5;
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
  v12 = *(unsigned int *)(a3 + 12);
  v13 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v13;
  if ( v13 + 1 > v12 )
  {
    sub_22134E0(a3, a3 + 16, v13 + 1, 4);
    v13 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v13) = v8;
  v14 = HIDWORD(v8);
  v15 = *(unsigned int *)(a3 + 12);
  v16 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v16;
  if ( v16 + 1 > v15 )
  {
    sub_22134E0(a3, a3 + 16, v16 + 1, 4);
    v16 = *(unsigned int *)(a3 + 8);
  }
  v17 = 1;
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v16) = v14;
  v18 = *(_DWORD *)(a3 + 8) + 1;
  *(_DWORD *)(a3 + 8) = v18;
  if ( !v7 )
  {
    v17 = (unsigned __int8)sub_EFF860(v24);
    v19 = *(unsigned int *)(a3 + 8);
    v20 = v19 + 1;
    if ( v19 + 1 <= (unsigned __int64)*(unsigned int *)(a3 + 12) )
      goto LABEL_12;
LABEL_14:
    sub_22134E0(a3, a3 + 16, v20, 4);
    v19 = *(unsigned int *)(a3 + 8);
    goto LABEL_12;
  }
  v19 = v18;
  v20 = v18 + 1LL;
  if ( v20 > *(unsigned int *)(a3 + 12) )
    goto LABEL_14;
LABEL_12:
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v19) = v17;
  v21 = *(_QWORD **)a3;
  v22 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v22;
  return sub_961DD0(v21, (__int64)v21 + 4 * v22);
}

