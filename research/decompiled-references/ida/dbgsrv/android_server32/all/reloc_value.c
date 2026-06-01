/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: reloc_value
// Address: 0x00083D68

//----- (00083D68) --------------------------------------------------------
unsigned int __fastcall reloc_value(unsigned int result, int a2, int a3, int a4)
{
  int *v7; // r4
  unsigned int v8; // r0
  int v9; // r0
  __int64 v10; // r0
  _DWORD *v11; // r4
  _BOOL1 v12; // cf
  int v13; // r3
  int v14; // r1
  int v15; // r0
  int v16; // r0
  int v17; // r1
  int v18; // r2
  unsigned int v19; // [sp+4h] [bp-8h]

  if ( result )
  {
    v7 = (int *)result;
    result = a2 - 1;
    if ( a4 )
    {
      switch ( a2 )
      {
        case 1:
          goto LABEL_6;
        case 2:
          v8 = ((*(unsigned __int16 *)v7 << 24) + ((*(unsigned __int16 *)v7 << 8) & 0xFF0000u)) >> 16;
          *(_WORD *)v7 = v8;
          goto LABEL_10;
        case 4:
          v9 = (*v7 << 24) + ((*v7 << 8) & 0xFF0000) + (((unsigned int)*v7 >> 8) & 0xFF00) + HIBYTE(*v7);
          *v7 = v9;
          goto LABEL_28;
        case 8:
          LODWORD(v10) = swap64(*v7, v7[1]);
          *(_QWORD *)v7 = v10;
          v11 = v7 + 2;
          goto LABEL_31;
        case 16:
          swap128((int)v7);
          goto LABEL_14;
        default:
          goto LABEL_22;
      }
    }
    switch ( a2 )
    {
      case 1:
LABEL_6:
        result = *(unsigned __int8 *)v7 + a3;
        *(_BYTE *)v7 = result;
        if ( a4 )
          goto LABEL_22;
        return result;
      case 2:
        v8 = *(unsigned __int16 *)v7;
LABEL_10:
        result = v8 + a3;
        *(_WORD *)v7 = result;
        if ( a4 )
          goto LABEL_22;
        return result;
      case 4:
        v9 = *v7;
LABEL_28:
        result = v9 + a3;
        *v7 = result;
        if ( a4 )
          goto LABEL_22;
        return result;
      case 8:
        v10 = *(_QWORD *)v7;
        v11 = v7 + 2;
LABEL_31:
        v7 = v11 - 2;
        *v7 = v10 + a3;
        v18 = (unsigned __int64)(v10 + a3) >> 32;
        result = v10 + a3;
        v7[1] = v18;
        if ( a4 )
          goto LABEL_22;
        return result;
      case 16:
LABEL_14:
        v19 = *v7;
        v12 = __CFADD__(*v7, a3);
        result = *v7 + a3;
        *v7 = result;
        v13 = v7[1];
        v14 = v13 + v12 + (a3 >> 31);
        v7[1] = v14;
        if ( a3 >= 1 && __CFADD__(v12, a3 >> 31) | __CFADD__(v13, v12 + (a3 >> 31)) )
        {
          v15 = v7[2];
          v7[2] = v15 + 1;
          result = __CFADD__(v15, 1) + v7[3];
LABEL_20:
          v7[3] = result;
          goto LABEL_21;
        }
        if ( a3 < 0 )
        {
          v12 = v19 >= result;
          result = v19 - result;
          if ( !__CFSUB__(v13, v14, v12) )
          {
            v16 = v7[2];
            v7[2] = v16 - 1;
            result = (__PAIR64__(v7[3], v16) - 1) >> 32;
            goto LABEL_20;
          }
        }
LABEL_21:
        if ( a4 )
        {
LABEL_22:
          result = __ROR4__(a2 - 2, 1);
          switch ( result )
          {
            case 0u:
              result = ((*(unsigned __int16 *)v7 << 24) + ((*(unsigned __int16 *)v7 << 8) & 0xFF0000u)) >> 16;
              *(_WORD *)v7 = result;
              break;
            case 1u:
              result = (*v7 << 24) + ((*v7 << 8) & 0xFF0000) + (((unsigned int)*v7 >> 8) & 0xFF00) + HIBYTE(*v7);
              *v7 = result;
              break;
            case 3u:
              result = swap64(*v7, v7[1]);
              *v7 = result;
              v7[1] = v17;
              break;
            case 7u:
              result = swap128((int)v7);
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
// 83E12: variable 'v10' is possibly undefined
// 83EBE: variable 'v17' is possibly undefined
