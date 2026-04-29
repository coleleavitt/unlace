__int64 __fastcall sub_3F2300(__int64 a1, char a2, unsigned __int8 a3, int a4, int a5, int a6, double a7)
{
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r12
  __int64 v17; // rax
  int v18; // r13d
  int dtype_size; // eax
  __int64 v20; // rdi
  int v21; // eax
  __int64 v22; // rbp
  __int64 v23; // rdi
  int v24; // eax
  int v25; // eax
  __int64 result; // rax
  __int64 v27; // [rsp+0h] [rbp-48h]

  v9 = a6;
  v10 = a5;
  v11 = sub_64590(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2);
  v12 = *(_QWORD *)(a1 + 40);
  v13 = *(_QWORD *)(a1 + 8);
  v27 = v11;
  v14 = sub_64590(v13, v12, 2);
  v15 = *(_QWORD *)(a1 + 832);
  v16 = v14;
  v17 = *(_QWORD *)(v15 + 4464);
  if ( !v17 )
    sub_3E6800(a7, v13, v12);
  v18 = *(_DWORD *)(*(_QWORD *)(v15 + 4456) + 4 * v17 - 4);
  *(_QWORD *)(v15 + 4464) = v17 - 1;
  dtype_size = get_dtype_size(a3);
  sub_1D2710(a1, a2 == 0 ? 37 : 34, dtype_size, v10, v9, v18, -1);
  sub_1D3320(a1, *(_DWORD *)(v16 + 72), v18);
  v20 = *(_QWORD *)(a1 + 832);
  *(_QWORD *)(a1 + 16) = v27;
  sub_3E99E0(v20);
  v21 = get_dtype_size(a3);
  sub_1D2710(a1, 4u, v21, v9, 0x3BEA45E214ADDC55LL, a4, -1);
  v22 = *(_QWORD *)(a1 + 40) + *(unsigned __int16 *)(a1 + 50);
  v23 = 2;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL) == 8 )
    v23 = 7;
  v24 = get_dtype_size(v23);
  sub_1D2710(a1, 0x37u, v24, v22, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 0);
  *(_QWORD *)(a1 + 16) = v16;
  v25 = get_dtype_size(a3);
  result = sub_1D2710(a1, 4u, v25, v10, 0x3BEA45E214ADDC55LL, a4, -1);
  *(_BYTE *)(a1 + 864) = 1;
  return result;
}
