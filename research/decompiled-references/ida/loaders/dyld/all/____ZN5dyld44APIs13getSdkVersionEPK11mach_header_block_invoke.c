__int64 __fastcall ___ZN5dyld44APIs13getSdkVersionEPK11mach_header_block_invoke(__int64 result, int a2, int a3)
{
  __int64 v3; // x8
  __int64 v4; // x19
  int v5; // w9
  int v7; // w8
  int v8; // w9

  v3 = *(_QWORD *)(*(_QWORD *)(result + 32) + 8LL);
  if ( !*(_BYTE *)(v3 + 24) )
  {
    v4 = result;
    v5 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(result + 48) + 8LL) + 68LL);
    if ( v5 == a2 )
    {
      *(_BYTE *)(v3 + 24) = 1;
      result = dyld3::MachOFile::basePlatform(a2);
      v7 = a3 + 458752;
      v8 = a3 + 589824;
      if ( (_DWORD)result != 5 )
        v8 = a3;
      if ( (_DWORD)result != 4 )
        v7 = v8;
      goto LABEL_10;
    }
    if ( a2 == 7 && v5 == 6 )
    {
      *(_BYTE *)(v3 + 24) = 1;
      v7 = 786432;
LABEL_10:
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 40) + 8LL) + 24LL) = v7;
    }
  }
  return result;
}
