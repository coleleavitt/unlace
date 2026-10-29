void __fastcall sub_FD80(Dwarf_Debug a1, _QWORD *a2)
{
  void *v3; // rsi
  Dwarf_Unsigned v4; // rdx
  _QWORD *v5; // r12

  do
  {
    v3 = (void *)*a2;
    v4 = *((int *)a2 + 2);
    v5 = a2;
    a2 = (_QWORD *)a2[2];
    if ( v3 )
    {
      if ( (_DWORD)v4 )
      {
        dwarf_dealloc(a1, v3, v4);
        *v5 = 0;
        dwarf_dealloc(a1, v5, 0x1Fu);
      }
    }
  }
  while ( a2 );
}

