/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_85E8C
// Address: 0x00085E8C

//----- (00085E8C) --------------------------------------------------------
int __fastcall sub_85E8C(_DWORD *a1, void *a2, size_t *a3)
{
  int result; // r0
  _DWORD *v6; // r3
  int v7; // r2
  int v8; // r0
  int v9; // r2
  size_t v10; // r5

  result = -2;
  if ( a1 )
  {
    if ( a1[8] )
    {
      if ( a1[9] )
      {
        v6 = (_DWORD *)a1[7];
        if ( v6 )
        {
          if ( (_DWORD *)*v6 == a1 )
          {
            v7 = v6[1];
            switch ( v7 )
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
                if ( v7 == 666 || v7 == 42 )
                {
LABEL_7:
                  v8 = v6[27];
                  v9 = v6[29];
                  v10 = v6[11];
                  if ( v9 + v8 <= v10 )
                    v10 = v9 + v8;
                  if ( a2 && v10 )
                    qmemcpy(a2, (const void *)(v6[14] + v8 + v9 - v10), v10);
                  result = 0;
                  if ( a3 )
                  {
                    *a3 = v10;
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
