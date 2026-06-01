/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: reloc_value
// Address: 0x000B9390

//----- (000B9390) --------------------------------------------------------
void __cdecl reloc_value(unsigned __int64 *a1, int a2, int a3, char a4)
{
  int v4; // ecx
  __int16 v5; // ax
  unsigned __int32 v6; // eax
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  bool v9; // cf
  unsigned __int64 v10; // rax
  unsigned int v11; // [esp+14h] [ebp-18h]
  unsigned int v12; // [esp+14h] [ebp-18h]
  unsigned int v13; // [esp+18h] [ebp-14h]

  if ( a1 )
  {
    v4 = a3;
    if ( a4 )
    {
      switch ( a2 )
      {
        case 1:
          goto LABEL_6;
        case 2:
          v5 = __ROL2__(*(_WORD *)a1, 8);
          *(_WORD *)a1 = v5;
          goto LABEL_10;
        case 4:
          v6 = _byteswap_ulong(*(_DWORD *)a1);
          *(_DWORD *)a1 = v6;
          goto LABEL_23;
        case 8:
          v7 = swap64(*a1);
          v11 = HIDWORD(v7);
          *a1 = v7;
          goto LABEL_31;
        case 16:
          swap128(a1);
          v4 = a3;
          goto LABEL_14;
        default:
          goto LABEL_25;
      }
    }
    switch ( a2 )
    {
      case 1:
LABEL_6:
        *(_BYTE *)a1 += a3;
        if ( a4 )
          goto LABEL_25;
        return;
      case 2:
        v5 = *(_WORD *)a1;
LABEL_10:
        *(_WORD *)a1 = a3 + v5;
        if ( a4 )
          goto LABEL_25;
        return;
      case 4:
        v6 = *(_DWORD *)a1;
LABEL_23:
        *(_DWORD *)a1 = a3 + v6;
        goto LABEL_24;
      case 8:
        LODWORD(v7) = *(_DWORD *)a1;
        v11 = *((_DWORD *)a1 + 1);
LABEL_31:
        *a1 = a3 + __PAIR64__(v11, v7);
        if ( !a4 )
          return;
        goto LABEL_25;
      case 16:
LABEL_14:
        LODWORD(v8) = *(_DWORD *)a1;
        v12 = *((_DWORD *)a1 + 1);
        HIDWORD(v8) = v4 >> 31;
        v13 = *(_DWORD *)a1;
        v9 = __CFADD__(__PAIR64__(v12, v4), v8);
        v10 = __PAIR64__(v12, v4) + v8;
        *a1 = v10;
        if ( v4 > 0 && v9 )
        {
          ++a1[1];
          if ( !a4 )
            return;
        }
        else if ( a3 >= 0 || __PAIR64__(v12, v13) >= v10 )
        {
LABEL_24:
          if ( !a4 )
            return;
        }
        else
        {
          --a1[1];
          if ( !a4 )
            return;
        }
LABEL_25:
        switch ( __ROR4__(a2 - 2, 1) )
        {
          case 0:
            *(_WORD *)a1 = __ROL2__(*(_WORD *)a1, 8);
            break;
          case 1:
            *(_DWORD *)a1 = _byteswap_ulong(*(_DWORD *)a1);
            break;
          case 3:
            *a1 = swap64(*a1);
            break;
          case 7:
            swap128(a1);
            break;
          default:
            return;
        }
        break;
      default:
        return;
    }
  }
}
