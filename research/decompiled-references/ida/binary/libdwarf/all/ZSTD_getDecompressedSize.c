unsigned __int64 ZSTD_getDecompressedSize()
{
  unsigned __int64 result; // rax

  result = ZSTD_getFrameContentSize();
  if ( result >= 0xFFFFFFFFFFFFFFFELL )
    return 0;
  return result;
}

