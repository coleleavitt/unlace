/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_860C8
// Address: 0x000860C8

//----- (000860C8) --------------------------------------------------------
int __fastcall sub_860C8(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  int result; // r0
  _DWORD *v5; // r4
  int v6; // r5

  result = -2;
  if ( a1 )
  {
    if ( a1[8] )
    {
      if ( a1[9] )
      {
        v5 = (_DWORD *)a1[7];
        if ( v5 )
        {
          if ( (_DWORD *)*v5 == a1 )
          {
            v6 = v5[1];
            switch ( v6 )
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
                if ( v6 == 666 || v6 == 42 )
                {
LABEL_7:
                  if ( a2 )
                    *a2 = v5[5];
                  result = 0;
                  if ( a3 )
                  {
                    *a3 = *(_DWORD *)(a1[7] + 5820);
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
