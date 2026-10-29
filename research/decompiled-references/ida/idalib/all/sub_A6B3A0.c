unsigned __int64 __fastcall sub_A6B3A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  int v5; // r12d
  unsigned __int64 v6; // rbp
  unsigned __int8 v7; // r13
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  _QWORD *v15; // rdi
  __int64 v16; // rax

  if ( !a2 )
    BUG();
  v4 = *(unsigned int *)(a3 + 8);
  v5 = (*(_BYTE *)(a2 - 6) >> 3) & 7;
  v6 = *(_QWORD *)(a2 + 8);
  v7 = (*(_WORD *)(a2 - 6) >> 6) & 7;
  if ( v4 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
  {
    sub_2237220(a3, a3 + 16, v4 + 1, 4);
    v4 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v4) = v6;
  v8 = HIDWORD(v6);
  v9 = *(unsigned int *)(a3 + 12);
  v10 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v10;
  if ( v10 + 1 > v9 )
  {
    sub_2237220(a3, a3 + 16, v10 + 1, 4);
    v10 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v10) = v8;
  v11 = *(unsigned int *)(a3 + 12);
  v12 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v12;
  if ( v12 + 1 > v11 )
  {
    sub_2237220(a3, a3 + 16, v12 + 1, 4);
    v12 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v12) = v7;
  v13 = *(unsigned int *)(a3 + 12);
  v14 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v14;
  if ( v14 + 1 > v13 )
  {
    sub_2237220(a3, a3 + 16, v14 + 1, 4);
    v14 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v14) = v5;
  v15 = *(_QWORD **)a3;
  v16 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v16;
  return sub_985B10(v15, (__int64)v15 + 4 * v16);
}
