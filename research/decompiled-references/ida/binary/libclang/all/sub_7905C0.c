__int64 __fastcall sub_7905C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rdi
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rcx
  __int64 v11; // rax

  if ( !a2 )
    BUG();
  v6 = a5;
  v7 = *(unsigned int *)(a5 + 8);
  v8 = *(_QWORD *)(a2 + 8);
  if ( *(unsigned int *)(a5 + 12) < (unsigned __int64)(v7 + 1) )
  {
    sub_25D6060(a5, a5 + 16, v7 + 1, 4);
    v6 = a5;
    v7 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)v6 + 4 * v7) = v8;
  v9 = HIDWORD(v8);
  v10 = *(unsigned int *)(v6 + 12);
  v11 = (unsigned int)(*(_DWORD *)(v6 + 8) + 1);
  *(_DWORD *)(v6 + 8) = v11;
  if ( v10 < v11 + 1 )
  {
    sub_25D6060(v6, v6 + 16, v11 + 1, 4);
    v11 = *(unsigned int *)(v6 + 8);
  }
  *(_DWORD *)(*(_QWORD *)v6 + 4 * v11) = v9;
  ++*(_DWORD *)(v6 + 8);
  return sub_25ABE00(v6, a3);
}

