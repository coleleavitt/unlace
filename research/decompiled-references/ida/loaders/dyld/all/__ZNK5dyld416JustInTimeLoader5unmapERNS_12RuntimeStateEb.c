__int64 __fastcall dyld4::JustInTimeLoader::unmap(__int64 this, dyld4::SyscallDelegate **a2, char a3)
{
  __int16 v3; // w8
  __int64 v6; // x20
  const char *v7; // x8
  size_t v8; // x22
  char *v9; // x21
  const char *v10; // x9

  v3 = *(_WORD *)(this + 4);
  if ( (v3 & 2) == 0 )
  {
    v6 = this;
    if ( (a3 & 1) == 0 && (v3 & 0x20) != 0 )
    {
      if ( *(_WORD *)(this + 16) )
        v7 = (const char *)(this + *(unsigned __int16 *)(this + 16));
      else
        v7 = nullptr;
      dyld4::RuntimeState::log((dyld4::RuntimeState *)a2, "trying to unmap %s\n", v7);
    }
    if ( (a3 & 1) == 0 && (*(_WORD *)(v6 + 4) & 0x20) != 0 )
      dyld4::JustInTimeLoader::unmap();
    v8 = dyld3::MachOFile::mappedSize(*(dyld3::MachOFile **)(v6 + 8));
    v9 = *(char **)(v6 + 8);
    this = dyld4::SyscallDelegate::munmap(a2[1], v9, v8);
    if ( *((_BYTE *)a2[1] + 181) )
    {
      if ( *(_WORD *)(v6 + 16) )
        v10 = (const char *)(v6 + *(unsigned __int16 *)(v6 + 16));
      else
        v10 = nullptr;
      return dyld4::RuntimeState::log(
               (dyld4::RuntimeState *)a2,
               "unmapped 0x%012lX->0x%012lX for %s\n",
               v9,
               &v9[v8],
               v10);
    }
  }
  return this;
}
