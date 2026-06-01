/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: parse_timestamp
// Address: 0x00000000000A5060

//----- (00000000000A5060) ----------------------------------------------------
__int64 __fastcall parse_timestamp(unsigned __int64 *a1, char *s1, char a3)
{
  char *v6; // x1
  size_t v7; // x0
  int v8; // w8
  time_t v9; // x0
  bool v10; // zf
  __int64 result; // x0
  __int64 v12; // x21
  unsigned __int64 v13; // x8
  int v14; // w8
  int v15; // w20
  int v16; // w9
  int v17; // w0
  int v18; // w8
  struct tm tp; // [xsp+8h] [xbp-98h] BYREF
  _QWORD v20[3]; // [xsp+40h] [xbp-60h] BYREF
  int v21; // [xsp+58h] [xbp-48h] BYREF
  int v22; // [xsp+5Ch] [xbp-44h] BYREF
  char v23; // [xsp+60h] [xbp-40h] BYREF
  char v24; // [xsp+64h] [xbp-3Ch] BYREF
  __int64 v25; // [xsp+68h] [xbp-38h]

  v25 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !s1 || !strcmp(s1, "0") )
  {
    *a1 = 0;
    return 1;
  }
  if ( (a3 & 2) != 0 )
    v6 = "%04u-%02u-%02uT%02u:%02u:%02u%n";
  else
    v6 = "%04u-%02u-%02u %02u:%02u:%02u%n";
  v21 = 0;
  memset(v20, 0, sizeof(v20));
  if ( (unsigned int)qsscanf(
                       s1,
                       v6,
                       &v21,
                       (char *)&v20[2] + 4,
                       &v20[2],
                       (char *)&v20[1] + 4,
                       &v20[1],
                       (char *)v20 + 4,
                       v20) == 6
    || (unsigned int)qsscanf(s1, "%04u-%02u-%02u%n", &v21, (char *)&v20[2] + 4, &v20[2], v20) == 3 )
  {
    v7 = strlen(s1);
    v8 = a3 & 1;
    if ( v7 == SLODWORD(v20[0]) )
      goto LABEL_9;
    if ( (a3 & 1) != 0 && v7 == LODWORD(v20[0]) + 1 && s1[SLODWORD(v20[0])] == 90 )
    {
      v8 = 1;
LABEL_9:
      tp.tm_year = v21 - 1900;
      tp.tm_mon = HIDWORD(v20[2]) - 1;
      *(_QWORD *)&tp.tm_hour = *(_QWORD *)((char *)&v20[1] + 4);
      memset(&tp.tm_wday, 0, 32);
      *(_QWORD *)&tp.tm_sec = *(_QWORD *)((char *)v20 + 4);
      tp.tm_isdst = -1;
      if ( v8 )
        v9 = qtimegm(&tp);
      else
        v9 = mktime(&tp);
      v13 = v9 << 32;
LABEL_24:
      *a1 = v13;
      return 1;
    }
    return 0;
  }
  v24 = 0;
  v23 = 0;
  tp.tm_sec = 0;
  v22 = 0;
  v10 = (unsigned int)qsscanf(s1, "%c%d%c%n", &v24, &tp, &v23, &v22) == 3;
  result = 0;
  if ( !v10 )
    return result;
  v12 = v22;
  if ( strlen(s1) != v12 )
    return 0;
  if ( v24 == 45 )
  {
    if ( !tp.tm_sec )
      return 0;
LABEL_29:
    result = 0;
    v14 = 60;
    v15 = 1;
    v16 = 24;
    switch ( v23 )
    {
      case 'H':
        goto LABEL_32;
      case 'M':
        goto LABEL_33;
      case 'S':
        goto LABEL_34;
      case 'd':
        goto LABEL_31;
      case 'w':
        v16 = 168;
LABEL_31:
        v15 = v16;
LABEL_32:
        v14 = 3600 * v15;
LABEL_33:
        v15 = v14;
LABEL_34:
        v17 = time(nullptr);
        v18 = tp.tm_sec * v15;
        if ( v24 != 43 )
          v18 = -v18;
        v13 = (unsigned __int64)(unsigned int)(v18 + v17) << 32;
        goto LABEL_24;
      default:
        return result;
    }
  }
  result = 0;
  if ( v24 == 43 && tp.tm_sec )
    goto LABEL_29;
  return result;
}
