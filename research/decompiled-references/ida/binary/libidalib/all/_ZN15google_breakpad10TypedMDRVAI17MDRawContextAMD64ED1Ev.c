// Alternative name is '_ZN15google_breakpad10TypedMDRVAI17MDRawContextAMD64ED2Ev'
__int64 __fastcall google_breakpad::TypedMDRVA<MDRawContextAMD64>::~TypedMDRVA(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 1256);
  if ( (_DWORD)result != 2 )
    return google_breakpad::TypedMDRVA<MDRawContextAMD64>::Flush(a1);
  return result;
}

