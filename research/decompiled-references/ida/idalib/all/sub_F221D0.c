__int64 __fastcall sub_F221D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int16 v3; // bp
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // r15
  int v6; // r13d
  int v7; // r12d
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // ebp
  unsigned __int64 v21; // rcx
  __int64 result; // rax

  v2 = *(unsigned int *)(a2 + 8);
  v3 = *(_WORD *)(a1 + 2) >> 1;
  v4 = *(_QWORD *)(a1 + 24);
  v5 = *(_QWORD *)(a1 + 16);
  v6 = (*(_DWORD *)a1 >> 3) & 0x3FFF;
  v7 = (int)v3 >> 1;
  if ( v2 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
  {
    sub_2237220(a2, a2 + 16, v2 + 1, 4);
    v2 = *(unsigned int *)(a2 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a2 + 4 * v2) = v5;
  v8 = HIDWORD(v5);
  v9 = *(unsigned int *)(a2 + 12);
  v10 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
  *(_DWORD *)(a2 + 8) = v10;
  if ( v10 + 1 > v9 )
  {
    sub_2237220(a2, a2 + 16, v10 + 1, 4);
    v10 = *(unsigned int *)(a2 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a2 + 4 * v10) = v8;
  v11 = *(unsigned int *)(a2 + 12);
  v12 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
  *(_DWORD *)(a2 + 8) = v12;
  if ( v12 + 1 > v11 )
  {
    sub_2237220(a2, a2 + 16, v12 + 1, 4);
    v12 = *(unsigned int *)(a2 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a2 + 4 * v12) = v4;
  v13 = HIDWORD(v4);
  v14 = *(unsigned int *)(a2 + 12);
  v15 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
  *(_DWORD *)(a2 + 8) = v15;
  if ( v15 + 1 > v14 )
  {
    sub_2237220(a2, a2 + 16, v15 + 1, 4);
    v15 = *(unsigned int *)(a2 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a2 + 4 * v15) = v13;
  v16 = *(unsigned int *)(a2 + 12);
  v17 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
  *(_DWORD *)(a2 + 8) = v17;
  if ( v17 + 1 > v16 )
  {
    sub_2237220(a2, a2 + 16, v17 + 1, 4);
    v17 = *(unsigned int *)(a2 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a2 + 4 * v17) = v6;
  v18 = *(unsigned int *)(a2 + 12);
  v19 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
  *(_DWORD *)(a2 + 8) = v19;
  if ( v19 + 1 > v18 )
  {
    sub_2237220(a2, a2 + 16, v19 + 1, 4);
    v19 = *(unsigned int *)(a2 + 8);
  }
  v20 = v3 & 1;
  *(_DWORD *)(*(_QWORD *)a2 + 4 * v19) = v7;
  v21 = *(unsigned int *)(a2 + 12);
  result = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
  *(_DWORD *)(a2 + 8) = result;
  if ( result + 1 > v21 )
  {
    sub_2237220(a2, a2 + 16, result + 1, 4);
    result = *(unsigned int *)(a2 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a2 + 4 * result) = v20;
  ++*(_DWORD *)(a2 + 8);
  return result;
}
