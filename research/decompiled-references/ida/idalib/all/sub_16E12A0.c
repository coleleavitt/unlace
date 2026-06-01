void __fastcall sub_16E12A0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, int a5, int a6, double a7)
{
  int v9; // edx
  unsigned int v10; // r15d
  char *v11; // rax
  __int64 v12; // rax
  char v13; // dl
  int v14; // [rsp+20h] [rbp-F8h]
  int v15; // [rsp+2Ch] [rbp-ECh]
  __int64 v16; // [rsp+48h] [rbp-D0h]
  int v17; // [rsp+50h] [rbp-C8h]
  _BYTE *v18; // [rsp+60h] [rbp-B8h] BYREF
  unsigned __int64 v19; // [rsp+68h] [rbp-B0h]
  unsigned __int64 v20; // [rsp+80h] [rbp-98h] BYREF
  unsigned __int64 v21; // [rsp+88h] [rbp-90h]
  _BYTE v22[24]; // [rsp+A0h] [rbp-78h] BYREF
  char *v23; // [rsp+B8h] [rbp-60h]
  __int128 v24; // [rsp+C0h] [rbp-58h] BYREF
  __int128 v25; // [rsp+D0h] [rbp-48h]

  if ( *(_DWORD *)(a3 + 12) == 1 )
  {
    v15 = a6;
    v14 = a5;
    v12 = sub_16B5B90(
            a1,
            (unsigned int)*(_QWORD *)a3 - *(unsigned __int8 *)(a3 + 21),
            *(_DWORD *)(a3 + 8) + (unsigned int)*(unsigned __int8 *)(a3 + 21));
    *(_QWORD *)&v22[12] = 0;
    a5 = v14;
    a6 = v15;
    v20 = v12;
    LOBYTE(v21) = v13;
    v22[20] = 0;
    v23 = (char *)&v24 + 8;
    *(_QWORD *)&v24 = 0;
    BYTE8(v24) = 0;
    BYTE8(v25) = 0;
    *(_QWORD *)v22 = v12;
    v22[8] = v13;
  }
  else
  {
    a7 = 0.0;
    v24 = 0;
    v23 = (char *)&v24 + 8;
    BYTE8(v24) = 0;
    memset(v22, 0, sizeof(v22));
    v25 = 0;
  }
  v16 = sub_16B5B90(a1, a5, a6);
  v17 = v9;
  v10 = sub_16B5B40(a1, (unsigned int)*(_QWORD *)a3 - *(unsigned __int8 *)(a3 + 21));
  sub_168B9B0((__int64)&v18, *(_QWORD *)(a1 + 8) + 8LL, 7289);
  sub_16B6F70(&v18, a4);
  v11 = sub_C9DAF0(a2 + 40);
  sub_16B7630(&v18, (__int64)v11);
  sub_1582CA0((__int64)&v20, &v18);
  sub_16DE8D0(
    *(_QWORD *)(a1 + 8),
    *(unsigned __int8 *)(a1 + 98),
    *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL * *(unsigned int *)(a1 + 80)),
    (__int64)&v20,
    v10,
    a7,
    *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL * *(unsigned int *)(a1 + 80)),
    v16,
    v17,
    v22,
    1);
  if ( v20 && v21 )
    sub_1580C40(v21, v20);
  if ( v18 && v19 )
    sub_1580C40(v19, (unsigned __int64)v18);
  if ( v23 != (char *)&v24 + 8 )
    operator delete(v23);
}
