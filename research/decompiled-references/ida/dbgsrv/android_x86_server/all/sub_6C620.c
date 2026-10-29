/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6C620
// Address: 0x0006C620

//----- (0006C620) --------------------------------------------------------
int __cdecl sub_6C620(int a1)
{
  int v1; // ecx
  int v2; // edx
  int v3; // eax
  _BYTE *v4; // eax
  _BYTE *v5; // ecx
  _BYTE *v6; // ecx
  char v7; // al
  char v8; // dl
  _BYTE *v9; // ecx
  int v10; // ecx
  char v11; // dl
  int result; // eax
  int v13; // eax
  int v14; // ecx
  int v15[6]; // [esp+14h] [ebp-18h] BYREF

  v15[1] = __readgsdword(0x14u);
  while ( 2 )
  {
    v4 = *(_BYTE **)(a1 + 4);
    if ( *(_BYTE *)(a1 + 68) )
    {
      do
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v6 = v4;
            v7 = *v4;
            if ( v7 == 42 )
              break;
            if ( !v7 )
              goto LABEL_29;
            v5 = v6 + 1;
            *(_DWORD *)(a1 + 4) = v5;
            v4 = v5;
          }
          v4 = v6 + 1;
          *(_DWORD *)(a1 + 4) = v6 + 1;
          v8 = v6[1];
          if ( v8 != 41 )
            break;
          if ( (*(_BYTE *)(a1 + 276) & 2) != 0 )
            goto LABEL_14;
        }
      }
      while ( v8 != 47 || (*(_BYTE *)(a1 + 276) & 1) == 0 );
LABEL_14:
      v9 = v6 + 2;
      *(_DWORD *)(a1 + 4) = v9;
      *(_BYTE *)(a1 + 68) = 0;
      v4 = v9;
    }
    while ( (unsigned __int8)(*v4++ - 9) < 5u )
LABEL_15:
      *(_DWORD *)(a1 + 4) = v4;
    switch ( *(v4 - 1) )
    {
      case ' ':
        goto LABEL_15;
      case '!':
      case '"':
      case '#':
      case '$':
      case '%':
      case '&':
      case '\'':
      case ')':
      case '*':
      case '+':
      case ',':
      case '-':
      case '.':
      case '0':
      case '1':
      case '2':
      case '3':
      case '4':
      case '5':
      case '6':
      case '7':
      case '8':
      case '9':
      case ':':
        return 0;
      case '(':
        v10 = *(_DWORD *)(a1 + 276);
        if ( (v10 & 2) == 0 )
          return 0;
        goto LABEL_23;
      case '/':
        v10 = *(_DWORD *)(a1 + 276);
        if ( (v10 & 1) == 0 )
          return 0;
LABEL_23:
        v11 = *v4;
        result = 0;
        if ( v11 != 47 )
        {
          if ( v11 != 42 )
            return result;
          *(_BYTE *)(a1 + 68) = 1;
          continue;
        }
        if ( (v10 & 4) == 0 )
          return result;
LABEL_29:
        v13 = *(_DWORD *)(a1 + 32);
        if ( v13 )
        {
          v1 = *(_DWORD *)(a1 + 28);
          v2 = v13 - 1;
          v3 = v13 + 27 * (v13 - 1) - 1;
          *(_DWORD *)a1 = *(_DWORD *)(v1 + v3 + 12);
          *(_DWORD *)(a1 + 4) = *(_DWORD *)(v1 + v3 + 16);
          *(_DWORD *)(a1 + 40) = *(_DWORD *)(v1 + v3 + 24);
          *(_DWORD *)(a1 + 32) = v2;
          sub_1BC40((char **)(v1 + v3));
          continue;
        }
        *(_BYTE *)(a1 + 164) = 0;
        v14 = sub_6C7E0(a1, v15);
        result = v15[0];
        if ( !v15[0] )
        {
          *(_DWORD *)(a1 + 4) = v14;
          *(_DWORD *)a1 = v14;
          *(_DWORD *)(a1 + 8) = v14;
          *(_BYTE *)(a1 + 164) = 1;
          continue;
        }
        if ( v15[0] != 34 )
        {
          if ( v15[0] == -1 )
          {
            v15[0] = 34;
            return 34;
          }
          else
          {
            return set_qerrno(v15[0]);
          }
        }
        return result;
      case ';':
        if ( (*(_BYTE *)(a1 + 276) & 8) != 0 )
          goto LABEL_29;
        return 0;
      default:
        if ( !*(v4 - 1) )
          goto LABEL_29;
        return 0;
    }
  }
}
