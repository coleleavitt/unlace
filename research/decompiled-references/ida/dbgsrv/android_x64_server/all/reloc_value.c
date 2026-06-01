/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: reloc_value
// Address: 0x00000000000CB5A0

//----- (00000000000CB5A0) ----------------------------------------------------
unsigned __int64 __fastcall reloc_value(__int64 *a1, int a2, __int64 a3, char a4)
{
  unsigned __int64 result; // rax
  int v7; // eax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  bool v10; // dl

  if ( a1 )
  {
    result = (unsigned int)(a2 - 1);
    if ( a4 )
    {
      switch ( a2 )
      {
        case 1:
          goto LABEL_6;
        case 2:
          v7 = *(unsigned __int16 *)a1;
          LOWORD(v7) = __ROL2__(v7, 8);
          *(_WORD *)a1 = v7;
          goto LABEL_10;
        case 4:
          result = _byteswap_ulong(*(_DWORD *)a1);
          *(_DWORD *)a1 = result;
          goto LABEL_28;
        case 8:
          v8 = swap64(*a1);
          *a1 = v8;
          goto LABEL_31;
        case 16:
          swap128(a1);
          goto LABEL_14;
        default:
          goto LABEL_22;
      }
    }
    switch ( a2 )
    {
      case 1:
LABEL_6:
        *(_BYTE *)a1 += a3;
        if ( a4 )
          goto LABEL_22;
        return result;
      case 2:
        v7 = *(unsigned __int16 *)a1;
LABEL_10:
        result = (unsigned int)(a3 + v7);
        *(_WORD *)a1 = result;
        if ( a4 )
          goto LABEL_22;
        return result;
      case 4:
        result = *(unsigned int *)a1;
LABEL_28:
        *(_DWORD *)a1 = result + a3;
        if ( a4 )
          goto LABEL_22;
        return result;
      case 8:
        v8 = *a1;
LABEL_31:
        result = a3 + v8;
        *a1 = result;
        if ( a4 )
          goto LABEL_22;
        return result;
      case 16:
LABEL_14:
        result = *a1;
        v9 = a3 + *a1;
        v10 = __CFADD__(a3, *a1);
        *a1 = v9;
        if ( a3 > 0 && v10 )
        {
          ++a1[1];
          if ( !a4 )
            return result;
          goto LABEL_22;
        }
        if ( a3 < 0 && v9 > result )
          --a1[1];
        if ( a4 )
        {
LABEL_22:
          switch ( __ROR4__(a2 - 2, 1) )
          {
            case 0:
              *(_WORD *)a1 = __ROL2__(*(_WORD *)a1, 8);
              break;
            case 1:
              result = _byteswap_ulong(*(_DWORD *)a1);
              *(_DWORD *)a1 = result;
              break;
            case 3:
              result = swap64(*a1);
              *a1 = result;
              break;
            case 7:
              result = swap128(a1);
              break;
            default:
              return result;
          }
          return result;
        }
        break;
      default:
        return result;
    }
  }
  return result;
}
