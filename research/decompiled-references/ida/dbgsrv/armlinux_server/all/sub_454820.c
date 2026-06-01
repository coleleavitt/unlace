/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_454820
// Address: 0x0000000000454820

//----- (0000000000454820) ----------------------------------------------------
__int64 __fastcall sub_454820(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  __int64 v9; // x5
  int v10; // w6
  int v11; // w7
  __int64 v13; // x0
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x5
  int v18; // w6
  int v19; // w7
  char *v20; // x2
  int v21; // w6
  int v22; // w7
  int v23; // w0
  int v24; // w6
  int v25; // w7
  int v26; // w6
  int v27; // w7
  char *v28; // x0
  int v29; // w6
  int v30; // w7
  unsigned __int8 *v31; // x1
  unsigned __int8 *v32; // x2
  int v33; // t1
  float *v34; // x0
  char v35; // [xsp+0h] [xbp-60h]
  char v36; // [xsp+0h] [xbp-60h]
  char v37; // [xsp+0h] [xbp-60h]
  char v38; // [xsp+0h] [xbp-60h]
  char s[8]; // [xsp+38h] [xbp-28h] BYREF
  __int64 v40; // [xsp+40h] [xbp-20h]
  __int64 v41; // [xsp+48h] [xbp-18h]
  __int64 v42; // [xsp+50h] [xbp-10h]

  sub_452D88(a1);
  if ( a2 )
  {
    *(_QWORD *)(a1 + 696) = a2;
    *(_BYTE *)(a1 + 760) = 1;
    return 0;
  }
  v13 = *(_QWORD *)(a1 + 696);
  *(_BYTE *)(a1 + 760) = 0;
  if ( !v13 )
  {
    v34 = (float *)sub_49E050(0x38u);
    v6 = (__int64)(v34 + 12);
    *(_QWORD *)(a1 + 696) = v34;
    *(_QWORD *)v34 = v34 + 12;
    *((_QWORD *)v34 + 1) = 1;
    *((_QWORD *)v34 + 2) = 0;
    *((_QWORD *)v34 + 3) = 0;
    v34[8] = 1.0;
    *((_QWORD *)v34 + 5) = 0;
    *((_QWORD *)v34 + 6) = 0;
  }
  if ( !(unsigned __int8)sub_4547C0(a1, &off_51A5E0, v6, v7, v8, v9, v10, v11) )
    return sub_4869A0();
  if ( !byte_522469 && (a3 & 1) == 0 )
    return 0;
  if ( !(unsigned __int8)sub_4547C0(a1, &off_51AAD0, v14, v15, v16, v17, v18, v19) )
    return sub_4869A0();
  if ( !byte_522469 )
    return 0;
  v23 = dword_520248;
  if ( dword_520248 == -1 )
  {
    dword_520248 = (unsigned __int8)callui(53, (int)callui, v20);
    callui(52, (int)&qword_522290, (char *)0x20);
    v23 = dword_520248;
  }
  if ( v23 )
  {
    sub_454558(a1, "__QT__", "1", 0, 0, nullptr, v21, v22, v35);
    sub_454558(a1, "__GUI__", "1", 0, 0, nullptr, v24, v25, v36);
  }
  else
  {
    sub_454558(a1, "__TXT__", "1", 0, 0, nullptr, v21, v22, v35);
  }
  sub_454558(a1, "__IDA_VERSION__", (const char *)&qword_522290, 0, 0, nullptr, v26, v27, v37);
  *(_QWORD *)s = qword_522290;
  v40 = qword_522298;
  v41 = qword_5222A0;
  v42 = qword_5222A8;
  v28 = strchr(s, 46);
  v31 = (unsigned __int8 *)(v28 + 1);
  if ( v28 )
  {
    do
    {
      v32 = v31 - 1;
      v33 = *v31++;
      *(v31 - 2) = v33;
    }
    while ( v33 );
    if ( (unsigned __int64)&v31[~(unsigned __int64)(v28 + 1)] <= 1 )
      *(_WORD *)v32 = 48;
  }
  sub_454558(a1, "__IDAVER__", s, 0, 0, nullptr, v29, v30, v38);
  return 0;
}
// 4548A0: variable 'v6' is possibly undefined
// 4548A0: variable 'v7' is possibly undefined
// 4548A0: variable 'v8' is possibly undefined
// 4548A0: variable 'v9' is possibly undefined
// 4548A0: variable 'v10' is possibly undefined
// 4548A0: variable 'v11' is possibly undefined
// 4548CC: variable 'v14' is possibly undefined
// 4548CC: variable 'v15' is possibly undefined
// 4548CC: variable 'v16' is possibly undefined
// 4548CC: variable 'v17' is possibly undefined
// 4548CC: variable 'v18' is possibly undefined
// 4548CC: variable 'v19' is possibly undefined
// 45490C: variable 'v20' is possibly undefined
// 454958: variable 'v21' is possibly undefined
// 454958: variable 'v22' is possibly undefined
// 454958: variable 'v35' is possibly undefined
// 454978: variable 'v24' is possibly undefined
// 454978: variable 'v25' is possibly undefined
// 454978: variable 'v36' is possibly undefined
// 45499C: variable 'v26' is possibly undefined
// 45499C: variable 'v27' is possibly undefined
// 45499C: variable 'v37' is possibly undefined
// 454A0C: variable 'v29' is possibly undefined
// 454A0C: variable 'v30' is possibly undefined
// 454A0C: variable 'v38' is possibly undefined
// 51A5E0: using guessed type char *off_51A5E0;
// 51AAD0: using guessed type char *off_51AAD0;
// 520248: using guessed type int dword_520248;
// 522018: using guessed type __int64 (__fastcall *callui)(int, int, char *s1);
// 522290: using guessed type __int64 qword_522290;
// 522298: using guessed type __int64;
// 5222A0: using guessed type __int64 qword_5222A0;
// 5222A8: using guessed type __int64 qword_5222A8;
// 522469: using guessed type char byte_522469;
