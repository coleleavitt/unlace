__int16 __fastcall sub_F33600(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, int a5)
{
  __int64 v7; // rax
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  int v14; // [rsp+Ch] [rbp-2Ch]
  int v15; // [rsp+Ch] [rbp-2Ch]
  int v16; // [rsp+Ch] [rbp-2Ch]

  v7 = *(unsigned int *)(a1 + 8);
  if ( v7 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
  {
    v14 = a5;
    sub_22134E0(a1, a1 + 16, v7 + 1, 4);
    v7 = *(unsigned int *)(a1 + 8);
    a5 = v14;
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v7) = a3;
  v8 = HIDWORD(a3);
  v9 = *(unsigned int *)(a1 + 12);
  v10 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
  *(_DWORD *)(a1 + 8) = v10;
  if ( v10 + 1 > v9 )
  {
    v15 = a5;
    sub_22134E0(a1, a1 + 16, v10 + 1, 4);
    v10 = *(unsigned int *)(a1 + 8);
    a5 = v15;
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v10) = v8;
  v11 = *(unsigned int *)(a1 + 12);
  v12 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
  *(_DWORD *)(a1 + 8) = v12;
  if ( v12 + 1 > v11 )
  {
    v16 = a5;
    sub_22134E0(a1, a1 + 16, v12 + 1, 4);
    v12 = *(unsigned int *)(a1 + 8);
    a5 = v16;
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v12) = a5;
  ++*(_DWORD *)(a1 + 8);
  return sub_EF6750(a4, a1, a2, 1, 0);
}

