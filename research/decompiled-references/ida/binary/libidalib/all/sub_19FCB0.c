void *__fastcall sub_19FCB0(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 168) )
  {
    if ( !(_BYTE)byte_256FD8 )
    {
      if ( __cxa_guard_acquire(&byte_256FD8) )
      {
        TPalette::TPalette((TPalette *)&unk_256FE0, " !\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFG", 0x28u);
        __cxa_atexit((void (*)(void *))TPalette::~TPalette, &unk_256FE0, &off_22F2A0);
        __cxa_guard_release(&byte_256FD8);
      }
    }
    return &unk_256FE0;
  }
  else
  {
    if ( !(_BYTE)byte_256FC8 && __cxa_guard_acquire(&byte_256FC8) )
    {
      TPalette::TPalette((TPalette *)&unk_256FD0, asc_1D2BD8, 0x30u);
      __cxa_atexit((void (*)(void *))TPalette::~TPalette, &unk_256FD0, &off_22F2A0);
      __cxa_guard_release(&byte_256FC8);
    }
    return &unk_256FD0;
  }
}

