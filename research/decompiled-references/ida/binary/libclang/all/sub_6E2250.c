unsigned __int64 __fastcall sub_6E2250(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r13
  unsigned __int64 v4; // r12
  __int64 v6; // rax
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  int v13; // ebp
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // rcx
  __int64 v16; // rax

  if ( !a2 )
    BUG();
  v3 = 0;
  v4 = 0;
  if ( (*(_BYTE *)(a2 - 6) & 8) != 0 )
  {
    v4 = sub_B0CB60(a2 - 24);
    v3 = v4 & 0xFFFFFFFFFFFFFFF8LL;
  }
  v6 = *(unsigned int *)(a3 + 8);
  v7 = *(_QWORD *)(a2 + 8);
  if ( *(unsigned int *)(a3 + 12) < (unsigned __int64)(v6 + 1) )
  {
    sub_25D6060(a3, a3 + 16, v6 + 1, 4);
    v6 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v6) = v7;
  v8 = HIDWORD(v7);
  v9 = *(unsigned int *)(a3 + 12);
  v10 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v10;
  if ( v9 < v10 + 1 )
  {
    sub_25D6060(a3, a3 + 16, v10 + 1, 4);
    v10 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v10) = v8;
  v11 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v11;
  if ( v3 > 0xF )
  {
    v13 = v4;
    if ( *(unsigned int *)(a3 + 12) < (unsigned __int64)(v11 + 1) )
    {
      sub_25D6060(a3, a3 + 16, v11 + 1, 4);
      v11 = *(unsigned int *)(a3 + 8);
    }
    v14 = HIDWORD(v4);
    *(_DWORD *)(*(_QWORD *)a3 + 4 * v11) = v13;
    v15 = *(unsigned int *)(a3 + 12);
    v16 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
    *(_DWORD *)(a3 + 8) = v16;
    if ( v15 < v16 + 1 )
    {
      sub_25D6060(a3, a3 + 16, v16 + 1, 4);
      v16 = *(unsigned int *)(a3 + 8);
    }
    *(_DWORD *)(*(_QWORD *)a3 + 4 * v16) = v14;
    v11 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
    *(_DWORD *)(a3 + 8) = v11;
  }
  return sub_6999F0(*(_QWORD **)a3, *(_QWORD *)a3 + 4 * v11);
}

