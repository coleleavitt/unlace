void *__fastcall sub_18DD80(__int64 a1)
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
        if ( sub_1442C0(v2) )
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
    if ( !(_BYTE)byte_255958 )
    {
      if ( __cxa_guard_acquire(&byte_255958) )
      {
        TPalette::TPalette((TPalette *)&unk_255960, "", 0);
        __cxa_atexit((void (*)(void *))TPalette::~TPalette, &unk_255960, &off_22E220);
        __cxa_guard_release(&byte_255958);
      }
    }
    return &unk_255960;
  }
LABEL_8:
  if ( v1 != 2 )
    goto LABEL_3;
LABEL_9:
  if ( !(_BYTE)byte_255968 && __cxa_guard_acquire(&byte_255968) )
  {
    TPalette::TPalette((TPalette *)&unk_255970, asc_1D1AC0, 0x28u);
    __cxa_atexit((void (*)(void *))TPalette::~TPalette, &unk_255970, &off_22E220);
    __cxa_guard_release(&byte_255968);
  }
  return &unk_255970;
}

