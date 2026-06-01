__int64 __fastcall google_breakpad::MinidumpFileWriter::WriteStringCore<char>(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4)
{
  unsigned int v4; // ebx
  int v5; // ebx
  unsigned int v8; // [rsp+Ch] [rbp-64h]
  __int16 v9; // [rsp+2Eh] [rbp-42h] BYREF
  _BYTE v10[43]; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int8 v11; // [rsp+5Bh] [rbp-15h]
  unsigned int v12; // [rsp+5Ch] [rbp-14h]

  v8 = a3;
  if ( !a2 )
    __assert_fail(
      "str",
      "src/client/minidump_file_writer.cc",
      0xD6u,
      "bool google_breakpad::MinidumpFileWriter::WriteStringCore(const CharType*, unsigned int, MDLocationDescriptor*) [w"
      "ith CharType = char]");
  if ( !a4 )
    __assert_fail(
      "location",
      "src/client/minidump_file_writer.cc",
      0xD7u,
      "bool google_breakpad::MinidumpFileWriter::WriteStringCore(const CharType*, unsigned int, MDLocationDescriptor*) [w"
      "ith CharType = char]");
  v12 = 0;
  if ( !a3 )
    v8 = 0x7FFFFFFF;
  while ( v12 < v8 && *(_BYTE *)(a2 + v12) )
    ++v12;
  google_breakpad::TypedMDRVA<MDString>::TypedMDRVA(v10, a1);
  if ( (unsigned __int8)google_breakpad::TypedMDRVA<MDString>::AllocateObjectAndArray(v10, v12 + 1, 2) != 1 )
  {
    v4 = 0;
  }
  else
  {
    v5 = 2 * v12;
    *(_DWORD *)google_breakpad::TypedMDRVA<MDString>::get(v10) = v5;
    v11 = google_breakpad::MinidumpFileWriter::CopyStringToMDString(a1, a2, v12, v10);
    if ( v11 )
    {
      v9 = 0;
      v11 = google_breakpad::TypedMDRVA<MDString>::CopyIndexAfterObject(v10, v12, &v9, 2);
      if ( v11 )
        *a4 = google_breakpad::UntypedMDRVA::location((google_breakpad::UntypedMDRVA *)v10);
    }
    v4 = v11;
  }
  google_breakpad::TypedMDRVA<MDString>::~TypedMDRVA(v10);
  return v4;
}

