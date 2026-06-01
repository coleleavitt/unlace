char *__fastcall Z3_get_error_msg(__int64 a1, unsigned int a2)
{
  char v2; // r12
  char *result; // rax

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
    sub_29C2F0(a1, a2);
  if ( !a1 || (result = *(char **)(a1 + 1536)) == nullptr || !*result )
  {
    switch ( a2 )
    {
      case 0u:
        result = "ok";
        break;
      case 1u:
        result = "type error";
        break;
      case 2u:
        result = "index out of bounds";
        break;
      case 3u:
        result = "invalid argument";
        break;
      case 4u:
        result = "parser error";
        break;
      case 5u:
        result = "parser (data) is not available";
        break;
      case 6u:
        result = "invalid pattern";
        break;
      case 7u:
        result = "out of memory";
        break;
      case 8u:
        result = "file access error";
        break;
      case 9u:
        result = "internal error";
        break;
      case 0xAu:
        result = "invalid usage";
        break;
      case 0xBu:
        result = "invalid dec_ref command";
        break;
      case 0xCu:
        result = "Z3 exception";
        break;
      default:
        result = "unknown";
        break;
    }
  }
  if ( v2 )
    byte_1C7EBA0 = 1;
  return result;
}

