// Alternative name is '_ZN15google_breakpad10TypedMDRVAI8MDStringED2Ev'
__int64 __fastcall google_breakpad::TypedMDRVA<MDString>::~TypedMDRVA(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 32);
  if ( (_DWORD)result != 2 )
    return google_breakpad::TypedMDRVA<MDString>::Flush(a1);
  return result;
}

