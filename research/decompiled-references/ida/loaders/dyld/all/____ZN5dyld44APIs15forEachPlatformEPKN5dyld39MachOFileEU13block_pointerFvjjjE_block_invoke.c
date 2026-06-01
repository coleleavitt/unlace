__int64 __fastcall ___ZN5dyld44APIs15forEachPlatformEPKN5dyld39MachOFileEU13block_pointerFvjjjE_block_invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4)
{
  unsigned int v5; // w0
  _DWORD *v6; // x8
  unsigned int v7; // w9
  __int64 (*v8)(void); // x5
  __int64 _28; // [xsp+28h] [xbp+8h]

  *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) + 24LL) = 1;
  if ( !a4 )
  {
    v5 = dyld4::APIs::linkedDylibVersion(
           (dyld4::APIs *)a1,
           *(const dyld3::MachOFile **)(a1 + 56),
           "/System/Library/Frameworks/Foundation.framework/Foundation");
    if ( v5 >= 0x2A61800 )
    {
      v6 = &unk_7C734;
      do
      {
        v7 = v6[3];
        if ( !v7 )
          break;
        v6 += 2;
      }
      while ( v5 >= v7 );
    }
  }
  v8 = *(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 16LL);
  if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return v8();
}
