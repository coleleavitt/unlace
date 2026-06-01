__int64 __fastcall dwarf_has_SECT_fission(__int64 a1, unsigned int a2, _DWORD *a3, _QWORD *a4)
{
  if ( !*(_QWORD *)(a1 + 104) || !*(_QWORD *)(a1 + 8LL * a2 + 224) )
    return 0xFFFFFFFFLL;
  *a4 = *(_QWORD *)(a1 + 8LL * a2 + 128);
  *a3 = 1;
  return 0;
}

