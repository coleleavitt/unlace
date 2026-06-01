__int64 __fastcall CoinFileOutput::compressionSupported(unsigned int a1)
{
  __int64 result; // rax

  result = 0;
  if ( a1 <= 2 )
    return *((unsigned __int8 *)word_2954E2 + a1);
  return result;
}

