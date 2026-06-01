__int64 __fastcall sub_124E8C0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // edx
  unsigned __int8 v4; // [rsp+Fh] [rbp-89h]
  void *v5[2]; // [rsp+10h] [rbp-88h] BYREF
  __int64 v6; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v7[104]; // [rsp+30h] [rbp-68h] BYREF

  if ( !sub_10DCD30(a2, 0x62Bu) || sub_10DCD30(a2, 0xD2Cu) )
    return 0;
  sub_112D530(v5, a1, "dxv");
  v3 = sub_9B4AA0((__int64)v5, "dxv");
  result = 1;
  if ( !v3 )
  {
    sub_FC70B0((__int64)v7, **(_QWORD **)(a1 + 8), 0, 551);
    sub_AEA040((__int64)v7);
    result = 0;
  }
  if ( v5[0] != &v6 )
  {
    v4 = result;
    operator delete(v5[0]);
    return v4;
  }
  return result;
}
