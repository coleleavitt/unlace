/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_477648
// Address: 0x0000000000477648

//----- (0000000000477648) ----------------------------------------------------
__int64 __fastcall sub_477648(_QWORD *a1, char *s1, char a3, int a4, int a5, int a6, int a7, int a8, char a9)
{
  char *v12; // x1
  size_t v13; // x0
  int v14; // w21
  unsigned int v15; // w22
  time_t v17; // x0
  size_t v18; // x0
  int v19; // w20
  int v20; // w20
  time_t v21; // x0
  __int64 v22; // x1
  int v23; // w0
  char v24; // [xsp+6Eh] [xbp-62h] BYREF
  unsigned __int8 v25; // [xsp+6Fh] [xbp-61h] BYREF
  int v26; // [xsp+70h] [xbp-60h] BYREF
  int v27; // [xsp+74h] [xbp-5Ch] BYREF
  int v28; // [xsp+78h] [xbp-58h] BYREF
  int v29; // [xsp+7Ch] [xbp-54h] BYREF
  int v30; // [xsp+80h] [xbp-50h] BYREF
  int v31; // [xsp+84h] [xbp-4Ch] BYREF
  int v32; // [xsp+88h] [xbp-48h] BYREF
  int v33; // [xsp+8Ch] [xbp-44h] BYREF
  struct tm tp; // [xsp+90h] [xbp-40h] BYREF

  if ( !s1 || !strcmp(s1, "0") )
  {
    v15 = 1;
    *a1 = 0;
    return v15;
  }
  v12 = "%04u-%02u-%02uT%02u:%02u:%02u%n";
  if ( (a3 & 2) == 0 )
    v12 = "%04u-%02u-%02u %02u:%02u:%02u%n";
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  if ( (unsigned int)sub_49B8B8(s1, v12, &v26, &v27, &v28, &v29, &v30, &v31, &v32) != 6
    && (unsigned int)sub_49B8B8(
                       s1,
                       "%04u-%02u-%02u%n",
                       (unsigned int)&v26,
                       (unsigned int)&v27,
                       (unsigned int)&v28,
                       &v32) != 3 )
  {
    v24 = 0;
    v25 = 0;
    tp.tm_sec = 0;
    v33 = 0;
    v15 = 0;
    if ( (unsigned int)sub_49B8B8(s1, "%c%d%c%n", &v24, (unsigned int)&v33, &v25, &tp) != 3 )
      return v15;
    v18 = strlen(s1);
    if ( tp.tm_sec != v18 )
      return v15;
    if ( ((v24 - 43) & 0xFD) != 0 )
      return v15;
    v15 = (v24 - 43) & 0xFD;
    if ( !v33 )
      return v15;
    if ( v25 == 83 )
    {
      v20 = 1;
      goto LABEL_26;
    }
    if ( v25 > 0x53u )
    {
      if ( v25 == 100 )
      {
        v23 = 1;
      }
      else
      {
        v23 = 7;
        if ( v25 != 119 )
          return 0;
      }
      v19 = 24 * v23;
    }
    else
    {
      v19 = 1;
      if ( v25 != 72 )
      {
        if ( v25 == 77 )
        {
LABEL_25:
          v20 = 60 * v19;
LABEL_26:
          v21 = time(nullptr);
          v15 = 1;
          v22 = v20 * v33;
          if ( v24 != 43 )
            v22 = -(v20 * v33);
          *a1 = (v21 + v22) << 32;
          return v15;
        }
        return 0;
      }
    }
    v19 *= 60;
    goto LABEL_25;
  }
  v13 = strlen(s1);
  v14 = a3 & 1;
  if ( v13 == v32 || (v15 = 0, v14) && v13 == v32 + 1 && s1[v32] == 90 )
  {
    tp.tm_yday = 0;
    memset(&tp.tm_isdst + 1, 0, 20);
    tp.tm_sec = v31;
    tp.tm_min = v30;
    tp.tm_hour = v29;
    tp.tm_mday = v28;
    tp.tm_mon = v27 - 1;
    *(_QWORD *)&tp.tm_year = (unsigned int)(v26 - 1900);
    tp.tm_isdst = -1;
    if ( v14 )
      v17 = j__timegm(&tp);
    else
      v17 = mktime(&tp);
    *a1 = v17 << 32;
    return 1;
  }
  return v15;
}
