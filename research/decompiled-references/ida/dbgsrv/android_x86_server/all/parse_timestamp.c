/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: parse_timestamp
// Address: 0x00095620

//----- (00095620) --------------------------------------------------------
char __cdecl parse_timestamp(_DWORD *a1, char *s1, char a3)
{
  char *v3; // ecx
  size_t v4; // eax
  int v5; // ecx
  time_t v6; // eax
  size_t v7; // ecx
  char result; // al
  int v9; // esi
  struct tm tp; // [esp+8h] [ebp-64h] BYREF
  int v11; // [esp+34h] [ebp-38h]
  int v12; // [esp+38h] [ebp-34h]
  int v13; // [esp+3Ch] [ebp-30h]
  int v14; // [esp+40h] [ebp-2Ch]
  int v15; // [esp+44h] [ebp-28h]
  int v16; // [esp+48h] [ebp-24h]
  int v17; // [esp+4Ch] [ebp-20h] BYREF
  int v18; // [esp+50h] [ebp-1Ch]
  char v19; // [esp+56h] [ebp-16h]
  _BYTE v20[21]; // [esp+57h] [ebp-15h] BYREF

  *(_DWORD *)&v20[1] = __readgsdword(0x14u);
  if ( !s1 || !strcmp(s1, "0") )
  {
    a1[1] = 0;
    *a1 = 0;
    return 1;
  }
  v17 = 0;
  v16 = 0;
  v15 = 0;
  v14 = 0;
  v13 = 0;
  v12 = 0;
  v11 = 0;
  v3 = "%04u-%02u-%02uT%02u:%02u:%02u%n";
  if ( (a3 & 2) == 0 )
    v3 = "%04u-%02u-%02u %02u:%02u:%02u%n";
  if ( qsscanf((int)s1, v3, (int)&v17) != 6 && qsscanf((int)s1, "%04u-%02u-%02u%n", (int)&v17) != 3 )
  {
    v20[0] = 0;
    v19 = 0;
    tp.tm_sec = 0;
    v18 = 0;
    if ( qsscanf((int)s1, "%c%d%c%n", (int)v20) == 3 )
    {
      v9 = v18;
      if ( v9 == strlen(s1) && v20[0] != 45 )
        return 0;
    }
    return 0;
  }
  v4 = strlen(s1);
  if ( v11 == v4 )
  {
    v5 = a3 & 1;
LABEL_9:
    tp.tm_yday = 0;
    tp.tm_wday = 0;
    tp.tm_gmtoff = 0;
    tp.tm_zone = nullptr;
    tp.tm_year = v17 - 1900;
    tp.tm_mon = v16 - 1;
    tp.tm_mday = v15;
    tp.tm_hour = v14;
    tp.tm_min = v13;
    tp.tm_sec = v12;
    tp.tm_isdst = -1;
    if ( v5 )
      v6 = qtimegm(&tp);
    else
      v6 = mktime(&tp);
    a1[1] = v6;
    *a1 = 0;
    return 1;
  }
  v7 = v4;
  result = 0;
  if ( (a3 & 1) != 0 && v11 + 1 == v7 )
  {
    v5 = 1;
    if ( s1[v11] == 90 )
      goto LABEL_9;
    return 0;
  }
  return result;
}
// 95855: conditional instruction was optimized away because %tp.4==0
// 95898: conditional instruction was optimized away because %tp.4==0
