bool __fastcall sub_100A400(__int64 a1, int *a2)
{
  _BYTE *v2; // rdx
  char v3; // al
  _BYTE *v5; // rax
  char i; // dl
  _BYTE *v7; // rdx
  int v8; // eax
  char v9; // dl
  _BYTE *v10; // rax
  char v11; // cl
  char v12; // cl
  _BYTE *v13; // [rsp+8h] [rbp-30h] BYREF

  v2 = *((_BYTE **)a2 + 13);
  v13 = v2;
  v3 = *v2;
  if ( *v2 != 61 && v3 != 43 )
    return 0;
  if ( v3 == 43 )
    *a2 |= 4u;
  v5 = v2 + 1;
  v13 = v2 + 1;
  for ( i = v2[1]; i; i = v7[1] )
  {
    switch ( i )
    {
      case '!':
      case '%':
      case '*':
      case '?':
      case 'E':
      case 'F':
      case 'i':
      case 'n':
        goto LABEL_8;
      case '#':
        v9 = v5[1];
        if ( !v9 || v9 == 44 )
        {
LABEL_8:
          v7 = v5;
        }
        else
        {
          v10 = v5 + 1;
          do
          {
            v13 = v10;
            v11 = v10[1];
            v7 = v10++;
          }
          while ( v11 && v11 != 44 );
        }
        break;
      case '&':
        *a2 |= 0x20u;
        v7 = v5;
        break;
      case ',':
        v12 = v5[1];
        if ( v12 == 61 || (v7 = v5, v12 == 43) )
          v7 = v5 + 1;
        break;
      case '<':
      case '>':
      case 'V':
      case 'm':
      case 'o':
        *a2 |= 1u;
        v7 = v5;
        break;
      case 'X':
      case 'g':
        *a2 |= 3u;
        v7 = v5;
        break;
      case 'r':
        *a2 |= 2u;
        v7 = v5;
        break;
      default:
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, _BYTE **, int *))(*(_QWORD *)a1 + 360LL))(a1, &v13, a2) )
          return 0;
        v7 = v13;
        break;
    }
    v5 = v7 + 1;
    v13 = v7 + 1;
  }
  v8 = *a2;
  return ((*a2 & 0x24) != 0x24 || (v8 & 2) != 0) && (v8 & 3) != 0;
}

