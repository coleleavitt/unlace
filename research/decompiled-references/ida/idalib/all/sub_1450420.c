void __fastcall sub_1450420(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  __int64 v5; // rbp
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  _BYTE *v8; // rax
  _BYTE v9[104]; // [rsp+0h] [rbp-68h] BYREF

  sub_1421C50(a2, (__int64)"pragma once", 0);
  if ( !sub_14363F0((_QWORD *)a2) || *(_DWORD *)(a2 + 748) == 1 || *(_BYTE *)(*(_QWORD *)(a2 + 56) + 744LL) )
  {
    v5 = *(_QWORD *)(a2 + 104);
    v6 = sub_1436660((_QWORD *)a2);
    v7 = sub_1465F30(v6);
    v8 = (_BYTE *)sub_13C2790(v5, v7);
    *v8 |= 4u;
  }
  else
  {
    sub_FC70B0((__int64)v9, *(_QWORD *)(a2 + 48), *a4, 1297);
    sub_AEA040((__int64)v9);
  }
}
