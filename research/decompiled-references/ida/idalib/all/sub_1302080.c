_QWORD *__fastcall sub_1302080(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 v7; // r12
  _BYTE *v8; // rdi
  _QWORD v12[4]; // [rsp+18h] [rbp-B8h] BYREF
  void *v13[2]; // [rsp+38h] [rbp-98h] BYREF
  _BYTE v14[16]; // [rsp+48h] [rbp-88h] BYREF
  void **v15; // [rsp+58h] [rbp-78h] BYREF
  int v16; // [rsp+60h] [rbp-70h]
  __int128 v17; // [rsp+68h] [rbp-68h]
  __int64 v18; // [rsp+78h] [rbp-58h]
  char v19; // [rsp+80h] [rbp-50h]
  int v20; // [rsp+84h] [rbp-4Ch]
  void **v21; // [rsp+88h] [rbp-48h]

  v17 = 0;
  v21 = v13;
  v13[0] = v14;
  v13[1] = nullptr;
  v14[0] = 0;
  v16 = 0;
  v19 = 0;
  v20 = 1;
  v18 = 0;
  v15 = (void **)&off_2BEBE68;
  sub_227B8B0(&v15, 0, 0, 0);
  v12[1] = a4;
  v12[0] = off_2C43040;
  v12[2] = *a5;
  sub_227C560(&v15, v12);
  v15 = (void **)&off_2BEBE68;
  sub_227B7A0(&v15);
  v15 = v13;
  LOWORD(v18) = 260;
  v7 = operator new(0x40u);
  sub_2220590(v7, &v15, a2, a3);
  v8 = v13[0];
  *a1 = v7;
  if ( v8 != v14 )
    operator delete(v8);
  return a1;
}
