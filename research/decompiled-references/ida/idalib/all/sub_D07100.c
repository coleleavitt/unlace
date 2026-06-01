__int64 __fastcall sub_D07100(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r12
  __int64 v4; // r12
  __int64 v5; // rax
  _BYTE v6[48]; // [rsp-30h] [rbp-78h] BYREF
  _QWORD v7[9]; // [rsp+0h] [rbp-48h] BYREF

  if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
  {
    v3 = *(_QWORD *)(a1 + 560);
    *(_QWORD *)(a1 + 1240) = *a2;
    sub_E21760(v3, 48);
    sub_E23260(v7);
    sub_E21790(v3, 48);
    v4 = *(_QWORD *)(a1 + 560);
    sub_CFE7A0((__int64)v6, v7);
    v5 = sub_E216C0(v4, 48);
    sub_E23260(v5);
    sub_E232A0(v6);
    sub_E232A0(v7);
  }
  return 1;
}
