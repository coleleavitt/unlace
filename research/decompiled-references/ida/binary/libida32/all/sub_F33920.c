__int16 __fastcall sub_F33920(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rcx
  __int64 v9; // rax

  v6 = *(unsigned int *)(a1 + 8);
  if ( v6 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
  {
    sub_22134E0(a1, a1 + 16, v6 + 1, 4);
    v6 = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v6) = a3;
  v7 = HIDWORD(a3);
  v8 = *(unsigned int *)(a1 + 12);
  v9 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
  *(_DWORD *)(a1 + 8) = v9;
  if ( v9 + 1 > v8 )
  {
    sub_22134E0(a1, a1 + 16, v9 + 1, 4);
    v9 = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v9) = v7;
  ++*(_DWORD *)(a1 + 8);
  return sub_EF6750(a4, a1, a2, 1, 0);
}

