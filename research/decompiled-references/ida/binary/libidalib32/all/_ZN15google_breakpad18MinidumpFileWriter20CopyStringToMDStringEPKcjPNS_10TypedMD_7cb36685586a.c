__int64 __fastcall google_breakpad::MinidumpFileWriter::CopyStringToMDString(
        __int64 a1,
        google_breakpad *a2,
        unsigned int a3,
        __int64 a4)
{
  int v5; // eax
  int v9; // [rsp+24h] [rbp-1Ch] BYREF
  __int64 v10; // [rsp+28h] [rbp-18h]
  int v11; // [rsp+30h] [rbp-10h]
  int v12; // [rsp+34h] [rbp-Ch]
  unsigned int v13; // [rsp+38h] [rbp-8h]
  unsigned __int8 v14; // [rsp+3Fh] [rbp-1h]

  v14 = 1;
  v13 = 0;
  while ( a3 && v14 == 1 )
  {
    v12 = google_breakpad::UTF8ToUTF16Char(a2, (const char *)a3, (int)&v9, (unsigned __int16 *)a3);
    if ( !v12 )
      return 0;
    a3 -= v12;
    a2 = (google_breakpad *)((char *)a2 + v12);
    if ( HIWORD(v9) )
      v5 = 2;
    else
      v5 = 1;
    v11 = v5;
    v10 = 2LL * v5;
    v14 = google_breakpad::TypedMDRVA<MDString>::CopyIndexAfterObject(a4, v13, &v9, v10);
    v13 += v11;
  }
  return v14;
}

