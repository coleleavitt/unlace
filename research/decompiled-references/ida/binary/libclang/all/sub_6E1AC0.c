unsigned __int64 __fastcall sub_6E1AC0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __int64 v6; // r13
  unsigned __int64 v7; // rbp
  __int64 v8; // r13
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
  _QWORD *v19; // rdi
  __int64 v20; // rax

  v4 = *(unsigned int *)(a3 + 8);
  v5 = *(_QWORD *)(a2 + 16);
  v6 = *(_QWORD *)(a2 + 8);
  v7 = v6 & 0xFFFFFFFFFFFFFFF8LL;
  v8 = (v6 >> 2) & 1;
  if ( *(unsigned int *)(a3 + 12) < (unsigned __int64)(v4 + 1) )
  {
    sub_25D6060(a3, a3 + 16, v4 + 1, 4);
    v4 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v4) = v7;
  v9 = HIDWORD(v7);
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
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v13) = (unsigned __int8)v8;
  v14 = *(unsigned int *)(a3 + 12);
  v15 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v15;
  if ( v14 < v15 + 1 )
  {
    sub_25D6060(a3, a3 + 16, v15 + 1, 4);
    v15 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v15) = v5;
  v16 = HIDWORD(v5);
  v17 = *(unsigned int *)(a3 + 12);
  v18 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v18;
  if ( v17 < v18 + 1 )
  {
    sub_25D6060(a3, a3 + 16, v18 + 1, 4);
    v18 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v18) = v16;
  v19 = *(_QWORD **)a3;
  v20 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v20;
  return sub_6999F0(v19, (__int64)v19 + 4 * v20);
}

