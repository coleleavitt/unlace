__int64 __fastcall sub_1B64D2(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // eax
  size_t v9; // rbx
  const void *v10; // rsi
  _BYTE v12[32]; // [rsp+10h] [rbp-100h] BYREF
  _BYTE v13[200]; // [rsp+30h] [rbp-E0h] BYREF
  __int64 v14; // [rsp+F8h] [rbp-18h]

  google_breakpad::TypedMDRVA<MDRawExceptionStream>::TypedMDRVA(v13, a1 + 40);
  if ( (unsigned __int8)google_breakpad::TypedMDRVA<MDRawExceptionStream>::Allocate(v13) != 1 )
  {
    v2 = 0;
  }
  else
  {
    v14 = google_breakpad::TypedMDRVA<MDRawExceptionStream>::get(v13);
    my_memset(v14, 0, 168);
    *(_DWORD *)a2 = 6;
    *(_QWORD *)(a2 + 4) = google_breakpad::UntypedMDRVA::location((google_breakpad::UntypedMDRVA *)v13);
    v3 = sub_1B6FC0(a1);
    *(_DWORD *)v14 = v3;
    v4 = google_breakpad::LinuxDumper::crash_signal(*(google_breakpad::LinuxDumper **)(a1 + 32));
    *(_DWORD *)(v14 + 8) = v4;
    v5 = google_breakpad::LinuxDumper::crash_signal_code(*(google_breakpad::LinuxDumper **)(a1 + 32));
    *(_DWORD *)(v14 + 12) = v5;
    v6 = google_breakpad::LinuxDumper::crash_address(*(google_breakpad::LinuxDumper **)(a1 + 32));
    *(_QWORD *)(v14 + 24) = v6;
    v7 = google_breakpad::LinuxDumper::crash_exception_info(*(google_breakpad::LinuxDumper **)(a1 + 32));
    std::vector<unsigned long>::vector(v12, v7);
    v8 = std::vector<unsigned long>::size(v12);
    *(_DWORD *)(v14 + 32) = v8;
    v9 = 8 * std::vector<unsigned long>::size(v12);
    v10 = (const void *)std::vector<unsigned long>::data(v12);
    memcpy((void *)(v14 + 40), v10, v9);
    *(_QWORD *)(v14 + 160) = *(_QWORD *)(a1 + 72);
    v2 = 1;
    std::vector<unsigned long>::~vector(v12);
  }
  google_breakpad::TypedMDRVA<MDRawExceptionStream>::~TypedMDRVA(v13);
  return v2;
}

