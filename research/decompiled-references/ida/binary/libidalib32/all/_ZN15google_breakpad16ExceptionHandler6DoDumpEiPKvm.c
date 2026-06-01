__int64 __fastcall google_breakpad::ExceptionHandler::DoDump(
        google_breakpad::ExceptionHandler *this,
        int a2,
        const void *a3,
        int a4)
{
  __int64 v4; // rax
  int v6; // r15d
  int v7; // eax
  int v8; // r15d
  int v9; // eax
  int v11; // [rsp+8h] [rbp-68h]
  unsigned __int8 v12; // [rsp+2Fh] [rbp-41h]
  __int64 v13; // [rsp+30h] [rbp-40h]
  unsigned __int8 v14; // [rsp+3Fh] [rbp-31h]

  v11 = (int)a3;
  v14 = google_breakpad::MinidumpDescriptor::skip_dump_if_principal_mapping_not_referenced((google_breakpad::ExceptionHandler *)((char *)this + 32));
  v13 = google_breakpad::MinidumpDescriptor::address_within_principal_mapping((google_breakpad::ExceptionHandler *)((char *)this + 32));
  v12 = google_breakpad::MinidumpDescriptor::sanitize_stacks((google_breakpad::ExceptionHandler *)((char *)this + 32));
  if ( (unsigned __int8)google_breakpad::MinidumpDescriptor::IsMicrodumpOnConsole((google_breakpad::ExceptionHandler *)((char *)this + 32)) )
  {
    v4 = google_breakpad::MinidumpDescriptor::microdump_extra_info((google_breakpad::ExceptionHandler *)((char *)this + 32));
    return google_breakpad::WriteMicrodump(a2, v11, a4, (int)this + 136, v14, v13, v12, v4);
  }
  else if ( (unsigned __int8)google_breakpad::MinidumpDescriptor::IsFD((google_breakpad::ExceptionHandler *)((char *)this + 32)) )
  {
    v6 = google_breakpad::MinidumpDescriptor::size_limit((google_breakpad::ExceptionHandler *)((char *)this + 32));
    v7 = google_breakpad::MinidumpDescriptor::fd((google_breakpad::ExceptionHandler *)((char *)this + 32));
    return google_breakpad::WriteMinidump(v7, v6, a2, v11, a4, (int)this + 136, (__int64)this + 152, v14, v13, v12);
  }
  else
  {
    v8 = google_breakpad::MinidumpDescriptor::size_limit((google_breakpad::ExceptionHandler *)((char *)this + 32));
    v9 = google_breakpad::MinidumpDescriptor::path((google_breakpad::ExceptionHandler *)((char *)this + 32));
    return google_breakpad::WriteMinidump(v9, v8, a2, v11, a4, (int)this + 136, (__int64)this + 152, v14, v13, v12);
  }
}

