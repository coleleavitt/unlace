_WORD *__fastcall dyld4::PrebuiltLoader::runInitializers(_WORD *this, dyld4::RuntimeState *a2)
{
  _WORD *v3; // x20
  __int16 v4; // w8
  char *v5; // x9

  v3 = this;
  if ( (*(this + 10) & 1) != 0 )
    this = (_WORD *)dyld4::Loader::findAndRunAllInitializers((dyld4::Loader *)this, a2);
  v4 = v3[3];
  if ( v4 >= 0 )
    v5 = (char *)a2 + 664;
  else
    v5 = (char *)a2 + 688;
  *(_BYTE *)(*(_QWORD *)v5 + (v4 & 0x7FFF)) = 8;
  return this;
}
