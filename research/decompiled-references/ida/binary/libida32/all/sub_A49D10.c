unsigned __int64 __fastcall sub_A49D10(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r13
  __int64 v4; // r12
  __int64 v6; // rcx
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rbp
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // rdx

  if ( !a2 )
    BUG();
  v3 = 0;
  v4 = 0;
  if ( (*(_BYTE *)(a2 - 6) & 8) != 0 )
  {
    v4 = sub_F39D80(a2 - 24);
    v3 = v4 & 0xFFFFFFFFFFFFFFF0LL;
  }
  v6 = *(unsigned int *)(a3 + 8);
  v7 = *(_QWORD *)(a2 + 8);
  if ( v6 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
  {
    sub_22134E0(a3, a3 + 16, v6 + 1, 4);
    v6 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v6) = v7;
  v8 = HIDWORD(v7);
  v9 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  v10 = *(unsigned int *)(a3 + 12);
  *(_DWORD *)(a3 + 8) = v9;
  if ( v9 + 1 > v10 )
  {
    sub_22134E0(a3, a3 + 16, v9 + 1, 4);
    v9 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v9) = v8;
  v11 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v11;
  if ( v3 )
  {
    sub_993300(a3, v4);
    sub_993300(a3, SHIDWORD(v4));
    v11 = *(unsigned int *)(a3 + 8);
  }
  return sub_961DD0(*(_QWORD **)a3, *(_QWORD *)a3 + 4 * v11);
}

