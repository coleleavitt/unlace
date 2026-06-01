__int64 __fastcall sub_3EF630(int a1, int a2, int a3)
{
  int dtype_size; // eax
  int v5; // eax
  int v6; // eax

  dtype_size = get_dtype_size();
  sub_1D3790(a1, 35, dtype_size, a2, a3, 0, -1);
  v5 = get_dtype_size();
  sub_1D3790(a1, 31, v5, a2, a3, 4, -1);
  v6 = get_dtype_size();
  return sub_1D3790(a1, 33, v6, a2, a3, 1, -1);
}
