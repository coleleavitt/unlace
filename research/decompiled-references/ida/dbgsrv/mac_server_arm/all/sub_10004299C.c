/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004299C
// Address: 0x000000010004299C

//----- (000000010004299C) ----------------------------------------------------
__int64 __fastcall sub_10004299C(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // x0
  _BOOL8 v6; // x22
  char i; // w8
  int v8; // w9
  __int64 *v9; // x8
  __int64 v10; // x8
  char *v11; // x9
  char v12[8]; // [xsp+8h] [xbp-68h] BYREF
  __int64 v13; // [xsp+10h] [xbp-60h] BYREF
  char v14[8]; // [xsp+18h] [xbp-58h] BYREF
  _BOOL8 v15; // [xsp+20h] [xbp-50h]
  char v16[8]; // [xsp+28h] [xbp-48h] BYREF
  __int64 v17; // [xsp+30h] [xbp-40h] BYREF

  v14[0] = 1;
  v15 = 0;
  result = sub_100043684(a1, (__int64)v14, a3);
  v6 = v15;
  for ( i = v14[0]; ; i = 0 )
  {
    v8 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 536) + 24LL);
    if ( v8 != 31868 )
      break;
    v16[0] = 1;
    v17 = 0;
    result = sub_100043684(a1, (__int64)v16, 1);
    v6 = (v6 | v17) != 0;
  }
  if ( v8 == 63 )
  {
    v15 = v6;
    v14[0] = i;
    v16[0] = 1;
    v17 = 0;
    sub_10004299C(a1, v16, 1);
    if ( *(_WORD *)(*(_QWORD *)(a1 + 536) + 24LL) != 58 )
      sub_100042860(a1);
    v12[0] = 1;
    v13 = 0;
    result = sub_10004299C(a1, v12, 1);
    if ( v15 )
      v9 = &v17;
    else
      v9 = &v13;
    v10 = *v9;
    if ( v15 )
      v11 = v16;
    else
      v11 = v12;
    *(_BYTE *)a2 = *v11;
    *(_QWORD *)(a2 + 8) = v10;
  }
  else
  {
    v15 = v6;
    v14[0] = i;
    *(_BYTE *)a2 = i;
    *(_QWORD *)(a2 + 8) = v6;
  }
  return result;
}
