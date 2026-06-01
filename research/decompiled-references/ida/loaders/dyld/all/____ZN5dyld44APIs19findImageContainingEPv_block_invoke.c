__int64 __fastcall ___ZN5dyld44APIs19findImageContainingEPv_block_invoke(__int64 result)
{
  dyld4::RuntimeState *v1; // x20
  __int64 v2; // x8
  __int64 v3; // x19
  dyld4::Loader **v4; // x22
  __int64 v5; // x23
  dyld4::Loader **v6; // x24
  dyld4::Loader *v7; // x21
  unsigned __int8 v8; // [xsp+Fh] [xbp-41h] BYREF
  unsigned __int64 v9; // [xsp+10h] [xbp-40h] BYREF
  void *v10; // [xsp+18h] [xbp-38h] BYREF

  v1 = *(dyld4::RuntimeState **)(result + 40);
  v2 = *((_QWORD *)v1 + 6);
  if ( v2 )
  {
    v3 = result;
    v4 = *((dyld4::Loader ***)v1 + 5);
    v5 = 8 * v2;
    v6 = v4;
    while ( 1 )
    {
      v7 = *v6;
      v9 = 0;
      v10 = nullptr;
      v8 = 0;
      result = dyld4::Loader::contains(v7, v1, *(const void **)(v3 + 48), (const void **)&v10, &v9, &v8);
      if ( (_DWORD)result )
        break;
      ++v6;
      ++v4;
      v5 -= 8;
      if ( !v5 )
        return result;
    }
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 32) + 8LL) + 24LL) = v7;
  }
  return result;
}
