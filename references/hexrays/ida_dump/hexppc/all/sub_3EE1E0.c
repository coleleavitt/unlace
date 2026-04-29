unsigned __int64 __fastcall sub_3EE1E0(__int64 a1, int a2, int a3, int a4, char a5, unsigned __int8 a6)
{
  unsigned int v7; // r14d
  int v9; // ebx
  int dtype_size; // eax
  int v11; // eax
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // r13
  int v16; // eax

  v7 = a6;
  v9 = a5 & 1;
  dtype_size = get_dtype_size(a6);
  sub_1D2710(a1, v9 + 15, dtype_size, a3, a4, a2, 0);
  if ( (*(_BYTE *)(a1 + 52) & 1) != 0 )
  {
    sub_3E9BF0(a1, 33, a4, a6, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 484LL));
    v13 = *(_QWORD *)(a1 + 832);
    v14 = *(int *)(v13 + 480);
    v15 = *(int *)(v13 + 484);
    v16 = get_dtype_size(0);
    sub_1D2710(a1, 0x13u, v16, v15, v14, v14, 0);
  }
  v11 = get_dtype_size(v7);
  return sub_3EC840(a1, a2, v11);
}
