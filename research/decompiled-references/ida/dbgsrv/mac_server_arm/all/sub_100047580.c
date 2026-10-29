/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100047580
// Address: 0x0000000100047580

//----- (0000000100047580) ----------------------------------------------------
__int64 __fastcall sub_100047580(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // x9
  unsigned __int64 v4; // x14
  __int64 v5; // x8
  unsigned __int64 v6; // x10
  unsigned __int64 v7; // x24
  unsigned __int64 v8; // x25
  __int64 v9; // x26
  __int64 v10; // x19
  __int64 v11; // x27
  unsigned __int64 v12; // x28
  int v13; // w21
  int v14; // w22
  int v15; // w23
  unsigned __int64 v18; // [xsp+0h] [xbp-60h]
  _QWORD *v19; // [xsp+8h] [xbp-58h]

  v3 = (_QWORD *)(**(_QWORD **)(a1 + 24) + 80LL * a2[1]);
  v4 = v3[1] - a2[2];
  v5 = *(_QWORD *)(a1 + 4240);
  v6 = 4096 - v5;
  if ( v4 >= 4096 - v5 )
    v7 = 4096 - v5;
  else
    v7 = v3[1] - a2[2];
  if ( v3[4] )
    v8 = v3[3] + v4 - v7;
  else
    v8 = 0;
  if ( v7 )
  {
    v18 = v3[1] - a2[2];
    v19 = a2;
    v9 = 0;
    v10 = 0;
    v12 = *v3 + v4 - v7;
    while ( 1 )
    {
      v11 = a1 - v7 + 4144;
      v13 = *(unsigned __int8 *)(v11 + v9);
      v14 = *(unsigned __int8 *)(v12 + v9);
      v15 = *(_DWORD *)(a1 + 32);
      if ( (v15 & 1) == 0 )
      {
        v13 = (unsigned __int8)__toupper(*(unsigned __int8 *)(v11 + v9));
        v14 = (unsigned __int8)__toupper(v14);
      }
      if ( !v8 )
        goto LABEL_9;
      if ( (v15 & 0x20) != 0 )
      {
        if ( (*(unsigned __int8 *)(v8 + v10) & (v13 ^ v14)) != 0 )
          return 0xFFFFFFFFLL;
        goto LABEL_10;
      }
      if ( v8 == 255 )
      {
        if ( v14 != 255 && v13 != v14 )
          return 0xFFFFFFFFLL;
        goto LABEL_10;
      }
      if ( *(_BYTE *)(v8 + v10) )
      {
LABEL_9:
        if ( v13 != v14 )
          return 0xFFFFFFFFLL;
      }
LABEL_10:
      v10 = (int)++v9;
      if ( v7 <= (int)v9 )
      {
        v5 = *(_QWORD *)(a1 + 4240);
        v6 = 4096 - v5;
        v4 = v18;
        a2 = v19;
        break;
      }
    }
  }
  if ( v4 <= v6 )
  {
    **(_QWORD **)(a1 + 8) = *a2;
    return 1;
  }
  else if ( v5 )
  {
    return 0xFFFFFFFFLL;
  }
  else
  {
    a2[2] += 4096LL;
    return 0;
  }
}
