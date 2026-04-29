__int64 __fastcall sub_3E8330(__int64 a1, int a2, int a3, char a4)
{
  __int64 v4; // rax
  __int64 v6; // r14
  __int64 v7; // rbp
  __int64 v8; // rdi
  int v9; // r12d
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 v13; // r12
  int v14; // eax
  int dtype_size; // eax
  __int64 v17; // [rsp-10h] [rbp-38h]

  v4 = *(_QWORD *)(a1 + 832);
  v6 = *(int *)(v4 + 484);
  if ( a3 == -1 )
  {
    dtype_size = get_dtype_size(0);
    sub_1D2710(a1, 4u, dtype_size, a2, 0x3BEA45E214ADDC55LL, v6, 0);
  }
  else
  {
    v7 = a3;
    v8 = 2;
    if ( *(_DWORD *)(v4 + 84) == 8 )
      v8 = 7;
    v9 = -(a4 == 0);
    v10 = get_dtype_size(v8);
    sub_1D2710(a1, (v9 & 4) + 26, v10, a2, v7, v6, 0);
  }
  v11 = *(_QWORD *)(a1 + 832);
  v12 = *(int *)(v11 + 480);
  v13 = *(int *)(v11 + 484);
  v14 = get_dtype_size(0);
  sub_1D2710(a1, 0x13u, v14, v13, v12, v12, 0);
  return v17;
}
