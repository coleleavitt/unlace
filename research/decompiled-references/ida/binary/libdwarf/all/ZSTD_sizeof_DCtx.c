char *__fastcall ZSTD_sizeof_DCtx(_QWORD *a1)
{
  if ( a1 )
    return (char *)&loc_176E8 + ZSTD_sizeof_DDict(a1[3773]) + a1[3781] + a1[3785];
  else
    return nullptr;
}

