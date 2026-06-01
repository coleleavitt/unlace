bool __fastcall dyld4::PrebuiltSwift::make(
        dyld4::PrebuiltSwift *this,
        Diagnostics *a2,
        dyld4::PrebuiltObjC *a3,
        dyld4::RuntimeState *a4)
{
  _BOOL8 result; // x0

  result = dyld4::PrebuiltSwift::findProtocolConformances(this, a2, a3, a4);
  if ( result )
    *((_BYTE *)this + 312) = 1;
  return result;
}
