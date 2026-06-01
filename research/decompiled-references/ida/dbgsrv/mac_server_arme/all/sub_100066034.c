/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100066034
// Address: 0x0000000100066034

//----- (0000000100066034) ----------------------------------------------------
__int64 __fastcall sub_100066034(
        _QWORD *a1,
        const char *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v8; // w20
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  unsigned int v17; // w21
  void *v18; // x20
  _DWORD *v19; // x0
  __int64 (__fastcall **v20)(); // x16
  __int64 result; // x0
  char v22; // [xsp+2Bh] [xbp-55h]
  int v23; // [xsp+2Ch] [xbp-54h]
  int v24; // [xsp+30h] [xbp-50h]
  int v25; // [xsp+34h] [xbp-4Ch] BYREF

  v8 = a3;
  if ( (debug & 0x100000) != 0 )
    sub_100012E04();
  if ( (unsigned int)qsscanf(a2, "OpenSSL %d.%d.%d%c", a3, a4, a5, a6, a7, a8, (char)&v25) == 4 )
  {
    v17 = (v24 << 16) | (v25 << 24) | (v23 << 8) | v22;
    if ( v17 >= v8 )
    {
      if ( HIWORD(v17) > 0x100u )
      {
        v18 = operator new(0x218u);
        bzero(v18, 0x218u);
        v19 = v18;
        v20 = &off_10009FE78;
LABEL_15:
        *(_QWORD *)v19 = v20;
        *a1 = v19;
        v19[92] = v17;
        return 1;
      }
LABEL_14:
      v19 = operator new(0x1A8u);
      *(_OWORD *)v19 = 0u;
      *((_OWORD *)v19 + 1) = 0u;
      *((_OWORD *)v19 + 2) = 0u;
      *((_OWORD *)v19 + 3) = 0u;
      *((_OWORD *)v19 + 4) = 0u;
      *((_OWORD *)v19 + 5) = 0u;
      *((_OWORD *)v19 + 6) = 0u;
      *((_OWORD *)v19 + 7) = 0u;
      *((_OWORD *)v19 + 8) = 0u;
      *((_OWORD *)v19 + 9) = 0u;
      *((_OWORD *)v19 + 10) = 0u;
      *((_OWORD *)v19 + 11) = 0u;
      *((_OWORD *)v19 + 12) = 0u;
      *((_OWORD *)v19 + 13) = 0u;
      *((_OWORD *)v19 + 14) = 0u;
      *((_OWORD *)v19 + 15) = 0u;
      *((_OWORD *)v19 + 16) = 0u;
      *((_OWORD *)v19 + 17) = 0u;
      *((_OWORD *)v19 + 18) = 0u;
      *((_OWORD *)v19 + 19) = 0u;
      *((_OWORD *)v19 + 20) = 0u;
      *((_OWORD *)v19 + 21) = 0u;
      *((_OWORD *)v19 + 22) = 0u;
      *((_OWORD *)v19 + 23) = 0u;
      *((_OWORD *)v19 + 24) = 0u;
      *((_OWORD *)v19 + 25) = 0u;
      *((_QWORD *)v19 + 52) = 0;
      v20 = &off_10009FDA8;
      goto LABEL_15;
    }
    return 0;
  }
  if ( (unsigned int)qsscanf(a2, "LibreSSL %d.%d.%d", v11, v12, v13, v14, v15, v16, (char)&v25) != 3 )
    return 0;
  result = 0;
  if ( v25 == 2 && (unsigned int)(v24 - 6) >= 0xFFFFFFFC )
  {
    if ( (debug & 0x100000) != 0 )
      sub_100012E04();
    v17 = 16777575;
    if ( v8 <= 0x1000167 )
      goto LABEL_14;
    return 0;
  }
  return result;
}
// 1000660B4: variable 'a3' is possibly undefined
// 1000660B4: variable 'a4' is possibly undefined
// 1000660B4: variable 'a5' is possibly undefined
// 1000660B4: variable 'a6' is possibly undefined
// 1000660B4: variable 'a7' is possibly undefined
// 1000660B4: variable 'a8' is possibly undefined
// 1000660CC: variable 'v24' is possibly undefined
// 1000660D4: variable 'v23' is possibly undefined
// 1000660C8: variable 'v22' is possibly undefined
// 100066138: variable 'v11' is possibly undefined
// 100066138: variable 'v12' is possibly undefined
// 100066138: variable 'v13' is possibly undefined
// 100066138: variable 'v14' is possibly undefined
// 100066138: variable 'v15' is possibly undefined
// 100066138: variable 'v16' is possibly undefined
// 10009FDA8: using guessed type __int64 (__fastcall *off_10009FDA8)();
// 10009FE78: using guessed type __int64 (__fastcall *off_10009FE78)();
// 1000A5908: using guessed type int debug;
