/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qmakefile
// Address: 0x000AE520

//----- (000AE520) --------------------------------------------------------
char *__cdecl qmakefile(char *s, int a2, char *a3, _BYTE *a4)
{
  char *v4; // esi
  char *v5; // eax
  char *v6; // edx
  bool v7; // zf
  char *v8; // eax
  int v9; // edx
  char v10; // cl
  _BYTE *v11; // ecx
  char *v12; // edx
  char *v13; // esi
  int v14; // edx
  char v15; // bl
  char *v17; // [esp+4h] [ebp-18h]
  char *v18; // [esp+8h] [ebp-14h]

  if ( a2 < 0 )
  {
    if ( !(_BYTE)under_debugger )
      interr(1225);
    goto LABEL_35;
  }
  if ( s )
  {
    v4 = a3;
    if ( a3 )
    {
      v5 = &s[a2];
      v17 = &s[a2];
      if ( s == a3 )
      {
        v8 = &s[strlen(s)];
      }
      else
      {
        if ( v5 <= s )
          goto LABEL_31;
        v6 = v5 - 1;
        v7 = v5 - 1 == s;
        v8 = s;
        if ( v7 )
        {
LABEL_11:
          *v8 = 0;
        }
        else
        {
          v18 = v6;
          v9 = a2 - 1;
          v8 = s;
          while ( 1 )
          {
            v10 = *v4;
            *v8 = *v4;
            if ( !v10 )
              break;
            ++v4;
            ++v8;
            if ( !--v9 )
            {
              v8 = v18;
              goto LABEL_11;
            }
          }
        }
      }
      if ( a4 )
      {
        v11 = a4 + 1;
        if ( *a4 != 46 )
          v11 = a4;
        if ( *(v8 - 1) == 46 )
        {
          v12 = &s[a2];
          if ( v8 >= v17 )
          {
LABEL_31:
            if ( !(_BYTE)under_debugger )
              interr(520);
            goto LABEL_35;
          }
          goto LABEL_23;
        }
        v12 = &s[a2];
        if ( v8 < v17 )
        {
          *v8++ = 46;
          if ( v8 >= v17 )
          {
            v8 = v17 - 1;
            *(v17 - 1) = 0;
          }
          if ( v8 >= v17 )
            goto LABEL_31;
LABEL_23:
          v13 = v12 - 1;
          if ( v8 == v12 - 1 )
          {
LABEL_27:
            *v13 = 0;
          }
          else
          {
            v14 = 0;
            while ( 1 )
            {
              v15 = v11[v14];
              v8[v14] = v15;
              if ( !v15 )
                break;
              if ( &s[a2 - 1 - (_DWORD)v8] == (char *)++v14 )
                goto LABEL_27;
            }
          }
          return s;
        }
        if ( !(_BYTE)under_debugger )
          interr(518);
LABEL_35:
        BUG();
      }
    }
  }
  return s;
}
// 13E34C: using guessed type int under_debugger;
