unsigned int *__fastcall dyld4::Atlas::Image::ml(dyld4::Atlas::Image *this)
{
  unsigned int *result; // x0
  __int128 *v3; // x21
  void *v4; // x1
  unsigned int *v5; // x8
  __int128 v6; // q0
  __int64 v7; // x8
  __int64 v8; // x9
  __int128 v9; // q0
  __int64 v10; // x8
  __int128 v11; // [xsp+0h] [xbp-50h] BYREF
  __int64 v12; // [xsp+10h] [xbp-40h]
  char v13; // [xsp+18h] [xbp-38h]

  if ( *((_BYTE *)this + 186) )
    return nullptr;
  result = *((unsigned int **)this + 16);
  if ( !result )
  {
    v3 = (__int128 *)((char *)this + 88);
    result = *((unsigned int **)this + 11);
    if ( result )
      goto LABEL_8;
    dyld4::Atlas::Mapper::mapperForMachO(
      *(dyld4::Atlas::Mapper **)this,
      (dyld4::Atlas::Image *)((char *)this + 8),
      (dyld4::Atlas::Image *)((char *)this + 96),
      *((const UUID **)this + 20),
      &v11);
    if ( &v11 != v3 )
    {
      v5 = *(unsigned int **)v3;
      *(_QWORD *)v3 = v11;
      *(_QWORD *)&v11 = v5;
    }
    lsl::SharedPtr<dyld4::Atlas::Mapper>::~SharedPtr((dyld4::Atlas::Mapper **)&v11, v4);
    result = *(unsigned int **)v3;
    if ( *(_QWORD *)v3 )
    {
LABEL_8:
      dyld4::Atlas::Mapper::map<dyld3::MachOLoaded>((__int64 *)&v11, (lsl::AllocationMetadata *)result);
      if ( (__int128 *)((char *)this + 112) != &v11 )
      {
        v6 = *((_OWORD *)this + 7);
        *((_OWORD *)this + 7) = v11;
        v11 = v6;
        v7 = *((_QWORD *)this + 16);
        *((_QWORD *)this + 16) = v12;
        v12 = v7;
        LOBYTE(v7) = *((_BYTE *)this + 136);
        *((_BYTE *)this + 136) = v13;
        v13 = v7;
      }
      dyld4::Atlas::Mapper::Pointer<dyld3::MachOLoaded>::~Pointer((__int64)&v11);
      result = *((unsigned int **)this + 16);
      v8 = 28;
      if ( *result == -17958193 )
        v8 = 32;
      if ( v8 + (unsigned __int64)result[5] > 0x1000 )
      {
        dyld4::Atlas::Mapper::map<dyld3::MachOLoaded>((__int64 *)&v11, *(lsl::AllocationMetadata **)v3);
        if ( (__int128 *)((char *)this + 112) != &v11 )
        {
          v9 = *((_OWORD *)this + 7);
          *((_OWORD *)this + 7) = v11;
          v11 = v9;
          v10 = *((_QWORD *)this + 16);
          *((_QWORD *)this + 16) = v12;
          v12 = v10;
          LOBYTE(v10) = *((_BYTE *)this + 136);
          *((_BYTE *)this + 136) = v13;
          v13 = v10;
        }
        dyld4::Atlas::Mapper::Pointer<dyld3::MachOLoaded>::~Pointer((__int64)&v11);
        return *((unsigned int **)this + 16);
      }
    }
    else
    {
      *((_BYTE *)this + 186) = 1;
    }
  }
  return result;
}
