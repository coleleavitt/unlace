/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_350C4
// Address: 0x000350C4

//----- (000350C4) --------------------------------------------------------
_DWORD *__fastcall sub_350C4(_DWORD *a1, int a2, unsigned __int16 **a3)
{
  _DWORD *v6; // r8
  _DWORD *v7; // r0
  __int64 v8; // r2
  _DWORD *v9; // r5
  char *v10; // r11
  unsigned int v11; // r9
  unsigned int v12; // r3
  int v13; // r4
  int v14; // r0
  _BOOL4 v15; // r0
  int v17; // r0
  int v18[2]; // [sp+4h] [bp-10h] BYREF

  v6 = a1 + 1;
  v7 = sub_805CC(0x1Cu);
  HIDWORD(v8) = 0;
  v9 = v7;
  v10 = (char *)(v7 + 4);
  v11 = **a3;
  v7[5] = 0;
  v7[6] = 0;
  *((_WORD *)v7 + 8) = v11;
  if ( v6 == (_DWORD *)a2 )
  {
    if ( a1[5] )
    {
      LODWORD(v8) = a1[4];
      if ( *(unsigned __int16 *)(v8 + 16) < v11 )
      {
        v13 = 0;
        goto LABEL_9;
      }
    }
    goto LABEL_23;
  }
  v12 = *(unsigned __int16 *)(a2 + 16);
  v13 = a2;
  if ( v11 < v12 )
  {
    if ( a1[3] == a2 )
    {
      LODWORD(v8) = a2;
      goto LABEL_9;
    }
    v14 = sub_812CC(a2);
    HIDWORD(v8) = *(unsigned __int16 *)(v14 + 16);
    LODWORD(v8) = v14;
    if ( HIDWORD(v8) < v11 )
    {
      if ( *(_DWORD *)(v14 + 12) )
        LODWORD(v8) = a2;
      else
        v13 = 0;
LABEL_9:
      if ( (_DWORD)v8 )
        goto LABEL_10;
      goto LABEL_19;
    }
LABEL_23:
    LODWORD(v8) = v10;
    sub_35060(v18, (int)a1, v8);
    v13 = v18[0];
    LODWORD(v8) = v18[1];
    goto LABEL_9;
  }
  if ( v11 <= v12 )
    goto LABEL_19;
  if ( a1[4] == a2 )
    goto LABEL_24;
  v17 = sub_81290(a2);
  HIDWORD(v8) = *(unsigned __int16 *)(v17 + 16);
  LODWORD(v8) = v17;
  if ( HIDWORD(v8) <= v11 )
    goto LABEL_23;
  if ( !*(_DWORD *)(a2 + 12) )
  {
LABEL_24:
    LODWORD(v8) = a2;
    if ( a2 )
    {
LABEL_25:
      v15 = *(unsigned __int16 *)(v8 + 16) > v11;
LABEL_13:
      sub_8132C((_DWORD *)v15, v9, (_DWORD *)v8, a1 + 1);
      ++a1[5];
      return v9;
    }
    goto LABEL_19;
  }
  v13 = v17;
  if ( v17 )
  {
LABEL_10:
    v15 = v6 == (_DWORD *)v8;
    if ( v13 )
      v15 = 1;
    if ( v15 )
      goto LABEL_13;
    goto LABEL_25;
  }
LABEL_19:
  sub_80648(v9);
  return (_DWORD *)v13;
}
// 812CC: using guessed type int __fastcall sub_812CC(_DWORD);
