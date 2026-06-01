void __fastcall sub_16E14D0(__int64 a1, __int64 a2, __int64 *a3, int a4, int a5, double a6)
{
  __int64 v9; // rax
  char v10; // dl
  __int64 v11; // rax
  int v12; // edx
  unsigned int v13; // r14d
  char *v14; // rax
  __int64 v15; // [rsp+38h] [rbp-D0h]
  int v16; // [rsp+40h] [rbp-C8h]
  _BYTE *v17; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v18; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v19; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v20; // [rsp+78h] [rbp-90h]
  __int64 v21; // [rsp+90h] [rbp-78h] BYREF
  char v22; // [rsp+98h] [rbp-70h]
  __int64 v23; // [rsp+9Ch] [rbp-6Ch]
  char v24; // [rsp+A4h] [rbp-64h]
  void *v25; // [rsp+A8h] [rbp-60h]
  __int64 v26; // [rsp+B0h] [rbp-58h]
  _BYTE v27[80]; // [rsp+B8h] [rbp-50h] BYREF

  v9 = sub_16B5B90(a1, a3[1], 1);
  LOBYTE(v20) = v10;
  v22 = v10;
  v25 = v27;
  v19 = v9;
  v21 = v9;
  v23 = 0;
  v24 = 0;
  v26 = 0;
  v27[0] = 0;
  v27[16] = 0;
  v11 = sub_16B5B90(a1, a4, a5);
  v16 = v12;
  v15 = v11;
  v13 = sub_16B5B40(a1, a3[1]);
  sub_168B9B0((__int64)&v17, *(_QWORD *)(a1 + 8) + 8LL, 7288);
  sub_16B7630(&v17, *a3);
  v14 = sub_C9DAF0(a2 + 40);
  sub_16B7630(&v17, (__int64)v14);
  sub_1582CA0((__int64)&v19, &v17);
  sub_16DE8D0(
    *(_QWORD *)(a1 + 8),
    *(unsigned __int8 *)(a1 + 98),
    *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL * *(unsigned int *)(a1 + 80)),
    (__int64)&v19,
    v13,
    a6,
    *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL * *(unsigned int *)(a1 + 80)),
    v15,
    v16,
    (char *)&v21,
    1);
  if ( v19 && v20 )
    sub_1580C40(v20, v19);
  if ( v17 && v18 )
    sub_1580C40(v18, (unsigned __int64)v17);
  if ( v25 != v27 )
    operator delete(v25);
}
