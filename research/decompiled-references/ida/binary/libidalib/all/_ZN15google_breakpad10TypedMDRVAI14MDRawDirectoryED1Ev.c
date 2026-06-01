// Alternative name is '_ZN15google_breakpad10TypedMDRVAI14MDRawDirectoryED2Ev'
__int64 __fastcall google_breakpad::TypedMDRVA<MDRawDirectory>::~TypedMDRVA(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 36);
  if ( (_DWORD)result != 2 )
    return google_breakpad::TypedMDRVA<MDRawDirectory>::Flush(a1);
  return result;
}

