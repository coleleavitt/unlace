__int64 __fastcall sub_3FCA20(int a1)
{
  int dtype_size; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax

  dtype_size = get_dtype_size();
  sub_1D3790(a1, 62, dtype_size, -1, -1, 0, 0);
  v2 = get_dtype_size();
  sub_1D3790(a1, 62, v2, -1, -1, 1, 0);
  v3 = get_dtype_size();
  sub_1D3790(a1, 62, v3, -1, -1, 2, 0);
  v4 = get_dtype_size();
  sub_1D3790(a1, 62, v4, -1, -1, 3, 0);
  v5 = get_dtype_size();
  return sub_1D3790(a1, 62, v5, -1, -1, 4, 0);
}
