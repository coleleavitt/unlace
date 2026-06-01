unsigned __int64 __fastcall sub_A49C40(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rax
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  __int64 v10; // rax

  if ( !a2 )
    BUG();
  v4 = *(unsigned int *)(a3 + 12);
  v5 = *(_QWORD *)&byte_8[*(_QWORD *)(a2 - 8) & 0xFFFFFFFFFFFFFFF0LL];
  v6 = *(unsigned int *)(a3 + 8);
  v7 = v5 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v5 | (unsigned __int8)*(_QWORD *)(a2 - 8)) & 7;
  if ( v6 + 1 > v4 )
  {
    sub_22134E0(a3, a3 + 16, v6 + 1, 4);
    v6 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v6) = v7;
  v8 = HIDWORD(v7);
  v9 = *(unsigned int *)(a3 + 12);
  v10 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v10;
  if ( v10 + 1 > v9 )
  {
    sub_22134E0(a3, a3 + 16, v10 + 1, 4);
    v10 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v10) = v8;
  ++*(_DWORD *)(a3 + 8);
  sub_A2C1C0((unsigned int *)(a2 + 8), a3);
  return sub_961DD0(*(_QWORD **)a3, *(_QWORD *)a3 + 4LL * *(unsigned int *)(a3 + 8));
}

