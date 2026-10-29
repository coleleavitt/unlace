unsigned __int8 __fastcall google_breakpad::ExceptionHandler::RestoreHandlersLocked(
        google_breakpad::ExceptionHandler *this)
{
  unsigned __int8 result; // al
  int i; // [rsp+Ch] [rbp-4h]

  result = byte_2562D0 ^ 1;
  if ( byte_2562D0 == 1 )
  {
    for ( i = 0; i <= 5; ++i )
    {
      result = sigaction(dword_1D8150[i], (const struct sigaction *)&unk_255F40 + i, nullptr) == -1;
      if ( result )
        result = (unsigned __int8)sub_1A4D6E(dword_1D8150[i]);
    }
    byte_2562D0 = 0;
  }
  return result;
}

