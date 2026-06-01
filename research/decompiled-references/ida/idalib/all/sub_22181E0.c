const char *__fastcall sub_22181E0(int a1)
{
  const char *result; // rax

  result = "LLVM was not built with LLVM_ENABLE_ZLIB or did not find zlib at build time";
  if ( a1 )
    return "LLVM was not built with LLVM_ENABLE_ZSTD or did not find zstd at build time";
  return result;
}
