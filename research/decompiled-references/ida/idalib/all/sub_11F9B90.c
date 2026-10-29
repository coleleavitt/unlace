void __fastcall sub_11F9B90(__int64 a1, int a2, int a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  _BYTE *v7; // rsi
  void *v8[2]; // [rsp+8h] [rbp-168h] BYREF
  __int64 v9; // [rsp+18h] [rbp-158h] BYREF
  const char *v10; // [rsp+28h] [rbp-148h] BYREF
  __int16 v11; // [rsp+48h] [rbp-128h]
  _BYTE v12[32]; // [rsp+58h] [rbp-118h] BYREF
  __int16 v13; // [rsp+78h] [rbp-F8h]
  _BYTE v14[32]; // [rsp+88h] [rbp-E8h] BYREF
  __int16 v15; // [rsp+A8h] [rbp-C8h]
  _BYTE v16[32]; // [rsp+B8h] [rbp-B8h] BYREF
  __int16 v17; // [rsp+D8h] [rbp-98h]
  __int64 v18; // [rsp+F0h] [rbp-80h]
  __int64 v19; // [rsp+F8h] [rbp-78h]
  __int64 v20; // [rsp+100h] [rbp-70h]
  __int64 v21; // [rsp+108h] [rbp-68h]
  __int64 v22; // [rsp+118h] [rbp-58h]
  __int64 v23; // [rsp+120h] [rbp-50h]
  __int64 v24; // [rsp+128h] [rbp-48h]
  __int64 v25; // [rsp+130h] [rbp-40h]
  __int64 v26; // [rsp+138h] [rbp-38h]

  LOWORD(v26) = 257;
  v10 = "/usr/include/c++/8.0";
  v5 = *(_QWORD *)(a1 + 8);
  v17 = 257;
  v15 = 257;
  v6 = *(_QWORD *)(v5 + 496);
  v13 = 257;
  v7 = *(_BYTE **)(v5 + 488);
  v11 = 259;
  sub_1130220(v8, v7, v6, (__int64)&v10, (__int64)v12, (__int64)v14, (__int64)v16);
  LOWORD(v21) = 260;
  sub_1214670(a1, (unsigned int)&byte_22F0C30, 0, a2, a3, 0, (char)v8, v18, v19, v20, v21, v22, v23, v24, v25, v26);
  if ( v8[0] != &v9 )
    operator delete(v8[0]);
}
