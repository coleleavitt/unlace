__int64 __fastcall sub_407390(__int64 a1, unsigned int a2, unsigned __int8 a3, int a4, int a5)
{
  __int64 v5; // r15
  __int64 v6; // r14
  int dtype_size; // eax
  int v9; // eax

  v5 = a4;
  v6 = a5;
  dtype_size = get_dtype_size();
  sub_1D6310(a1, (a2 != 22) + 27, dtype_size, v5, v6, 0, 0);
  v9 = get_dtype_size();
  sub_1D6310(a1, a2, v9, v5, v6, v5, 0);
  sub_3FB370(a1, 8);
  return sub_3FD520(a1, v5, a3);
}
