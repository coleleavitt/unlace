__int64 __fastcall sub_3EE2D0(__int64 a1, int a2, double a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // r12
  __int64 v7; // rbp
  int v9; // r14d
  __int64 v10; // r15
  __int64 v11; // r13
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // rdi
  int dtype_size; // eax
  __int64 v18; // r14
  __int64 v19; // rdi
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rdi
  int v23; // eax
  __int64 result; // rax

  v6 = a5;
  v7 = a2;
  if ( a6 == -1 )
    a6 = *(unsigned __int16 *)(a1 + 190);
  v9 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 472LL) + a6;
  v10 = sub_64590(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2);
  v11 = sub_64590(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2);
  sub_3E9BF0(a1, 33, v9, 0, 1);
  v12 = *(unsigned int *)(v11 + 72);
  sub_1D3320(a1, v12, 1);
  v13 = *(_QWORD *)(a1 + 832);
  *(_QWORD *)(a1 + 16) = v10;
  v14 = *(_QWORD *)(v13 + 4464);
  if ( !v14 )
    sub_3E6800(a3, a1, v12);
  v15 = *(int *)(*(_QWORD *)(v13 + 4456) + 4 * v14 - 4);
  *(_QWORD *)(v13 + 4464) = v14 - 1;
  sub_3EB290(a1, a1 + 104, v15);
  v16 = 2;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL) == 8 )
    v16 = 7;
  dtype_size = get_dtype_size(v16);
  sub_1D2710(a1, 4u, dtype_size, v15, 0x3BEA45E214ADDC55LL, v7, 0);
  v18 = *(_QWORD *)(a1 + 40) + *(unsigned __int16 *)(a1 + 50);
  v19 = 2;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL) == 8 )
    v19 = 7;
  v20 = get_dtype_size(v19);
  sub_1D2710(a1, 0x37u, v20, v18, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 0);
  v21 = *(_QWORD *)(a1 + 832);
  *(_QWORD *)(a1 + 16) = v11;
  v22 = 2;
  if ( *(_DWORD *)(v21 + 84) == 8 )
    v22 = 7;
  v23 = get_dtype_size(v22);
  result = sub_1D2710(a1, 4u, v23, v6, 0x3BEA45E214ADDC55LL, v7, 0);
  *(_BYTE *)(a1 + 864) = 1;
  return result;
}
