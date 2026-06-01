unsigned __int64 __fastcall sub_B61EA0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  _QWORD *v9; // rdi
  __int64 v10; // rax

  if ( !a2 )
    BUG();
  v4 = *(unsigned int *)(a3 + 8);
  v5 = *(_QWORD *)(a2 + 8);
  if ( v4 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
  {
    sub_22134E0(a3, a3 + 16, v4 + 1, 4);
    v4 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v4) = v5;
  v6 = HIDWORD(v5);
  v7 = *(unsigned int *)(a3 + 12);
  v8 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v8;
  if ( v8 + 1 > v7 )
  {
    sub_22134E0(a3, a3 + 16, v8 + 1, 4);
    v8 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v8) = v6;
  v9 = *(_QWORD **)a3;
  v10 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v10;
  return sub_961DD0(v9, (__int64)v9 + 4 * v10);
}

