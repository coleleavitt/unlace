__int64 __fastcall sub_3F0B50(__int64 a1, double a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  int v4; // ebp
  int dtype_size; // eax
  __int64 v6; // r12
  int v7; // eax
  __int64 v8; // r12
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 v13; // r12
  int v14; // eax
  __int64 v15; // r12
  int v16; // eax
  __int64 v17; // r12
  int v18; // eax
  __int64 v20; // [rsp-8h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 832);
  v3 = *(int *)(v2 + 480);
  v4 = *(_DWORD *)(v2 + 472) + 4 * *(unsigned __int16 *)(a1 + 70);
  dtype_size = get_dtype_size(0);
  sub_1D2710(a1, 4u, dtype_size, v3, 0x3BEA45E214ADDC55LL, v4, 0);
  v6 = *(int *)(*(_QWORD *)(a1 + 832) + 484LL);
  v7 = get_dtype_size(0);
  sub_1D2710(a1, 4u, v7, v6, 0x3BEA45E214ADDC55LL, v4 + 1, 0);
  v8 = *(int *)(*(_QWORD *)(a1 + 832) + 488LL);
  v9 = get_dtype_size(0);
  sub_1D2710(a1, 4u, v9, v8, 0x3BEA45E214ADDC55LL, v4 + 2, 0);
  v10 = *(_QWORD *)(a1 + 832);
  v11 = *(_QWORD *)(v10 + 4464);
  if ( !v11 )
    sub_3E6800(a2, a1, v20);
  v12 = *(int *)(*(_QWORD *)(v10 + 4456) + 4 * v11 - 4);
  *(_QWORD *)(v10 + 4464) = v11 - 1;
  sub_3E9CF0(a1, 0, 0, v12);
  v13 = *(int *)(*(_QWORD *)(a1 + 832) + 480LL);
  v14 = get_dtype_size(0);
  sub_1D2710(a1, 4u, v14, v12, 0x3BEA45E214ADDC55LL, v13, 0);
  v15 = *(int *)(*(_QWORD *)(a1 + 832) + 484LL);
  v16 = get_dtype_size(0);
  sub_1D2710(a1, 4u, v16, v12, 0x3BEA45E214ADDC55LL, v15, 0);
  v17 = *(int *)(*(_QWORD *)(a1 + 832) + 488LL);
  v18 = get_dtype_size(0);
  return sub_1D2710(a1, 4u, v18, v12, 0x3BEA45E214ADDC55LL, v17, 0);
}
