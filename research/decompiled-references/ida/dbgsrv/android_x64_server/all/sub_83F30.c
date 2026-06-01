/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_83F30
// Address: 0x0000000000083F30

//----- (0000000000083F30) ----------------------------------------------------
__int64 __fastcall sub_83F30(__int64 a1, double a2, __m128 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  _BYTE *v6; // rax
  _BYTE *v7; // rcx
  _BYTE *v8; // rcx
  char v9; // al
  char v10; // dl
  _BYTE *v11; // rcx
  int v12; // ecx
  char v13; // dl
  __int64 result; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned int v17; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v18; // [rsp+8h] [rbp-20h]

  v18 = __readfsqword(0x28u);
  while ( 2 )
  {
    v6 = *(_BYTE **)(a1 + 8);
    if ( *(_BYTE *)(a1 + 128) )
    {
      do
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v8 = v6;
            v9 = *v6;
            if ( v9 == 42 )
              break;
            if ( !v9 )
              goto LABEL_29;
            v7 = v8 + 1;
            *(_QWORD *)(a1 + 8) = v7;
            v6 = v7;
          }
          v6 = v8 + 1;
          *(_QWORD *)(a1 + 8) = v8 + 1;
          v10 = v8[1];
          if ( v10 != 41 )
            break;
          if ( (*(_BYTE *)(a1 + 508) & 2) != 0 )
            goto LABEL_14;
        }
      }
      while ( v10 != 47 || (*(_BYTE *)(a1 + 508) & 1) == 0 );
LABEL_14:
      v11 = v8 + 2;
      *(_QWORD *)(a1 + 8) = v11;
      *(_BYTE *)(a1 + 128) = 0;
      v6 = v11;
    }
    while ( (unsigned __int8)(*v6++ - 9) < 5u )
LABEL_15:
      *(_QWORD *)(a1 + 8) = v6;
    switch ( *(v6 - 1) )
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
        v12 = *(_DWORD *)(a1 + 508);
        if ( (v12 & 2) == 0 )
          return 0;
        goto LABEL_23;
      case '/':
        v12 = *(_DWORD *)(a1 + 508);
        if ( (v12 & 1) == 0 )
          return 0;
LABEL_23:
        v13 = *v6;
        result = 0;
        if ( v13 != 47 )
        {
          if ( v13 != 42 )
            return result;
          *(_BYTE *)(a1 + 128) = 1;
          continue;
        }
        if ( (v12 & 4) == 0 )
          return result;
LABEL_29:
        v15 = *(_QWORD *)(a1 + 64);
        if ( v15 )
        {
          v4 = v15 - 1;
          v5 = *(_QWORD *)(a1 + 56) + 56 * v4;
          *(_QWORD *)a1 = *(_QWORD *)(v5 + 24);
          *(_QWORD *)(a1 + 8) = *(_QWORD *)(v5 + 32);
          *(_DWORD *)(a1 + 80) = *(_DWORD *)(v5 + 48);
          *(_QWORD *)(a1 + 64) = v4;
          sub_38490((char **)v5);
          continue;
        }
        *(_BYTE *)(a1 + 320) = 0;
        v16 = sub_84110(a1, (int *)&v17, a2, a3);
        result = v17;
        if ( !v17 )
        {
          *(_QWORD *)(a1 + 8) = v16;
          *(_QWORD *)a1 = v16;
          *(_QWORD *)(a1 + 16) = v16;
          *(_BYTE *)(a1 + 320) = 1;
          continue;
        }
        if ( v17 != 34 )
        {
          if ( v17 == -1 )
          {
            v17 = 34;
            return 34;
          }
          else
          {
            return set_qerrno(v17);
          }
        }
        return result;
      case ';':
        if ( (*(_BYTE *)(a1 + 508) & 8) != 0 )
          goto LABEL_29;
        return 0;
      default:
        if ( !*(v6 - 1) )
          goto LABEL_29;
        return 0;
    }
  }
}
