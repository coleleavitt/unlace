__int64 __fastcall sub_A5BC60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rax
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rcx
  char v10; // r12
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // r13d
  __int64 v21; // rcx
  __int64 v22; // rdx
  unsigned __int8 v24; // al
  _QWORD v25[6]; // [rsp+0h] [rbp-30h] BYREF

  if ( !a2 )
    BUG();
  v7 = *(unsigned int *)(a5 + 8);
  v8 = *(_QWORD *)(a2 + 8);
  v9 = *(unsigned int *)(a5 + 12);
  v10 = *(_BYTE *)(a2 - 15) & 4;
  v11 = *(_QWORD *)(a2 - 8);
  v25[0] = v8;
  if ( v7 + 1 > v9 )
  {
    sub_2237220(a5, a5 + 16, v7 + 1, 4);
    v7 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v7) = v8;
  v12 = HIDWORD(v8);
  v13 = *(unsigned int *)(a5 + 12);
  v14 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
  *(_DWORD *)(a5 + 8) = v14;
  if ( v14 + 1 > v13 )
  {
    sub_2237220(a5, a5 + 16, v14 + 1, 4);
    v14 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v14) = v12;
  v15 = *(unsigned int *)(a5 + 12);
  v16 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
  *(_DWORD *)(a5 + 8) = v16;
  if ( v16 + 1 > v15 )
  {
    sub_2237220(a5, a5 + 16, v16 + 1, 4);
    v16 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v16) = v11;
  v17 = HIDWORD(v11);
  v18 = *(unsigned int *)(a5 + 12);
  v19 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
  *(_DWORD *)(a5 + 8) = v19;
  if ( v19 + 1 > v18 )
  {
    sub_2237220(a5, a5 + 16, v19 + 1, 4);
    v19 = *(unsigned int *)(a5 + 8);
  }
  v20 = 1;
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v19) = v17;
  v21 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
  *(_DWORD *)(a5 + 8) = v21;
  if ( !v10 )
  {
    v24 = sub_F235A0(v25);
    v21 = *(unsigned int *)(a5 + 8);
    v20 = v24;
    v22 = v21 + 1;
    if ( v21 + 1 <= (unsigned __int64)*(unsigned int *)(a5 + 12) )
      goto LABEL_12;
LABEL_14:
    sub_2237220(a5, a5 + 16, v22, 4);
    v21 = *(unsigned int *)(a5 + 8);
    goto LABEL_12;
  }
  v22 = v21 + 1;
  if ( v21 + 1 > (unsigned __int64)*(unsigned int *)(a5 + 12) )
    goto LABEL_14;
LABEL_12:
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v21) = v20;
  ++*(_DWORD *)(a5 + 8);
  return sub_2222ED0(a5, a3);
}
