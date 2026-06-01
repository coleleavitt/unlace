void __fastcall dwarf_dsc_destructor(__int64 a1)
{
  free(*(void **)(a1 + 40));
  *(_QWORD *)(a1 + 40) = 0;
  free(*(void **)(a1 + 16));
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 8) = 0;
}

