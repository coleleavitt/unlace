void __fastcall dwarf_fde_destructor(__int64 a1)
{
  __int64 v2; // rdi
  int v3; // eax

  if ( !*(_DWORD *)(a1 + 300) || (v2 = *(_QWORD *)(a1 + 80), *(_BYTE *)(v2 + 70)) )
  {
    if ( !*(_DWORD *)(a1 + 296) )
      return;
LABEL_5:
    free(*(void **)(a1 + 272));
    *(_QWORD *)(a1 + 264) = 0;
    *(_QWORD *)(a1 + 272) = 0;
    *(_DWORD *)(a1 + 296) = 0;
    return;
  }
  dwarf_dealloc((Dwarf_Debug)v2, *(void **)(a1 + 24), 0x14u);
  v3 = *(_DWORD *)(a1 + 296);
  *(_QWORD *)(a1 + 24) = 0;
  if ( v3 )
    goto LABEL_5;
}

