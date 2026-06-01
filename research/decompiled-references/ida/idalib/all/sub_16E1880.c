void __fastcall sub_16E1880(__int64 a1, int a2, int a3, _BYTE *a4, double a5)
{
  __int64 v6; // rax
  int v7; // edx
  unsigned int v8; // r14d
  __int64 v9; // r9
  __int64 v10; // [rsp+28h] [rbp-C0h]
  int v11; // [rsp+30h] [rbp-B8h]
  _BYTE *v12; // [rsp+40h] [rbp-A8h] BYREF
  unsigned __int64 v13; // [rsp+48h] [rbp-A0h]
  unsigned __int64 v14; // [rsp+60h] [rbp-88h] BYREF
  unsigned __int64 v15; // [rsp+68h] [rbp-80h]
  __int64 v16; // [rsp+80h] [rbp-68h] BYREF
  char v17; // [rsp+88h] [rbp-60h]
  __int64 v18; // [rsp+8Ch] [rbp-5Ch]
  char v19; // [rsp+94h] [rbp-54h]
  void *v20; // [rsp+98h] [rbp-50h]
  __int64 v21; // [rsp+A0h] [rbp-48h]
  _BYTE v22[64]; // [rsp+A8h] [rbp-40h] BYREF

  v6 = sub_16B5B90(a1, a2, a3 - a2 + 1);
  v11 = v7;
  v20 = v22;
  LOBYTE(v15) = v7;
  v17 = v7;
  v10 = v6;
  v14 = v6;
  v18 = 0;
  v19 = 0;
  v21 = 0;
  v22[0] = 0;
  v22[16] = 0;
  v16 = v6;
  v8 = sub_16B5B40(a1, (int)a4);
  sub_168B9B0((__int64)&v12, *(_QWORD *)(a1 + 8) + 8LL, 7276);
  sub_AEC220(&v12, a4, 1);
  sub_1582CA0((__int64)&v14, &v12);
  sub_16DE8D0(
    *(_QWORD *)(a1 + 8),
    *(unsigned __int8 *)(a1 + 98),
    *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL * *(unsigned int *)(a1 + 80)),
    (__int64)&v14,
    v8,
    a5,
    v9,
    v10,
    v11,
    (char *)&v16,
    1);
  if ( v14 && v15 )
    sub_1580C40(v15, v14);
  if ( v12 && v13 )
    sub_1580C40(v13, (unsigned __int64)v12);
  if ( v20 != v22 )
    operator delete(v20);
}
