/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004261C
// Address: 0x000000010004261C

//----- (000000010004261C) ----------------------------------------------------
char *__fastcall sub_10004261C(__int64 a1, char *a2, __int64 a3, unsigned __int8 *a4, int a5, int a6)
{
  unsigned int v12; // w25
  const char *v13; // x24
  char *v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x5
  __int64 v18; // x6
  __int64 v19; // x7
  char *v20; // x0
  int v21; // w8
  __int64 v22; // x26
  __int64 v23; // x27
  char *v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  __int64 v27; // x5
  __int64 v28; // x6
  __int64 v29; // x7
  char *v30; // x0
  const char *v32; // x22
  __int128 *v33; // x0
  char v35[1024]; // [xsp+18h] [xbp-458h] BYREF

  v12 = *(_DWORD *)(a1 + 340);
  if ( qisabspath(a4) )
  {
    v13 = qstrncpy(a2, a4, a3);
    if ( (v12 & 4) != 0 && !(unsigned int)sub_100045CC8() )
      return nullptr;
    return (char *)v13;
  }
  if ( a5 != 34 || (a6 & 1) != 0 )
    goto LABEL_31;
  v14 = *(char **)(a1 + 280);
  if ( v14 )
    qdirname(v35, 0x400u, v14);
  else
    qgetcwd(v35, 0x400u);
  v20 = qmakepath(a2, a3, v35, v15, v16, v17, v18, v19, (const char *)a4);
  v13 = v20;
  if ( (v12 & 4) == 0 )
  {
    if ( qfileexist(v20) )
      goto LABEL_16;
    goto LABEL_15;
  }
  if ( (sub_100045CC8() & 1) == 0 )
LABEL_15:
    v13 = nullptr;
LABEL_16:
  if ( !v13 )
  {
    v21 = *(_DWORD *)(a1 + 256);
    v22 = (unsigned int)(v21 - 1);
    if ( (v22 & 0x80000000) == 0 )
    {
      v23 = 40LL * (unsigned int)(v21 - 1);
      while ( 1 )
      {
        v24 = *(char **)(*(_QWORD *)(a1 + 248) + v23);
        if ( v24 )
          qdirname(v35, 0x400u, v24);
        else
          qgetcwd(v35, 0x400u);
        v30 = qmakepath(a2, a3, v35, v25, v26, v27, v28, v29, (const char *)a4);
        v13 = v30;
        if ( (v12 & 4) == 0 )
          break;
        if ( (sub_100045CC8() & 1) == 0 )
          goto LABEL_26;
LABEL_27:
        if ( !v13 )
        {
          v23 -= 40;
          if ( v22-- > 0 )
            continue;
        }
        goto LABEL_30;
      }
      if ( qfileexist(v30) )
        goto LABEL_27;
LABEL_26:
      v13 = nullptr;
      goto LABEL_27;
    }
  }
LABEL_30:
  if ( v13 )
    return (char *)v13;
LABEL_31:
  if ( a6 )
  {
    v32 = v35;
    if ( !qdirname(v35, 0x400u, *(char **)(a1 + 280)) )
      v32 = nullptr;
  }
  else
  {
    v32 = nullptr;
  }
  v33 = off_1000A4A60();
  return sub_100045ADC(v33, a2, a3, (const char *)a4, v32, (v12 >> 2) & 1);
}
// 1000426E8: variable 'v15' is possibly undefined
// 1000426E8: variable 'v16' is possibly undefined
// 1000426E8: variable 'v17' is possibly undefined
// 1000426E8: variable 'v18' is possibly undefined
// 1000426E8: variable 'v19' is possibly undefined
// 100042768: variable 'v25' is possibly undefined
// 100042768: variable 'v26' is possibly undefined
// 100042768: variable 'v27' is possibly undefined
// 100042768: variable 'v28' is possibly undefined
// 100042768: variable 'v29' is possibly undefined
// 1000A4A60: using guessed type __int128 *(*off_1000A4A60)();
