__int64 __fastcall Z3_mk_as_array(__int64 a1, __int64 a2)
{
  char v2; // r12
  __int64 v3; // r15
  int v5[4]; // [rsp+10h] [rbp-50h] BYREF
  __int64 v6; // [rsp+20h] [rbp-40h] BYREF
  char v7; // [rsp+28h] [rbp-38h]

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
    sub_2972E0();
  *(_DWORD *)(a1 + 1520) = 0;
  sub_1684300(v5, *(_QWORD *)(a1 + 232));
  v6 = a2;
  v7 = 1;
  v3 = sub_15DCAD0(v5[2], 0, 0);
  sub_15D0DF0(&v6);
  sub_251FD0(a1, v3);
  if ( v2 )
    byte_1C7EBA0 = 1;
  return v3;
}

