/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: parse_timestamp
// Address: 0x00000000000A9D80

//----- (00000000000A9D80) ----------------------------------------------------
__int64 __fastcall parse_timestamp(_QWORD *a1, char *a2, unsigned int a3)
{
  unsigned int v3; // ebp
  char *v5; // rsi
  size_t v6; // rax
  time_t v7; // rax
  __int64 v8; // rbp
  int v10; // eax
  int v11; // ebx
  int v12; // ecx
  int v13; // eax
  int v14; // ebx
  int v15; // ecx
  struct tm v16; // [rsp+0h] [rbp-88h] BYREF
  int v17; // [rsp+3Ch] [rbp-4Ch] BYREF
  __int64 v18; // [rsp+40h] [rbp-48h] BYREF
  int v19; // [rsp+48h] [rbp-40h] BYREF
  int v20; // [rsp+4Ch] [rbp-3Ch] BYREF
  int v21; // [rsp+50h] [rbp-38h] BYREF
  int v22; // [rsp+54h] [rbp-34h] BYREF
  int v23; // [rsp+58h] [rbp-30h] BYREF
  char v24; // [rsp+5Eh] [rbp-2Ah] BYREF
  char v25; // [rsp+5Fh] [rbp-29h] BYREF
  unsigned __int64 v26; // [rsp+60h] [rbp-28h]

  v26 = __readfsqword(0x28u);
  if ( !a2 || (v3 = a3, !strcmp(a2, "0")) )
  {
    *a1 = 0;
    goto LABEL_22;
  }
  v22 = 0;
  v21 = 0;
  v20 = 0;
  v19 = 0;
  v18 = 0;
  v17 = 0;
  v5 = "%04u-%02u-%02uT%02u:%02u:%02u%n";
  if ( (v3 & 2) == 0 )
    v5 = "%04u-%02u-%02u %02u:%02u:%02u%n";
  if ( qsscanf(a2, v5, &v22, &v21, &v20, &v19, (char *)&v18 + 4, &v18, &v17) == 6
    || qsscanf(a2, "%04u-%02u-%02u%n", &v22, &v21, &v20, &v17) == 3 )
  {
    v6 = strlen(a2);
    v3 &= 1u;
    if ( v6 != v17 )
    {
      if ( !v3 )
        return 0;
      if ( v6 != v17 + 1 )
        return 0;
      v3 = 1;
      if ( a2[v17] != 90 )
        return 0;
    }
    memset(&v16.tm_wday, 0, 32);
    v16.tm_year = v22 - 1900;
    v16.tm_mon = v21 - 1;
    v16.tm_mday = v20;
    v16.tm_hour = v19;
    *(_QWORD *)&v16.tm_sec = v18;
    v16.tm_isdst = -1;
    if ( v3 )
      v7 = qtimegm(&v16);
    else
      v7 = mktime(&v16);
LABEL_21:
    *a1 = v7 << 32;
LABEL_22:
    LOBYTE(v3) = 1;
    return v3;
  }
  v25 = 0;
  v24 = 0;
  v16.tm_sec = 0;
  v23 = 0;
  v3 = 0;
  if ( qsscanf(a2, "%c%d%c%n", &v25, &v16, &v24, &v23) == 3 )
  {
    v8 = v23;
    if ( strlen(a2) != v8 )
      return 0;
    if ( v25 == 45 )
    {
      if ( !v16.tm_sec )
        return 0;
LABEL_26:
      v3 = 0;
      v10 = 60;
      v11 = 1;
      v12 = 24;
      switch ( v24 )
      {
        case 'H':
          goto LABEL_29;
        case 'M':
          goto LABEL_30;
        case 'S':
          goto LABEL_31;
        case 'd':
          goto LABEL_28;
        case 'w':
          v12 = 168;
LABEL_28:
          v11 = v12;
LABEL_29:
          v10 = 3600 * v11;
LABEL_30:
          v11 = v10;
LABEL_31:
          v13 = time(nullptr);
          v14 = v16.tm_sec * v11;
          v15 = -v14;
          if ( v25 == 43 )
            v15 = v14;
          v7 = (unsigned int)(v15 + v13);
          goto LABEL_21;
        default:
          return v3;
      }
    }
    v3 = 0;
    if ( v25 == 43 && v16.tm_sec )
      goto LABEL_26;
  }
  return v3;
}
// A9FA7: variable 'v3' is possibly undefined
