__int64 __fastcall google_breakpad::MinidumpFileWriter::CopyStringToMDString(
        __int64 a1,
        unsigned int *a2,
        int a3,
        __int64 a4)
{
  int v5; // eax
  wchar_t v9; // [rsp+24h] [rbp-1Ch] BYREF
  __int64 v10; // [rsp+28h] [rbp-18h]
  int v11; // [rsp+34h] [rbp-Ch]
  unsigned int v12; // [rsp+38h] [rbp-8h]
  unsigned __int8 v13; // [rsp+3Fh] [rbp-1h]

  v13 = 1;
  v12 = 0;
  while ( a3 && v13 == 1 )
  {
    google_breakpad::UTF32ToUTF16Char((google_breakpad *)*a2, (wchar_t)&v9, (unsigned __int16 *)&v9);
    if ( !(_WORD)v9 )
      return 0;
    --a3;
    ++a2;
    if ( HIWORD(v9) )
      v5 = 2;
    else
      v5 = 1;
    v11 = v5;
    v10 = 2LL * v5;
    v13 = google_breakpad::TypedMDRVA<MDString>::CopyIndexAfterObject(a4, v12, &v9, v10);
    v12 += v11;
  }
  return v13;
}

