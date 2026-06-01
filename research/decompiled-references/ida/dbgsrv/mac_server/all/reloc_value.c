/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: reloc_value
// Address: 0x0000000100080FE0

//----- (0000000100080FE0) ----------------------------------------------------
void __fastcall reloc_value(__int64 *a1, int a2, __int64 a3, char a4)
{
  __int16 v5; // ax
  unsigned __int32 v6; // eax
  char v7; // r15
  __int64 v8; // r12
  unsigned __int64 v9; // rax
  char v10; // r15
  __int64 v11; // r12
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rsi
  bool v14; // r8

  if ( a1 )
  {
    if ( a4 )
    {
      switch ( a2 )
      {
        case 1:
          goto LABEL_6;
        case 2:
          v5 = __ROL2__(*(_WORD *)a1, 8);
          goto LABEL_10;
        case 4:
          v6 = _byteswap_ulong(*(_DWORD *)a1);
          goto LABEL_14;
        case 8:
          v7 = a4;
          v8 = a3;
          v9 = swap64(*a1);
          a3 = v8;
          a4 = v7;
          goto LABEL_29;
        case 16:
          v10 = a4;
          v11 = a3;
          swap128(a1);
          a3 = v11;
          a4 = v10;
          goto LABEL_17;
        default:
          goto LABEL_23;
      }
    }
    switch ( a2 )
    {
      case 1:
LABEL_6:
        *(_BYTE *)a1 += a3;
        if ( a4 )
          goto LABEL_23;
        return;
      case 2:
        v5 = *(_WORD *)a1;
LABEL_10:
        *(_WORD *)a1 = a3 + v5;
        if ( a4 )
          goto LABEL_23;
        return;
      case 4:
        v6 = *(_DWORD *)a1;
LABEL_14:
        *(_DWORD *)a1 = v6 + a3;
        if ( a4 )
          goto LABEL_23;
        return;
      case 8:
        v9 = *a1;
LABEL_29:
        *a1 = a3 + v9;
        if ( a4 )
          goto LABEL_23;
        return;
      case 16:
LABEL_17:
        v12 = *a1;
        v13 = a3 + *a1;
        v14 = __CFADD__(a3, *a1);
        *a1 = v13;
        if ( v14 && a3 > 0 )
        {
          ++a1[1];
          if ( !a4 )
            return;
          goto LABEL_23;
        }
        if ( a3 < 0 && v13 > v12 )
          --a1[1];
        if ( a4 )
        {
LABEL_23:
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
          return;
        }
        break;
      default:
        return;
    }
  }
}
