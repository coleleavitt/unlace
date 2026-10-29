char __fastcall Z3_enable_trace(__int64 a1)
{
  char v1; // al
  char result; // al
  _BYTE v3[32]; // [rsp+8h] [rbp-20h] BYREF

  sub_186AE80(0xFFFFFFFFLL);
  v1 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( !v1 )
    return sub_180C5A0(v3, a1);
  sub_29C380(a1);
  sub_180C5A0(v3, a1);
  result = byte_1C7EBA0;
  byte_1C7EBA0 = 1;
  return result;
}

