/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_85F50
// Address: 0x00085F50

//----- (00085F50) --------------------------------------------------------
int __fastcall sub_85F50(_DWORD *a1)
{
  int v2; // r4
  _DWORD *v3; // r6
  int v4; // r0
  int v5; // r0
  int v6; // r1
  unsigned int v7; // r0

  v2 = -2;
  if ( a1 )
  {
    if ( a1[8] )
    {
      if ( a1[9] )
      {
        v3 = (_DWORD *)a1[7];
        if ( v3 )
        {
          if ( (_DWORD *)*v3 == a1 )
          {
            v4 = v3[1];
            switch ( v4 )
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
                return v2;
              default:
                if ( v4 == 666 || v4 == 42 )
                {
LABEL_7:
                  a1[2] = 0;
                  a1[5] = 0;
                  a1[6] = 0;
                  a1[11] = 2;
                  v3[4] = v3[2];
                  v3[5] = 0;
                  v5 = v3[6];
                  if ( v5 < 0 )
                  {
                    v5 = -v5;
                    v3[6] = v5;
                  }
                  v6 = 57;
                  if ( v5 != 2 )
                    v6 = 42;
                  v3[1] = v6;
                  if ( v5 == 2 )
                    v7 = sub_85468(0, nullptr, 0);
                  else
                    v7 = sub_8EC00(0, nullptr, 0);
                  a1[12] = v7;
                  v3[10] = -2;
                  sub_8AFA8((int)v3);
                  v2 = 0;
                }
                break;
            }
          }
        }
      }
    }
  }
  return v2;
}
