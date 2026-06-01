void __fastcall sub_12A1210(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  void *v6[2]; // [rsp+8h] [rbp-128h] BYREF
  __int64 v7; // [rsp+18h] [rbp-118h] BYREF
  const char *v8; // [rsp+28h] [rbp-108h] BYREF
  __int16 v9; // [rsp+48h] [rbp-E8h]
  _BYTE v10[32]; // [rsp+58h] [rbp-D8h] BYREF
  __int16 v11; // [rsp+78h] [rbp-B8h]
  _BYTE v12[32]; // [rsp+88h] [rbp-A8h] BYREF
  __int16 v13; // [rsp+A8h] [rbp-88h]
  _BYTE v14[32]; // [rsp+B8h] [rbp-78h] BYREF
  __int16 v15; // [rsp+D8h] [rbp-58h]
  void **v16; // [rsp+E8h] [rbp-48h] BYREF
  __int16 v17; // [rsp+108h] [rbp-28h]

  v15 = 257;
  v8 = "/usr/include/c++/v1";
  v4 = *(_QWORD *)(a1 + 8);
  v13 = 257;
  v11 = 257;
  v5 = *(_QWORD *)(v4 + 496);
  v9 = 259;
  sub_1130220(v6, *(_BYTE **)(v4 + 488), v5, (__int64)&v8, (__int64)v10, (__int64)v12, (__int64)v14);
  v17 = 260;
  v16 = v6;
  sub_112FA80(a2, a3, (__int64)&v16);
  if ( v6[0] != &v7 )
    operator delete(v6[0]);
}
