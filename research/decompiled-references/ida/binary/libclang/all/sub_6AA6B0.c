__int64 __fastcall sub_6AA6B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rax
  unsigned __int64 v8; // r13
  char v9; // bp
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  _BOOL4 v13; // ebp
  unsigned __int64 v14; // rcx
  __int64 v15; // rax

  if ( !a2 )
    BUG();
  v7 = *(unsigned int *)(a5 + 8);
  v8 = *(_QWORD *)(a2 + 8);
  v9 = *(_BYTE *)(a2 - 6) & 8;
  if ( *(unsigned int *)(a5 + 12) < (unsigned __int64)(v7 + 1) )
  {
    sub_25D6060(a5, a5 + 16, v7 + 1, 4);
    v7 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v7) = v8;
  v10 = HIDWORD(v8);
  v11 = *(unsigned int *)(a5 + 12);
  v12 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
  *(_DWORD *)(a5 + 8) = v12;
  if ( v11 < v12 + 1 )
  {
    sub_25D6060(a5, a5 + 16, v12 + 1, 4);
    v12 = *(unsigned int *)(a5 + 8);
  }
  v13 = (v9 & 8) != 0;
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v12) = v10;
  v14 = *(unsigned int *)(a5 + 12);
  v15 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
  *(_DWORD *)(a5 + 8) = v15;
  if ( v14 < v15 + 1 )
  {
    sub_25D6060(a5, a5 + 16, v15 + 1, 4);
    v15 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v15) = v13;
  ++*(_DWORD *)(a5 + 8);
  return sub_25ABE00(a5, a3);
}

