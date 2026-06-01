/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100045370
// Address: 0x0000000100045370

//----- (0000000100045370) ----------------------------------------------------
__int64 __fastcall sub_100045370(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // x0
  _BOOL4 v6; // w8
  int v7; // w8
  __int64 v8; // x24
  char v9; // w8
  _BOOL4 v10; // w9
  int v11; // w9
  __int64 v12; // x24
  char i; // w8
  _BOOL4 v14; // w9
  int v15; // w9
  __int64 j; // x25
  int v17; // w8
  char v18[8]; // [xsp+8h] [xbp-78h] BYREF
  __int64 v19; // [xsp+10h] [xbp-70h]
  char v20[8]; // [xsp+18h] [xbp-68h] BYREF
  __int64 v21; // [xsp+20h] [xbp-60h]
  char v22[8]; // [xsp+28h] [xbp-58h] BYREF
  __int64 v23; // [xsp+30h] [xbp-50h]

  result = sub_100045198(a1, a2, a3);
  while ( 1 )
  {
    v22[0] = 1;
    v23 = 0;
    v7 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 536) + 24LL);
    if ( v7 == 8509 )
    {
      result = sub_100045198(a1, (__int64)v22, 1);
      v6 = *(_QWORD *)(a2 + 8) != v23;
      goto LABEL_3;
    }
    if ( v7 != 15677 )
      break;
    result = sub_100045198(a1, (__int64)v22, 1);
    v6 = *(_QWORD *)(a2 + 8) == v23;
LABEL_3:
    *(_QWORD *)(a2 + 8) = v6;
    *(_BYTE *)a2 = 0;
  }
  if ( v7 != 38 )
    goto LABEL_16;
  while ( 2 )
  {
    v20[0] = 1;
    v21 = 0;
    result = sub_100045198(a1, (__int64)v20, 1);
    v8 = v21;
    v9 = v20[0];
    while ( 2 )
    {
      v22[0] = 1;
      v23 = 0;
      v11 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 536) + 24LL);
      if ( v11 == 8509 )
      {
        result = sub_100045198(a1, (__int64)v22, 1);
        v10 = v8 != v23;
LABEL_12:
        v9 = 0;
        v8 = v10;
        continue;
      }
      break;
    }
    if ( v11 == 15677 )
    {
      result = sub_100045198(a1, (__int64)v22, 1);
      v10 = v8 == v23;
      goto LABEL_12;
    }
    v21 = v8;
    v20[0] = v9;
    *(_QWORD *)(a2 + 8) &= v8;
    v7 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 536) + 24LL);
    if ( v7 == 38 )
      continue;
    break;
  }
LABEL_16:
  if ( v7 == 94 )
  {
LABEL_20:
    v18[0] = 1;
    v19 = 0;
    result = sub_100045198(a1, (__int64)v18, 1);
    v12 = v19;
    for ( i = v18[0]; ; i = 0 )
    {
      v22[0] = 1;
      v23 = 0;
      v15 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 536) + 24LL);
      if ( v15 == 8509 )
      {
        result = sub_100045198(a1, (__int64)v22, 1);
        v14 = v12 != v23;
      }
      else
      {
        if ( v15 != 15677 )
        {
          v19 = v12;
          v18[0] = i;
          if ( v15 == 38 )
          {
            do
            {
              v20[0] = 1;
              v21 = 0;
              result = sub_100045198(a1, (__int64)v20, 1);
              for ( j = v21; ; j = j == v23 )
              {
                while ( 1 )
                {
                  v22[0] = 1;
                  v23 = 0;
                  v17 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 536) + 24LL);
                  if ( v17 != 8509 )
                    break;
                  result = sub_100045198(a1, (__int64)v22, 1);
                  j = j != v23;
                }
                if ( v17 != 15677 )
                  break;
                result = sub_100045198(a1, (__int64)v22, 1);
              }
              v12 &= j;
            }
            while ( v17 == 38 );
            v19 = v12;
          }
          *(_QWORD *)(a2 + 8) ^= v12;
          if ( *(_WORD *)(*(_QWORD *)(a1 + 536) + 24LL) != 94 )
            return result;
          goto LABEL_20;
        }
        result = sub_100045198(a1, (__int64)v22, 1);
        v14 = v12 == v23;
      }
      v12 = v14;
    }
  }
  return result;
}
