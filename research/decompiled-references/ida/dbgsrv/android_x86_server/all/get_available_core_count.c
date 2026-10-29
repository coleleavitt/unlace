/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_available_core_count
// Address: 0x000B25D0

//----- (000B25D0) --------------------------------------------------------
int get_available_core_count()
{
  FILE *v0; // eax
  FILE *v1; // esi
  int v2; // edi
  char s1[3]; // [esp+8h] [ebp-414h] BYREF
  char v5; // [esp+Bh] [ebp-411h]
  unsigned int v6; // [esp+408h] [ebp-14h]

  v6 = __readgsdword(0x14u);
  v0 = qfopen("/proc/stat", (int)"r");
  if ( !v0 )
    return -1;
  v1 = v0;
  v2 = 0;
  while ( qfgets(s1, 1024, v1) )
  {
    if ( v5 >= 0 && (unsigned int)(unsigned __int8)v5 - 48 <= 9 )
      v2 += strncmp(s1, "cpu", 3u) == 0;
  }
  qfclose(v1);
  return v2;
}
