__int64 __fastcall sub_B60C80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v12; // [rsp+8h] [rbp-20h]
  __int64 v13; // [rsp+8h] [rbp-20h]

  v6 = *(unsigned int *)(a5 + 8);
  v7 = *(_QWORD *)(a2 + 8);
  if ( v6 + 1 > (unsigned __int64)*(unsigned int *)(a5 + 12) )
  {
    v12 = a5;
    sub_22134E0(a5, a5 + 16, v6 + 1, 4);
    a5 = v12;
    v6 = *(unsigned int *)(v12 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v6) = v7;
  v8 = HIDWORD(v7);
  v9 = *(unsigned int *)(a5 + 12);
  v10 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
  *(_DWORD *)(a5 + 8) = v10;
  if ( v10 + 1 > v9 )
  {
    v13 = a5;
    sub_22134E0(a5, a5 + 16, v10 + 1, 4);
    a5 = v13;
    v10 = *(unsigned int *)(v13 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v10) = v8;
  ++*(_DWORD *)(a5 + 8);
  return sub_21FF190(a5, a3);
}

