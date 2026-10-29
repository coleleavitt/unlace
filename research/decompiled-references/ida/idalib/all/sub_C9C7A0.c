__int64 __fastcall sub_C9C7A0(__int64 a1, _QWORD *a2, _BYTE *a3, __int64 a4, char a5)
{
  _BYTE *v5; // r9
  int v6; // eax
  __int64 result; // rax
  char v8; // dl
  char v9; // dl

  v5 = (_BYTE *)*a2;
  switch ( *(_BYTE *)*a2 )
  {
    case 'I':
      if ( v5 + 1 == a3 || a3 == v5 + 2 )
        goto LABEL_35;
      v8 = v5[1];
      if ( v8 == 54 )
      {
        if ( v5[2] == 52 )
        {
          *a2 = v5 + 3;
          v6 = 12;
LABEL_3:
          *(_DWORD *)(a1 + 8) = v6;
          *(_QWORD *)a1 = v5;
          return 1;
        }
        else
        {
          result = 0;
          if ( !a5 )
          {
LABEL_35:
            *a2 = v5 + 1;
            v6 = 11;
            goto LABEL_3;
          }
        }
      }
      else
      {
        result = 0;
        if ( !a5 )
        {
          if ( v8 == 51 && v5[2] == 50 )
          {
            *a2 = v5 + 3;
            v6 = 10;
            goto LABEL_3;
          }
          goto LABEL_35;
        }
      }
      return result;
    case 'L':
      *a2 = v5 + 1;
      v6 = 13;
      goto LABEL_3;
    case 'a':
      result = 0;
      if ( !a5 || (*(_WORD *)a4 & 0x1001) != 0 )
        return result;
      *a2 = v5 + 1;
      if ( v5 + 1 != a3 && ((v5[1] & 0xF7) == 0x53 || v5[1] == 115) )
      {
        v6 = 14;
        goto LABEL_3;
      }
      *a2 = v5;
      return 0;
    case 'h':
      v6 = 2;
      *a2 = v5 + 1;
      if ( v5 + 1 != a3 )
      {
        v9 = v5[1];
        if ( v9 == 104 )
        {
          *a2 = v5 + 2;
          v6 = 1;
        }
        else if ( v9 == 108 && (*(_BYTE *)(a4 + 47) & 0x20) != 0 )
        {
          *a2 = v5 + 2;
          v6 = 3;
        }
      }
      goto LABEL_3;
    case 'j':
      *a2 = v5 + 1;
      v6 = 7;
      goto LABEL_3;
    case 'l':
      v6 = 4;
      *a2 = v5 + 1;
      if ( v5 + 1 != a3 && v5[1] == 108 )
      {
        *a2 = v5 + 2;
        v6 = 5;
      }
      goto LABEL_3;
    case 'm':
      result = 0;
      if ( !a5 )
        return result;
      *a2 = v5 + 1;
      v6 = 15;
      goto LABEL_3;
    case 'q':
      *a2 = v5 + 1;
      v6 = 6;
      goto LABEL_3;
    case 't':
      *a2 = v5 + 1;
      v6 = 9;
      goto LABEL_3;
    case 'w':
      *a2 = v5 + 1;
      v6 = 16;
      goto LABEL_3;
    case 'z':
      *a2 = v5 + 1;
      v6 = 8;
      goto LABEL_3;
    default:
      return 0;
  }
}
