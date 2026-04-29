unsigned __int64 __fastcall sub_3EC840(__int64 a1, int a2, int a3)
{
  __int64 v4; // r8
  __int64 v5; // rsi
  int v6; // ebx
  __int64 v7; // rbx
  int dtype_size; // eax
  __int64 v9; // [rsp+8h] [rbp-A8h]
  _DWORD v10[4]; // [rsp+20h] [rbp-90h] BYREF
  _QWORD v11[2]; // [rsp+30h] [rbp-80h] BYREF
  __int64 v12; // [rsp+40h] [rbp-70h] BYREF
  int v13; // [rsp+48h] [rbp-68h]
  __int64 v14; // [rsp+50h] [rbp-60h] BYREF
  int v15; // [rsp+58h] [rbp-58h]
  __int64 v16; // [rsp+60h] [rbp-50h] BYREF
  int v17; // [rsp+68h] [rbp-48h]
  unsigned __int64 v18; // [rsp+78h] [rbp-38h]

  v18 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 52) & 2) != 0 )
  {
    v10[2] = a2;
    v4 = *(_QWORD *)(a1 + 40);
    v5 = *(_QWORD *)(a1 + 832);
    v10[0] = 1;
    v10[1] = a3;
    v11[0] = 0xFFFFFFFF00000000LL;
    v11[1] = 0;
    sub_11CFD0((__int64)v11, v5, 0, a3, v4, 0);
    v6 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 472LL);
    v12 = 0x100000001LL;
    v13 = v6;
    sub_1D2850(a1, 40, (unsigned __int8 *)v10, (unsigned __int8 *)v11, (unsigned __int8 *)&v12);
    v14 = 0x100000001LL;
    v15 = v6 + 1;
    sub_1D2850(a1, 38, (unsigned __int8 *)v10, (unsigned __int8 *)v11, (unsigned __int8 *)&v14);
    v16 = 0x100000001LL;
    v17 = v6 + 2;
    sub_1D2850(a1, 33, (unsigned __int8 *)v10, (unsigned __int8 *)v11, (unsigned __int8 *)&v16);
    v9 = v6 + 3;
    v7 = *(int *)(*(_QWORD *)(a1 + 832) + 480LL);
    dtype_size = get_dtype_size(0);
    sub_1D2710(a1, 4u, dtype_size, v7, 0x3BEA45E214ADDC55LL, v9, 0);
    sub_119360((__int64)&v16);
    sub_119360((__int64)&v14);
    sub_119360((__int64)&v12);
    sub_119360((__int64)v11);
    sub_119360((__int64)v10);
  }
  return v18 - __readfsqword(0x28u);
}
