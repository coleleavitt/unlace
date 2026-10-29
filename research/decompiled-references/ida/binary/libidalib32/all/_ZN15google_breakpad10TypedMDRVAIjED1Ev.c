// Alternative name is '_ZN15google_breakpad10TypedMDRVAIjED2Ev'
__int64 __fastcall google_breakpad::TypedMDRVA<unsigned int>::~TypedMDRVA(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 28);
  if ( (_DWORD)result != 2 )
    return google_breakpad::TypedMDRVA<unsigned int>::Flush(a1);
  return result;
}

