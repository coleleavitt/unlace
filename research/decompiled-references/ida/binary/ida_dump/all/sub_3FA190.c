__int64 __fastcall sub_3FA190(__int64 a1, int a2, int a3)
{
  __int64 v3; // r12
  int dtype_size; // eax
  int v5; // eax
  int v6; // eax

  v3 = a3;
  dtype_size = get_dtype_size();
  sub_1D6310(a1, 0x23u, dtype_size, a2, v3, 0, -1);
  v5 = get_dtype_size();
  sub_1D6310(a1, 0x1Fu, v5, a2, v3, 4, -1);
  v6 = get_dtype_size();
  return sub_1D6310(a1, 0x21u, v6, a2, v3, 1, -1);
}
