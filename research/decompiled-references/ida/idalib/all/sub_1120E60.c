void __fastcall sub_1120E60(__int64 *a1, __int64 a2, int a3, char a4)
{
  __int64 v6; // rdx
  void *v7; // rbp
  void *v8; // [rsp+8h] [rbp-A0h] BYREF
  void *v9; // [rsp+10h] [rbp-98h] BYREF
  signed __int64 v10; // [rsp+18h] [rbp-90h]
  _BYTE v11[16]; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int8 *v12[15]; // [rsp+30h] [rbp-78h] BYREF

  v6 = a1[1];
  v11[0] = 0;
  v10 = 0;
  v9 = v11;
  sub_223F7C0(&v8, a2, v6, &v9);
  v7 = v8;
  if ( !v8 && a4 )
  {
    sub_FC70B0((__int64)v12, *a1, 0, a3);
    sub_AEC220(v12, v9, v10);
    sub_AEA040((__int64)v12);
    v7 = v8;
  }
  if ( v7 )
  {
    sub_223C180(v7);
    operator delete(v7, 0x18u);
  }
  if ( v9 != v11 )
    operator delete(v9);
}
