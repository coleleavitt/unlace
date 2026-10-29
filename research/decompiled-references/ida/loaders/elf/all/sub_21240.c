__int64 __fastcall sub_21240(__int64 a1, int a2, int a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v9; // rdx
  __int64 result; // rax
  int v14; // ecx
  int v15; // ebx
  int v16; // edx
  char *v17; // r8

  v9 = (unsigned int)(a2 - 38);
  switch ( v9 )
  {
    case 0LL:
    case 1LL:
      goto LABEL_7;
    case 2LL:
    case 5LL:
    case 7LL:
    case 9LL:
    case 12LL:
    case 14LL:
    case 19LL:
    case 20LL:
    case 21LL:
      return 0;
    case 3LL:
      v14 = 12;
      v15 = 6;
      v16 = 0;
      LODWORD(v17) = 0;
      goto LABEL_6;
    case 4LL:
    case 6LL:
    case 22LL:
      if ( a2 > 49 )
      {
        v14 = *(unsigned __int16 *)(a1 + 354);
        v15 = 8;
        v16 = 0;
        v17 = "LO20";
      }
      else if ( a2 == 42 )
      {
        v14 = *(unsigned __int16 *)(a1 + 352);
        v15 = 8;
        v16 = 0;
        v17 = "LO12";
      }
      else
      {
        v15 = 8;
LABEL_21:
        v14 = 12;
        v16 = 0;
        LODWORD(v17) = 0;
      }
      goto LABEL_6;
    case 8LL:
      v14 = 12;
      v15 = 7;
      v16 = 0;
      LODWORD(v17) = 0;
      goto LABEL_6;
    case 10LL:
      v14 = 12;
      v15 = 8;
      v16 = 1;
      LODWORD(v17) = 0;
      goto LABEL_6;
    case 11LL:
      v14 = *(unsigned __int16 *)(a1 + 350);
      v15 = 8;
      v16 = 2;
      v17 = "PC32DBL";
      goto LABEL_6;
    case 13LL:
    case 18LL:
      v15 = 1;
      if ( !*(_BYTE *)(*(_QWORD *)(a1 + 16) + 617LL) )
        goto LABEL_9;
      goto LABEL_12;
    case 15LL:
    case 17LL:
      v15 = 2;
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 16) + 617LL) )
LABEL_12:
        v14 = 12;
      else
LABEL_9:
        v14 = 4;
      switch ( a2 )
      {
        case '3':
        case '5':
          goto LABEL_21;
        case '4':
          v14 = 4;
          break;
        default:
          break;
      }
      v16 = 0;
      LODWORD(v17) = 0;
      goto LABEL_6;
    case 16LL:
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 16) + 617LL) )
        v14 = 12;
      else
        v14 = 4;
      v15 = 4;
      v16 = 0;
      LODWORD(v17) = 0;
LABEL_6:
      sub_2EE90(a1, v15, v16, v14, (_DWORD)v17, a3, a4, a5, a6, a7, a8);
LABEL_7:
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

