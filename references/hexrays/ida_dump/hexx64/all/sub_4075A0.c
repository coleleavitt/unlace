__int64 __fastcall sub_4075A0(__int64 a1)
{
  int dtype_size; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax

  dtype_size = get_dtype_size(0);
  sub_1D6310(a1, 0x3Eu, dtype_size, -1, -1, 0, 0);
  v2 = get_dtype_size(0);
  sub_1D6310(a1, 0x3Eu, v2, -1, -1, 1, 0);
  v3 = get_dtype_size(0);
  sub_1D6310(a1, 0x3Eu, v3, -1, -1, 2, 0);
  v4 = get_dtype_size(0);
  sub_1D6310(a1, 0x3Eu, v4, -1, -1, 3, 0);
  v5 = get_dtype_size(0);
  return sub_1D6310(a1, 0x3Eu, v5, -1, -1, 4, 0);
}
