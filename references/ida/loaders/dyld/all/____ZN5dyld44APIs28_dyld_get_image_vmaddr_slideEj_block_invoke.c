__int64 __fastcall ___ZN5dyld44APIs28_dyld_get_image_vmaddr_slideEj_block_invoke(__int64 result)
{
  dyld4::RuntimeState *v1; // x1
  unsigned __int64 v2; // x8
  __int64 v3; // x19
  dyld3::MachOLoaded *Address; // x0

  v1 = *(dyld4::RuntimeState **)(result + 40);
  v2 = *(unsigned int *)(result + 48);
  if ( *((_QWORD *)v1 + 6) > v2 )
  {
    v3 = result;
    Address = (dyld3::MachOLoaded *)dyld4::Loader::loadAddress(*(dyld4::Loader **)(*((_QWORD *)v1 + 5) + 8 * v2), v1);
    result = dyld3::MachOLoaded::getSlide(Address);
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 32) + 8LL) + 24LL) = result;
  }
  return result;
}
