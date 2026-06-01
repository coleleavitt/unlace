char __fastcall Z3_interrupt(__int64 a1)
{
  char v1; // al
  char result; // al

  v1 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( !v1 )
    return sub_24E970(a1);
  sub_294C60();
  sub_24E970(a1);
  result = byte_1C7EBA0;
  byte_1C7EBA0 = 1;
  return result;
}

