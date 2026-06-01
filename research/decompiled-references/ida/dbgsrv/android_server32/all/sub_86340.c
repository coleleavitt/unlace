/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_86340
// Address: 0x00086340

//----- (00086340) --------------------------------------------------------
int __fastcall sub_86340(_DWORD *a1, unsigned int a2, unsigned int a3)
{
  int v4; // r3
  int v6; // kr04_4
  int result; // r0
  unsigned int v8; // r2
  int v9; // r0
  int v10; // r2
  int v11; // r1
  unsigned __int16 *v12; // r3
  int v13; // r5
  unsigned int v14; // r0
  __int16 v15; // r6
  unsigned __int16 *v16; // r2
  unsigned int v17; // r3
  __int16 v18; // r7
  int v19; // r0
  unsigned __int16 *v20; // r0
  int v21; // [sp+0h] [bp-14h]
  int v22; // [sp+4h] [bp-10h]
  _DWORD *v23; // [sp+4h] [bp-10h]
  _DWORD *v24; // [sp+4h] [bp-10h]
  unsigned int *v25; // [sp+8h] [bp-Ch]
  unsigned int v26; // [sp+Ch] [bp-8h]
  unsigned int *v27; // [sp+10h] [bp-4h]

  if ( !a1 )
    return -2;
  if ( !a1[8] )
    return -2;
  if ( !a1[9] )
    return -2;
  v4 = a1[7];
  if ( !v4 || *(_DWORD **)v4 != a1 )
    return -2;
  v6 = *(_DWORD *)(v4 + 4);
  result = -2;
  switch ( v6 )
  {
    case '9':
    case 'E':
    case 'I':
    case '[':
    case 'g':
    case 'q':
      goto LABEL_12;
    case ':':
    case ';':
    case '<':
    case '=':
    case '>':
    case '?':
    case '@':
    case 'A':
    case 'B':
    case 'C':
    case 'D':
    case 'F':
    case 'G':
    case 'H':
    case 'J':
    case 'K':
    case 'L':
    case 'M':
    case 'N':
    case 'O':
    case 'P':
    case 'Q':
    case 'R':
    case 'S':
    case 'T':
    case 'U':
    case 'V':
    case 'W':
    case 'X':
    case 'Y':
    case 'Z':
    case '\\':
    case ']':
    case '^':
    case '_':
    case '`':
    case 'a':
    case 'b':
    case 'c':
    case 'd':
    case 'e':
    case 'f':
    case 'h':
    case 'i':
    case 'j':
    case 'k':
    case 'l':
    case 'm':
    case 'n':
    case 'o':
    case 'p':
      return result;
    default:
      if ( v6 != 666 && v6 != 42 )
        return -2;
LABEL_12:
      v8 = 6;
      if ( a2 != -1 )
        v8 = a2;
      if ( a3 > 4 || v8 > 9 )
        return -2;
      v25 = (unsigned int *)(v4 + 136);
      v27 = (unsigned int *)(v4 + 132);
      v26 = v8;
      if ( *(_DWORD *)(v4 + 136) == a3 )
      {
        v22 = dword_DB2B8[3 * v8 + 2];
        if ( dword_DB2B8[3 * *v27 + 2] == v22 )
          goto LABEL_19;
      }
      if ( *(_DWORD *)(v4 + 40) == -2 )
        goto LABEL_19;
      sub_865F0((int)a1, 5, v8, v4, v21, v4, (int)v25, v8, (int)v27);
      if ( v19 == -2 )
        return -2;
      result = -5;
      if ( !a1[1] )
      {
        v4 = (int)v24;
        v8 = v26;
        if ( !(v24[27] - v24[23] + v24[29]) )
        {
LABEL_19:
          if ( *v27 != v8 )
          {
            if ( !*v27 )
            {
              v9 = *(_DWORD *)(v4 + 5808);
              if ( v9 )
              {
                v23 = (_DWORD *)(v4 + 5808);
                if ( v9 == 1 )
                {
                  v10 = *(_DWORD *)(v4 + 76);
                  v11 = v4;
                  v12 = (unsigned __int16 *)(*(_DWORD *)(v4 + 68) + 2 * v10 - 2);
                  v13 = v11;
                  v14 = *(_DWORD *)(v11 + 44);
                  do
                  {
                    v15 = v14;
                    if ( v14 <= *v12 )
                      v15 = *v12;
                    *v12-- = v15 - v14;
                    --v10;
                  }
                  while ( v10 );
                  v16 = (unsigned __int16 *)(*(_DWORD *)(v11 + 64) + 2 * v14 - 2);
                  v17 = v14;
                  do
                  {
                    v18 = v14;
                    if ( v14 <= *v16 )
                      v18 = *v16;
                    *v16-- = v18 - v14;
                    --v17;
                  }
                  while ( v17 );
                }
                else
                {
                  *(_WORD *)(*(_DWORD *)(v4 + 68) + 2 * *(_DWORD *)(v4 + 76) - 2) = 0;
                  v13 = v4;
                  memset(*(void **)(v4 + 68), 0, 2 * *(_DWORD *)(v4 + 76) - 2);
                }
                *v23 = 0;
                v4 = v13;
                v8 = v26;
              }
            }
            *v27 = v8;
            *(_DWORD *)(v4 + 140) = LOWORD(dword_DB2B8[3 * v8]);
            v20 = (unsigned __int16 *)&dword_DB2B8[3 * v8];
            *(_DWORD *)(v4 + 128) = v20[1];
            *(_DWORD *)(v4 + 144) = v20[2];
            *(_DWORD *)(v4 + 124) = v20[3];
          }
          *v25 = a3;
          result = 0;
        }
      }
      break;
  }
  return result;
}
// 864D8: variable 'v27' is possibly undefined
// 86562: variable 'v21' is possibly undefined
// 86568: variable 'v19' is possibly undefined
// 86578: variable 'v24' is possibly undefined
// 86584: variable 'v26' is possibly undefined
// 865D8: variable 'v25' is possibly undefined
// DB2B8: using guessed type int dword_DB2B8[2];
