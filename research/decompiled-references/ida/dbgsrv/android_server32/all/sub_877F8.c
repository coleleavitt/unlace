/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_877F8
// Address: 0x000877F8

//----- (000877F8) --------------------------------------------------------
int __fastcall sub_877F8(_DWORD *a1, unsigned int a2)
{
  unsigned int v2; // r3
  _DWORD *v3; // r5
  int v5; // r0
  int v6; // r0
  int v7; // r6
  _DWORD *v8; // r6
  _BYTE *v9; // r7
  bool v10; // zf
  _BYTE *v11; // r7
  unsigned int v12; // r6
  unsigned int v13; // r7
  int v14; // [sp+0h] [bp-4h]

  v2 = a2 + (a2 >> 3) + (a2 >> 8) + (a2 >> 9) + 4;
  if ( !a1 || !a1[8] || !a1[9] || (v3 = (_DWORD *)a1[7]) == nullptr || (_DWORD *)*v3 != a1 )
  {
LABEL_6:
    if ( v2 <= a2 + 7 + (a2 >> 5) + (a2 >> 7) + (a2 >> 11) )
      v2 = a2 + 7 + (a2 >> 5) + (a2 >> 7) + (a2 >> 11);
    return v2 + 6;
  }
  v5 = v3[1];
  switch ( v5 )
  {
    case '9':
    case 'E':
    case 'I':
    case '[':
    case 'g':
    case 'q':
      break;
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
      goto LABEL_6;
    default:
      if ( v5 != 42 && v5 != 666 )
        goto LABEL_6;
      break;
  }
  v6 = v3[6];
  if ( v6 )
  {
    if ( v6 == 2 )
    {
      v8 = (_DWORD *)v3[7];
      v6 = 18;
      if ( !v8 )
        goto LABEL_30;
      v6 = 18;
      if ( v8[4] )
        v6 = v8[5] + 20;
      v14 = v3[7];
      v9 = (_BYTE *)v8[7];
      if ( v9 )
      {
        do
        {
          ++v6;
          v10 = *v9++ == 0;
        }
        while ( !v10 );
      }
      v11 = *(_BYTE **)(v14 + 36);
      if ( v11 )
      {
        do
        {
          ++v6;
          v10 = *v11++ == 0;
        }
        while ( !v10 );
      }
      v7 = v6 + 2;
      if ( !*(_DWORD *)(v14 + 44) )
        goto LABEL_30;
LABEL_28:
      v6 = v7;
      goto LABEL_30;
    }
    if ( v6 != 1 )
    {
      v6 = 6;
      goto LABEL_30;
    }
    v6 = 6;
    v7 = 10;
    if ( v3[27] )
      goto LABEL_28;
  }
LABEL_30:
  v12 = v3[20];
  v13 = v3[12];
  if ( v13 == 15 && v12 == 15 )
    return a2 + 7 + (a2 >> 12) + (a2 >> 14) + (a2 >> 25) + v6;
  if ( v13 > v12 || !v3[33] )
    v2 = a2 + 7 + (a2 >> 5) + (a2 >> 7) + (a2 >> 11);
  return v2 + v6;
}
