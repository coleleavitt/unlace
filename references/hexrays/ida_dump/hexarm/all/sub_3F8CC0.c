unsigned __int64 __fastcall sub_3F8CC0(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        int a4,
        int a5,
        unsigned int a6)
{
  _DWORD v10[4]; // [rsp+0h] [rbp-58h] BYREF
  _DWORD v11[6]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v12; // [rsp+28h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  v10[2] = a4;
  v10[0] = 1;
  v10[1] = get_dtype_size(a2);
  v11[2] = a5;
  v11[0] = 1;
  v11[1] = get_dtype_size(a3);
  sub_3F86E0(a1, a6, (unsigned __int8 *)v10, nullptr, (__int64)v11);
  sub_11C7E0((__int64)v11);
  sub_11C7E0((__int64)v10);
  return v12 - __readfsqword(0x28u);
}
