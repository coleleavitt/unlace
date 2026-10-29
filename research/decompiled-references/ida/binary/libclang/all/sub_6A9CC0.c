__int64 __fastcall sub_6A9CC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  unsigned __int64 v6; // rbx
  __int64 v8; // rdi
  int v9; // r12d
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rcx
  __int64 v12; // rax

  if ( !a2 )
    BUG();
  v5 = *(unsigned int *)(a5 + 8);
  v6 = *(_QWORD *)(a2 + 8);
  v8 = a5;
  v9 = v6;
  if ( *(unsigned int *)(a5 + 12) < (unsigned __int64)(v5 + 1) )
  {
    sub_25D6060(a5, a5 + 16, v5 + 1, 4);
    v8 = a5;
    v5 = *(unsigned int *)(a5 + 8);
  }
  v10 = HIDWORD(v6);
  *(_DWORD *)(*(_QWORD *)v8 + 4 * v5) = v9;
  v11 = *(unsigned int *)(v8 + 12);
  v12 = (unsigned int)(*(_DWORD *)(v8 + 8) + 1);
  *(_DWORD *)(v8 + 8) = v12;
  if ( v11 < v12 + 1 )
  {
    sub_25D6060(v8, v8 + 16, v12 + 1, 4);
    v12 = *(unsigned int *)(v8 + 8);
  }
  *(_DWORD *)(*(_QWORD *)v8 + 4 * v12) = v10;
  ++*(_DWORD *)(v8 + 8);
  return sub_25ABE00(v8, a3);
}

