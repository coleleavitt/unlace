/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9718C
// Address: 0x0009718C

//----- (0009718C) --------------------------------------------------------
_DWORD *__fastcall sub_9718C(__int64 *a1, _BYTE *a2)
{
  __int64 v4; // kr00_8
  unsigned int v5; // r1
  _DWORD *v6; // r3
  _DWORD *result; // r0
  int v8; // r0
  bool v9; // zf
  const char *v10; // r1
  int v11; // r0
  const char *v12; // r1
  int v13; // r0
  const char *v14; // r1
  int v15; // r1
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  char v22; // r8
  char v23; // r9
  _DWORD *v24; // r0
  _DWORD *v25; // r5
  _DWORD *v26; // [sp+4h] [bp-24h] BYREF
  unsigned __int8 *v27; // [sp+8h] [bp-20h] BYREF

  v4 = *a1;
  v5 = HIDWORD(v4) - v4;
  if ( HIDWORD(v4) == (_DWORD)v4 )
    return nullptr;
  v6 = (_DWORD *)(*(unsigned __int8 *)v4 - 97);
  result = nullptr;
  switch ( *(_BYTE *)v4 )
  {
    case 'a':
      if ( v5 < 2 )
        return nullptr;
      v8 = *(unsigned __int8 *)(v4 + 1);
      if ( v8 == 78 )
      {
        v12 = "operator&=";
        goto LABEL_124;
      }
      if ( v8 == 83 )
      {
        v10 = "operator=";
        goto LABEL_119;
      }
      v9 = v8 == 110;
      if ( v8 != 110 )
        v9 = v8 == 100;
      if ( v9 )
      {
        v10 = "operator&";
        goto LABEL_119;
      }
      if ( v8 == 97 )
      {
        v12 = "operator&&";
        goto LABEL_124;
      }
      return nullptr;
    case 'c':
      if ( v5 < 2 )
        return nullptr;
      v15 = *(unsigned __int8 *)(v4 + 1);
      result = nullptr;
      switch ( v15 )
      {
        case 'v':
          v22 = *((_BYTE *)a1 + 361);
          v23 = *((_BYTE *)a1 + 360);
          *(_DWORD *)a1 = v4 + 2;
          *((_BYTE *)a1 + 360) = 0;
          *((_BYTE *)a1 + 361) = BYTE4(v4);
          v27 = sub_92B28(a1, v4 + 2, v4, v6);
          if ( v27 )
          {
            if ( a2 )
              *a2 = 1;
            result = sub_976C8((int)a1, (int *)&v27);
          }
          else
          {
            result = nullptr;
          }
          *((_BYTE *)a1 + 360) = v23;
          *((_BYTE *)a1 + 361) = v22;
          return result;
        case 'm':
          v10 = "operator,";
          goto LABEL_119;
        case 'o':
          v10 = "operator~";
          goto LABEL_119;
      }
      if ( v15 != 108 )
        return result;
      v12 = "operator()";
      goto LABEL_124;
    case 'd':
      if ( v5 < 2 )
        return nullptr;
      v11 = *(unsigned __int8 *)(v4 + 1);
      switch ( v11 )
      {
        case 'V':
          v12 = "operator/=";
          goto LABEL_124;
        case 'v':
          v10 = "operator/";
          goto LABEL_119;
        case 'e':
          goto LABEL_82;
        case 'l':
          *(_DWORD *)a1 = v4 + 2;
          result = sub_93AC6((int)(a1 + 46), 16);
          *result = &off_DBC58;
          result[1] = 16843015;
          result[2] = "operator delete";
          result[3] = "";
          break;
        case 'a':
          *(_DWORD *)a1 = v4 + 2;
          return sub_976F0((int)a1, (int)"operator delete[]");
        default:
          return nullptr;
      }
      return result;
    case 'e':
      if ( v5 < 2 )
        return nullptr;
      v16 = *(unsigned __int8 *)(v4 + 1);
      if ( v16 == 79 )
      {
        v12 = "operator^=";
        goto LABEL_124;
      }
      if ( v16 == 113 )
      {
        v12 = "operator==";
        goto LABEL_124;
      }
      if ( v16 != 111 )
        return nullptr;
      v10 = "operator^";
      goto LABEL_119;
    case 'g':
      if ( v5 < 2 )
        return nullptr;
      v17 = *(unsigned __int8 *)(v4 + 1);
      if ( v17 == 116 )
      {
        v10 = "operator>";
        goto LABEL_119;
      }
      if ( v17 != 101 )
        return nullptr;
      v12 = "operator>=";
      goto LABEL_124;
    case 'i':
      if ( v5 < 2 || *(_BYTE *)(v4 + 1) != 120 )
        return nullptr;
      v12 = "operator[]";
      goto LABEL_124;
    case 'l':
      if ( v5 < 2 )
        return nullptr;
      v18 = *(unsigned __int8 *)(v4 + 1);
      if ( v18 == 83 )
      {
        v14 = "operator<<=";
        goto LABEL_121;
      }
      if ( v18 == 116 )
      {
        v10 = "operator<";
        goto LABEL_119;
      }
      if ( v18 != 105 )
      {
        if ( v18 == 115 )
        {
          v12 = "operator<<";
        }
        else
        {
          if ( v18 != 101 )
            return nullptr;
          v12 = "operator<=";
        }
        goto LABEL_124;
      }
      *(_DWORD *)a1 = v4 + 2;
      v24 = sub_9708C((unsigned __int8 **)a1);
      if ( !v24 )
        return nullptr;
      v25 = v24;
      result = sub_93AC6((int)(a1 + 46), 12);
      *result = &off_DC0A8;
      result[1] = 16843028;
      result[2] = v25;
      return result;
    case 'm':
      if ( v5 < 2 )
        return nullptr;
      v19 = *(unsigned __int8 *)(v4 + 1);
      switch ( v19 )
      {
        case 'I':
          v12 = "operator-=";
          goto LABEL_124;
        case 'L':
          v12 = "operator*=";
          goto LABEL_124;
        case 'm':
          v12 = "operator--";
          goto LABEL_124;
        case 'l':
LABEL_82:
          v10 = "operator*";
          goto LABEL_119;
        case 'i':
          goto LABEL_83;
      }
      return nullptr;
    case 'n':
      if ( v5 < 2 )
        return nullptr;
      v20 = *(unsigned __int8 *)(v4 + 1);
      switch ( v20 )
      {
        case 'w':
          *(_DWORD *)a1 = v4 + 2;
          return sub_97744((int)a1, (int)"operator new");
        case 'e':
          v12 = "operator!=";
          goto LABEL_124;
        case 'g':
LABEL_83:
          v10 = "operator-";
          goto LABEL_119;
        case 't':
          v10 = "operator!";
          goto LABEL_119;
      }
      if ( v20 != 97 )
        return nullptr;
      *(_DWORD *)a1 = v4 + 2;
      return sub_97728((int)a1, (int)"operator new[]");
    case 'o':
      if ( v5 < 2 )
        return nullptr;
      v21 = *(unsigned __int8 *)(v4 + 1);
      if ( v21 == 82 )
      {
        v12 = "operator|=";
        goto LABEL_124;
      }
      if ( v21 == 114 )
      {
        v10 = "operator|";
        goto LABEL_119;
      }
      if ( v21 != 111 )
        return nullptr;
      v12 = "operator||";
      goto LABEL_124;
    case 'p':
      if ( v5 < 2 )
        return nullptr;
      result = nullptr;
      switch ( *(_BYTE *)(v4 + 1) )
      {
        case 'l':
        case 's':
          v10 = "operator+";
          goto LABEL_119;
        case 'm':
          v14 = "operator->*";
          goto LABEL_121;
        case 'n':
        case 'o':
        case 'q':
        case 'r':
          return result;
        case 'p':
          v12 = "operator++";
          goto LABEL_124;
        case 't':
          v12 = "operator->";
          goto LABEL_124;
        default:
          if ( *(_BYTE *)(v4 + 1) != 76 )
            return result;
          v12 = "operator+=";
          break;
      }
      goto LABEL_124;
    case 'q':
      if ( v5 < 2 || *(_BYTE *)(v4 + 1) != 117 )
        return nullptr;
      v10 = "operator?";
      goto LABEL_119;
    case 'r':
      if ( v5 < 2 )
        return nullptr;
      v13 = *(unsigned __int8 *)(v4 + 1);
      switch ( v13 )
      {
        case 'M':
          v12 = "operator%=";
LABEL_124:
          *(_DWORD *)a1 = v4 + 2;
          return sub_97690((int)a1, (int)v12);
        case 'S':
          v14 = "operator>>=";
LABEL_121:
          *(_DWORD *)a1 = v4 + 2;
          return sub_9770C((int)a1, (int)v14);
        case 's':
          v12 = "operator>>";
          goto LABEL_124;
      }
      if ( v13 != 109 )
        return nullptr;
      v10 = "operator%";
LABEL_119:
      *(_DWORD *)a1 = v4 + 2;
      return sub_976AC((int)a1, (int)v10);
    case 's':
      if ( v5 < 2 || *(_BYTE *)(v4 + 1) != 115 )
        return nullptr;
      v14 = "operator<=>";
      goto LABEL_121;
    case 'v':
      if ( v5 < 2 )
        return nullptr;
      if ( (unsigned int)*(unsigned __int8 *)(v4 + 1) - 48 > 9 )
        return nullptr;
      *(_DWORD *)a1 = v4 + 2;
      v26 = sub_9708C((unsigned __int8 **)a1);
      if ( !v26 )
        return nullptr;
      return sub_976C8((int)a1, (int *)&v26);
    default:
      return result;
  }
}
// DBC58: using guessed type _UNKNOWN *off_DBC58;
// DC0A8: using guessed type _UNKNOWN *off_DC0A8;
