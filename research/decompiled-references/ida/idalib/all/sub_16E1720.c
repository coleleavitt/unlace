void __fastcall sub_16E1720(__int64 a1, _BYTE *a2, unsigned int a3, double a4)
{
  __int64 v5; // rax
  int v6; // edx
  unsigned int v7; // r15d
  __int64 v8; // [rsp+28h] [rbp-D0h]
  int v9; // [rsp+30h] [rbp-C8h]
  _BYTE *v10; // [rsp+40h] [rbp-B8h] BYREF
  unsigned __int64 v11; // [rsp+48h] [rbp-B0h]
  unsigned __int64 v12; // [rsp+60h] [rbp-98h] BYREF
  unsigned __int64 v13; // [rsp+68h] [rbp-90h]
  __int64 v14; // [rsp+80h] [rbp-78h] BYREF
  char v15; // [rsp+88h] [rbp-70h]
  __int64 v16; // [rsp+8Ch] [rbp-6Ch]
  char v17; // [rsp+94h] [rbp-64h]
  void *v18; // [rsp+98h] [rbp-60h]
  __int64 v19; // [rsp+A0h] [rbp-58h]
  _BYTE v20[80]; // [rsp+A8h] [rbp-50h] BYREF

  v5 = sub_16B5B90(a1, (int)a2, a3);
  v9 = v6;
  v18 = v20;
  LOBYTE(v13) = v6;
  v15 = v6;
  v8 = v5;
  v12 = v5;
  v16 = 0;
  v17 = 0;
  v19 = 0;
  v20[0] = 0;
  v20[16] = 0;
  v14 = v5;
  v7 = sub_16B5B40(a1, (int)a2);
  sub_168B9B0((__int64)&v10, *(_QWORD *)(a1 + 8) + 8LL, 7286);
  sub_AEC220(&v10, a2, a3);
  sub_1582CA0((__int64)&v12, &v10);
  sub_16DE8D0(
    *(_QWORD *)(a1 + 8),
    *(unsigned __int8 *)(a1 + 98),
    *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL * *(unsigned int *)(a1 + 80)),
    (__int64)&v12,
    v7,
    a4,
    *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL * *(unsigned int *)(a1 + 80)),
    v8,
    v9,
    (char *)&v14,
    1);
  if ( v12 && v13 )
    sub_1580C40(v13, v12);
  if ( v10 && v11 )
    sub_1580C40(v11, (unsigned __int64)v10);
  if ( v18 != v20 )
    operator delete(v18);
}
