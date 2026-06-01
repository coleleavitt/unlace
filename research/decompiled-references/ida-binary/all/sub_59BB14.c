__int64 __fastcall sub_59BB14(__int64 a1, _QWORD *a2, unsigned int *a3)
{
  __int64 v5; // [rsp+20h] [rbp-10h]
  unsigned int i; // [rsp+2Ch] [rbp-4h]

  while ( 1 )
  {
    if ( !*(_DWORD *)(a1 + 8) && *(_BYTE *)(a1 + 4) )
      return 0;
    for ( i = 0; i < *(_DWORD *)(a1 + 8); ++i )
    {
      if ( *(_BYTE *)(a1 + i + 12) == 10 || !*(_BYTE *)(a1 + i + 12) )
      {
        *(_BYTE *)(a1 + i + 12) = 0;
        *a3 = i;
        *a2 = a1 + 12;
        return 1;
      }
    }
    if ( *(_DWORD *)(a1 + 8) == 512 )
      return 0;
    if ( *(_BYTE *)(a1 + 4) )
      break;
    v5 = sub_599D45(*(_DWORD *)a1, (char *)(*(unsigned int *)(a1 + 8) + a1 + 12), 512LL - *(unsigned int *)(a1 + 8));
    if ( v5 < 0 )
      return 0;
    if ( v5 )
      *(_DWORD *)(a1 + 8) += v5;
    else
      *(_BYTE *)(a1 + 4) = 1;
  }
  if ( !*(_DWORD *)(a1 + 8) )
    __assert_fail(
      "buf_used_",
      "./src/client/linux/minidump_writer/line_reader.h",
      0x56u,
      "bool google_breakpad::LineReader::GetNextLine(const char**, unsigned int*)");
  *(_BYTE *)(a1 + *(unsigned int *)(a1 + 8) + 12) = 0;
  *a3 = (*(_DWORD *)(a1 + 8))++;
  *a2 = a1 + 12;
  return 1;
}
