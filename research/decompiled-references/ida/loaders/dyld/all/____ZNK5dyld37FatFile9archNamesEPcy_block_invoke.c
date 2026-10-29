size_t __fastcall ___ZNK5dyld37FatFile9archNamesEPcy_block_invoke(__int64 a1, int a2, int a3)
{
  __int64 v6; // x8
  const char *v7; // x1
  size_t result; // x0

  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 24LL) )
    strlcat(*(char **)(a1 + 40), ",", 0x100u);
  v6 = 0;
  v7 = "unknown";
  while ( LODWORD((&dyld3::MachOFile::_s_archInfos)[v6 + 1]) != a2
       || (a3 & 0xFFFFFF) != *((_DWORD *)&dyld3::MachOFile::_s_archInfos + 2 * v6 + 3) )
  {
    v6 += 2;
    if ( v6 == 26 )
      goto LABEL_9;
  }
  v7 = (&dyld3::MachOFile::_s_archInfos)[v6];
LABEL_9:
  result = strlcat(*(char **)(a1 + 40), v7, 0x100u);
  *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 24LL) = 1;
  return result;
}
