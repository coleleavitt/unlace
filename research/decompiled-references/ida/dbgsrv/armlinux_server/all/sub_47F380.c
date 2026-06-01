/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47F380
// Address: 0x000000000047F380

//----- (000000000047F380) ----------------------------------------------------
_BYTE *__fastcall sub_47F380(_BYTE *a1, unsigned __int8 *a2, __int64 a3)
{
  _BYTE *v3; // x19
  _BYTE *v4; // x20
  _BYTE *v5; // x21
  __int64 v6; // x22
  unsigned __int8 **v7; // x23
  int v9; // w0
  unsigned __int8 *v10; // x0
  unsigned __int8 *v11; // [xsp+38h] [xbp-8h] BYREF

  v11 = a2;
  if ( a3 < 0 )
  {
    if ( !under_debugger )
      sub_492270(1225);
    __break(0x3E8u);
    goto LABEL_14;
  }
  if ( !a2 )
    return nullptr;
  v4 = a1;
  v6 = a3;
  if ( !a3 )
    return v4;
  v11 = a2 + 1;
  v9 = *a2;
  *v4 = v9;
  if ( !v9 )
    return v4;
  v3 = v4 + 1;
  v5 = &v4[a3];
  v7 = &v11;
  while ( 1 )
  {
    if ( v9 == 92 )
      *(v3 - 1) = sub_47F168(v7);
    if ( v5 == v3 )
      break;
LABEL_14:
    v10 = v11++;
    v9 = *v10;
    *v3++ = v9;
    if ( !v9 )
      return v4;
  }
  if ( v6 == v3 - v4 )
  {
    *(v5 - 1) = 0;
    return v4;
  }
  return v4;
}
// 47F468: variable 'v7' is possibly undefined
// 47F3F0: variable 'v5' is possibly undefined
// 47F3F8: variable 'v6' is possibly undefined
// 47F3E8: variable 'v4' is possibly undefined
// 47F444: variable 'v3' is possibly undefined
// 52451C: using guessed type char under_debugger;
