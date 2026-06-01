void __fastcall __noreturn sub_2220CA0(__int64 **a1, unsigned __int8 a2)
{
  __int64 *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 *v6; // [rsp+0h] [rbp-C0h] BYREF
  _QWORD v7[2]; // [rsp+8h] [rbp-B8h] BYREF
  _BYTE v8[24]; // [rsp+18h] [rbp-A8h] BYREF
  __int64 v9; // [rsp+48h] [rbp-78h]
  __int64 (__fastcall **v10)(); // [rsp+58h] [rbp-68h] BYREF
  int v11; // [rsp+60h] [rbp-60h]
  __int128 v12; // [rsp+68h] [rbp-58h]
  __int64 v13; // [rsp+78h] [rbp-48h]
  char v14; // [rsp+80h] [rbp-40h]
  int v15; // [rsp+84h] [rbp-3Ch]
  _QWORD *v16; // [rsp+88h] [rbp-38h]

  v7[1] = 0;
  v8[0] = 0;
  v7[0] = v8;
  v10 = &off_2BEBE68;
  v11 = 0;
  v14 = 0;
  v15 = 1;
  v13 = 0;
  v12 = 0;
  v16 = v7;
  sub_227B8B0(&v10, 0, 0, 0);
  v2 = *a1;
  LOWORD(v9) = 257;
  v6 = v2;
  *a1 = nullptr;
  sub_22208E0(&v6, (__int64)&v10, 257, v3, v4, v5, v8[16]);
  if ( v6 )
    (*(void (__fastcall **)(__int64 *))(*v6 + 8))(v6);
  v10 = &off_2BEBE68;
  sub_227B7A0(&v10);
  LOWORD(v13) = 260;
  v10 = (__int64 (__fastcall **)())v7;
  sub_2221AD0(&v10, a2);
}
