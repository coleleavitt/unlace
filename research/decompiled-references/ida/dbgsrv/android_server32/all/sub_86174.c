/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_86174
// Address: 0x00086174

//----- (00086174) --------------------------------------------------------
int __fastcall sub_86174(_DWORD *a1, unsigned int a2, int a3)
{
  int v3; // r6
  _DWORD *v5; // r2
  int v6; // kr04_4
  int result; // r0
  int *v8; // r7
  int v9; // r0
  int v10; // r5
  int v11; // [sp+10h] [bp-4h]

  v3 = a2;
  if ( !a1 )
    return -2;
  if ( !a1[8] )
    return -2;
  if ( !a1[9] )
    return -2;
  v5 = (_DWORD *)a1[7];
  if ( !v5 || (_DWORD *)*v5 != a1 )
    return -2;
  v11 = a1[7];
  v6 = v5[1];
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
      result = -5;
      if ( a2 <= 0x10 && *(_DWORD *)(v11 + 5784) >= (unsigned int)(*(_DWORD *)(v11 + 16) + 2) )
      {
        v8 = (int *)(v11 + 5820);
        do
        {
          v9 = *v8;
          v10 = v3;
          if ( 16 - *v8 <= v3 )
            v10 = 16 - *v8;
          *(_WORD *)(v11 + 5816) |= (a3 & ~(-1 << v10)) << v9;
          v8 = (int *)(v11 + 5820);
          *(_DWORD *)(v11 + 5820) = v10 + v9;
          sub_8B2BC(v11);
          v3 -= v10;
          a3 >>= v10;
          result = 0;
        }
        while ( v3 );
      }
      break;
  }
  return result;
}
