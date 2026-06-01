__int64 __fastcall ___ZNK5dyld311MachOLoaded18findSectionContentEPKcS2_Ryb_block_invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _BYTE *a4)
{
  dyld3::MachOFile *v7; // x21
  __int64 result; // x0
  const char *v9; // x23
  const char *v10; // x24
  size_t v11; // x0
  char *v12; // x8
  __int64 v13; // x22

  v7 = *(dyld3::MachOFile **)(a1 + 40);
  result = _platform_strcmp(*(const char **)(a2 + 80), *(const char **)(a1 + 48));
  if ( !(_DWORD)result )
  {
    v9 = *(const char **)(a2 + 40);
    v10 = *(const char **)(a1 + 56);
    if ( *(_BYTE *)(a1 + 72) )
    {
      v11 = _platform_strlen(*(const char **)(a1 + 56));
      result = _platform_strncmp(v9, v10, v11);
      if ( (_DWORD)result )
        return result;
    }
    else
    {
      result = _platform_strcmp(*(const char **)(a2 + 40), *(const char **)(a1 + 56));
      if ( (_DWORD)result )
        return result;
    }
    **(_QWORD **)(a1 + 64) = *(_QWORD *)(a2 + 72);
    result = dyld3::MachOFile::isPreload(v7);
    if ( (_DWORD)result )
    {
      v12 = (char *)v7 + *(unsigned int *)(a2 + 88);
    }
    else
    {
      v13 = *(_QWORD *)(a2 + 64);
      result = dyld3::MachOLoaded::getSlide(v7);
      v12 = (char *)(result + v13);
    }
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 24LL) = v12;
    *a4 = 1;
  }
  return result;
}
