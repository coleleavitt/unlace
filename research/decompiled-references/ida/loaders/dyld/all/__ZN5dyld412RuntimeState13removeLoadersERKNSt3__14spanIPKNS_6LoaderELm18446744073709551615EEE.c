lsl::Allocator **__fastcall dyld4::RuntimeState::removeLoaders(lsl::Allocator **result, __int64 a2)
{
  __int64 v2; // x8
  lsl::Allocator **v3; // x19
  dyld4::Loader **v4; // x21
  __int64 v5; // x22
  dyld4::Loader *v6; // x20
  __int16 v7; // w8

  v2 = *(_QWORD *)(a2 + 8);
  if ( v2 )
  {
    v3 = result;
    v4 = *(dyld4::Loader ***)a2;
    v5 = 8 * v2;
    do
    {
      v6 = *v4;
      v7 = *((_WORD *)*v4 + 2);
      if ( (v7 & 0x42) == 0 )
      {
        if ( (v7 & 1) != 0 )
        {
          result = (lsl::Allocator **)dyld4::Loader::unmap(*v4, (dyld4::RuntimeState *)v3, 0);
        }
        else if ( (v7 & 0x40) == 0 && (*((_BYTE *)v6 + 18) & 0x20) == 0 )
        {
          dyld4::Loader::unmap(*v4, (dyld4::RuntimeState *)v3, 0);
          *(_DWORD *)v6 = 2053923954;
          result = (lsl::Allocator **)lsl::Allocator::free(v3[2], v6);
        }
      }
      ++v4;
      v5 -= 8;
    }
    while ( v5 );
  }
  return result;
}
