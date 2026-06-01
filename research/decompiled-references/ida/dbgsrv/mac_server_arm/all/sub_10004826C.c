/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004826C
// Address: 0x000000010004826C

//----- (000000010004826C) ----------------------------------------------------
__int64 __fastcall sub_10004826C(__int64 a1, __int64 a2)
{
  __int64 v3; // x23
  int *v4; // x10
  __int64 v5; // x20
  __int64 v6; // x21
  _QWORD *v7; // x0
  _QWORD *v8; // x8
  __int64 *v9; // x8
  unsigned __int64 v10; // x28
  __int64 v11; // x26
  __int64 v12; // x20
  __int64 v13; // x27
  __int64 v14; // x24
  int v15; // w21
  int v16; // w22
  int v17; // w25
  __int64 v20; // [xsp+8h] [xbp-88h]
  unsigned __int64 v22; // [xsp+18h] [xbp-78h]
  unsigned __int64 v23; // [xsp+20h] [xbp-70h]
  int *v24; // [xsp+28h] [xbp-68h]

  if ( (*(_QWORD *)(a1 + 4216) & 0x3FFFFFFFFFFFFFFFLL) == 0 )
    return 0;
  v3 = a1 + a2 + 48;
  v23 = *(_QWORD *)(a1 + 4240) - a2;
  v4 = *(int **)(a1 + 4208);
  v20 = a1 + 4152;
  while ( 1 )
  {
    v24 = v4;
    v9 = (__int64 *)(**(_QWORD **)(a1 + 24) + 80LL * *v4);
    v22 = v9[1];
    if ( v23 >= v22 )
      v10 = v9[1];
    else
      v10 = v23;
    if ( v9[4] )
      v11 = v9[3];
    else
      v11 = 0;
    if ( v10 )
    {
      v12 = 0;
      v13 = 0;
      v14 = *v9;
      while ( 1 )
      {
        v15 = *(unsigned __int8 *)(v3 + v12);
        v16 = *(unsigned __int8 *)(v14 + v12);
        v17 = *(_DWORD *)(a1 + 32);
        if ( (v17 & 1) == 0 )
        {
          v15 = (unsigned __int8)__toupper(*(unsigned __int8 *)(v3 + v12));
          v16 = (unsigned __int8)__toupper(v16);
        }
        if ( !v11 )
          break;
        if ( (v17 & 0x20) != 0 )
        {
          if ( (*(unsigned __int8 *)(v11 + v13) & (v15 ^ v16)) != 0 )
            goto LABEL_5;
        }
        else if ( v11 == 255 )
        {
          if ( v16 != 255 && v15 != v16 )
            goto LABEL_5;
        }
        else if ( *(_BYTE *)(v11 + v13) )
        {
          break;
        }
LABEL_15:
        v13 = (int)++v12;
        if ( v10 <= (int)v12 )
          goto LABEL_3;
      }
      if ( v15 != v16 )
        goto LABEL_5;
      goto LABEL_15;
    }
LABEL_3:
    v5 = *(_QWORD *)(a1 + 4144) + a2;
    if ( v22 <= v23 )
      break;
    v6 = *v24;
    v7 = qalloc_or_throw(40);
    v7[2] = v5;
    v7[3] = v6;
    v7[4] = v10;
    *v7 = v20;
    v8 = *(_QWORD **)(a1 + 4160);
    v7[1] = v8;
    *v8 = v7;
    *(_QWORD *)(a1 + 4160) = v7;
    ++*(_QWORD *)(a1 + 4168);
LABEL_5:
    v4 = v24 + 1;
    if ( v24 + 1 == (int *)(*(_QWORD *)(a1 + 4208) + 4LL * *(_QWORD *)(a1 + 4216)) )
      return 0;
  }
  **(_QWORD **)(a1 + 8) = v5;
  return 1;
}
