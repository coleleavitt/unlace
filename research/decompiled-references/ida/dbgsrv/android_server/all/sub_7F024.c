/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7F024
// Address: 0x000000000007F024

//----- (000000000007F024) ----------------------------------------------------
__int64 __fastcall sub_7F024(__int64 a1)
{
  __int64 v2; // x8
  __int64 v3; // x0
  int v4; // w9
  unsigned __int8 *v5; // x8
  unsigned __int8 *v6; // x9
  int v7; // w8
  int v8; // w10
  int v9; // w9
  __int64 v10; // x8
  __int64 v11; // x0
  unsigned int v12; // w8
  int v13; // w8
  unsigned int v15; // [xsp+4h] [xbp-3Ch] BYREF
  __int64 v16; // [xsp+8h] [xbp-38h]

  v16 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  while ( 2 )
  {
    v5 = *(unsigned __int8 **)(a1 + 8);
    if ( *(_BYTE *)(a1 + 128) )
    {
      do
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v6 = v5;
            v7 = *v5;
            if ( v7 == 42 )
              break;
            if ( !v7 )
              goto LABEL_21;
            v5 = v6 + 1;
            *(_QWORD *)(a1 + 8) = v6 + 1;
          }
          v5 = v6 + 1;
          *(_QWORD *)(a1 + 8) = v6 + 1;
          v8 = v6[1];
          if ( v8 != 41 )
            break;
          if ( (*(_BYTE *)(a1 + 676) & 2) != 0 )
            goto LABEL_14;
        }
      }
      while ( v8 != 47 || (*(_BYTE *)(a1 + 676) & 1) == 0 );
LABEL_14:
      v5 = v6 + 2;
      *(_QWORD *)(a1 + 8) = v6 + 2;
      *(_BYTE *)(a1 + 128) = 0;
    }
    while ( (unsigned int)*v5++ - 9 < 5 )
LABEL_15:
      *(_QWORD *)(a1 + 8) = v5;
    switch ( *(v5 - 1) )
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
        v9 = *(_DWORD *)(a1 + 676);
        if ( (v9 & 2) == 0 )
          return 0;
        goto LABEL_25;
      case '/':
        v9 = *(_DWORD *)(a1 + 676);
        if ( (v9 & 1) == 0 )
          return 0;
LABEL_25:
        v13 = *v5;
        if ( v13 != 47 )
        {
          if ( v13 != 42 )
            return 0;
          *(_BYTE *)(a1 + 128) = 1;
          continue;
        }
        if ( (v9 & 4) == 0 )
          return 0;
LABEL_21:
        v10 = *(_QWORD *)(a1 + 64);
        if ( v10 )
        {
          v2 = v10 - 1;
          v3 = *(_QWORD *)(a1 + 56) + 56 * v2;
          *(_QWORD *)a1 = *(_QWORD *)(v3 + 24);
          *(_QWORD *)(a1 + 8) = *(_QWORD *)(v3 + 32);
          v4 = *(_DWORD *)(v3 + 48);
          *(_QWORD *)(a1 + 64) = v2;
          *(_DWORD *)(a1 + 80) = v4;
          sub_39570(v3);
          continue;
        }
        *(_BYTE *)(a1 + 320) = 0;
        v11 = sub_7F1F4(a1, (int *)&v15);
        v12 = v15;
        if ( !v15 )
        {
          *(_QWORD *)a1 = v11;
          *(_QWORD *)(a1 + 8) = v11;
          *(_QWORD *)(a1 + 16) = v11;
          *(_BYTE *)(a1 + 320) = 1;
          continue;
        }
        if ( v15 != 34 )
        {
          if ( v15 == -1 )
          {
            v12 = 34;
            v15 = 34;
          }
          else
          {
            return (unsigned int)set_qerrno(v15);
          }
        }
        return v12;
      case ';':
        if ( (*(_BYTE *)(a1 + 676) & 8) != 0 )
          goto LABEL_21;
        return 0;
      default:
        if ( !*(v5 - 1) )
          goto LABEL_21;
        return 0;
    }
  }
}
