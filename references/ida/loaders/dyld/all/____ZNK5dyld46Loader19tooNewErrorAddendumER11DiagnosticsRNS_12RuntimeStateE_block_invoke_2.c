__int64 __fastcall ___ZNK5dyld46Loader19tooNewErrorAddendumER11DiagnosticsRNS_12RuntimeStateE_block_invoke_2(
        __int64 result,
        int a2,
        dyld3::MachOFile *this)
{
  __int64 v3; // x19
  Diagnostics *v4; // x20
  const char *v5; // x0
  char v6[32]; // [xsp+18h] [xbp-48h] BYREF

  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(result + 32) + 8LL) + 24LL) == a2 )
  {
    v3 = result;
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(result + 40) + 8LL) + 24LL) < (unsigned int)this )
    {
      dyld3::MachOFile::packedVersionToString(this, (unsigned int)v6, (char *)this);
      v4 = *(Diagnostics **)(v3 + 48);
      v5 = (const char *)dyld3::MachOFile::platformName(*(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v3 + 32) + 8LL) + 24LL));
      return Diagnostics::error(v4, " (built for %s %s which is newer than running OS)", v5, v6);
    }
  }
  return result;
}
