__int64 __fastcall sub_6AA060(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v7; // rbp
  __int64 v8; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  __int64 v11; // rax

  if ( !a2 )
    BUG();
  v7 = *(_QWORD *)&byte_8[*(_QWORD *)(a2 - 8) & 0xFFFFFFFFFFFFFFF0LL] | *(_QWORD *)(a2 - 8) & 7LL;
  v8 = *(unsigned int *)(a5 + 8);
  if ( *(unsigned int *)(a5 + 12) < (unsigned __int64)(v8 + 1) )
  {
    sub_25D6060(a5, a5 + 16, v8 + 1, 4);
    v8 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v8) = v7;
  v9 = HIDWORD(v7);
  v10 = *(unsigned int *)(a5 + 12);
  v11 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
  *(_DWORD *)(a5 + 8) = v11;
  if ( v10 < v11 + 1 )
  {
    sub_25D6060(a5, a5 + 16, v11 + 1, 4);
    v11 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v11) = v9;
  ++*(_DWORD *)(a5 + 8);
  sub_6A0380((int *)(a2 + 8), a5);
  return sub_25ABE00(a5, a3);
}

