__int64 __fastcall sub_EF2780(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  void (__fastcall *v4)(_QWORD *, _QWORD); // r12
  __int64 v5; // rax
  __int64 v6; // r12
  _BOOL8 v7; // r13
  __int64 v8; // rax
  __int64 v9; // r12
  int v10; // r13d
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // rax
  _BOOL4 v14; // r13d
  __int64 v15; // r12
  __int64 v16; // rax
  _BOOL4 v17; // r13d
  __int64 v18; // rbx
  __int64 result; // rax
  int v20; // ebp

  sub_EF1D60(a1, (_WORD *)a2);
  v4 = *(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 32LL);
  v5 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v5 + 16) != 42 )
    v5 = sub_F3F310(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, v2, v3);
  v4(a1, *(_QWORD *)(v5 + 32));
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 24LL))(a1, *(_QWORD *)(a2 + 16));
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 24LL))(a1, *(_QWORD *)(a2 + 24));
  v6 = a1[1];
  v7 = (*(_QWORD *)a2 & 0x100000LL) != 0;
  v8 = *(unsigned int *)(v6 + 8);
  if ( v8 + 1 > (unsigned __int64)*(unsigned int *)(v6 + 12) )
  {
    sub_22134E0(a1[1], v6 + 16, v8 + 1, 4);
    v8 = *(unsigned int *)(v6 + 8);
  }
  *(_DWORD *)(*(_QWORD *)v6 + 4 * v8) = v7;
  ++*(_DWORD *)(v6 + 8);
  v9 = a1[1];
  v10 = *(_DWORD *)(a2 + 4);
  v11 = *(unsigned int *)(v9 + 8);
  if ( v11 + 1 > (unsigned __int64)*(unsigned int *)(v9 + 12) )
  {
    sub_22134E0(a1[1], v9 + 16, v11 + 1, 4);
    v11 = *(unsigned int *)(v9 + 8);
  }
  *(_DWORD *)(*(_QWORD *)v9 + 4 * v11) = v10;
  ++*(_DWORD *)(v9 + 8);
  v12 = a1[1];
  v13 = *(unsigned int *)(v12 + 8);
  v14 = (*(_QWORD *)a2 & 0x80000LL) != 0;
  if ( v13 + 1 > (unsigned __int64)*(unsigned int *)(v12 + 12) )
  {
    sub_22134E0(a1[1], v12 + 16, v13 + 1, 4);
    v13 = *(unsigned int *)(v12 + 8);
  }
  *(_DWORD *)(*(_QWORD *)v12 + 4 * v13) = v14;
  ++*(_DWORD *)(v12 + 8);
  v15 = a1[1];
  v16 = *(unsigned int *)(v15 + 8);
  v17 = (*(_QWORD *)a2 & 0x8000000LL) != 0;
  if ( v16 + 1 > (unsigned __int64)*(unsigned int *)(v15 + 12) )
  {
    sub_22134E0(a1[1], v15 + 16, v16 + 1, 4);
    v16 = *(unsigned int *)(v15 + 8);
  }
  *(_DWORD *)(*(_QWORD *)v15 + 4 * v16) = v17;
  v18 = a1[1];
  ++*(_DWORD *)(v15 + 8);
  result = *(unsigned int *)(v18 + 8);
  v20 = (*(_BYTE *)(a2 + 3) >> 1) & 3;
  if ( result + 1 > (unsigned __int64)*(unsigned int *)(v18 + 12) )
  {
    sub_22134E0(v18, v18 + 16, result + 1, 4);
    result = *(unsigned int *)(v18 + 8);
  }
  *(_DWORD *)(*(_QWORD *)v18 + 4 * result) = v20;
  ++*(_DWORD *)(v18 + 8);
  return result;
}

