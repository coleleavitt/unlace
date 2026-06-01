unsigned __int64 __fastcall sub_3F0BC0(__int64 a1, int a2, int a3, __int64 a4, int a5)
{
  int dtype_size; // eax
  __int64 v9; // r8
  __int64 v10; // rsi
  int v11; // r9d
  _DWORD v13[4]; // [rsp+0h] [rbp-68h] BYREF
  _QWORD v14[2]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v15; // [rsp+20h] [rbp-48h] BYREF
  int v16; // [rsp+28h] [rbp-40h]
  unsigned __int64 v17; // [rsp+38h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  dtype_size = get_dtype_size();
  v13[2] = a3;
  v9 = *(_QWORD *)(a1 + 40);
  v10 = *(_QWORD *)(a1 + 832);
  v13[0] = 1;
  v13[1] = dtype_size;
  v14[0] = 0xFFFFFFFF00000000LL;
  v14[1] = 0;
  sub_11E5D0((__int64)v14, v10, 0, dtype_size, v9, 7);
  v16 = a5;
  v15 = 0x100000001LL;
  sub_1D38D0(a1, a2, (unsigned int)v13, (unsigned int)v14, (unsigned int)&v15, v11);
  sub_11A960((__int64)&v15);
  sub_11A960((__int64)v14);
  sub_11A960((__int64)v13);
  return v17 - __readfsqword(0x28u);
}
