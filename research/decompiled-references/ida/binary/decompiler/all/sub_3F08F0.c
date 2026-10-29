void __fastcall sub_3F08F0(__int64 a1, unsigned int a2, unsigned __int8 a3, unsigned __int8 a4)
{
  _DWORD *v5; // rax
  int v6; // ebp
  unsigned int v7; // r15d
  int v8; // r13d
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
  int v19; // ebp
  int v20; // eax
  unsigned int v21; // [rsp+Ch] [rbp-4Ch]
  int v23; // [rsp+18h] [rbp-40h]

  v5 = *(_DWORD **)(a1 + 832);
  v6 = v5[116];
  v7 = v5[114];
  v8 = v5[115];
  v21 = a3;
  dtype_size = get_dtype_size();
  if ( a3 )
  {
    v17 = get_dtype_size();
    sub_1D3790(a1, 4, v17, 8, 346938453, v6, 0);
    v23 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 380LL);
    v18 = get_dtype_size();
    sub_1D3790(a1, 4, v18, v23, 346938453, v6 + dtype_size, 0);
    if ( a3 == 1 )
      v10 = 2;
    else
      v10 = (a3 != 2) + 7;
  }
  else
  {
    v10 = 1;
    v11 = get_dtype_size();
    sub_1D3790(a1, 4, v11, 8, 346938453, v6, 0);
  }
  v12 = get_dtype_size();
  sub_1D3790(a1, 4, v12, v6, 346938453, v8, 0);
  sub_1D3CC0(a1, v21, v10, a2, v7, a4);
  v13 = get_dtype_size();
  sub_1D3790(a1, a4 + 15, v13, v6, v7, v6, 0);
  v14 = get_dtype_size();
  sub_1D3790(a1, a4 + 17, v14, v8, v7, v8, 0);
  v15 = get_dtype_size();
  sub_1D3790(a1, 4, v15, v6, 346938453, 8, 0);
  if ( a3 )
  {
    v19 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 380LL);
    v20 = get_dtype_size();
    sub_1D3790(a1, 4, v20, v8, 346938453, v19, 0);
  }
  else
  {
    v16 = get_dtype_size();
    sub_1D3790(a1, 4, v16, v8, 346938453, 9, 0);
  }
  sub_3F0810(a1, 31);
}
