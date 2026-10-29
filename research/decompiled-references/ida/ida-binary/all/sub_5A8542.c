__int64 __fastcall sub_5A8542(__int64 a1, unsigned int *a2, unsigned int a3, __int64 *a4)
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
      "ith CharType = wchar_t]");
  if ( !a4 )
    __assert_fail(
      "location",
      "src/client/minidump_file_writer.cc",
      0xD7u,
      "bool google_breakpad::MinidumpFileWriter::WriteStringCore(const CharType*, unsigned int, MDLocationDescriptor*) [w"
      "ith CharType = wchar_t]");
  v12 = 0;
  if ( !a3 )
    v8 = 0x7FFFFFFF;
  while ( v12 < v8 && a2[v12] )
    ++v12;
  sub_5A883C(v10, a1);
  if ( (unsigned __int8)sub_5A88AA(v10, v12 + 1, 2) != 1 )
  {
    v4 = 0;
  }
  else
  {
    v5 = 2 * v12;
    *(_DWORD *)sub_5A84A4((__int64)v10) = v5;
    v11 = sub_5A7E50(a1, a2, v12, (__int64)v10);
    if ( v11 )
    {
      v9 = 0;
      v11 = sub_5A84B6((__int64)v10, v12, (const char *)&v9, 2u);
      if ( v11 )
        *a4 = sub_5A4152((__int64)v10);
    }
    v4 = v11;
  }
  sub_5A8882(v10);
  return v4;
}
