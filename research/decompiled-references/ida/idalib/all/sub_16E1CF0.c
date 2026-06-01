void __fastcall sub_16E1CF0(__int64 a1, int a2, int a3, double a4)
{
  __int64 v5; // rax
  int v6; // edx
  unsigned int v7; // r12d
  __int64 v8; // [rsp+28h] [rbp-50h]
  int v9; // [rsp+30h] [rbp-48h]
  unsigned __int64 v10; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v11; // [rsp+48h] [rbp-30h]

  v5 = sub_16B5B90(a1, a2, a3 - a2);
  v9 = v6;
  v8 = v5;
  v7 = sub_16B5B40(a1, a3);
  sub_168B9B0((__int64)&v10, *(_QWORD *)(a1 + 8) + 8LL, 7347);
  sub_16DE8D0(
    *(_QWORD *)(a1 + 8),
    *(unsigned __int8 *)(a1 + 98),
    *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL * *(unsigned int *)(a1 + 80)),
    (__int64)&v10,
    v7,
    a4,
    v8,
    v8,
    v9,
    nullptr,
    0);
  if ( v10 )
  {
    if ( v11 )
      sub_1580C40(v11, v10);
  }
}
