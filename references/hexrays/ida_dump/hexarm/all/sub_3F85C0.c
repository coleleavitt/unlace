char __fastcall sub_3F85C0(_QWORD *a1, unsigned __int8 a2, unsigned int a3, unsigned int a4, int a5, double a6)
{
  unsigned int v8; // r15d
  int v9; // r14d
  int v10; // r15d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // al
  __int64 v16; // r13
  int dtype_size; // ebp
  char result; // al

  v8 = *(_DWORD *)(a1[104] + 628LL);
  sub_3F55F0((__int64)a1, 0xCu, a5);
  v9 = sub_3F6740((__int64)a1, a3, a2, v8, 1, a6);
  v10 = sub_3F6740((__int64)a1, a4, a2, v8, 1, a6);
  v15 = sub_3EAA70((__int64)(a1 + 3), a4, v11, v12, v13, v14);
  sub_1D6480(a1, a2, v9, v10, a5, *(_DWORD *)(a1[104] + 632LL), v15, 1);
  v16 = a1[104];
  dtype_size = get_dtype_size(a2);
  result = sub_11E2E0(0xCu);
  if ( result )
  {
    if ( *(_DWORD *)(v16 + 80) == 8 )
    {
      result = a5 - 8;
      if ( (unsigned int)(a5 - 8) <= 0x107 && dtype_size == 4 )
        return sub_1D6180((__int64)a1, 2u, 7u, a5, a5, 0);
    }
  }
  return result;
}
