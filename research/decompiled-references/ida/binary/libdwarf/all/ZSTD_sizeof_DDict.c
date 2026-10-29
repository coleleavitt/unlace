__int64 __fastcall ZSTD_sizeof_DDict(_QWORD *a1)
{
  if ( !a1 )
    return 0;
  if ( *a1 )
    return a1[2] + 27352LL;
  return 27352;
}

