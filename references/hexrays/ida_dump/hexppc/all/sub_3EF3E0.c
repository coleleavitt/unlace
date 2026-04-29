__int64 __fastcall sub_3EF3E0(__int64 a1, int a2, char a3, char a4, int a5, double a6)
{
  unsigned int v9; // r12d
  __int64 v10; // rbp
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r15
  int dtype_size; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  __int64 v22; // rsi
  char v23; // dl

  v9 = 7;
  v10 = a2;
  v11 = *(_QWORD *)(a1 + 832);
  if ( *(_DWORD *)(v11 + 80) != 8 )
    v9 = 2;
  v12 = *(_QWORD *)(v11 + 4464);
  if ( !v12 )
    goto LABEL_12;
  v13 = *(int *)(*(_QWORD *)(v11 + 4456) + 4 * v12 - 4);
  *(_QWORD *)(v11 + 4464) = v12 - 1;
  if ( a4 < a3 )
  {
    v22 = -(__int64)(0x8000000000000000LL >> (a3 - 1));
    v23 = a4 + 1;
    if ( v23 )
      v22 &= ~(-1LL << (64 - v23));
    v11 = ~v22;
  }
  else
  {
    v11 = -(__int64)(0x8000000000000000LL >> a4);
    if ( a3 )
      v11 &= ~(-1LL << (64 - a3));
  }
  sub_3E9CF0(a1, v11, v9, v13);
  v14 = *(_QWORD *)(a1 + 832);
  v15 = *(_QWORD *)(v14 + 4464);
  if ( !v15 )
LABEL_12:
    sub_3E6800(a6, a1, v11);
  v16 = *(int *)(*(_QWORD *)(v14 + 4456) + 4 * v15 - 4);
  *(_QWORD *)(v14 + 4464) = v15 - 1;
  dtype_size = get_dtype_size(v9);
  sub_1D2710(a1, 7u, dtype_size, v13, 0x3BEA45E214ADDC55LL, v16, 0);
  v18 = get_dtype_size(v9);
  sub_1D2710(a1, 0x14u, v18, v10, v16, v16, 0);
  v19 = get_dtype_size(v9);
  sub_1D2710(a1, 0x14u, v19, a5, v13, v10, 0);
  v20 = get_dtype_size(v9);
  return sub_1D2710(a1, 0x13u, v20, v10, v16, v10, 0);
}
