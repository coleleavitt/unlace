unsigned __int64 __fastcall sub_A6BDC0(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r13
  int v7; // r14d
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  unsigned __int64 v21; // rbp
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  _QWORD *v24; // rdi
  __int64 v25; // rax

  if ( !a2 )
    BUG();
  v4 = *(unsigned int *)(a3 + 8);
  v5 = a2[1];
  v6 = a2[2];
  v7 = *((_WORD *)a2 - 3) >> 3;
  v8 = a2[3];
  if ( v4 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
  {
    sub_2237220(a3, a3 + 16, v4 + 1, 4);
    v4 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v4) = v7;
  v9 = *(unsigned int *)(a3 + 12);
  v10 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v10;
  if ( v10 + 1 > v9 )
  {
    sub_2237220(a3, a3 + 16, v10 + 1, 4);
    v10 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v10) = v6;
  v11 = HIDWORD(v6);
  v12 = *(unsigned int *)(a3 + 12);
  v13 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v13;
  if ( v13 + 1 > v12 )
  {
    sub_2237220(a3, a3 + 16, v13 + 1, 4);
    v13 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v13) = v11;
  v14 = *(unsigned int *)(a3 + 12);
  v15 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v15;
  if ( v15 + 1 > v14 )
  {
    sub_2237220(a3, a3 + 16, v15 + 1, 4);
    v15 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v15) = v8;
  v16 = HIDWORD(v8);
  v17 = *(unsigned int *)(a3 + 12);
  v18 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v18;
  if ( v18 + 1 > v17 )
  {
    sub_2237220(a3, a3 + 16, v18 + 1, 4);
    v18 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v18) = v16;
  v19 = *(unsigned int *)(a3 + 12);
  v20 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v20;
  if ( v20 + 1 > v19 )
  {
    sub_2237220(a3, a3 + 16, v20 + 1, 4);
    v20 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v20) = v5;
  v21 = HIDWORD(v5);
  v22 = *(unsigned int *)(a3 + 12);
  v23 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v23;
  if ( v23 + 1 > v22 )
  {
    sub_2237220(a3, a3 + 16, v23 + 1, 4);
    v23 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v23) = v21;
  v24 = *(_QWORD **)a3;
  v25 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v25;
  return sub_985B10(v24, (__int64)v24 + 4 * v25);
}
