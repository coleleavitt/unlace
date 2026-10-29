/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40EEB8
// Address: 0x000000000040EEB8

//----- (000000000040EEB8) ----------------------------------------------------
__int64 __fastcall sub_40EEB8(_QWORD *a1, int a2, char *s2)
{
  __int64 v6; // x19
  __int64 v7; // x21
  __int64 v8; // x22
  _QWORD *v9; // x25
  const char *v12; // x0
  __int64 v14; // t1
  __int64 v15[4]; // [xsp+58h] [xbp-48h] BYREF
  __int64 v16; // [xsp+78h] [xbp-28h] BYREF
  __int64 v17; // [xsp+80h] [xbp-20h]
  __int64 v18; // [xsp+88h] [xbp-18h]
  _QWORD *v19; // [xsp+90h] [xbp-10h]

  v6 = a1[17];
  v7 = a1[21];
  v8 = a1[19];
  v9 = (_QWORD *)a1[20];
  while ( v6 != v7 )
  {
    if ( a2 == (*(_DWORD *)(v6 + 20) & 0xFFFFFFF) )
    {
      if ( a2 != 1 && a2 != 11 && a2 != 8 )
      {
        if ( !under_debugger )
          sub_492270(3295);
        __break(0x3E8u);
        return 0;
      }
      v12 = (const char *)&qword_4B2D48;
      if ( *(_QWORD *)(v6 + 32) )
        v12 = *(const char **)(v6 + 24);
      if ( !strcmp(v12, s2) )
      {
        v16 = v6;
        v17 = *v9;
        v18 = v17 + 504;
        v19 = v9;
        sub_40E7D0(a1 + 15, &v16, v15);
        return 1;
      }
    }
    v6 += 72;
    if ( v8 == v6 )
    {
      v14 = v9[1];
      ++v9;
      v6 = v14;
      v8 = v14 + 504;
    }
  }
  return 0;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 52451C: using guessed type char under_debugger;
