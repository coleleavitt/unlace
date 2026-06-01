char __fastcall Z3_fixedpoint_set_params(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // r12
  int *v5; // r15
  char result; // al
  _BYTE v7[64]; // [rsp+8h] [rbp-40h] BYREF

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
    sub_2A0210();
  *(_DWORD *)(a1 + 1520) = 0;
  sub_1857380(v7);
  sub_64C4A0(*(_QWORD *)(a2 + 24) + 48LL, v7);
  v5 = (int *)(a3 + 24);
  sub_18632D0(a3 + 24, v7);
  if ( !a3 )
    v5 = &qword_1C7F4C8;
  sub_64C4C0(*(_QWORD *)(a2 + 24) + 48LL, v5);
  sub_1863170(a2 + 32, v5);
  result = sub_1857540(v7);
  if ( v4 )
  {
    result = byte_1C7EBA0;
    byte_1C7EBA0 = 1;
  }
  return result;
}

