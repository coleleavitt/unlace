void __fastcall sub_16DFFA0(__int64 a1, int a2, int a3, double a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v8; // rax
  int v9; // edx
  unsigned int v10; // r12d
  __int64 v11; // [rsp+34h] [rbp-44h]
  int v12; // [rsp+3Ch] [rbp-3Ch]
  unsigned __int64 v13; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v14; // [rsp+48h] [rbp-30h]

  if ( (unsigned __int8)sub_FD3830(
                          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 264LL) + 32LL),
                          0x1B18u,
                          0,
                          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 264LL),
                          a6,
                          a7) != 1 )
  {
    v8 = sub_16B5B90(a1, a2, a3);
    v12 = v9;
    v11 = v8;
    v10 = sub_16B5B40(a1, a2);
    sub_168B9B0((__int64)&v13, *(_QWORD *)(a1 + 8) + 8LL, 6936);
    sub_16DE8D0(
      *(_QWORD *)(a1 + 8),
      *(unsigned __int8 *)(a1 + 98),
      *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL * *(unsigned int *)(a1 + 80)),
      (__int64)&v13,
      v10,
      a4,
      v11,
      v11,
      v12,
      nullptr,
      0);
    if ( v13 )
    {
      if ( v14 )
        sub_1580C40(v14, v13);
    }
  }
}
