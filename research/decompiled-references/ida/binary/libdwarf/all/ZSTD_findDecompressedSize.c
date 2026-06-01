__int64 __fastcall ZSTD_findDecompressedSize(_DWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v4; // r12
  __int64 v5; // rax
  unsigned __int64 FrameCompressedSize; // rax
  unsigned __int64 FrameContentSize; // rax
  bool v9; // cf

  v2 = a2;
  if ( a2 > 4 )
  {
    v4 = 0;
    while ( 1 )
    {
      if ( (*a1 & 0xFFFFFFF0) == 0x184D2A50 )
      {
        if ( v2 <= 7 )
          return -2;
        v5 = (unsigned int)a1[1];
        if ( (unsigned int)v5 > 0xFFFFFFF7 )
          return -2;
        FrameCompressedSize = v5 + 8;
        if ( v2 < FrameCompressedSize )
          return -2;
      }
      else
      {
        FrameContentSize = ZSTD_getFrameContentSize(a1, v2);
        if ( FrameContentSize > 0xFFFFFFFFFFFFFFFDLL )
          return FrameContentSize;
        v9 = __CFADD__(v4, FrameContentSize);
        v4 += FrameContentSize;
        if ( v9 )
          return -2;
        FrameCompressedSize = ZSTD_findFrameCompressedSize(a1, v2);
        if ( FrameCompressedSize > 0xFFFFFFFFFFFFFF88LL )
          return -2;
      }
      v2 -= FrameCompressedSize;
      a1 = (_DWORD *)((char *)a1 + FrameCompressedSize);
      if ( v2 <= 4 )
        goto LABEL_8;
    }
  }
  v4 = 0;
LABEL_8:
  if ( v2 )
    return -2;
  return v4;
}

