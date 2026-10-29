unsigned __int8 __fastcall google_breakpad::ExceptionHandler::RestoreHandlersLocked(
        google_breakpad::ExceptionHandler *this)
{
  unsigned __int8 result; // al
  int i; // [rsp+Ch] [rbp-4h]

  result = byte_257490 ^ 1;
  if ( byte_257490 == 1 )
  {
    for ( i = 0; i <= 5; ++i )
    {
      result = sigaction(dword_1D9170[i], (const struct sigaction *)&unk_257100 + i, nullptr) == -1;
      if ( result )
        result = (unsigned __int8)sub_1A596E(dword_1D9170[i]);
    }
    byte_257490 = 0;
  }
  return result;
}

