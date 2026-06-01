/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_669EC
// Address: 0x000669EC

//----- (000669EC) --------------------------------------------------------
int __fastcall sub_669EC(int a1, char *s1, char a3)
{
  int v6; // r0
  int v7; // r4
  size_t v8; // r0
  int result; // r0
  time_t v10; // r0
  int v11; // r3
  int v12; // r3
  int v13; // r3
  int v14; // r4
  time_t v15; // r0
  int v16; // r4
  bool v17; // zf
  char v18; // [sp+1Eh] [bp-56h] BYREF
  char v19; // [sp+1Fh] [bp-55h] BYREF
  int v20; // [sp+20h] [bp-54h] BYREF
  int v21; // [sp+24h] [bp-50h] BYREF
  int v22; // [sp+28h] [bp-4Ch] BYREF
  int v23; // [sp+2Ch] [bp-48h] BYREF
  int v24; // [sp+30h] [bp-44h] BYREF
  int v25; // [sp+34h] [bp-40h] BYREF
  int v26; // [sp+38h] [bp-3Ch] BYREF
  int v27; // [sp+3Ch] [bp-38h] BYREF
  struct tm tp; // [sp+40h] [bp-34h] BYREF

  if ( !s1 || !strcmp(s1, "0") )
  {
    result = 1;
    *(_QWORD *)a1 = 0;
    return result;
  }
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  if ( (a3 & 2) != 0 )
    v6 = sub_7EAE4((int)s1, "%04u-%02u-%02uT%02u:%02u:%02u%n", &v20, &v21, &v22, &v23, &v24, &v25, &v26);
  else
    v6 = sub_7EAE4((int)s1, "%04u-%02u-%02u %02u:%02u:%02u%n", &v20, &v21, &v22, &v23, &v24, &v25, &v26);
  if ( v6 == 6 || sub_7EAE4((int)s1, "%04u-%02u-%02u%n", &v20, &v21, &v22, &v26) == 3 )
  {
    v7 = a3 & 1;
    v8 = strlen(s1);
    if ( v26 == v8 || v7 && v26 + 1 == v8 && s1[v26] == 90 )
    {
      tp.tm_yday = 0;
      tp.tm_mon = v21 - 1;
      tp.tm_year = v20 - 1900;
      tp.tm_mday = v22;
      tp.tm_hour = v23;
      tp.tm_wday = 0;
      tp.tm_gmtoff = 0;
      tp.tm_zone = nullptr;
      tp.tm_min = v24;
      tp.tm_isdst = -1;
      tp.tm_sec = v25;
      if ( v7 )
        v10 = sub_78FF4(&tp);
      else
        v10 = mktime(&tp);
      *(_DWORD *)a1 = 0;
      *(_DWORD *)(a1 + 4) = v10;
      return 1;
    }
    return 0;
  }
  v18 = 0;
  v19 = 0;
  v27 = 0;
  tp.tm_sec = 0;
  if ( sub_7EAE4((int)s1, "%c%d%c%n", &v18, &v27, &v19, &tp) != 3 || strlen(s1) != tp.tm_sec || ((v18 - 43) & 0xFD) != 0 )
    return 0;
  result = v27;
  if ( v27 )
  {
    switch ( v19 )
    {
      case 'H':
        v12 = 1;
        goto LABEL_26;
      case 'M':
        v13 = 1;
        goto LABEL_27;
      case 'S':
        v14 = 1;
        goto LABEL_28;
      case 'd':
        v11 = 1;
        goto LABEL_25;
      case 'w':
        v11 = 7;
LABEL_25:
        v12 = 24 * v11;
LABEL_26:
        v13 = 60 * v12;
LABEL_27:
        v14 = 60 * v13;
LABEL_28:
        v15 = time(nullptr);
        v16 = v27 * v14;
        v17 = v18 == 43;
        *(_DWORD *)a1 = 0;
        if ( !v17 )
          v16 = -v16;
        *(_DWORD *)(a1 + 4) = v16 + v15;
        result = 1;
        break;
      default:
        return 0;
    }
  }
  return result;
}
