unsigned __int64 __fastcall sub_A6CFB0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  int v5; // ebp
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  _QWORD *v18; // rdi
  __int64 v19; // rax

  if ( !a2 )
    BUG();
  v4 = *(unsigned int *)(a3 + 8);
  v5 = *(_DWORD *)(a2 + 24);
  v6 = *(_QWORD *)(a2 + 16);
  v7 = *(_QWORD *)(a2 + 8);
  if ( v4 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
  {
    sub_2237220(a3, a3 + 16, v4 + 1, 4);
    v4 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v4) = v7;
  v8 = HIDWORD(v7);
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
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v12) = v6;
  v13 = HIDWORD(v6);
  v14 = *(unsigned int *)(a3 + 12);
  v15 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v15;
  if ( v15 + 1 > v14 )
  {
    sub_2237220(a3, a3 + 16, v15 + 1, 4);
    v15 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v15) = v13;
  v16 = *(unsigned int *)(a3 + 12);
  v17 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v17;
  if ( v17 + 1 > v16 )
  {
    sub_2237220(a3, a3 + 16, v17 + 1, 4);
    v17 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v17) = v5;
  v18 = *(_QWORD **)a3;
  v19 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v19;
  return sub_985B10(v18, (__int64)v18 + 4 * v19);
}
