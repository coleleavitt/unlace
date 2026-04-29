bool __fastcall dyld3::MachOFile::getUuid(dyld3::MachOFile *this, unsigned __int8 *a2)
{
  int v3; // w20
  __int64 *v4; // x20
  _BOOL8 v5; // x19
  __int64 v7; // [xsp+38h] [xbp-38h] BYREF
  __int64 *v8; // [xsp+40h] [xbp-30h]
  __int64 v9; // [xsp+48h] [xbp-28h]
  char v10; // [xsp+50h] [xbp-20h]
  _BYTE v11[8]; // [xsp+58h] [xbp-18h] BYREF

  v3 = (int)this;
  Diagnostics::Diagnostics((Diagnostics *)v11);
  v7 = 0;
  v8 = &v7;
  v9 = 0x2000000000LL;
  v10 = 0;
  dyld3::MachOFile::forEachLoadCommand(v3, (Diagnostics *)v11);
  Diagnostics::assertNoError((Diagnostics *)v11);
  v4 = v8;
  if ( *((_BYTE *)v8 + 24) )
  {
    v5 = 1;
  }
  else
  {
    __bzero(a2, 0x10u);
    v5 = *((_BYTE *)v4 + 24) != 0;
  }
  _Block_object_dispose(&v7, 8);
  Diagnostics::~Diagnostics((Diagnostics *)v11);
  return v5;
}
