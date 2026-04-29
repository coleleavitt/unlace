__int64 __fastcall ___ZN5dyld4L19getSingletonPatchesEPKN5dyld313MachOAnalyzerERNS0_3MapIPKvbNS_11HashPointerENS_12EqualPointerEEE_block_invoke(
        __int64 result,
        int a2,
        __int64 a3)
{
  __int64 v3; // x29
  __int64 v4; // x30
  __int64 v5; // x0
  __int64 v6; // x8
  __int64 v7; // [xsp+0h] [xbp-20h] BYREF
  char v8; // [xsp+8h] [xbp-18h]
  __int64 v9; // [xsp+10h] [xbp-10h]
  __int64 v10; // [xsp+18h] [xbp-8h]

  if ( a2 == 1 )
  {
    v9 = v3;
    v10 = v4;
    v6 = *(_QWORD *)(result + 32);
    v5 = *(_QWORD *)(result + 40);
    v7 = v6 + a3;
    v8 = 1;
    return dyld3::Map<void const*,bool,dyld4::HashPointer,dyld4::EqualPointer>::insert(v5, &v7);
  }
  return result;
}
