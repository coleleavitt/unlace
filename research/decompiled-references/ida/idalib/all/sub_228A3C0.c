__int64 __fastcall sub_228A3C0(
        _QWORD *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        int a12,
        __int64 a13,
        int a14,
        int a15,
        int a16,
        __int64 a17)
{
  __int64 v17; // rbx
  __int64 result; // rax
  __int64 v19; // [rsp+8h] [rbp-100h]
  _QWORD v20[4]; // [rsp+10h] [rbp-F8h] BYREF
  __int16 v21; // [rsp+30h] [rbp-D8h]
  _BYTE v22[32]; // [rsp+40h] [rbp-C8h] BYREF
  __int16 v23; // [rsp+60h] [rbp-A8h]
  _BYTE v24[32]; // [rsp+70h] [rbp-98h] BYREF
  __int16 v25; // [rsp+90h] [rbp-78h]
  _BYTE v26[32]; // [rsp+A0h] [rbp-68h] BYREF
  __int16 v27; // [rsp+C0h] [rbp-48h]

  v17 = a13;
  v19 = a17;
  while ( 1 )
  {
    if ( a7 == v17 )
    {
      result = v19;
      if ( a11 == v19 )
        break;
    }
    v27 = 257;
    v25 = 257;
    v20[0] = a9;
    v23 = 257;
    v21 = 261;
    v20[1] = a10;
    sub_2289D90(a1, a2, (__int64)v20, (__int64)v22, (__int64)v24, (__int64)v26);
    sub_2289340((__int64)&a7);
  }
  return result;
}
