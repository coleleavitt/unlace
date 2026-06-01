__int64 __fastcall dyld4::APIs::_dyld_get_dlopen_image_header(dyld4::APIs *this, unsigned __int64 a2)
{
  void *v2; // x30
  const dyld4::Loader *v5; // x20
  dyld4::Loader *ImageContaining; // x0
  __int64 _28; // [xsp+28h] [xbp+8h]

  if ( a2 == -5 )
  {
    ImageContaining = *((dyld4::Loader **)this + 3);
    goto LABEL_10;
  }
  v5 = (const dyld4::Loader *)&dword_0;
  if ( a2 )
  {
    if ( a2 == -3 )
    {
      ImageContaining = (dyld4::Loader *)dyld4::APIs::findImageContaining(this, v2);
      if ( ImageContaining )
        goto LABEL_10;
    }
    v5 = (const dyld4::Loader *)(a2 & 0xFFFFFFFFFFFFFFFELL ^ (unsigned __int64)&dword_0);
  }
  if ( !dyld4::APIs::validLoader(this, v5) )
    return 0;
  ImageContaining = v5;
LABEL_10:
  if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return dyld4::Loader::analyzer(ImageContaining, this);
}
