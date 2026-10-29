unsigned __int64 __fastcall sub_6DFC30(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  char v6; // bp
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  _BOOL4 v10; // ebp
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  _QWORD *v13; // rdi
  __int64 v14; // rax

  if ( !a2 )
    BUG();
  v4 = *(unsigned int *)(a3 + 8);
  v5 = *(_QWORD *)(a2 + 8);
  v6 = *(_BYTE *)(a2 - 6) & 8;
  if ( *(unsigned int *)(a3 + 12) < (unsigned __int64)(v4 + 1) )
  {
    sub_25D6060(a3, a3 + 16, v4 + 1, 4);
    v4 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v4) = v5;
  v7 = HIDWORD(v5);
  v8 = *(unsigned int *)(a3 + 12);
  v9 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v9;
  if ( v8 < v9 + 1 )
  {
    sub_25D6060(a3, a3 + 16, v9 + 1, 4);
    v9 = *(unsigned int *)(a3 + 8);
  }
  v10 = (v6 & 8) != 0;
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v9) = v7;
  v11 = *(unsigned int *)(a3 + 12);
  v12 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v12;
  if ( v11 < v12 + 1 )
  {
    sub_25D6060(a3, a3 + 16, v12 + 1, 4);
    v12 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v12) = v10;
  v13 = *(_QWORD **)a3;
  v14 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v14;
  return sub_6999F0(v13, (__int64)v13 + 4 * v14);
}

