void *__fastcall sub_18E960(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rbx

  v1 = *(_DWORD *)(a1 + 152);
  if ( !v1 )
  {
    v2 = *(_QWORD *)(a1 + 56);
    if ( v2 )
    {
      do
      {
        if ( sub_144A20(v2) )
        {
          v1 = 2 - *(unsigned __int8 *)(v2 + 168);
          *(_DWORD *)(a1 + 152) = v1;
          goto LABEL_8;
        }
        v2 = *(_QWORD *)(v2 + 56);
      }
      while ( v2 );
      if ( *(_DWORD *)(a1 + 152) == 2 )
        goto LABEL_9;
    }
LABEL_3:
    if ( !(_BYTE)byte_256B18 )
    {
      if ( __cxa_guard_acquire(&byte_256B18) )
      {
        TPalette::TPalette((TPalette *)&unk_256B20, "", 0);
        __cxa_atexit((void (*)(void *))TPalette::~TPalette, &unk_256B20, &off_22F2A0);
        __cxa_guard_release(&byte_256B18);
      }
    }
    return &unk_256B20;
  }
LABEL_8:
  if ( v1 != 2 )
    goto LABEL_3;
LABEL_9:
  if ( !(_BYTE)byte_256B28 && __cxa_guard_acquire(&byte_256B28) )
  {
    TPalette::TPalette((TPalette *)&unk_256B30, asc_1D2AB8, 0x28u);
    __cxa_atexit((void (*)(void *))TPalette::~TPalette, &unk_256B30, &off_22F2A0);
    __cxa_guard_release(&byte_256B28);
  }
  return &unk_256B30;
}

