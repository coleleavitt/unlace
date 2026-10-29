__int64 __fastcall ZSTD_estimateDDictSize(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 result; // rax

  v2 = a1 + 27352;
  result = 27352;
  if ( a2 != 1 )
    return v2;
  return result;
}

