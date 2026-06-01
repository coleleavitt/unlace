dyld4::RuntimeState *__fastcall dyld4::Loader::resolvedAddress(dyld4::RuntimeState *result, __int64 a2)
{
  unsigned int v2; // w8

  v2 = *(_DWORD *)(a2 + 24);
  if ( v2 < 2 )
    return (dyld4::RuntimeState *)(*(_QWORD *)(a2 + 16) + dyld4::Loader::loadAddress(*(dyld4::Loader **)a2, result));
  if ( v2 == 2 )
    return *(dyld4::RuntimeState **)(a2 + 16);
  return result;
}
