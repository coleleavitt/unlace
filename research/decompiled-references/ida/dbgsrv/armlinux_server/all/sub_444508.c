/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_444508
// Address: 0x0000000000444508

//----- (0000000000444508) ----------------------------------------------------
__int64 __fastcall sub_444508(__int64 a1, __int64 a2)
{
  _QWORD *v4; // x19
  __int64 v5; // x23
  _QWORD *v6; // x22
  const char *v7; // x0
  const char *v8; // x20
  const char *v9; // x1

  while ( 1 )
  {
    v4 = *(_QWORD **)(a1 + 16);
    if ( v4 )
    {
      v5 = *(_QWORD *)(a2 + 8);
      v6 = (_QWORD *)(a1 + 8);
      do
      {
        while ( 1 )
        {
          v7 = (const char *)&qword_4B2D48;
          v8 = (const char *)&qword_4B2D48;
          if ( v4[5] )
            v7 = (const char *)v4[4];
          if ( v5 )
            v8 = *(const char **)a2;
          if ( strcmp(v7, v8) < 0 )
            break;
          v6 = v4;
          v4 = (_QWORD *)v4[2];
          if ( !v4 )
            goto LABEL_9;
        }
        v4 = (_QWORD *)v4[3];
      }
      while ( v4 );
LABEL_9:
      if ( (_QWORD *)(a1 + 8) != v6 )
      {
        v9 = (const char *)&qword_4B2D48;
        if ( v6[5] )
          v9 = (const char *)v6[4];
        if ( (strcmp(v8, v9) & 0x80000000) == 0 )
          return *((unsigned int *)v6 + 14);
      }
    }
    if ( !*(_QWORD *)(a1 + 48) )
      return 0xFFFFFFFFLL;
    a1 = sub_43E578(*(int *)(a1 + 48));
  }
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
