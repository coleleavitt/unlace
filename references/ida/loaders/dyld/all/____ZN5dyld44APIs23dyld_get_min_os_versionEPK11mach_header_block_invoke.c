__int64 __fastcall ___ZN5dyld44APIs23dyld_get_min_os_versionEPK11mach_header_block_invoke(
        __int64 result,
        int a2,
        __int64 a3,
        int a4)
{
  __int64 v4; // x8
  __int64 v5; // x19
  int v6; // w9
  int v8; // w8
  int v9; // w9

  v4 = *(_QWORD *)(*(_QWORD *)(result + 32) + 8LL);
  if ( !*(_BYTE *)(v4 + 24) )
  {
    v5 = result;
    v6 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(result + 48) + 8LL) + 68LL);
    if ( v6 == a2 )
    {
      *(_BYTE *)(v4 + 24) = 1;
      result = dyld3::MachOFile::basePlatform(a2);
      v8 = a4 + 458752;
      v9 = a4 + 589824;
      if ( (_DWORD)result != 5 )
        v9 = a4;
      if ( (_DWORD)result != 4 )
        v8 = v9;
      goto LABEL_10;
    }
    if ( a2 == 7 && v6 == 6 )
    {
      *(_BYTE *)(v4 + 24) = 1;
      v8 = 786432;
LABEL_10:
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 40) + 8LL) + 24LL) = v8;
    }
  }
  return result;
}
