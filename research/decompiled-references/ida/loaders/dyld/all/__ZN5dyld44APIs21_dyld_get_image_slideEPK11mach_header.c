__int64 __fastcall dyld4::APIs::_dyld_get_image_slide(dyld4::APIs *this, mach_header *a2)
{
  const dyld3::MachOFile *v4; // x2
  __int64 Slide; // x21

  if ( dyld3::MachOFile::hasMachOMagic((dyld3::MachOFile *)a2) )
  {
    if ( DyldSharedCache::inDyldCache(
           *(DyldSharedCache **)(*((_QWORD *)this + 1) + 200LL),
           (const DyldSharedCache *)a2,
           v4) )
    {
      Slide = *(_QWORD *)(*((_QWORD *)this + 1) + 208LL);
    }
    else
    {
      Slide = dyld3::MachOLoaded::getSlide((dyld3::MachOLoaded *)a2);
    }
  }
  else
  {
    Slide = 0;
  }
  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 184LL) )
    dyld4::RuntimeState::log(this, "_dyld_get_image_slide(%p) => 0x%lX\n", a2, Slide);
  return Slide;
}
