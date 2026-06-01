__int64 __fastcall dyld3::MachOAnalyzer::forEachChainedFixupTarget(__int64 a1, Diagnostics *a2, __int64 a3)
{
  __int64 result; // x0
  __int64 v7; // x8
  _QWORD v9[5]; // [xsp+8h] [xbp-108h] BYREF
  __int64 v10; // [xsp+30h] [xbp-E0h] BYREF
  __int64 v11; // [xsp+40h] [xbp-D0h]
  __int64 v12; // [xsp+78h] [xbp-98h] BYREF
  _QWORD v13[5]; // [xsp+A0h] [xbp-70h] BYREF

  dyld3::MachOLoaded::getLinkEditPointers(a1, a2, (__int64)&v10);
  result = Diagnostics::hasError(a2);
  if ( (result & 1) == 0 )
  {
    __chkstk_darwin();
    v13[0] = _NSConcreteStackBlock;
    v13[1] = 0x40000000;
    v13[2] = ___ZNK5dyld313MachOAnalyzer19getAllSegmentsInfosER11DiagnosticsPNS_9MachOFile11SegmentInfoE_block_invoke;
    v13[3] = &__block_descriptor_tmp_58_2;
    v13[4] = &v9[-8 * v7 - 1];
    dyld3::MachOFile::forEachSegment(a1, v13);
    result = Diagnostics::hasError(a2);
    if ( (result & 1) == 0 )
    {
      if ( v10 )
      {
        v9[0] = _NSConcreteStackBlock;
        v9[1] = 0x40000000;
        v9[2] = ___ZNK5dyld313MachOAnalyzer25forEachChainedFixupTargetER11DiagnosticsU13block_pointerFviPKcybRbE_block_invoke;
        v9[3] = &unk_97E98;
        v9[4] = a3;
        return dyld3::MachOAnalyzer::parseOrgArm64eChainedFixups(a1, a2, 0, v9, 0);
      }
      else if ( v11 )
      {
        dyld3::MachOLoaded::getLinkEditContent(a1, &v12, *(unsigned int *)(v11 + 8));
        return dyld3::MachOFile::forEachChainedFixupTarget(a2);
      }
    }
  }
  return result;
}
