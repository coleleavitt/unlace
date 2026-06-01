unsigned __int64 __fastcall sub_3EEFC0(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 a4, int a5)
{
  int v7; // r15d
  int v8; // r9d
  int v10; // r14d
  int dtype_size; // eax
  _QWORD v12[2]; // [rsp+10h] [rbp-60h] BYREF
  _DWORD v13[6]; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-38h]

  v14 = __readfsqword(0x28u);
  if ( (unsigned __int8)(a2[1] - 6) <= 1u )
  {
    v10 = *a2;
    dtype_size = get_dtype_size();
    sub_1D3790(a1, 3, dtype_size, a4, 346938453, a5, v10);
  }
  else
  {
    v12[1] = 0;
    v12[0] = 0xFFFFFFFF00000000LL;
    v7 = get_dtype_size();
    sub_11E7B0((__int64)v12, *(_QWORD *)(a1 + 800), *(_QWORD *)(a1 + 40), a2, a4, v7, 0, -1);
    v13[0] = 1;
    v13[2] = a5;
    v13[1] = v7;
    sub_1D38D0(a1, 4, (unsigned int)v12, 0, (unsigned int)v13, v8);
    sub_11A960((__int64)v13);
    sub_11A960((__int64)v12);
  }
  return v14 - __readfsqword(0x28u);
}
