/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: unpack_xleb128
// Address: 0x000000010006DDC0

//----- (000000010006DDC0) ----------------------------------------------------
__int64 __fastcall unpack_xleb128(__int64 *a1, int a2, unsigned __int8 a3, unsigned __int8 **a4, unsigned __int64 a5)
{
  __int64 v5; // x9
  unsigned __int8 *v6; // x8
  int v7; // w10
  int v8; // w12
  unsigned int v9; // w14
  __int64 v10; // x15
  int v11; // w16
  bool v12; // cc
  __int64 v14; // x10
  __int64 v15; // x9
  __int64 v16; // x0
  _QWORD *v17; // x1
  char *v18; // x2

  v5 = 0;
  v6 = *a4;
  v7 = 7;
  v8 = a2;
  while ( 1 )
  {
    if ( (unsigned __int64)v6 >= a5 )
      return 0;
    v9 = *v6;
    v10 = v9 & 0x7F;
    if ( v8 <= 6 )
    {
      v11 = 255 << v8;
      if ( (a3 & ((v9 & 0x80u) == 0)) != 0 )
        v11 = (255 << v8) & 0x3F;
      if ( (v11 & (unsigned int)v10) != 0 )
        return 0;
    }
    v5 |= v10 << ((unsigned __int8)v7 - 7);
    if ( (v9 & 0x80) == 0 )
      break;
    v8 -= 7;
    ++v6;
    v12 = v7 < a2;
    v7 += 7;
    if ( !v12 )
      return 0;
  }
  if ( !a1 )
    goto LABEL_19;
  v14 = -1LL << v7;
  if ( (a3 & (v9 > 0x3F)) == 0 )
    v14 = 0;
  v15 = v5 | v14;
  switch ( a2 )
  {
    case 64:
      *a1 = v15;
      goto LABEL_19;
    case 32:
      *(_DWORD *)a1 = v15;
      goto LABEL_19;
    case 16:
      *(_WORD *)a1 = v15;
LABEL_19:
      *a4 = v6 + 1;
      return 1;
  }
  if ( under_debugger == 1 )
    __break(1u);
  interr(1187);
  return sub_10006DED0(v16, v17, v18);
}
// 10006DECD: variable 'v16' is possibly undefined
// 10006DECD: variable 'v17' is possibly undefined
// 10006DECD: variable 'v18' is possibly undefined
// 10009D90D: using guessed type char under_debugger;
