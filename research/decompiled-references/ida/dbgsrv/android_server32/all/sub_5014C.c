/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5014C
// Address: 0x0005014C

//----- (0005014C) --------------------------------------------------------
int __fastcall sub_5014C(int *a1)
{
  int *v2; // r6
  int *v3; // r7
  int *v4; // r5
  int v5; // r1
  int v6; // r0
  int v7; // r2
  unsigned __int8 *v8; // r0
  unsigned __int8 *v9; // r1
  int v10; // r0
  int v11; // r2
  unsigned __int8 *i; // r1
  int result; // r0
  int v14; // r2
  int v15; // r1
  int v16; // r0
  int v17; // r1
  int v18; // [sp+8h] [bp-8h] BYREF

  v2 = a1 + 123;
  v3 = a1 + 41;
  v4 = a1 + 17;
  while ( 2 )
  {
    v8 = (unsigned __int8 *)a1[1];
    if ( *(_BYTE *)v4 )
    {
      do
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v9 = v8;
            v10 = *v8;
            if ( v10 == 42 )
              break;
            if ( !v10 )
              goto LABEL_29;
            v8 = v9 + 1;
            a1[1] = (int)(v9 + 1);
          }
          v8 = v9 + 1;
          a1[1] = (int)(v9 + 1);
          v11 = v9[1];
          if ( v11 != 41 )
            break;
          if ( (*(_BYTE *)v2 & 2) != 0 )
            goto LABEL_13;
        }
      }
      while ( v11 != 47 || !(*(unsigned __int8 *)v2 << 31) );
LABEL_13:
      v8 = v9 + 2;
      a1[1] = (int)(v9 + 2);
      *(_BYTE *)v4 = 0;
    }
    for ( i = v8 + 1; ; ++i )
    {
      result = 0;
      if ( (unsigned int)*(i - 1) - 9 >= 5 )
        break;
LABEL_17:
      a1[1] = (int)i;
    }
    switch ( *(i - 1) )
    {
      case ' ':
        goto LABEL_17;
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
        v14 = *v2;
        if ( (*v2 & 2) == 0 )
          return result;
        goto LABEL_23;
      case '/':
        v14 = *v2;
        if ( !(*v2 << 31) )
          return result;
LABEL_23:
        v15 = *i;
        if ( v15 != 47 )
        {
          if ( v15 != 42 )
            return result;
          *(_BYTE *)v4 = 1;
          continue;
        }
        if ( (v14 & 4) == 0 )
          return result;
LABEL_29:
        v16 = a1[8];
        if ( v16 )
        {
          v5 = v16 - 1;
          v6 = a1[7] + 28 * (v16 - 1);
          *a1 = *(_DWORD *)(v6 + 12);
          a1[1] = *(_DWORD *)(v6 + 16);
          v7 = *(_DWORD *)(v6 + 24);
          a1[8] = v5;
          a1[10] = v7;
          sub_1B3BC((char **)v6);
          continue;
        }
        *(_BYTE *)v3 = 0;
        v17 = sub_50294(a1, &v18);
        result = v18;
        if ( !v18 )
        {
          *a1 = v17;
          a1[1] = v17;
          a1[2] = v17;
          *(_BYTE *)v3 = 1;
          continue;
        }
        if ( v18 != 34 )
        {
          if ( v18 == -1 )
          {
            v18 = 34;
            return 34;
          }
          else
          {
            return set_qerrno(v18);
          }
        }
        return result;
      case ';':
        if ( (*(_BYTE *)v2 & 8) != 0 )
          goto LABEL_29;
        return result;
      default:
        if ( !*(i - 1) )
          goto LABEL_29;
        return 0;
    }
  }
}
