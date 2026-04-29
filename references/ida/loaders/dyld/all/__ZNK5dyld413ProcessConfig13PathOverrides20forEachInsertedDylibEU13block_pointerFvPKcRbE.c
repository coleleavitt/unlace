void __fastcall dyld4::ProcessConfig::PathOverrides::forEachInsertedDylib(__int64 a1, __int64 a2)
{
  const char *v2; // x0
  _QWORD v3[6]; // [xsp+0h] [xbp-50h] BYREF
  _QWORD v4[3]; // [xsp+30h] [xbp-20h] BYREF
  _BYTE v5[8]; // [xsp+48h] [xbp-8h] BYREF

  v4[0] = 0;
  v4[1] = v4;
  v4[2] = 0x2000000000LL;
  v5[0] = 0;
  v2 = *(const char **)(a1 + 96);
  if ( v2 && *v2 )
  {
    v3[0] = _NSConcreteStackBlock;
    v3[1] = 0x40000000;
    v3[2] = ___ZNK5dyld413ProcessConfig13PathOverrides20forEachInsertedDylibEU13block_pointerFvPKcRbE_block_invoke;
    v3[3] = &unk_94E00;
    v3[4] = a2;
    v3[5] = v4;
    dyld4::ProcessConfig::PathOverrides::forEachInColonList(v2, 0, v5, (__int64)v3);
  }
  _Block_object_dispose(v4, 8);
}
