/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000462B0
// Address: 0x00000001000462B0

//----- (00000001000462B0) ----------------------------------------------------
__int64 __fastcall sub_1000462B0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned __int8 *v6; // rcx
  unsigned __int8 *v7; // rax
  int v8; // ecx
  unsigned __int8 *v9; // rax
  int v10; // edx
  unsigned __int8 *v11; // rax
  int v12; // esi
  __int64 v13; // rax
  int v14; // edx
  __int64 result; // rax
  int v16; // ecx
  int v17; // [rsp+4h] [rbp-2Ch] BYREF

  while ( 2 )
  {
    v6 = *(unsigned __int8 **)(a1 + 8);
    if ( *(_BYTE *)(a1 + 128) == 1 )
    {
      do
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v7 = v6;
            v8 = *v6;
            if ( v8 == 42 )
              break;
            if ( !v8 )
              goto LABEL_3;
            v9 = v7 + 1;
            *(_QWORD *)(a1 + 8) = v9;
            v6 = v9;
          }
          v6 = v7 + 1;
          *(_QWORD *)(a1 + 8) = v7 + 1;
          v10 = v7[1];
          if ( v10 != 47 )
            break;
          if ( (*(_DWORD *)(a1 + 572) & 1) != 0 )
            goto LABEL_14;
        }
      }
      while ( v10 != 41 || (*(_DWORD *)(a1 + 572) & 2) == 0 );
LABEL_14:
      v11 = v7 + 2;
      *(_QWORD *)(a1 + 8) = v11;
      *(_BYTE *)(a1 + 128) = 0;
      v6 = v11;
    }
    while ( (unsigned int)*v6++ - 9 < 5 )
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
        v12 = 2;
        goto LABEL_24;
      case '/':
        v12 = 1;
LABEL_24:
        v14 = *(_DWORD *)(a1 + 572);
        result = 0;
        if ( (v12 & v14) == 0 )
          return result;
        v16 = *v6;
        if ( v16 != 47 )
        {
          if ( v16 != 42 )
            return result;
          *(_BYTE *)(a1 + 128) = 1;
          continue;
        }
        if ( (v14 & 4) == 0 )
          return result;
LABEL_3:
        v3 = *(_QWORD *)(a1 + 64);
        if ( v3 )
        {
          v4 = *(_QWORD *)(a1 + 56);
          v5 = 56 * v3;
          *(_QWORD *)a1 = *(_QWORD *)(v4 + v5 - 32);
          *(_QWORD *)(a1 + 8) = *(_QWORD *)(v4 + v5 - 24);
          *(_DWORD *)(a1 + 80) = *(_DWORD *)(v4 + v5 - 8);
          sub_100044BA0((__int64 *)(a1 + 56));
          continue;
        }
        *(_BYTE *)(a1 + 320) = 0;
        v13 = sub_1000464F0(a1, &v17);
        if ( !v17 )
        {
          *(_QWORD *)(a1 + 8) = v13;
          *(_QWORD *)a1 = v13;
          *(_QWORD *)(a1 + 16) = v13;
          *(_BYTE *)(a1 + 320) = 1;
          continue;
        }
        if ( v17 == -1 || v17 == 34 )
          return 34;
        else
          return set_qerrno();
      case ';':
        if ( (*(_BYTE *)(a1 + 572) & 8) != 0 )
          goto LABEL_3;
        return 0;
      default:
        if ( !*(v6 - 1) )
          goto LABEL_3;
        return 0;
    }
  }
}
