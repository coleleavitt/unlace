void __fastcall dwarf_frame_destructor(__int64 a1)
{
  free(*(void **)(a1 + 80));
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 0;
}

