__int64 __fastcall ___ZN5dyld413ProcessConfig9DyldCache20setPlatformOSVersionERKNS0_7ProcessE_block_invoke(
        __int64 result,
        int a2,
        int a3)
{
  __int64 v3; // x8
  __int64 v4; // x9

  v3 = *(_QWORD *)(result + 32);
  v4 = *(_QWORD *)(result + 40);
  if ( *(_DWORD *)(v4 + 60) == a2 )
    goto LABEL_5;
  if ( a2 == 6 && *(_BYTE *)(v4 + 149) )
  {
    a2 = 6;
LABEL_5:
    *(_DWORD *)(v3 + 128) = a2;
    *(_DWORD *)(v3 + 132) = a3;
  }
  return result;
}
