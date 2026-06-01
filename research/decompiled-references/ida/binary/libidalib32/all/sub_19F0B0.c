void *__fastcall sub_19F0B0(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 168) )
  {
    if ( !(_BYTE)byte_255E18 )
    {
      if ( __cxa_guard_acquire(&byte_255E18) )
      {
        TPalette::TPalette((TPalette *)&unk_255E20, " !\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFG", 0x28u);
        __cxa_atexit((void (*)(void *))TPalette::~TPalette, &unk_255E20, &off_22E220);
        __cxa_guard_release(&byte_255E18);
      }
    }
    return &unk_255E20;
  }
  else
  {
    if ( !(_BYTE)byte_255E08 && __cxa_guard_acquire(&byte_255E08) )
    {
      TPalette::TPalette((TPalette *)&unk_255E10, asc_1D1BE0, 0x30u);
      __cxa_atexit((void (*)(void *))TPalette::~TPalette, &unk_255E10, &off_22E220);
      __cxa_guard_release(&byte_255E08);
    }
    return &unk_255E10;
  }
}

