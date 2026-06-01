void __fastcall dwarf_frame_instr_destructor(__int64 a1)
{
  __int64 v1; // r12
  struct Dwarf_Debug_s *v2; // r13
  __int64 i; // rbx

  v1 = *(_QWORD *)(a1 + 24);
  v2 = *(struct Dwarf_Debug_s **)a1;
  if ( v1 )
  {
    for ( i = 0; i != v1; ++i )
    {
      free(*(void **)(*(_QWORD *)(a1 + 16) + 8 * i));
      *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * i) = 0;
    }
  }
  dwarf_dealloc(v2, *(void **)(a1 + 16), 0xFu);
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
}

