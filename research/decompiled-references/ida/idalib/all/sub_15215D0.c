__int64 __fastcall sub_15215D0(__int64 a1, __int64 a2, __int64 a3, int *a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rbp
  int v7; // r13d
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v11[30]; // [rsp+0h] [rbp-78h] BYREF

  v6 = *(_QWORD *)(a2 + 48);
  v7 = *a4;
  if ( (unsigned __int8)sub_FD3830(*(_QWORD *)(v6 + 32), 0x884u, (unsigned int)*a4, v6, a5, a6) != 1 )
  {
    sub_FC70B0((__int64)v11, v6, v7, 2180);
    sub_AEA040((__int64)v11);
    sub_FD0110(*(_QWORD *)(a2 + 48), 0x884u, 1, 0, v8, v9);
  }
  return sub_141A820(a2, v11);
}
