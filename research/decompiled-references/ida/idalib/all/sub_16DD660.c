void __fastcall sub_16DD660(__int64 a1, __int64 a2, double a3)
{
  _WORD *v4; // rdi
  __int64 v5; // r13
  unsigned int v6; // r12d
  unsigned __int64 v7; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-40h]

  v4 = *(_WORD **)(a1 + 24);
  if ( (*v4 & 0x1FF) != 0x1D )
  {
    v5 = sub_EEC8C0((unsigned __int64)v4, a2, a3);
    v6 = sub_16B5B40(a1, a2);
    sub_168B9B0((__int64)&v7, *(_QWORD *)(a1 + 8) + 8LL, 7281);
    sub_16DCAE0(
      *(_QWORD *)(a1 + 8),
      *(unsigned __int8 *)(a1 + 98),
      *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL * *(unsigned int *)(a1 + 80)),
      (__int64)&v7,
      v6,
      1,
      a3,
      v5,
      nullptr,
      0);
    if ( v7 )
    {
      if ( v8 )
        sub_1580C40(v8, v7);
    }
  }
}
