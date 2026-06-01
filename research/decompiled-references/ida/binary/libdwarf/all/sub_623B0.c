__int64 __fastcall sub_623B0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 FrameHeader_advanced; // rax
  unsigned __int64 v5; // rbp
  int v6; // eax

  FrameHeader_advanced = ZSTD_getFrameHeader_advanced();
  v5 = FrameHeader_advanced;
  if ( FrameHeader_advanced > 0xFFFFFFFFFFFFFF88LL )
    return v5;
  if ( !FrameHeader_advanced )
  {
    if ( *(_DWORD *)(a1 + 30224) == 1 && *(_QWORD *)(a1 + 30216) && *(_QWORD *)(a1 + 30192) )
      sub_61AC0(a1);
    v6 = *(_DWORD *)(a1 + 29956);
    if ( v6 && v6 != *(_DWORD *)(a1 + 30200) )
      return -32;
    if ( *(_DWORD *)(a1 + 29960) && !*(_DWORD *)(a1 + 30108) )
    {
      *(_DWORD *)(a1 + 30112) = 1;
      sub_71D30(a1 + 30008, 0);
    }
    else
    {
      *(_DWORD *)(a1 + 30112) = 0;
    }
    *(_QWORD *)(a1 + 29976) += a3;
    return v5;
  }
  return -72;
}

