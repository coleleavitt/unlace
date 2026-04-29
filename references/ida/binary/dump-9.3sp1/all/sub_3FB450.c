void __fastcall sub_3FB450(__int64 a1, int a2, unsigned __int8 a3, unsigned __int8 a4)
{
  int *v5; // rax
  int v6; // ebp
  __int64 v7; // r15
  __int64 v8; // r13
  int dtype_size; // r14d
  unsigned int v10; // r14d
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  __int64 v19; // rbp
  int v20; // eax
  unsigned int v21; // [rsp+Ch] [rbp-4Ch]
  __int64 v23; // [rsp+18h] [rbp-40h]

  v5 = *(int **)(a1 + 832);
  v6 = v5[116];
  v7 = v5[114];
  v8 = v5[115];
  v21 = a3;
  dtype_size = get_dtype_size();
  if ( a3 )
  {
    v17 = get_dtype_size();
    sub_1D6310(a1, 4u, v17, 8, 0x3BEA45E214ADDC55LL, v6, 0);
    v23 = *(int *)(*(_QWORD *)(a1 + 832) + 380LL);
    v18 = get_dtype_size();
    sub_1D6310(a1, 4u, v18, v23, 0x3BEA45E214ADDC55LL, v6 + dtype_size, 0);
    if ( a3 == 1 )
      v10 = 2;
    else
      v10 = (a3 != 2) + 7;
  }
  else
  {
    v10 = 1;
    v11 = get_dtype_size();
    sub_1D6310(a1, 4u, v11, 8, 0x3BEA45E214ADDC55LL, v6, 0);
  }
  v12 = get_dtype_size();
  sub_1D6310(a1, 4u, v12, v6, 0x3BEA45E214ADDC55LL, v8, 0);
  sub_1D6840(a1, v21, v10, a2, v7, a4);
  v13 = get_dtype_size();
  sub_1D6310(a1, a4 + 15, v13, v6, v7, v6, 0);
  v14 = get_dtype_size();
  sub_1D6310(a1, a4 + 17, v14, v8, v7, v8, 0);
  v15 = get_dtype_size();
  sub_1D6310(a1, 4u, v15, v6, 0x3BEA45E214ADDC55LL, 8, 0);
  if ( a3 )
  {
    v19 = *(int *)(*(_QWORD *)(a1 + 832) + 380LL);
    v20 = get_dtype_size();
    sub_1D6310(a1, 4u, v20, v8, 0x3BEA45E214ADDC55LL, v19, 0);
  }
  else
  {
    v16 = get_dtype_size();
    sub_1D6310(a1, 4u, v16, v8, 0x3BEA45E214ADDC55LL, 9, 0);
  }
  sub_3FB370(a1, 31);
}
