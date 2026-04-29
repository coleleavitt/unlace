unsigned __int64 __fastcall sub_3EA390(__int64 a1, int a2, int a3, int a4, unsigned __int8 a5)
{
  int v7; // [rsp+0h] [rbp-58h] BYREF
  int dtype_size; // [rsp+4h] [rbp-54h]
  int v9; // [rsp+8h] [rbp-50h]
  _DWORD v10[6]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  v9 = a3;
  v7 = 1;
  dtype_size = get_dtype_size(a5);
  v10[0] = 1;
  v10[2] = a4;
  v10[1] = dtype_size / 2;
  sub_1D2850(a1, a2, (unsigned __int8 *)&v7, nullptr, (unsigned __int8 *)v10);
  sub_119360((__int64)v10);
  sub_119360((__int64)&v7);
  return v11 - __readfsqword(0x28u);
}
