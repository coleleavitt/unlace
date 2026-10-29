unsigned __int64 __fastcall ZSTD_estimateDStreamSize_fromFrame(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  _QWORD v3[9]; // [rsp+0h] [rbp-48h] BYREF

  v3[7] = __readfsqword(0x28u);
  result = ZSTD_getFrameHeader(v3, a1, a2, 0);
  if ( result <= 0xFFFFFFFFFFFFFF88LL )
  {
    if ( result )
    {
      return -72;
    }
    else
    {
      result = -16;
      if ( v3[1] <= 0x80000000 )
        return ZSTD_estimateDStreamSize();
    }
  }
  return result;
}

