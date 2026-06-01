/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400726EC
// Address: 0x00000001400726EC

//----- (00000001400726EC) ----------------------------------------------------
char __fastcall sub_1400726EC(__int64 a1)
{
  unsigned __int64 v1; // rax
  char v2; // al
  _BYTE *v4; // rax
  int v5; // eax
  _BYTE *v6; // rax
  char *v7; // rdx
  char v8; // al
  __int64 v9; // rdx

  v2 = *(_BYTE *)(a1 + 65);
  if ( v2 == 70 )
  {
    if ( (*(_BYTE *)a1 & 8) == 0 )
    {
      *(_DWORD *)(a1 + 44) = 7;
      return sub_140072AE0(a1);
    }
    return 1;
  }
  if ( v2 == 78 )
  {
    if ( (*(_BYTE *)a1 & 8) == 0 )
    {
      *(_DWORD *)(a1 + 44) = 8;
LABEL_7:
      *errno() = 22;
      invalid_parameter_noinfo();
      return 0;
    }
  }
  else
  {
    if ( *(_DWORD *)(a1 + 60) )
      goto LABEL_7;
    switch ( v2 )
    {
      case 'I':
        v7 = *(char **)(a1 + 24);
        v8 = *v7;
        if ( *v7 == 51 && v7[1] == 50 )
        {
          *(_DWORD *)(a1 + 60) = 10;
          *(_QWORD *)(a1 + 24) = v7 + 2;
        }
        else if ( v8 == 54 && v7[1] == 52 )
        {
          *(_DWORD *)(a1 + 60) = 11;
          *(_QWORD *)(a1 + 24) = v7 + 2;
        }
        else
        {
          LOBYTE(v1) = v8 - 88;
          if ( (unsigned __int8)v1 <= 0x20u )
          {
            v9 = 0x120821001LL;
            if ( _bittest64(&v9, v1) )
              *(_DWORD *)(a1 + 60) = 9;
          }
        }
        return 1;
      case 'L':
        *(_DWORD *)(a1 + 60) = 8;
        return 1;
      case 'T':
        *(_DWORD *)(a1 + 60) = 13;
        return 1;
      case 'h':
        v6 = *(_BYTE **)(a1 + 24);
        if ( *v6 == 104 )
        {
          *(_QWORD *)(a1 + 24) = v6 + 1;
          v5 = 1;
        }
        else
        {
          v5 = 2;
        }
        break;
      case 'j':
        *(_DWORD *)(a1 + 60) = 5;
        return 1;
      case 'l':
        v4 = *(_BYTE **)(a1 + 24);
        if ( *v4 == 108 )
        {
          *(_QWORD *)(a1 + 24) = v4 + 1;
          v5 = 4;
        }
        else
        {
          v5 = 3;
        }
        break;
      default:
        switch ( v2 )
        {
          case 't':
            *(_DWORD *)(a1 + 60) = 7;
            break;
          case 'w':
            *(_DWORD *)(a1 + 60) = 12;
            break;
          case 'z':
            *(_DWORD *)(a1 + 60) = 6;
            break;
        }
        return 1;
    }
    *(_DWORD *)(a1 + 60) = v5;
  }
  return 1;
}
// 140072845: variable 'v1' is possibly undefined
