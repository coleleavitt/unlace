/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_86030
// Address: 0x00086030

//----- (00086030) --------------------------------------------------------
int __fastcall sub_86030(_DWORD *a1, int a2)
{
  int result; // r0
  _DWORD *v4; // r3
  int v5; // r2

  result = -2;
  if ( a1 )
  {
    if ( a1[8] )
    {
      if ( a1[9] )
      {
        v4 = (_DWORD *)a1[7];
        if ( v4 )
        {
          if ( (_DWORD *)*v4 == a1 )
          {
            v5 = v4[1];
            switch ( v5 )
            {
              case '9':
              case 'E':
              case 'I':
              case '[':
              case 'g':
              case 'q':
                goto LABEL_7;
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
                if ( v5 == 666 || v5 == 42 )
                {
LABEL_7:
                  if ( v4[6] == 2 )
                  {
                    v4[7] = a2;
                    result = 0;
                  }
                }
                break;
            }
          }
        }
      }
    }
  }
  return result;
}
