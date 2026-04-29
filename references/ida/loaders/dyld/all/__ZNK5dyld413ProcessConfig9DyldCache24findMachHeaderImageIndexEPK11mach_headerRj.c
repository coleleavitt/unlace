bool __fastcall dyld4::ProcessConfig::DyldCache::findMachHeaderImageIndex(
        DyldSharedCache **this,
        const mach_header *a2,
        unsigned int *a3)
{
  return DyldSharedCache::findMachHeaderImageIndex(*this, a2, a3);
}
