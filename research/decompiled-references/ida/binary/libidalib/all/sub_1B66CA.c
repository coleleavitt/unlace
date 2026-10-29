__int64 __fastcall sub_1B66CA(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  _BYTE v7[112]; // [rsp+10h] [rbp-70h] BYREF

  google_breakpad::TypedMDRVA<MDRawSystemInfo>::TypedMDRVA(v7, a1 + 40);
  if ( (unsigned __int8)google_breakpad::TypedMDRVA<MDRawSystemInfo>::Allocate(v7) != 1 )
  {
    v2 = 0;
  }
  else
  {
    v3 = google_breakpad::TypedMDRVA<MDRawSystemInfo>::get(v7);
    my_memset(v3, 0, 56);
    *(_DWORD *)a2 = 7;
    *(_QWORD *)(a2 + 4) = google_breakpad::UntypedMDRVA::location((google_breakpad::UntypedMDRVA *)v7);
    v4 = google_breakpad::TypedMDRVA<MDRawSystemInfo>::get(v7);
    sub_1B700E(a1, v4);
    v5 = google_breakpad::TypedMDRVA<MDRawSystemInfo>::get(v7);
    sub_1B75F2(a1, v5);
    v2 = 1;
  }
  google_breakpad::TypedMDRVA<MDRawSystemInfo>::~TypedMDRVA(v7);
  return v2;
}

