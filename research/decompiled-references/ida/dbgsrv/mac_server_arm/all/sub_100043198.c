/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100043198
// Address: 0x0000000100043198

//----- (0000000100043198) ----------------------------------------------------
__int64 __fastcall sub_100043198(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // x0
  int v6; // w10
  bool v7; // cf
  _BOOL4 v8; // w8
  int v9; // w9
  unsigned int v10; // w8
  unsigned __int64 v11; // x8
  unsigned __int64 v12; // x8
  unsigned __int64 v13; // x8
  unsigned __int64 v14; // x8
  bool v15; // cc
  unsigned __int8 v16[8]; // [xsp+8h] [xbp-48h] BYREF
  unsigned __int64 v17; // [xsp+10h] [xbp-40h]

  result = sub_100042F90(a1, a2, a3);
  while ( 1 )
  {
    v16[0] = 1;
    v17 = 0;
    v10 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 536) + 24LL);
    if ( v10 <= 0x3C3C )
    {
      if ( v10 == 60 )
      {
        result = sub_100042F90(a1, (__int64)v16, 1);
        v13 = *(_QWORD *)(a2 + 8);
        if ( *(_BYTE *)a2 == 1 )
        {
          v8 = v13 < v17;
          goto LABEL_7;
        }
        v6 = v16[0];
        v7 = v13 >= v17;
        v8 = (__int64)v13 < (__int64)v17;
        v9 = !v7;
      }
      else
      {
        if ( v10 != 62 )
          return result;
        result = sub_100042F90(a1, (__int64)v16, 1);
        v11 = *(_QWORD *)(a2 + 8);
        if ( *(_BYTE *)a2 == 1 )
        {
          v8 = v11 > v17;
          goto LABEL_7;
        }
        v6 = v16[0];
        v15 = v11 > v17;
        v8 = (__int64)v11 > (__int64)v17;
        v9 = v15;
      }
      goto LABEL_5;
    }
    if ( v10 != 15421 )
      break;
    result = sub_100042F90(a1, (__int64)v16, 1);
    v14 = *(_QWORD *)(a2 + 8);
    if ( *(_BYTE *)a2 == 1 )
    {
      v8 = v14 <= v17;
      goto LABEL_7;
    }
    v6 = v16[0];
    v15 = v14 > v17;
    v8 = (__int64)v14 <= (__int64)v17;
    v9 = !v15;
LABEL_5:
    if ( v6 == 1 )
      v8 = v9;
LABEL_7:
    *(_QWORD *)(a2 + 8) = v8;
    *(_BYTE *)a2 = 0;
  }
  if ( v10 == 15933 )
  {
    result = sub_100042F90(a1, (__int64)v16, 1);
    v12 = *(_QWORD *)(a2 + 8);
    if ( *(_BYTE *)a2 == 1 )
    {
      v8 = v12 >= v17;
      goto LABEL_7;
    }
    v6 = v16[0];
    v7 = v12 >= v17;
    v8 = (__int64)v12 >= (__int64)v17;
    v9 = v7;
    goto LABEL_5;
  }
  return result;
}
