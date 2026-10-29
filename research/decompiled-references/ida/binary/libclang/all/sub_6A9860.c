__int64 __fastcall sub_6A9860(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdi
  __int64 v7; // rax
  int v8; // ebx
  int v9; // r12d
  unsigned __int64 v10; // rcx
  __int64 v11; // rax

  if ( !a2 )
    BUG();
  v5 = a5;
  v7 = *(unsigned int *)(a5 + 8);
  v8 = (*(_DWORD *)(a2 + 8) >> 1) & 0xFFFFFF;
  v9 = *(_BYTE *)(a2 + 8) & 1;
  if ( *(unsigned int *)(a5 + 12) < (unsigned __int64)(v7 + 1) )
  {
    sub_25D6060(a5, a5 + 16, v7 + 1, 4);
    v5 = a5;
    v7 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)v5 + 4 * v7) = v9;
  v10 = *(unsigned int *)(v5 + 12);
  v11 = (unsigned int)(*(_DWORD *)(v5 + 8) + 1);
  *(_DWORD *)(v5 + 8) = v11;
  if ( v10 < v11 + 1 )
  {
    sub_25D6060(v5, v5 + 16, v11 + 1, 4);
    v11 = *(unsigned int *)(v5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)v5 + 4 * v11) = v8;
  ++*(_DWORD *)(v5 + 8);
  return sub_25ABE00(v5, a3);
}

