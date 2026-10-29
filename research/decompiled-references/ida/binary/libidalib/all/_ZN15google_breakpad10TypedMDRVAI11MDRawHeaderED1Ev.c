// Alternative name is '_ZN15google_breakpad10TypedMDRVAI11MDRawHeaderED2Ev'
__int64 __fastcall google_breakpad::TypedMDRVA<MDRawHeader>::~TypedMDRVA(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 56);
  if ( (_DWORD)result != 2 )
    return google_breakpad::TypedMDRVA<MDRawHeader>::Flush(a1);
  return result;
}

