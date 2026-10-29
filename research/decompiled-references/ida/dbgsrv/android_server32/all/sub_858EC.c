/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_858EC
// Address: 0x000858EC

//----- (000858EC) --------------------------------------------------------
int __fastcall sub_858EC(_DWORD *a1)
{
  int v2; // r4
  void (__fastcall *v3)(_DWORD, _DWORD); // r3
  _DWORD *v4; // r1
  int v5; // r6
  int result; // r0

  v2 = -2;
  if ( !a1 )
    return v2;
  if ( !a1[8] )
    return v2;
  v3 = (void (__fastcall *)(_DWORD, _DWORD))a1[9];
  if ( !v3 )
    return v2;
  v4 = (_DWORD *)a1[7];
  if ( !v4 || (_DWORD *)*v4 != a1 )
    return v2;
  v5 = v4[1];
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
      return v2;
    default:
      if ( v5 != 666 && v5 != 42 )
        return v2;
      break;
  }
  if ( v4[2] )
  {
    v3(a1[10], v4[2]);
    v4 = (_DWORD *)a1[7];
  }
  if ( v4[17] )
  {
    ((void (__fastcall *)(_DWORD, _DWORD))a1[9])(a1[10], v4[17]);
    v4 = (_DWORD *)a1[7];
  }
  if ( v4[16] )
  {
    ((void (__fastcall *)(_DWORD, _DWORD))a1[9])(a1[10], v4[16]);
    v4 = (_DWORD *)a1[7];
  }
  if ( v4[14] )
  {
    ((void (__fastcall *)(_DWORD, _DWORD))a1[9])(a1[10], v4[14]);
    v4 = (_DWORD *)a1[7];
  }
  ((void (__fastcall *)(_DWORD, _DWORD *))a1[9])(a1[10], v4);
  result = 0;
  a1[7] = 0;
  v2 = -3;
  if ( v5 == 113 )
    return v2;
  return result;
}
