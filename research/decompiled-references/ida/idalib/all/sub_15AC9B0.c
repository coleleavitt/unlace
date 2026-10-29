char *__fastcall sub_15AC9B0(int a1, __int64 a2)
{
  char *result; // rax

  switch ( a1 )
  {
    case 0:
      result = "unspecified";
      break;
    case 1:
      result = "void";
      break;
    case 2:
      result = (char *)"char";
      break;
    case 3:
      result = "__wchar_t";
      if ( (*(_BYTE *)(a2 + 4) & 4) == 0 )
        result = "wchar_t";
      break;
    case 4:
      result = "char8_t";
      break;
    case 5:
      result = (char *)"char16_t";
      break;
    case 6:
      result = (char *)"char32_t";
      break;
    case 7:
      result = "int";
      break;
    case 8:
      result = (char *)"__int128";
      break;
    case 9:
      result = "_BitInt";
      break;
    case 10:
      result = (char *)"half";
      break;
    case 11:
      result = "_Float16";
      break;
    case 12:
      result = (char *)"_Accum";
      break;
    case 13:
      result = (char *)"_Fract";
      break;
    case 14:
      result = "__bf16";
      break;
    case 15:
      result = "float";
      break;
    case 16:
      result = "double";
      break;
    case 17:
      result = "__float128";
      break;
    case 18:
      result = "__ibm128";
      break;
    case 19:
      result = "bool";
      if ( *(char *)(a2 + 2) >= 0 )
        result = "_Bool";
      break;
    case 20:
      result = "_Decimal32";
      break;
    case 21:
      result = "_Decimal64";
      break;
    case 22:
      result = "_Decimal128";
      break;
    case 23:
      result = "enum";
      break;
    case 24:
      result = (char *)"union";
      break;
    case 25:
      result = "struct";
      break;
    case 26:
      result = "class";
      break;
    case 27:
      result = "__interface";
      break;
    case 28:
      result = "type-name";
      break;
    case 29:
    case 30:
      result = "typeof";
      break;
    case 31:
    case 32:
      result = (char *)"typeof_unqual";
      break;
    case 33:
      result = "(decltype)";
      break;
    case 34:
      result = "__add_lvalue_reference";
      break;
    case 35:
      result = "__add_pointer";
      break;
    case 36:
      result = "__add_rvalue_reference";
      break;
    case 37:
      result = "__decay";
      break;
    case 38:
      result = "__make_signed";
      break;
    case 39:
      result = "__make_unsigned";
      break;
    case 40:
      result = "__remove_all_extents";
      break;
    case 41:
      result = "__remove_const";
      break;
    case 42:
      result = "__remove_cv";
      break;
    case 43:
      result = "__remove_cvref";
      break;
    case 44:
      result = "__remove_extent";
      break;
    case 45:
      result = "__remove_pointer";
      break;
    case 46:
      result = "__remove_reference_t";
      break;
    case 47:
      result = "__remove_restrict";
      break;
    case 48:
      result = "__remove_volatile";
      break;
    case 49:
      result = "__underlying_type";
      break;
    case 50:
      result = "auto";
      break;
    case 51:
      result = (char *)"decltype(auto)";
      break;
    case 52:
      result = "__auto_type";
      break;
    case 53:
      result = "__unknown_anytype";
      break;
    case 54:
      result = (char *)"_Atomic";
      break;
    case 55:
      result = "type-name-pack-indexing";
      break;
    case 56:
      result = (char *)"image1d_t";
      break;
    case 57:
      result = (char *)"image1d_array_t";
      break;
    case 58:
      result = (char *)"image1d_buffer_t";
      break;
    case 59:
      result = (char *)"image2d_t";
      break;
    case 60:
      result = (char *)"image2d_array_t";
      break;
    case 61:
      result = (char *)"image2d_depth_t";
      break;
    case 62:
      result = "image2d_array_depth_t";
      break;
    case 63:
      result = (char *)"image2d_msaa_t";
      break;
    case 64:
      result = "image2d_array_msaa_t";
      break;
    case 65:
      result = "image2d_msaa_depth_t";
      break;
    case 66:
      result = "image2d_array_msaa_depth_t";
      break;
    case 67:
      result = (char *)"image3d_t";
      break;
    case 68:
      result = "__hlsl_resource_t";
      break;
    case 69:
      result = "(error)";
      break;
  }
  return result;
}
