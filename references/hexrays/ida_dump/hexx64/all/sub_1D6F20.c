__int64 __fastcall sub_1D6F20(__int64 a1, unsigned __int8 a2, int a3, int a4, int a5, int a6, char a7)
{
  __int64 v7; // r15
  __int64 v8; // r13
  __int64 v9; // r12
  __int64 v10; // rbp
  int dtype_size; // r14d

  v7 = a3;
  v8 = a4;
  v9 = a5;
  v10 = a6;
  sub_1D6840(a1, 0, a2, 0, a5, 0);
  dtype_size = get_dtype_size(a2);
  sub_1D6310(a1, 3u, 4, 8 * dtype_size - 1, 0x3BEA45E214ADDC55LL, v10, 0);
  sub_1D6310(a1, 0x16u, dtype_size, v9, v10, v9, 0);
  sub_1D6310(a1, 3u, 4, 1, 0x3BEA45E214ADDC55LL, v10, 0);
  if ( a7 )
    sub_1D6310(a1, 0x1Cu, dtype_size, v7, v10, 0, 0);
  sub_1D6310(a1, 0x17u, dtype_size, v7, v10, v8, 0);
  return sub_1D6310(a1, 0x13u, dtype_size, v8, v9, v8, 0);
}
