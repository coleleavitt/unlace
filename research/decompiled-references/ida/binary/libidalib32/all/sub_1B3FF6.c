__int64 __fastcall sub_1B3FF6(
        __int64 a1,
        unsigned int *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        unsigned __int8 **a6)
{
  _BYTE v12[32]; // [rsp+30h] [rbp-60h] BYREF
  unsigned __int64 v13; // [rsp+50h] [rbp-40h] BYREF
  void *v14; // [rsp+58h] [rbp-38h] BYREF
  unsigned __int64 v15; // [rsp+60h] [rbp-30h]
  unsigned __int64 v16; // [rsp+68h] [rbp-28h]
  unsigned __int64 v17; // [rsp+70h] [rbp-20h]
  char *v18; // [rsp+78h] [rbp-18h]

  *a6 = nullptr;
  *((_QWORD *)a2 + 3) = a3;
  a2[8] = 0;
  a2[9] = google_breakpad::MinidumpFileWriter::position((google_breakpad::MinidumpFileWriter *)(a1 + 40));
  if ( (unsigned __int8)google_breakpad::LinuxDumper::GetStackInfo(
                          *(google_breakpad::LinuxDumper **)(a1 + 32),
                          (const void **)&v14,
                          &v13,
                          a3) )
  {
    if ( a5 >= 0 && (unsigned int)a5 < v13 )
    {
      v13 = a5;
      v18 = (char *)v14;
      if ( a5 > 0 )
      {
        while ( a3 > (unsigned __int64)&v18[a5] )
          v18 += a5;
      }
      v14 = v18;
    }
    *a6 = (unsigned __int8 *)sub_1B638E(a1, (unsigned int)v13);
    (*(void (__fastcall **)(_QWORD, unsigned __int8 *, _QWORD, void *, unsigned __int64))(**(_QWORD **)(a1 + 32) + 64LL))(
      *(_QWORD *)(a1 + 32),
      *a6,
      *a2,
      v14,
      v13);
    v17 = a3 - (_QWORD)v14;
    if ( *(_BYTE *)(a1 + 144) )
    {
      if ( !*(_QWORD *)(a1 + 160) )
        return 1;
      v16 = *(_QWORD *)(*(_QWORD *)(a1 + 160) + 16LL);
      v15 = *(_QWORD *)(*(_QWORD *)(a1 + 160) + 24LL);
      if ( (a4 < v16 || a4 > v15)
        && (unsigned __int8)google_breakpad::LinuxDumper::StackHasPointerToMapping(
                              *(_QWORD *)(a1 + 32),
                              *a6,
                              v13,
                              v17,
                              *(_QWORD *)(a1 + 160)) != 1 )
      {
        return 1;
      }
    }
    if ( *(_BYTE *)(a1 + 168) )
      google_breakpad::LinuxDumper::SanitizeStackCopy(*(google_breakpad::LinuxDumper **)(a1 + 32), *a6, v13, a3, v17);
    google_breakpad::UntypedMDRVA::UntypedMDRVA(
      (google_breakpad::UntypedMDRVA *)v12,
      (google_breakpad::MinidumpFileWriter *)(a1 + 40));
    if ( (unsigned __int8)google_breakpad::UntypedMDRVA::Allocate((google_breakpad::UntypedMDRVA *)v12, v13) != 1 )
      return 0;
    google_breakpad::UntypedMDRVA::Copy((google_breakpad::UntypedMDRVA *)v12, *a6, v13);
    *((_QWORD *)a2 + 3) = v14;
    *((_QWORD *)a2 + 4) = google_breakpad::UntypedMDRVA::location((google_breakpad::UntypedMDRVA *)v12);
    std::vector<MDMemoryDescriptor,google_breakpad::PageStdAllocator<MDMemoryDescriptor>>::push_back(a1 + 80, a2 + 6);
  }
  return 1;
}

