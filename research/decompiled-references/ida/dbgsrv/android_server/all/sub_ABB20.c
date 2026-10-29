/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_ABB20
// Address: 0x00000000000ABB20

//----- (00000000000ABB20) ----------------------------------------------------
__int64 __fastcall sub_ABB20(pthread_mutex_t *a1)
{
  unsigned int v1; // w12
  int v2; // w8
  int v3; // w9
  __int64 v4; // x12
  unsigned int v5; // w13
  __int64 v6; // x14
  int *v7; // x15
  unsigned int v8; // w16
  unsigned int v9; // w8

  if ( (unsigned int)a1 <= 0x7F )
    return (unsigned int)dword_108194[(unsigned int)a1];
  if ( (unsigned int)a1 >= 0x110000 )
    return 0;
  v2 = 0;
  v3 = 3200;
  while ( v3 <= 3200 )
  {
    v4 = (__int64)(v2 + v3 + (v2 + v3 < 0)) >> 1;
    if ( (unsigned int)((v2 + v3) / 2) < 0xC80 )
    {
      v7 = &dword_10F6DC[3 * v4];
      v5 = *v7;
      v6 = v4 + 1;
      v8 = 1114112;
      if ( (unsigned int)((v2 + v3) / 2 + 1) <= 0xC7F )
        v8 = dword_10F6DC[3 * v6];
      if ( v8 <= (unsigned int)a1 )
        v7 = nullptr;
      if ( v5 <= (unsigned int)a1 && v7 )
      {
        v9 = v7[1];
        if ( !v7[2] )
          v9 = v9 + (_DWORD)a1 - *v7;
        if ( v9 >> 1 < 0xEA9 )
          return (unsigned int)dword_108194[v9];
        goto LABEL_28;
      }
    }
    else
    {
      v5 = dword_10F6DC[3 * v4];
      LODWORD(v6) = (v2 + v3) / 2 + 1;
    }
    if ( v5 < (unsigned int)a1 )
      v2 = v6;
    else
      v3 = (v2 + v3) / 2 - 1;
    v1 = 0;
    if ( v2 > v3 || v2 >= 3200 )
      return v1;
  }
  if ( under_debugger )
    goto LABEL_30;
  a1 = interr(1520);
LABEL_28:
  if ( !under_debugger )
    a1 = interr(1519);
LABEL_30:
  __break(1u);
  return is_cp_graphical(a1);
}
// 108194: using guessed type int dword_108194[];
// 10F6DC: using guessed type int dword_10F6DC[];
// 168DF0: using guessed type char under_debugger;
