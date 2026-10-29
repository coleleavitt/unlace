/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_19A78
// Address: 0x00019A78

//----- (00019A78) --------------------------------------------------------
void __fastcall sub_19A78(_DWORD *a1, char *s2)
{
  _DWORD *v4; // r5
  _DWORD *v5; // r6
  int v6; // r4
  _DWORD *v7; // r3
  unsigned int v8; // r1
  _DWORD *v9; // r9
  unsigned int v10; // r2
  int v11; // r3
  int *v12; // r0
  int *v13; // r0

  v4 = a1 + 239;
  v5 = a1 + 245;
  v6 = a1[241];
  while ( (_DWORD *)v6 != v4 )
  {
    v7 = (_DWORD *)a1[246];
    if ( v7 )
    {
      v8 = *(_DWORD *)(v6 + 16);
      v9 = v5;
      do
      {
        v10 = v7[4];
        if ( v10 < v8 )
          v7 = (_DWORD *)v7[3];
        else
          v9 = v7;
        if ( v10 >= v8 )
          v7 = (_DWORD *)v7[2];
      }
      while ( v7 );
      if ( v5 != v9 && v8 >= v9[4] )
      {
        if ( s2 )
        {
          if ( v9[11] )
          {
            if ( strcmp((const char *)v9[10], s2) )
              goto LABEL_20;
          }
          else if ( strcmp((const char *)&dword_8DB98, s2) )
          {
LABEL_20:
            v6 = sub_81478(v6);
            continue;
          }
        }
        sub_18D74((int)a1, v9 + 5);
      }
    }
    v11 = sub_81478(v6);
    v12 = (int *)v6;
    v6 = v11;
    v13 = sub_81644(v12, v4);
    sub_809EC(v13);
    --a1[243];
  }
}
// 81478: using guessed type int __fastcall sub_81478(_DWORD);
// 8DB98: using guessed type int dword_8DB98;
