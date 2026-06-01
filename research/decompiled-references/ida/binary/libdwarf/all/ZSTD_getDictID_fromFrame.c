__int64 __fastcall ZSTD_getDictID_fromFrame(__int64 a1, __int64 a2)
{
  unsigned __int64 FrameHeader; // rax
  unsigned int v3; // edx
  __int128 v5; // [rsp+0h] [rbp-48h] BYREF
  __int128 v6; // [rsp+10h] [rbp-38h]
  __int128 v7; // [rsp+20h] [rbp-28h]
  unsigned __int64 v8; // [rsp+38h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  v5 = 0;
  v6 = 0;
  v7 = 0;
  FrameHeader = ZSTD_getFrameHeader(&v5, a1, a2, 0);
  v3 = 0;
  if ( FrameHeader <= 0xFFFFFFFFFFFFFF88LL )
    return HIDWORD(v6);
  return v3;
}

