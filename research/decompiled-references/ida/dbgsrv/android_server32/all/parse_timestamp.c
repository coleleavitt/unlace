/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: parse_timestamp
// Address: 0x0006CD3C

//----- (0006CD3C) --------------------------------------------------------
int __fastcall parse_timestamp(_DWORD *a1, char *s1, char a3)
{
  int v6; // r5
  char *v7; // r1
  int v8; // r4
  int v9; // r7
  size_t v10; // r0
  time_t v11; // r0
  _DWORD *v13; // [sp+14h] [bp-60h]
  struct tm tp; // [sp+1Ch] [bp-58h] BYREF
  int v15; // [sp+48h] [bp-2Ch]
  int v16; // [sp+4Ch] [bp-28h]
  int v17; // [sp+50h] [bp-24h]
  int v18; // [sp+54h] [bp-20h]
  int v19; // [sp+58h] [bp-1Ch]
  int v20; // [sp+5Ch] [bp-18h]
  int v21; // [sp+60h] [bp-14h]
  int v22; // [sp+64h] [bp-10h]
  char v23; // [sp+68h] [bp-Ch]
  char v24; // [sp+6Ch] [bp-8h]

  if ( !s1 || !strcmp(s1, "0") )
  {
    *a1 = 0;
    a1[1] = 0;
    return 1;
  }
  v13 = a1;
  v6 = 0;
  v21 = 0;
  v20 = 0;
  v19 = 0;
  v18 = 0;
  v17 = 0;
  v16 = 0;
  v15 = 0;
  if ( (a3 & 2) != 0 )
    v7 = "%04u-%02u-%02uT%02u:%02u:%02u%n";
  else
    v7 = "%04u-%02u-%02u %02u:%02u:%02u%n";
  if ( qsscanf((int)s1, v7) == 6 || qsscanf((int)s1, "%04u-%02u-%02u%n") == 3 )
  {
    v8 = 1;
    v9 = a3 & 1;
    v10 = strlen(s1);
    if ( v15 == v10 )
    {
      v8 = v9;
    }
    else
    {
      v6 = 0;
      if ( !v9 || v15 + 1 != v10 || s1[v15] != 90 )
        return v6;
    }
    tp.tm_zone = nullptr;
    tp.tm_gmtoff = 0;
    tp.tm_yday = 0;
    tp.tm_wday = 0;
    tp.tm_mday = v19;
    tp.tm_hour = v18;
    tp.tm_min = v17;
    tp.tm_sec = v16;
    tp.tm_isdst = -1;
    tp.tm_year = v21 - 1900;
    tp.tm_mon = v20 - 1;
    if ( v8 )
      v11 = qtimegm(&tp);
    else
      v11 = mktime(&tp);
    *v13 = 0;
    v13[1] = v11;
    return 1;
  }
  else
  {
    v24 = 0;
    v23 = 0;
    tp.tm_sec = 0;
    v22 = 0;
    if ( qsscanf((int)s1, "%c%d%c%n") == 3 )
      strlen(s1);
  }
  return v6;
}
// 6CE76: conditional instruction was optimized away because %tp.4==0
