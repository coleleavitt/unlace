__int64 __fastcall dwarf_get_FORM_CLASS_name(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  switch ( a1 )
  {
    case 0LL:
      *a2 = "DW_FORM_CLASS_UNKNOWN";
      goto LABEL_3;
    case 1LL:
      *a2 = "DW_FORM_CLASS_ADDRESS";
      goto LABEL_3;
    case 2LL:
      *a2 = "DW_FORM_CLASS_BLOCK";
      goto LABEL_3;
    case 3LL:
      *a2 = "DW_FORM_CLASS_CONSTANT";
      goto LABEL_3;
    case 4LL:
      *a2 = "DW_FORM_CLASS_EXPRLOC";
      goto LABEL_3;
    case 5LL:
      *a2 = "DW_FORM_CLASS_FLAG";
      goto LABEL_3;
    case 6LL:
      *a2 = "DW_FORM_CLASS_LINEPTR";
      goto LABEL_3;
    case 7LL:
      *a2 = "DW_FORM_CLASS_LOCLISTPTR";
      goto LABEL_3;
    case 8LL:
      *a2 = "DW_FORM_CLASS_MACPTR";
      goto LABEL_3;
    case 9LL:
      *a2 = "DW_FORM_CLASS_RANGELISTPTR";
      goto LABEL_3;
    case 10LL:
      *a2 = "DW_FORM_CLASS_REFERENCE";
      goto LABEL_3;
    case 11LL:
      *a2 = "DW_FORM_CLASS_STRING";
      goto LABEL_3;
    case 12LL:
      *a2 = "DW_FORM_CLASS_FRAMEPTR";
      goto LABEL_3;
    case 13LL:
      *a2 = "DW_FORM_CLASS_MAXCROPTR";
      goto LABEL_3;
    case 14LL:
      *a2 = "DW_FORM_CLASS_ADDRPTR";
      goto LABEL_3;
    case 15LL:
      *a2 = "DW_FORM_CLASS_LOCLIST";
      goto LABEL_3;
    case 16LL:
      *a2 = "DW_FORM_CLASS_LOCLISTSPTR";
      goto LABEL_3;
    case 17LL:
      *a2 = "DW_FORM_CLASS_RNGLIST";
      goto LABEL_3;
    case 18LL:
      *a2 = "DW_FORM_CLASS_RNGLISTSPTR";
      goto LABEL_3;
    case 19LL:
      *a2 = "DW_FORM_CLASS_STROFFSETSPTR";
LABEL_3:
      result = 0;
      break;
    default:
      result = 0xFFFFFFFFLL;
      break;
  }
  return result;
}

