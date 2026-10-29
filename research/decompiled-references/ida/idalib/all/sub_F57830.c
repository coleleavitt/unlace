__int16 __fastcall sub_F57830(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  __int64 v11; // rax

  v8 = *(unsigned int *)(a1 + 8);
  if ( v8 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
  {
    sub_2237220(a1, a1 + 16, v8 + 1, 4);
    v8 = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v8) = a3;
  v9 = HIDWORD(a3);
  v10 = *(unsigned int *)(a1 + 12);
  v11 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
  *(_DWORD *)(a1 + 8) = v11;
  if ( v11 + 1 > v10 )
  {
    sub_2237220(a1, a1 + 16, v11 + 1, 4);
    v11 = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v11) = v9;
  ++*(_DWORD *)(a1 + 8);
  sub_F1A490(a4, a1, a2, 1, 0);
  return sub_F1A490(a5, a1, a2, 1, 0);
}
