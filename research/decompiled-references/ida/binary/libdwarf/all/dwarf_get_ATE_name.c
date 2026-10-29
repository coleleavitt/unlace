__int64 __fastcall dwarf_get_ATE_name(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  switch ( a1 )
  {
    case 1LL:
      *a2 = "DW_ATE_address";
      goto LABEL_4;
    case 2LL:
      *a2 = "DW_ATE_boolean";
      goto LABEL_4;
    case 3LL:
      *a2 = "DW_ATE_complex_float";
      goto LABEL_4;
    case 4LL:
      *a2 = "DW_ATE_float";
      goto LABEL_4;
    case 5LL:
      *a2 = "DW_ATE_signed";
      goto LABEL_4;
    case 6LL:
      *a2 = "DW_ATE_signed_char";
      goto LABEL_4;
    case 7LL:
      *a2 = "DW_ATE_unsigned";
      goto LABEL_4;
    case 8LL:
      *a2 = "DW_ATE_unsigned_char";
      goto LABEL_4;
    case 9LL:
      *a2 = "DW_ATE_imaginary_float";
      goto LABEL_4;
    case 10LL:
      *a2 = "DW_ATE_packed_decimal";
      goto LABEL_4;
    case 11LL:
      *a2 = "DW_ATE_numeric_string";
      goto LABEL_4;
    case 12LL:
      *a2 = "DW_ATE_edited";
      goto LABEL_4;
    case 13LL:
      *a2 = "DW_ATE_signed_fixed";
      goto LABEL_4;
    case 14LL:
      *a2 = "DW_ATE_unsigned_fixed";
      goto LABEL_4;
    case 15LL:
      *a2 = "DW_ATE_decimal_float";
      goto LABEL_4;
    case 16LL:
      *a2 = "DW_ATE_UTF";
      goto LABEL_4;
    case 17LL:
      *a2 = "DW_ATE_UCS";
      goto LABEL_4;
    case 18LL:
      *a2 = "DW_ATE_ASCII";
      goto LABEL_4;
    case 128LL:
      *a2 = "DW_ATE_ALTIUM_fract";
      goto LABEL_4;
    case 129LL:
      *a2 = "DW_ATE_ALTIUM_accum";
      goto LABEL_4;
    case 130LL:
      *a2 = "DW_ATE_HP_float128";
      goto LABEL_4;
    case 131LL:
      *a2 = "DW_ATE_HP_complex_float128";
      goto LABEL_4;
    case 132LL:
      *a2 = "DW_ATE_HP_floathpintel";
      goto LABEL_4;
    case 133LL:
      *a2 = "DW_ATE_HP_imaginary_float80";
      goto LABEL_4;
    case 134LL:
      *a2 = "DW_ATE_HP_imaginary_float128";
      goto LABEL_4;
    case 136LL:
      *a2 = "DW_ATE_HP_VAX_float";
      goto LABEL_4;
    case 137LL:
      *a2 = "DW_ATE_HP_VAX_float_d";
      goto LABEL_4;
    case 138LL:
      *a2 = "DW_ATE_HP_packed_decimal";
      goto LABEL_4;
    case 139LL:
      *a2 = "DW_ATE_HP_zoned_decimal";
      goto LABEL_4;
    case 140LL:
      *a2 = "DW_ATE_HP_edited";
      goto LABEL_4;
    case 141LL:
      *a2 = "DW_ATE_HP_signed_fixed";
      goto LABEL_4;
    case 142LL:
      *a2 = "DW_ATE_HP_unsigned_fixed";
      goto LABEL_4;
    case 143LL:
      *a2 = "DW_ATE_HP_VAX_complex_float";
      goto LABEL_4;
    case 144LL:
      *a2 = "DW_ATE_HP_VAX_complex_float_d";
      goto LABEL_4;
    case 145LL:
      *a2 = "DW_ATE_SUN_interval_float";
      goto LABEL_4;
    case 146LL:
      *a2 = "DW_ATE_SUN_imaginary_float";
      goto LABEL_4;
    case 255LL:
      *a2 = "DW_ATE_hi_user";
LABEL_4:
      result = 0;
      break;
    default:
      result = 0xFFFFFFFFLL;
      break;
  }
  return result;
}

