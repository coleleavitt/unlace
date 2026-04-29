__int64 __fastcall sub_3E9B90(
        __int64 a1,
        unsigned int a2,
        unsigned __int8 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  int dtype_size; // eax

  dtype_size = get_dtype_size(a3);
  return sub_1D2710(a1, a2, dtype_size, a4, a5, a6, a7);
}
