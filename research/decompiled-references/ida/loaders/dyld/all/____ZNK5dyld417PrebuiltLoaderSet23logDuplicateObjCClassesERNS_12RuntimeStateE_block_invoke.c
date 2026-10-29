__int64 __fastcall ___ZNK5dyld417PrebuiltLoaderSet23logDuplicateObjCClassesERNS_12RuntimeStateE_block_invoke(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // x0
  __int64 result; // x0
  __int64 v4; // [xsp+0h] [xbp-10h] BYREF
  char v5; // [xsp+8h] [xbp-8h]

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 40LL;
  v4 = a2;
  v5 = 0;
  result = dyld3::Map<char const*,bool,dyld3::HashCString,dyld3::EqualCString>::insert(v2, &v4);
  *(_BYTE *)(result + 8) = 1;
  return result;
}
