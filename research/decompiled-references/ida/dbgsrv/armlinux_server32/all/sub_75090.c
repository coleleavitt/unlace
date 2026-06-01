/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_75090
// Address: 0x00075090

//----- (00075090) --------------------------------------------------------
_BYTE *__fastcall sub_75090(int a1, int a2, int a3, int a4, _BYTE *a5, int a6)
{
  __int64 v6; // r6
  bool v7; // zf
  __int64 v9; // r8
  _BYTE *v10; // r10
  bool v11; // zf
  int v12; // r7
  __int64 v14; // r0
  int v15; // r0

  if ( a6 > 0 )
  {
    LODWORD(v6) = a3;
    v7 = a4 == -1;
    if ( a4 == -1 )
      v7 = a3 == -1;
    HIDWORD(v6) = a4;
    if ( v7 )
    {
      v9 = 0;
    }
    else
    {
      LODWORD(v14) = sub_74D98(a1, 0, 1);
      v9 = v14;
      sub_74D98(a1, v6, 0);
    }
    v10 = a5;
    while ( v10 != &a5[a6 - 1] )
    {
      v15 = sub_74F94(a1);
      if ( v15 == -1 )
        break;
      *v10++ = v15;
      if ( !v15 )
        goto LABEL_10;
    }
    *v10 = 0;
LABEL_10:
    v12 = HIDWORD(v6) + 1;
    v11 = v12 == 0;
    if ( !v12 )
      v11 = (_DWORD)v6 == -1;
    if ( !v11 )
      sub_74D98(a1, v9, 0);
  }
  return a5;
}
// 750F8: variable 'v14' is possibly undefined
