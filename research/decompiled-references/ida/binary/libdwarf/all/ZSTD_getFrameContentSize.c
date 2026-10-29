__int64 __fastcall ZSTD_getFrameContentSize(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // [rsp+0h] [rbp-48h] BYREF
  int v4; // [rsp+14h] [rbp-34h]
  unsigned __int64 v5; // [rsp+38h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  result = ZSTD_getFrameHeader(&v3, a1, a2, 0);
  if ( result )
    return -2;
  if ( v4 != 1 )
    return v3;
  return result;
}

