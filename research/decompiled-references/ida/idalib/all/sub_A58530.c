__int64 __fastcall sub_A58530(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  unsigned __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r12
  unsigned __int64 v8; // rbp
  __int64 v9; // r12
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // r12d
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  _QWORD v17[4]; // [rsp+0h] [rbp-20h] BYREF

  if ( !a2 )
    BUG();
  v4 = *(_QWORD *)(a2 - 16);
  v5 = *(unsigned int *)(a3 + 12);
  v17[0] = *(_QWORD *)(a2 - 8);
  v6 = *(unsigned int *)(a3 + 8);
  v7 = v4;
  v8 = v4 & 0xFFFFFFFFFFFFFFF8LL;
  v9 = v7 >> 2;
  if ( v6 + 1 > v5 )
  {
    sub_2237220(a3, a3 + 16, v6 + 1, 4);
    v6 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v6) = v8;
  v10 = HIDWORD(v8);
  v11 = *(unsigned int *)(a3 + 12);
  v12 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v12;
  if ( v12 + 1 > v11 )
  {
    sub_2237220(a3, a3 + 16, v12 + 1, 4);
    v12 = *(unsigned int *)(a3 + 8);
  }
  v13 = v9 & 1;
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v12) = v10;
  v14 = *(unsigned int *)(a3 + 12);
  v15 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v15;
  if ( v15 + 1 > v14 )
  {
    sub_2237220(a3, a3 + 16, v15 + 1, 4);
    v15 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v15) = v13;
  ++*(_DWORD *)(a3 + 8);
  return sub_F22900(v17, a3);
}
