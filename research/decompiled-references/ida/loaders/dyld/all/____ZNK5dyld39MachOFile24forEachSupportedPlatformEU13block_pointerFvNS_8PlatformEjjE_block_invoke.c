__int64 __fastcall ___ZNK5dyld39MachOFile24forEachSupportedPlatformEU13block_pointerFvNS_8PlatformEjjE_block_invoke(
        __int64 result,
        int *a2)
{
  __int64 v2; // x19
  int v3; // w9
  __int64 v4; // x0
  __int64 (*v5)(void); // x10

  v2 = result;
  v3 = *a2;
  if ( *a2 <= 46 )
  {
    if ( v3 == 36 )
    {
      result = (*(__int64 (**)(void))(*(_QWORD *)(result + 32) + 16LL))();
      goto LABEL_14;
    }
    if ( v3 != 37 )
      return result;
    goto LABEL_10;
  }
  if ( v3 != 47 )
  {
    if ( v3 != 48 )
    {
      if ( v3 != 50 )
        return result;
      v4 = *(_QWORD *)(result + 32);
      goto LABEL_11;
    }
LABEL_10:
    v4 = *(_QWORD *)(result + 32);
LABEL_11:
    v5 = *(__int64 (**)(void))(v4 + 16);
    goto LABEL_12;
  }
  v5 = *(__int64 (**)(void))(*(_QWORD *)(result + 32) + 16LL);
LABEL_12:
  result = v5();
LABEL_14:
  *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v2 + 40) + 8LL) + 24LL) = 1;
  return result;
}
