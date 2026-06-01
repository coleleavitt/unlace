/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7E804
// Address: 0x0007E804

//----- (0007E804) --------------------------------------------------------
const char *__fastcall sub_7E804(const char *a1, _BYTE *a2, int a3)
{
  const char *v5; // r6
  _BYTE *v6; // r4
  _BYTE *v7; // r2
  int v8; // r1
  _BYTE *v9; // r5
  int v10; // r11
  const char *v11; // r6
  _BYTE *v12; // r2
  int v13; // t1

  if ( a3 < 0 )
  {
    if ( !under_debugger )
      sub_78C64(1225);
    goto LABEL_13;
  }
  v5 = a1;
  if ( strchr(a1, 37) )
  {
    v6 = &a2[a3];
    v7 = a2;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v8 = *(unsigned __int8 *)v5;
            if ( v6 <= v7 )
            {
LABEL_12:
              if ( !under_debugger )
                sub_78C64(518);
              goto LABEL_13;
            }
            v9 = v7 + 1;
            *v7 = v8;
            if ( v6 <= v7 + 1 )
            {
              v9 = v6 - 1;
              *(v6 - 1) = 0;
            }
            if ( !v8 )
              return a2;
            if ( v8 == 37 )
              break;
            v7 = v9;
            ++v5;
          }
          v10 = *((unsigned __int8 *)v5 + 1);
          if ( v10 != 37 )
            break;
          v5 += 2;
          if ( v6 <= v9 )
            goto LABEL_12;
          v7 = v9 + 1;
          *v9 = 37;
          if ( v6 <= v9 + 1 )
          {
            v7 = v6 - 1;
            *(v6 - 1) = 0;
          }
        }
        v11 = v5 + 1;
        while ( strchr("+-0123456789*#.", v10) )
        {
          if ( v6 <= v9 )
            goto LABEL_12;
          v12 = v9 + 1;
          *v9 = v10;
          if ( v6 <= v9 + 1 )
          {
            v12 = v6 - 1;
            *(v6 - 1) = 0;
          }
          v13 = *(unsigned __int8 *)++v11;
          v10 = v13;
          v9 = v12;
        }
        if ( v10 == 97 )
          break;
        v5 = v11 + 1;
        if ( v6 <= v9 )
          goto LABEL_12;
        v7 = v9 + 1;
        *v9 = v10;
        if ( v6 <= v9 + 1 )
        {
          *(v6 - 1) = 0;
          v7 = v6 - 1;
        }
      }
      if ( v6 <= v9 )
        break;
      v7 = v9 + 1;
      *v9 = 88;
      if ( v6 <= v9 + 1 )
      {
        v7 = v6 - 1;
        *(v6 - 1) = 0;
      }
      v5 = v11 + 1;
    }
    if ( !under_debugger )
      sub_78C64(520);
LABEL_13:
    __und(0xFFu);
  }
  return v5;
}
// D6C20: using guessed type char under_debugger;
