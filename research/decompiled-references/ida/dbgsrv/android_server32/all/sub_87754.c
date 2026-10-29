/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_87754
// Address: 0x00087754

//----- (00087754) --------------------------------------------------------
int __fastcall sub_87754(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  int result; // r0
  _DWORD *v7; // r5
  int v8; // r4

  result = -2;
  if ( a1 )
  {
    if ( a1[8] )
    {
      if ( a1[9] )
      {
        v7 = (_DWORD *)a1[7];
        if ( v7 )
        {
          if ( (_DWORD *)*v7 == a1 )
          {
            v8 = v7[1];
            switch ( v8 )
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
                if ( v8 == 666 || v8 == 42 )
                {
LABEL_7:
                  v7[32] = a3;
                  v7[35] = a2;
                  v7[36] = a4;
                  v7[31] = a5;
                  result = 0;
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
