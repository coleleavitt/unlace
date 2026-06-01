char __fastcall Z3_fixedpoint_register_relation(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // al
  char result; // al

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( !v4 )
    return sub_6511B0(*(_QWORD *)(a2 + 24) + 48LL, a3, 1);
  sub_2A00D0();
  sub_6511B0(*(_QWORD *)(a2 + 24) + 48LL, a3, 1);
  result = byte_1C7EBA0;
  byte_1C7EBA0 = 1;
  return result;
}

