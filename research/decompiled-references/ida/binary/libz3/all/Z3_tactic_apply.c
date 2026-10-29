__int64 __fastcall Z3_tactic_apply(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // bp
  __int64 v5; // r12
  __int64 v7; // [rsp+0h] [rbp-48h] BYREF
  _BYTE v8[64]; // [rsp+8h] [rbp-40h] BYREF

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
    sub_29D390();
  *(_DWORD *)(a1 + 1520) = 0;
  v7 = 0;
  sub_1858590(v8, &v7);
  v5 = sub_2469D0(a1, a2, a3, (__int64)v8);
  sub_18572D0(v8);
  if ( v4 )
  {
    sub_2BB620(v5);
    sub_18572D0(&v7);
    byte_1C7EBA0 = 1;
  }
  else
  {
    sub_18572D0(&v7);
  }
  return v5;
}

