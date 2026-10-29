unsigned __int64 __fastcall sub_6E20D0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rbp
  int v6; // r13d
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rcx
  __int64 v9; // rax

  if ( !a2 )
    BUG();
  v4 = *(unsigned int *)(a3 + 8);
  v5 = *(_QWORD *)(a2 - 8);
  v6 = v5;
  if ( *(unsigned int *)(a3 + 12) < (unsigned __int64)(v4 + 1) )
  {
    sub_25D6060(a3, a3 + 16, v4 + 1, 4);
    v4 = *(unsigned int *)(a3 + 8);
  }
  v7 = HIDWORD(v5);
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v4) = v6;
  v8 = *(unsigned int *)(a3 + 12);
  v9 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v9;
  if ( v8 < v9 + 1 )
  {
    sub_25D6060(a3, a3 + 16, v9 + 1, 4);
    v9 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v9) = v7;
  ++*(_DWORD *)(a3 + 8);
  sub_6A0380((int *)(a2 + 8), a3);
  return sub_6999F0(*(_QWORD **)a3, *(_QWORD *)a3 + 4LL * *(unsigned int *)(a3 + 8));
}

