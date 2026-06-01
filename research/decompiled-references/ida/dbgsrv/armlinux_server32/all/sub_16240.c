/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_16240
// Address: 0x00016240

//----- (00016240) --------------------------------------------------------
int __fastcall sub_16240(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v6; // r4
  _DWORD *v7; // r3
  int v8; // r1
  int v9; // r0
  int v10; // r2
  int v11; // r3
  int v12; // r10
  int i; // r6
  int v14; // r3
  int v15; // r4
  int v17; // r3

  v6 = a1 + 251;
  sub_5723C();
  v7 = (_DWORD *)a1[252];
  if ( !v7 )
    goto LABEL_11;
  v8 = a1[25];
  v9 = (int)v6;
  do
  {
    v10 = v7[4];
    if ( v10 < v8 )
      v7 = (_DWORD *)v7[3];
    else
      v9 = (int)v7;
    if ( v10 >= v8 )
      v7 = (_DWORD *)v7[2];
  }
  while ( v7 );
  if ( v6 == (_DWORD *)v9
    || (v11 = *(_DWORD *)(v9 + 16), v8 < v11)
    || !*(_BYTE *)(v9 + 45)
    || *(int *)(v9 + 28) > 0
    || *(int *)(v9 + 24) > 0 )
  {
LABEL_11:
    v12 = a1[253];
    for ( i = 0; ; ++i )
    {
      if ( v6 != (_DWORD *)v12 )
      {
        v9 = v12;
        do
        {
          if ( *(int *)(v9 + 28) <= 0 && *(int *)(v9 + 24) <= 0 && *(_BYTE *)(v9 + 45) )
          {
            if ( i )
            {
              if ( i != 1 )
                goto LABEL_29;
              v14 = *(_DWORD *)(v9 + 48);
              if ( (unsigned __int8)v14 == 127 && (unsigned int)BYTE1(v14) - 4 <= 1 )
                goto LABEL_21;
            }
            else if ( *(_BYTE *)(v9 + 36) )
            {
              goto LABEL_21;
            }
          }
          v9 = sub_81440(v9);
        }
        while ( v6 != (_DWORD *)v9 );
      }
      v9 = (int)v6;
LABEL_29:
      if ( i == 2 )
        break;
LABEL_21:
      ;
    }
    if ( v6 == (_DWORD *)v9 )
    {
      v15 = 0;
      goto LABEL_33;
    }
    v11 = *(_DWORD *)(v9 + 16);
  }
  *a2 = v11;
  *a3 = *(_DWORD *)(v9 + 48);
  *(_BYTE *)(v9 + 45) = 0;
  v17 = a1[277] - 1;
  a1[277] = v17;
  if ( v17 < 0 )
  {
    if ( under_debugger )
      __und(0xFFu);
    sub_78C64(30186);
  }
  v15 = 1;
LABEL_33:
  sub_57240();
  return v15;
}
// D6C20: using guessed type char under_debugger;
