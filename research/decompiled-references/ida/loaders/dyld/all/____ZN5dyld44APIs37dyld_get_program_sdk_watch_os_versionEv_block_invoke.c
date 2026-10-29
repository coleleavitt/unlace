__int64 __fastcall ___ZN5dyld44APIs37dyld_get_program_sdk_watch_os_versionEv_block_invoke(
        __int64 result,
        int a2,
        int a3)
{
  __int64 v4; // x20

  if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(result + 32) + 8LL) + 24LL) )
  {
    v4 = result;
    result = dyld3::MachOFile::basePlatform(a2);
    if ( (_DWORD)result == 4 )
    {
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 8LL) + 24LL) = 1;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 40) + 8LL) + 24LL) = a3;
    }
  }
  return result;
}
