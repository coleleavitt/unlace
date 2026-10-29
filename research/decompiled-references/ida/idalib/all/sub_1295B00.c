void __fastcall sub_1295B00(__int64 a1, __int64 a2, __int64 a3, __m128i a4, __m128i a5)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  _BYTE *v9; // rsi
  void *v10[2]; // [rsp+8h] [rbp-168h] BYREF
  __int64 v11; // [rsp+18h] [rbp-158h] BYREF
  const char *v12; // [rsp+28h] [rbp-148h] BYREF
  __int16 v13; // [rsp+48h] [rbp-128h]
  _BYTE v14[32]; // [rsp+58h] [rbp-118h] BYREF
  __int16 v15; // [rsp+78h] [rbp-F8h]
  _BYTE v16[32]; // [rsp+88h] [rbp-E8h] BYREF
  __int16 v17; // [rsp+A8h] [rbp-C8h]
  _BYTE v18[32]; // [rsp+B8h] [rbp-B8h] BYREF
  __int16 v19; // [rsp+D8h] [rbp-98h]
  __int64 v20; // [rsp+F0h] [rbp-80h]
  __int64 v21; // [rsp+F8h] [rbp-78h]
  __int64 v22; // [rsp+108h] [rbp-68h]
  __int64 v23; // [rsp+138h] [rbp-38h]

  LOWORD(v23) = 257;
  v12 = "/usr/include/g++";
  v7 = *(_QWORD *)(a1 + 8);
  v19 = 257;
  v17 = 257;
  v8 = *(_QWORD *)(v7 + 496);
  v15 = 257;
  v9 = *(_BYTE **)(v7 + 488);
  v13 = 259;
  sub_1130220(v10, v9, v8, (__int64)&v12, (__int64)v14, (__int64)v16, (__int64)v18);
  LOWORD(v22) = 260;
  sub_1214670(a1, (__int64)&byte_22F0C30, 0, a2, a3, 0, a4, (int)v10, v20, v21, a5);
  if ( v10[0] != &v11 )
    operator delete(v10[0]);
}
