void __fastcall sub_16E0C90(__int64 a1, int a2, int a3, unsigned int a4, __int64 a5, __int64 a6, double a7)
{
  __int64 v9; // rax
  int v10; // edx
  unsigned int v11; // r13d
  __int64 v12; // r9
  __int64 v13; // [rsp+34h] [rbp-74h]
  int v14; // [rsp+3Ch] [rbp-6Ch]
  unsigned __int64 v15; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-60h]
  _BYTE *v17; // [rsp+60h] [rbp-48h] BYREF
  unsigned __int64 v18; // [rsp+68h] [rbp-40h]

  if ( (unsigned __int8)sub_FD3830(
                          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 264LL) + 32LL),
                          0x1B0Au,
                          0,
                          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 264LL),
                          a5,
                          a6) != 1 )
  {
    v9 = sub_16B5B90(a1, a2, a3);
    v14 = v10;
    v13 = v9;
    v11 = sub_16B5B40(a1, a2);
    sub_168B9B0((__int64)&v17, *(_QWORD *)(a1 + 8) + 8LL, 6922);
    sub_16B6F70(&v17, a4);
    sub_1582CA0((__int64)&v15, &v17);
    sub_16DE8D0(
      *(_QWORD *)(a1 + 8),
      *(unsigned __int8 *)(a1 + 98),
      *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL * *(unsigned int *)(a1 + 80)),
      (__int64)&v15,
      v11,
      a7,
      v12,
      v13,
      v14,
      nullptr,
      0);
    if ( v15 && v16 )
      sub_1580C40(v16, v15);
    if ( v17 )
    {
      if ( v18 )
        sub_1580C40(v18, (unsigned __int64)v17);
    }
  }
}
