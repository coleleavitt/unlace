Diagnostics *__fastcall mach_o::Fixups::forEachChainedFixupTarget(Diagnostics *result, Diagnostics *this, __int64 a3)
{
  __int64 v4; // x9
  __int64 v5; // x2
  unsigned int *v7; // x1
  void **v8; // [xsp+8h] [xbp-28h]
  __int64 v9; // [xsp+10h] [xbp-20h]
  __int64 (__fastcall *v10)(int, int, int, int, int, int, int, int, __int64); // [xsp+18h] [xbp-18h]
  void *v11; // [xsp+20h] [xbp-10h]
  __int64 v12; // [xsp+28h] [xbp-8h]
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = *(_QWORD *)(*(_QWORD *)result + 24LL);
  if ( *(_BYTE *)(v4 + 316) )
  {
    v8 = _NSConcreteStackBlock;
    v9 = 0x40000000;
    v10 = ___ZNK6mach_o6Fixups25forEachChainedFixupTargetER11DiagnosticsU13block_pointerFviPKcybRbE_block_invoke;
    v11 = &unk_97B98;
    v12 = a3;
    return (Diagnostics *)mach_o::Fixups::parseOrgArm64eChainedFixups();
  }
  else if ( *(_BYTE *)(v4 + 412) )
  {
    v5 = *(_QWORD *)(v4 + 416);
    v7 = *(unsigned int **)(v4 + 392);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return dyld3::MachOFile::forEachChainedFixupTarget(this, v7, v5, a3);
  }
  return result;
}
