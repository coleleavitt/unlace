/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: reloc_value
// Address: 0x00000000000C5DE0

//----- (00000000000C5DE0) ----------------------------------------------------
unsigned int *__fastcall reloc_value(unsigned int *result, int a2, __int64 a3, char a4)
{
  unsigned int *v7; // x19
  unsigned int v8; // w8
  unsigned int v9; // w8
  unsigned __int64 v10; // x8
  unsigned __int64 v11; // x9
  _BOOL4 v12; // w10
  __int64 v13; // x8
  unsigned __int64 v14; // t2

  if ( result )
  {
    v7 = result;
    if ( (a4 & 1) != 0 )
    {
      switch ( a2 )
      {
        case 1:
          goto LABEL_6;
        case 2:
          v8 = bswap32(*(unsigned __int16 *)result) >> 16;
          *(_WORD *)result = v8;
          goto LABEL_10;
        case 4:
          v9 = bswap32(*result);
          *result = v9;
          goto LABEL_31;
        case 8:
          result = (unsigned int *)swap64(*(_QWORD *)result);
          *(_QWORD *)v7 = result;
          goto LABEL_34;
        case 16:
          result = (unsigned int *)swap128((__int64 *)result);
          goto LABEL_14;
        default:
          goto LABEL_25;
      }
    }
    switch ( a2 )
    {
      case 1:
LABEL_6:
        *(_BYTE *)result += a3;
        if ( (a4 & 1) != 0 )
          goto LABEL_25;
        return result;
      case 2:
        LOWORD(v8) = *(_WORD *)result;
LABEL_10:
        *(_WORD *)result = v8 + a3;
        if ( (a4 & 1) != 0 )
          goto LABEL_25;
        return result;
      case 4:
        v9 = *result;
LABEL_31:
        *result = v9 + a3;
        if ( (a4 & 1) != 0 )
          goto LABEL_25;
        return result;
      case 8:
        result = *(unsigned int **)result;
LABEL_34:
        *(_QWORD *)v7 = (char *)result + a3;
        if ( (a4 & 1) != 0 )
          goto LABEL_25;
        return result;
      case 16:
LABEL_14:
        v10 = *(_QWORD *)v7;
        v11 = *(_QWORD *)v7 + a3;
        v12 = __CFADD__(*(_QWORD *)v7, a3);
        *(_QWORD *)v7 = v11;
        if ( a3 >= 1 && v12 )
        {
          v13 = *((_QWORD *)v7 + 1) + 1LL;
LABEL_23:
          *((_QWORD *)v7 + 1) = v13;
          goto LABEL_24;
        }
        if ( a3 < 0 && v11 > v10 )
        {
          v13 = *((_QWORD *)v7 + 1) - 1LL;
          goto LABEL_23;
        }
LABEL_24:
        if ( (a4 & 1) != 0 )
        {
LABEL_25:
          HIDWORD(v14) = a2 - 2;
          LODWORD(v14) = a2 - 2;
          switch ( (unsigned int)(v14 >> 1) )
          {
            case 0u:
              *(_WORD *)v7 = bswap32(*(unsigned __int16 *)v7) >> 16;
              break;
            case 1u:
              *v7 = bswap32(*v7);
              break;
            case 3u:
              result = (unsigned int *)swap64(*(_QWORD *)v7);
              *(_QWORD *)v7 = result;
              break;
            case 7u:
              result = (unsigned int *)swap128((__int64 *)v7);
              break;
            default:
              return result;
          }
        }
        break;
      default:
        return result;
    }
  }
  return result;
}
