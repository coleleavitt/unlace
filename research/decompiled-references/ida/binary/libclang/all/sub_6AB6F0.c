__int64 __fastcall sub_6AB6F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rax
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r12
  __int64 v10; // rax
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // rcx
  __int64 v18; // rax

  if ( !a2 )
  {
    sub_B0CC40(0);
    BUG();
  }
  v7 = sub_B0CC40(a2 - 24);
  v8 = *(_QWORD *)(a2 + 8);
  v9 = v7;
  v10 = *(unsigned int *)(a5 + 8);
  if ( *(unsigned int *)(a5 + 12) < (unsigned __int64)(v10 + 1) )
  {
    sub_25D6060(a5, a5 + 16, v10 + 1, 4);
    v10 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v10) = v8;
  v11 = HIDWORD(v8);
  v12 = *(unsigned int *)(a5 + 12);
  v13 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
  *(_DWORD *)(a5 + 8) = v13;
  if ( v12 < v13 + 1 )
  {
    sub_25D6060(a5, a5 + 16, v13 + 1, 4);
    v13 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v13) = v11;
  v14 = *(unsigned int *)(a5 + 12);
  v15 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
  *(_DWORD *)(a5 + 8) = v15;
  if ( v14 < v15 + 1 )
  {
    sub_25D6060(a5, a5 + 16, v15 + 1, 4);
    v15 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v15) = v9;
  v16 = HIDWORD(v9);
  v17 = *(unsigned int *)(a5 + 12);
  v18 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
  *(_DWORD *)(a5 + 8) = v18;
  if ( v17 < v18 + 1 )
  {
    sub_25D6060(a5, a5 + 16, v18 + 1, 4);
    v18 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v18) = v16;
  ++*(_DWORD *)(a5 + 8);
  return sub_25ABE00(a5, a3);
}

