/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_87DA8
// Address: 0x00087DA8

//----- (00087DA8) --------------------------------------------------------
int __fastcall sub_87DA8(int a1, _DWORD *a2)
{
  _DWORD *v3; // r4
  int v4; // kr04_4
  int result; // r0
  _DWORD *v6; // r6
  int v7; // r1
  void *v8; // r0
  int v9; // r1

  if ( !a2 )
    return -2;
  if ( !a2[8] )
    return -2;
  if ( !a2[9] )
    return -2;
  v3 = (_DWORD *)a2[7];
  if ( !v3 || (_DWORD *)*v3 != a2 )
    return -2;
  v4 = v3[1];
  result = -2;
  switch ( v4 )
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
      if ( v4 != 666 && v4 != 42 )
        return -2;
LABEL_12:
      if ( !a1 )
        return -2;
      qmemcpy((void *)a1, a2, 0x38u);
      v6 = (_DWORD *)(*(int (__fastcall **)(_DWORD, int, int))(a1 + 32))(*(_DWORD *)(a1 + 40), 1, 5828);
      result = -4;
      if ( v6 )
      {
        *(_DWORD *)(a1 + 28) = v6;
        qmemcpy(v6, v3, 0x16C4u);
        *v6 = a1;
        v6[14] = (*(int (__fastcall **)(_DWORD, _DWORD))(a1 + 32))(*(_DWORD *)(a1 + 40), v6[11]);
        v6[16] = (*(int (__fastcall **)(_DWORD, _DWORD, int))(a1 + 32))(*(_DWORD *)(a1 + 40), v6[11], 2);
        v6[17] = (*(int (__fastcall **)(_DWORD, _DWORD, int))(a1 + 32))(*(_DWORD *)(a1 + 40), v6[19], 2);
        v7 = (*(int (__fastcall **)(_DWORD, _DWORD, int))(a1 + 32))(*(_DWORD *)(a1 + 40), v6[1447], 4);
        v6[2] = v7;
        v8 = (void *)v6[14];
        if ( v8 && v6[16] && v7 && v6[17] )
        {
          qmemcpy(v8, (const void *)v3[14], 2 * v6[11]);
          qmemcpy((void *)v6[16], (const void *)v3[16], 2 * v6[11]);
          qmemcpy((void *)v6[17], (const void *)v3[17], 2 * v6[19]);
          qmemcpy((void *)v6[2], (const void *)v3[2], 4 * v6[1447]);
          v9 = v6[2];
          v6[4] = v9 + v3[4] - v3[2];
          v6[1446] = v9 + v6[1447];
          v6[710] = v6 + 37;
          v6[716] = v6 + 671;
          v6[713] = v6 + 610;
          result = 0;
        }
        else
        {
          sub_858EC((_DWORD *)a1);
          result = -4;
        }
      }
      break;
  }
  return result;
}
