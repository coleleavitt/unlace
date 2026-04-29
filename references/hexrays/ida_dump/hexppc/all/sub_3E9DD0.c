unsigned __int64 __fastcall sub_3E9DD0(__int64 a1, unsigned __int8 *a2, unsigned __int8 a3, __int64 a4, int a5)
{
  unsigned int v5; // r15d
  int dtype_size; // r8d
  int v10; // ebx
  int v11; // eax
  __int64 v12; // rax
  int v13; // [rsp+0h] [rbp-70h]
  unsigned __int64 v15; // [rsp+10h] [rbp-60h] BYREF
  __int64 v16; // [rsp+18h] [rbp-58h]
  _DWORD v17[6]; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v18; // [rsp+38h] [rbp-38h]

  v5 = a3;
  v18 = __readfsqword(0x28u);
  v16 = 0;
  v15 = 0xFFFFFFFF00000000LL;
  dtype_size = get_dtype_size(a3);
  if ( a2[1] != 7 && ((unsigned __int8)(a3 - 3) <= 1u || a3 == 15) )
  {
    v13 = dtype_size;
    LOBYTE(v15) = 13;
    v12 = j__qalloc_or_throw(20);
    v16 = v12;
    *(_DWORD *)(v12 + 16) = v13;
    HIDWORD(v15) = v13;
    sub_CC530(0x4Bu, a2 + 8, v12, (unsigned __int16)(v13 / 2 - 1));
    dtype_size = v13;
  }
  if ( (_BYTE)v15 )
  {
    v17[0] = 1;
    v17[2] = a5;
    v17[1] = dtype_size;
    sub_1D2850(a1, 4, (unsigned __int8 *)&v15, nullptr, (unsigned __int8 *)v17);
    sub_119360((__int64)v17);
  }
  else
  {
    v10 = *a2;
    v11 = get_dtype_size(v5);
    sub_1D2710(a1, 3u, v11, a4, 0x3BEA45E214ADDC55LL, a5, v10);
  }
  sub_119360((__int64)&v15);
  return v18 - __readfsqword(0x28u);
}
