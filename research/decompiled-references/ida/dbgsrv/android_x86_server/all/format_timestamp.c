/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: format_timestamp
// Address: 0x00095910

//----- (00095910) --------------------------------------------------------
char __cdecl format_timestamp(_BYTE *a1, int a2, unsigned int a3, time_t a4, char a5)
{
  bool v5; // al
  unsigned int v6; // eax
  char v7; // cl
  _BYTE *v8; // edi
  unsigned int v9; // esi
  unsigned int v10; // eax
  char result; // al
  struct tm tp; // [esp+8h] [ebp-44h] BYREF
  unsigned int v13; // [esp+38h] [ebp-14h]

  v13 = __readgsdword(0x14u);
  if ( (a5 & 1) != 0 )
    v5 = qgmtime(&tp, a4);
  else
    v5 = qlocaltime(&tp, a4);
  if ( !v5 )
    return 0;
  v6 = qsnprintf(a1, a2, "%04u-%02u-%02u%s%02u:%02u:%02u", tp.tm_year + 1900);
  v7 = a5;
  v8 = &a1[v6];
  v9 = a2 - v6;
  if ( (a5 & 4) != 0 )
  {
    v10 = qsnprintf(v8, v9, ".%03u", a3 / 0x3E8);
    v7 = a5;
    v8 += v10;
    v9 -= v10;
  }
  result = 1;
  if ( (v7 & 2) != 0 && (v7 & 1) != 0 && v9 >= 2 )
    *(_WORD *)v8 = 90;
  return result;
}
