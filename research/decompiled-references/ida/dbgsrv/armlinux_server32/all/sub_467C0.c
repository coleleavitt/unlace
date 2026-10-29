/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_467C0
// Address: 0x000467C0

//----- (000467C0) --------------------------------------------------------
int __fastcall sub_467C0(unsigned __int8 *a1, unsigned __int8 *a2)
{
  int v4; // r3
  int result; // r0
  int v8; // r0

  if ( !sub_45BF0(a1, 2) || !sub_45BF0(a2, 2) )
    return -1;
  v4 = *a1;
  result = *a2;
  if ( v4 != result )
  {
    if ( ((unsigned int)(v4 - 1) <= 2 || ((v4 - 7) & 0xFD) == 0)
      && ((unsigned int)(result - 1) <= 2 || ((result - 7) & 0xFD) == 0) )
    {
      switch ( *a1 )
      {
        case 2u:
          switch ( *a2 )
          {
            case 2u:
              return result;
            case 3u:
              goto LABEL_25;
            case 7u:
              if ( !*((_DWORD *)a1 + 2) )
                goto LABEL_29;
              v8 = sub_464D8((int)a2);
              goto LABEL_15;
            case 9u:
              goto LABEL_26;
            default:
              goto LABEL_18;
          }
        case 3u:
          v8 = sub_46700((int)a2);
          goto LABEL_15;
        case 7u:
          switch ( *a2 )
          {
            case 2u:
              if ( !*((_DWORD *)a2 + 2) )
                goto LABEL_31;
              v8 = sub_464D8((int)a1);
              break;
            case 3u:
              goto LABEL_25;
            case 7u:
              return result;
            case 9u:
              if ( *((_QWORD *)a2 + 1) )
LABEL_26:
                v8 = sub_46594((int)a1);
              else
LABEL_31:
                v8 = sub_45E50((int)a2);
              break;
            default:
              goto LABEL_18;
          }
LABEL_15:
          if ( v8 )
            goto LABEL_19;
          return *a1;
        case 9u:
          switch ( *a2 )
          {
            case 2u:
              goto LABEL_27;
            case 3u:
LABEL_25:
              v8 = sub_46700((int)a1);
              goto LABEL_15;
            case 7u:
              if ( *((_QWORD *)a1 + 1) )
LABEL_27:
                v8 = sub_46594((int)a2);
              else
LABEL_29:
                v8 = sub_45E50((int)a1);
              goto LABEL_15;
            case 9u:
              return result;
            default:
              goto LABEL_18;
          }
        default:
LABEL_18:
          v8 = 61;
LABEL_19:
          sub_70B98(v8);
          return -1;
      }
    }
    return -1;
  }
  return result;
}
