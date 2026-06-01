void __fastcall dwarf_malloc_section_free(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 68) == 1 && *(_BYTE *)(a1 + 107) )
    free(*(void **)a1);
  *(_QWORD *)a1 = 0;
  *(_BYTE *)(a1 + 107) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 40) = 0;
}

