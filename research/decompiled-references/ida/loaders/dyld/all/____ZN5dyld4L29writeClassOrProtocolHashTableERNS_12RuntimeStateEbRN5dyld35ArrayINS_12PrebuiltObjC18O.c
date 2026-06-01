__int64 __fastcall ___ZN5dyld4L29writeClassOrProtocolHashTableERNS_12RuntimeStateEbRN5dyld35ArrayINS_12PrebuiltObjC18ObjCOptimizerImageEEERNS2_17OverflowSafeArrayIhLm4294967295EEERKNS2_3MapIPKcNS_6Loader10BindTargetENS2_11HashCStringENS2_12EqualCStringEEERNS2_8MultiMapISD_SF_NS2_16HashCStringMultiENS2_17EqualCStringMultiEEE_block_invoke(
        __int64 result,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  if ( a4 != 1 )
  {
    ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(result + 32) + 8LL) + 24LL);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(result + 40) + 8LL) + 24LL) += a4;
  }
  return result;
}
