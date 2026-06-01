_DWORD *__fastcall dyld3::MachOFile::forEachLoadCommand(_DWORD *result, Diagnostics *this, __int64 a3)
{
  _DWORD *v5; // x20
  int v6; // w8
  _DWORD *v7; // x23
  unsigned int v8; // w22
  char *v9; // x24
  unsigned __int64 v10; // x1
  __int64 v11; // x9
  unsigned __int64 v12; // x27

  v5 = result;
  v6 = *result;
  if ( *result == -17958194 )
  {
    v7 = result + 7;
  }
  else
  {
    if ( v6 != -17958193 )
    {
      if ( (v6 & 0xFEFFFFFF) != 0xCEFAEDFE )
        return (_DWORD *)Diagnostics::error(this, "file does not start with MH_MAGIC[_64]: 0x%08X 0x%08X");
      return result;
    }
    v7 = result + 8;
  }
  if ( result[3] >= 0xDu )
    return (_DWORD *)Diagnostics::error(this, "unknown mach-o filetype (%u)");
  if ( result[4] )
  {
    v8 = 0;
    v9 = (char *)v7 + (unsigned int)result[5];
    v10 = (unsigned __int64)v7;
    while ( 1 )
    {
      if ( v10 > (unsigned __int64)(v9 - 8) )
        return (_DWORD *)Diagnostics::error(
                           this,
                           "malformed load command #%u of %u at %p with mh=%p, extends past sizeofcmds");
      v11 = *(unsigned int *)(v10 + 4);
      if ( (unsigned int)v11 <= 7 )
        return (_DWORD *)Diagnostics::error(
                           this,
                           "malformed load command #%u of %u at %p with mh=%p, size (0x%X) too small");
      if ( (v11 & 3) != 0 )
        return (_DWORD *)Diagnostics::error(
                           this,
                           "malformed load command #%u of %u at %p with mh=%p, size (0x%X) not multiple of 4");
      v12 = v10 + v11;
      if ( v10 + v11 > (unsigned __int64)v9 || (unsigned __int64)v7 > v12 )
        break;
      result = (_DWORD *)(*(__int64 (__fastcall **)(__int64))(a3 + 16))(a3);
      ++v8;
      v10 = v12;
      if ( v8 >= v5[4] )
        return result;
    }
    return (_DWORD *)Diagnostics::error(
                       this,
                       "malformed load command #%u of %u at %p with mh=%p, size (0x%X) is too large, load commands end at %p");
  }
  return result;
}
