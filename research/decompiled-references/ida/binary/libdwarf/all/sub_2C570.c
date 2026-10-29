void __fastcall sub_2C570(Dwarf_Debug a1, _DWORD *a2)
{
  unsigned int *v2; // r14
  _DWORD *i; // rbx
  void *v4; // r15
  int v5; // ebp
  unsigned int *v6; // r12
  _DWORD *v7; // rbp

  if ( a2 )
  {
    v2 = nullptr;
    for ( i = a2; ; i = v7 )
    {
      v4 = *(void **)i;
      v5 = i[2];
      v6 = *(unsigned int **)(*(_QWORD *)i + 16LL);
      if ( v6 )
      {
        if ( v6 != v2 )
        {
          v2 = *(unsigned int **)(*(_QWORD *)i + 16LL);
          dwarf_dealloc(a1, v2, v6[1]);
        }
      }
      dwarf_dealloc(a1, v4, v5);
      v7 = *((_DWORD **)i + 2);
      *(_QWORD *)i = 0;
      dwarf_dealloc(a1, i, 0x1Fu);
      if ( !v7 )
        break;
    }
  }
}

