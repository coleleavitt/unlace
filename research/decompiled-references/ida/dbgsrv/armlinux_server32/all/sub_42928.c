/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42928
// Address: 0x00042928

//----- (00042928) --------------------------------------------------------
int __fastcall sub_42928(_DWORD *a1, int a2)
{
  _DWORD *v4; // r4
  int v5; // r7
  _DWORD *v6; // r6
  const char *v7; // r0
  const char *v8; // r5
  int v9; // r0
  unsigned int v10; // r0
  const char *v11; // r1

  while ( 2 )
  {
    v4 = (_DWORD *)a1[2];
    if ( !v4 )
      goto LABEL_14;
    v5 = *(_DWORD *)(a2 + 4);
    v6 = a1 + 1;
    do
    {
      if ( v4[5] )
      {
        v7 = (const char *)v4[4];
        if ( v5 )
          goto LABEL_4;
      }
      else
      {
        v7 = (const char *)&dword_8DB98;
        if ( v5 )
        {
LABEL_4:
          v8 = *(const char **)a2;
          goto LABEL_5;
        }
      }
      v8 = (const char *)&dword_8DB98;
LABEL_5:
      v9 = strcmp(v7, v8);
      if ( v9 < 0 )
        v4 = (_DWORD *)v4[3];
      else
        v6 = v4;
      if ( v9 >= 0 )
        v4 = (_DWORD *)v4[2];
    }
    while ( v4 );
    if ( a1 + 1 != v6 )
    {
      v11 = v6[5] ? (const char *)v6[4] : (const char *)&dword_8DB98;
      if ( strcmp(v8, v11) >= 0 )
        return v6[7];
    }
LABEL_14:
    v10 = a1[6];
    if ( v10 || a1[7] )
    {
      a1 = (_DWORD *)sub_3F378(v10);
      continue;
    }
    return -1;
  }
}
// 8DB98: using guessed type int dword_8DB98;
