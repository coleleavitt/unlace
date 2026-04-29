unsigned __int64 __fastcall sub_3F1790(__int64 a1, int a2, int a3, unsigned int a4, char a5)
{
  __int64 v8; // rsi
  int dtype_size; // eax
  __int64 v11; // [rsp+10h] [rbp-C8h] BYREF
  int v12; // [rsp+18h] [rbp-C0h]
  _QWORD v13[2]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v14; // [rsp+30h] [rbp-A8h] BYREF
  int v15; // [rsp+38h] [rbp-A0h]
  unsigned int v16; // [rsp+40h] [rbp-98h] BYREF
  int v17; // [rsp+44h] [rbp-94h]
  _QWORD v18[2]; // [rsp+60h] [rbp-78h] BYREF
  _QWORD v19[2]; // [rsp+70h] [rbp-68h] BYREF
  _QWORD v20[11]; // [rsp+80h] [rbp-58h] BYREF

  v20[3] = __readfsqword(0x28u);
  if ( a5 )
  {
    v8 = *(_QWORD *)(a1 + 40);
    v12 = a3;
    v11 = 0x800000001LL;
    v18[0] = 0xFFFFFFFF00000000LL;
    v18[1] = 0;
    v19[0] = 0xFFFFFFFF00000000LL;
    v19[1] = 0;
    v20[0] = 0xFFFFFFFF00000000LL;
    v20[1] = 0;
    sub_32C520((__int64)&v16, v8);
    v16 = a4;
    sub_118FD0((char *)v18, (char *)&v11);
    v17 |= 0x10u;
    v13[0] = 0xFFFFFFFF00000000LL;
    HIDWORD(v20[0]) = 4;
    v13[1] = 0;
    sub_1228A0((__int64)v13, (unsigned __int8 *)&v16);
    v15 = a2;
    v14 = 0x800000001LL;
    sub_1D2850(a1, 67, (unsigned __int8 *)v13, nullptr, (unsigned __int8 *)&v14);
    sub_119360((__int64)&v14);
    sub_119360((__int64)v13);
    sub_119360((__int64)v20);
    sub_119360((__int64)v19);
    sub_119360((__int64)v18);
    sub_119360((__int64)&v11);
  }
  else
  {
    dtype_size = get_dtype_size(7);
    sub_1D2710(a1, a4, dtype_size, a3, 0x3BEA45E214ADDC55LL, a2, 0);
  }
  return sub_3EC840(a1, a2, 8);
}
