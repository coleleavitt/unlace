void __fastcall sub_1B438E(__int64 a1)
{
  if ( *(_DWORD *)a1 == -1 )
    google_breakpad::MinidumpFileWriter::Close((google_breakpad::MinidumpFileWriter *)(a1 + 40));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 32) + 48LL))(*(_QWORD *)(a1 + 32));
  google_breakpad::wasteful_vector<MDMemoryDescriptor>::~wasteful_vector(a1 + 80);
  google_breakpad::MinidumpFileWriter::~MinidumpFileWriter((google_breakpad::MinidumpFileWriter *)(a1 + 40));
}

