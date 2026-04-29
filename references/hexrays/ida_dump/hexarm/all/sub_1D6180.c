__int64 __fastcall sub_1D6180(__int64 a1, unsigned __int8 a2, unsigned __int8 a3, int a4, int a5, unsigned __int8 a6)
{
  int dtype_size; // ebp
  int v11; // esi
  __int64 v12; // rbx
  _DWORD v14[4]; // [rsp+0h] [rbp-68h] BYREF
  int v15; // [rsp+10h] [rbp-58h] BYREF
  int v16; // [rsp+14h] [rbp-54h]
  int v17; // [rsp+18h] [rbp-50h]
  unsigned __int64 v18; // [rsp+28h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  dtype_size = get_dtype_size(a2);
  v14[2] = a4;
  v11 = 4;
  v14[0] = 1;
  v15 = 1;
  v14[1] = dtype_size;
  v16 = get_dtype_size(a3);
  v17 = a5;
  if ( dtype_size != v16 )
    v11 = 9 - a6;
  v12 = sub_1D5E90(a1, v11, (unsigned __int8 *)v14, nullptr, (unsigned __int8 *)&v15);
  sub_11C7E0((__int64)&v15);
  sub_11C7E0((__int64)v14);
  return v12;
}
