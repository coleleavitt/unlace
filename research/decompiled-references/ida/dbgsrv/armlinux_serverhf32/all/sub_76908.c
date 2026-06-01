/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_76908
// Address: 0x00076908

//----- (00076908) --------------------------------------------------------
char *__fastcall sub_76908(char *s, int a2, unsigned __int8 *a3, int a4)
{
  char *v4; // r4
  char *v5; // r10
  char v6; // r7
  char *v7; // r5
  int v8; // r6
  int v9; // r2
  bool v10; // zf
  char *v11; // r1
  int v12; // r2
  bool v13; // zf
  unsigned __int8 *v14; // t1
  int v15; // r1
  bool v16; // zf
  int v17; // r1
  int v18; // t1
  bool v19; // zf

  if ( a2 < 0 )
  {
    if ( !under_debugger )
      sub_78AFC(1225);
    goto LABEL_43;
  }
  v4 = s;
  if ( s )
  {
    v5 = &s[a2];
    if ( !a3 )
      goto LABEL_36;
    v6 = 0;
    v7 = s;
    v8 = a4 - 4;
    while ( 1 )
    {
      if ( a3 != (unsigned __int8 *)v7 )
        sub_703EC((unsigned __int8 *)v7, a3, v5 - v7);
      s = &v7[strlen(v7)];
      if ( v4 < s )
      {
        v9 = (unsigned __int8)*(s - 1);
        v10 = v9 == 92;
        if ( v9 != 92 )
          v10 = v9 == 47;
        if ( v10 )
        {
          v11 = s - 1;
          do
          {
            s = v11;
            if ( v11 == v4 )
              break;
            v12 = (unsigned __int8)*--v11;
            v13 = v12 == 92;
            if ( v12 != 92 )
              v13 = v12 == 47;
          }
          while ( v13 );
          v6 = 1;
        }
      }
      v14 = *(unsigned __int8 **)(v8 + 4);
      v8 += 4;
      a3 = v14;
      if ( !v14 )
        break;
      v15 = *a3;
      v16 = v15 == 92;
      if ( v15 != 92 )
        v16 = v15 == 47;
      if ( v16 )
      {
        do
        {
          v18 = *++a3;
          v17 = v18;
          v19 = v18 == 92;
          if ( v18 != 92 )
            v19 = v17 == 47;
        }
        while ( v19 );
      }
      if ( v5 <= s )
        goto LABEL_45;
      v7 = s + 1;
      *s = 47;
      if ( v5 <= s + 1 )
      {
        v7 = v5 - 1;
        *(v5 - 1) = 0;
      }
      if ( !a3 )
      {
        s = v7;
        break;
      }
    }
    if ( v4 != s || !(v6 & 1) )
      goto LABEL_36;
    if ( v5 > s )
    {
      *s = 47;
      if ( v5 > s + 1 )
      {
        ++s;
LABEL_40:
        *s = 0;
        return v4;
      }
      s = v5 - 1;
      *(v5 - 1) = 0;
LABEL_36:
      if ( v5 <= s )
      {
        if ( !under_debugger )
          sub_78AFC(519);
        goto LABEL_43;
      }
      goto LABEL_40;
    }
LABEL_45:
    if ( !under_debugger )
      sub_78AFC(518);
LABEL_43:
    __und(0xFFu);
  }
  return v4;
}
// D5C00: using guessed type char under_debugger;
