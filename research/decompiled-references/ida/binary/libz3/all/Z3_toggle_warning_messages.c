char __fastcall Z3_toggle_warning_messages(unsigned __int8 a1)
{
  char v1; // al
  char result; // al

  v1 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( !v1 )
    return sub_18753E0(a1);
  sub_29BBF0(a1);
  sub_18753E0(a1);
  result = byte_1C7EBA0;
  byte_1C7EBA0 = 1;
  return result;
}

