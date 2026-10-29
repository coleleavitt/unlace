__int64 __fastcall sub_619A0(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 30208);
  if ( v1 != -1 )
  {
    if ( v1 != 1 )
    {
      ZSTD_freeDDict(*(void **)(a1 + 30184));
      *(_QWORD *)(a1 + 30184) = 0;
      *(_QWORD *)(a1 + 30192) = 0;
      *(_DWORD *)(a1 + 30208) = 0;
      return 0;
    }
    *(_DWORD *)(a1 + 30208) = 0;
  }
  return *(_QWORD *)(a1 + 30192);
}

