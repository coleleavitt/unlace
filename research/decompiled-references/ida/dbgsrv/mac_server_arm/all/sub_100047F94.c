/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100047F94
// Address: 0x0000000100047F94

//----- (0000000100047F94) ----------------------------------------------------
__int64 __fastcall sub_100047F94(__int64 a1, _QWORD *a2)
{
  __int64 v3; // x9
  _QWORD *v4; // x10
  unsigned __int64 v5; // x8
  unsigned __int64 v6; // x13
  unsigned __int64 v7; // x24
  __int64 v8; // x25
  __int64 v9; // x26
  __int64 v10; // x19
  __int64 v11; // x28
  int v12; // w21
  int v13; // w22
  int v14; // w23
  unsigned __int64 v17; // [xsp+0h] [xbp-60h]
  _QWORD *v18; // [xsp+8h] [xbp-58h]

  v3 = a2[2];
  v4 = (_QWORD *)(**(_QWORD **)(a1 + 24) + 80LL * a2[1]);
  v5 = *(_QWORD *)(a1 + 4240);
  v6 = v4[1] - v3;
  if ( v6 >= v5 )
    v7 = *(_QWORD *)(a1 + 4240);
  else
    v7 = v4[1] - v3;
  if ( v4[4] )
    v8 = v4[3] + v3;
  else
    v8 = 0;
  if ( v7 )
  {
    v17 = v4[1] - v3;
    v18 = a2;
    v9 = 0;
    v10 = 0;
    v11 = *v4 + v3;
    while ( 1 )
    {
      v12 = *(unsigned __int8 *)(a1 + 48 + v9);
      v13 = *(unsigned __int8 *)(v11 + v9);
      v14 = *(_DWORD *)(a1 + 32);
      if ( (v14 & 1) == 0 )
      {
        v12 = (unsigned __int8)__toupper(*(unsigned __int8 *)(a1 + 48 + v9));
        v13 = (unsigned __int8)__toupper(v13);
      }
      if ( !v8 )
        goto LABEL_9;
      if ( (v14 & 0x20) != 0 )
      {
        if ( (*(unsigned __int8 *)(v8 + v10) & (v12 ^ v13)) != 0 )
          return 0xFFFFFFFFLL;
        goto LABEL_10;
      }
      if ( v8 == 255 )
      {
        if ( v13 != 255 && v12 != v13 )
          return 0xFFFFFFFFLL;
        goto LABEL_10;
      }
      if ( *(_BYTE *)(v8 + v10) )
      {
LABEL_9:
        if ( v12 != v13 )
          return 0xFFFFFFFFLL;
      }
LABEL_10:
      v10 = (int)++v9;
      if ( v7 <= (int)v9 )
      {
        v5 = *(_QWORD *)(a1 + 4240);
        v6 = v17;
        a2 = v18;
        break;
      }
    }
  }
  if ( v6 <= v5 )
  {
    **(_QWORD **)(a1 + 8) = *a2;
    return 1;
  }
  else if ( v5 == 4096 )
  {
    a2[2] += 4096LL;
    return 0;
  }
  else
  {
    return 0xFFFFFFFFLL;
  }
}
