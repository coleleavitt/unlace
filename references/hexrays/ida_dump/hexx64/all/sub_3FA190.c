__int64 __fastcall sub_3FA190(__int64 a1, int a2, int a3, unsigned __int8 a4)
{
  unsigned int v4; // r13d
  __int64 v5; // r12
  int dtype_size; // eax
  int v7; // eax
  int v8; // eax

  v4 = a4;
  v5 = a3;
  dtype_size = get_dtype_size(a4);
  sub_1D6310(a1, 0x23u, dtype_size, a2, v5, 0, -1);
  v7 = get_dtype_size(v4);
  sub_1D6310(a1, 0x1Fu, v7, a2, v5, 4, -1);
  v8 = get_dtype_size(v4);
  return sub_1D6310(a1, 0x21u, v8, a2, v5, 1, -1);
}
