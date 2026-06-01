_BOOL8 __fastcall sub_124E990(__int64 a1, __int64 a2, int a3)
{
  char v5; // r14
  char v6; // r13
  void *v7[2]; // [rsp+0h] [rbp-98h] BYREF
  _BYTE v8[16]; // [rsp+10h] [rbp-88h] BYREF
  _BYTE v9[120]; // [rsp+20h] [rbp-78h] BYREF

  if ( sub_10DCD30(a2, 0x930u) && sub_10DCD30(a2, 0x62Bu) )
  {
    if ( !sub_10DCD30(a2, 0x62Bu) || sub_10DCD30(a2, 0xD2Cu) )
      goto LABEL_5;
    v5 = 0;
    v6 = 1;
  }
  else
  {
    if ( !sub_10DCD30(a2, 0x62Bu) || sub_10DCD30(a2, 0xD2Cu) )
      return 1;
    v5 = 1;
    v6 = 0;
  }
  sub_112D530(v7, a1, "dxv");
  if ( !sub_9B4AA0((__int64)v7, "dxv") )
  {
    sub_FC70B0((__int64)v9, **(_QWORD **)(a1 + 8), 0, 551);
    sub_AEA040((__int64)v9);
    if ( v7[0] != v8 )
      operator delete(v7[0]);
    if ( v6 )
    {
LABEL_5:
      if ( a3 != 22 )
        return 0;
    }
    return 1;
  }
  if ( v7[0] != v8 )
    operator delete(v7[0]);
  if ( a3 == 22 && v6 )
    return 1;
  if ( a3 != 21 )
    return 0;
  return v5 != 0;
}
