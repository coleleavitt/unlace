unsigned __int64 __fastcall reloc_value(unsigned __int64 *a1, unsigned int a2, __int64 a3, char a4)
{
  unsigned __int64 result; // rax
  unsigned __int64 v7; // kr00_8
  bool v8; // cf
  unsigned __int64 v9; // rdx

  if ( a1 )
  {
    if ( a4 )
    {
      swap_value(a1, a1, a2);
      switch ( a2 )
      {
        case 1u:
          *(_BYTE *)a1 += a3;
          goto LABEL_11;
        case 2u:
          *(_WORD *)a1 += a3;
          goto LABEL_11;
        case 4u:
          *(_DWORD *)a1 += a3;
          goto LABEL_11;
        case 8u:
          *a1 += a3;
          goto LABEL_11;
        case 0x10u:
LABEL_5:
          result = *a1;
          v8 = __CFADD__(*a1, a3);
          v9 = *a1 + a3;
          *a1 = v9;
          if ( a3 > 0 && v8 )
          {
            ++a1[1];
          }
          else if ( a3 < 0 && result < v9 )
          {
            --a1[1];
          }
          if ( !a4 )
            return result;
          goto LABEL_11;
        default:
LABEL_11:
          result = swap_value(a1, a1, a2);
          break;
      }
    }
    else
    {
      v7 = result;
      result = a2;
      switch ( a2 )
      {
        case 1u:
          *(_BYTE *)a1 += a3;
          break;
        case 2u:
          *(_WORD *)a1 += a3;
          break;
        case 4u:
          *(_DWORD *)a1 += a3;
          break;
        case 8u:
          *a1 += a3;
          break;
        case 0x10u:
          goto LABEL_5;
        default:
          result = v7;
          break;
      }
    }
  }
  return result;
}
