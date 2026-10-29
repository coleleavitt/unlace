__int64 __fastcall sub_3FC810(__int64 a1, int a2, unsigned __int8 a3, int a4, int a5)
{
  int dtype_size; // eax
  int v9; // eax

  dtype_size = get_dtype_size();
  sub_1D3790(a1, (a2 != 22) + 27, dtype_size, a4, a5, 0, 0);
  v9 = get_dtype_size();
  sub_1D3790(a1, a2, v9, a4, a5, a4, 0);
  sub_3F0810(a1, 8);
  return sub_3F29C0(a1, a4, a3);
}
