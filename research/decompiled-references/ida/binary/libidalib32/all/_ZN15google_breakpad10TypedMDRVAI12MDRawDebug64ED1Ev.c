// Alternative name is '_ZN15google_breakpad10TypedMDRVAI12MDRawDebug64ED2Ev'
__int64 __fastcall google_breakpad::TypedMDRVA<MDRawDebug64>::~TypedMDRVA(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 64);
  if ( (_DWORD)result != 2 )
    return google_breakpad::TypedMDRVA<MDRawDebug64>::Flush(a1);
  return result;
}

