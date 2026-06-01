const char *__fastcall sub_A7490(unsigned __int64 a1)
{
  unsigned int v1; // eax
  bool v2; // cc
  __int64 v3; // rdi
  const char *result; // rax

  v1 = -(int)a1;
  v2 = a1 <= 0xFFFFFFFFFFFFFF88LL;
  v3 = 0;
  if ( !v2 )
    v3 = v1;
  switch ( v3 )
  {
    case 0LL:
      result = "No error detected";
      break;
    case 1LL:
      result = "Error (generic)";
      break;
    case 10LL:
      result = "Unknown frame descriptor";
      break;
    case 12LL:
      result = "Version not supported";
      break;
    case 14LL:
      result = "Unsupported frame parameter";
      break;
    case 16LL:
      result = "Frame requires too much memory for decoding";
      break;
    case 20LL:
      result = "Data corruption detected";
      break;
    case 22LL:
      result = "Restored data doesn't match checksum";
      break;
    case 24LL:
      result = "Header of Literals' block doesn't respect format specification";
      break;
    case 30LL:
      result = "Dictionary is corrupted";
      break;
    case 32LL:
      result = "Dictionary mismatch";
      break;
    case 34LL:
      result = "Cannot create Dictionary from provided samples";
      break;
    case 40LL:
      result = "Unsupported parameter";
      break;
    case 41LL:
      result = "Unsupported combination of parameters";
      break;
    case 42LL:
      result = "Parameter is out of bound";
      break;
    case 44LL:
      result = "tableLog requires too much memory : unsupported";
      break;
    case 46LL:
      result = "Unsupported max Symbol Value : too large";
      break;
    case 48LL:
      result = "Specified maxSymbolValue is too small";
      break;
    case 50LL:
      result = "pledged buffer stability condition is not respected";
      break;
    case 60LL:
      result = "Operation not authorized at current processing stage";
      break;
    case 62LL:
      result = "Context should be init first";
      break;
    case 64LL:
      result = "Allocation error : not enough memory";
      break;
    case 66LL:
      result = "workSpace buffer is not large enough";
      break;
    case 70LL:
      result = "Destination buffer is too small";
      break;
    case 72LL:
      result = "Src size is incorrect";
      break;
    case 74LL:
      result = "Operation on NULL destination buffer";
      break;
    case 80LL:
      result = "Operation made no progress over multiple calls, due to output buffer being full";
      break;
    case 82LL:
      result = "Operation made no progress over multiple calls, due to input being empty";
      break;
    case 100LL:
      result = "Frame index is too large";
      break;
    case 102LL:
      result = "An I/O error occurred when reading/seeking";
      break;
    case 104LL:
      result = "Destination buffer is wrong";
      break;
    case 105LL:
      result = "Source buffer is wrong";
      break;
    case 106LL:
      result = "Block-level external sequence producer returned an error code";
      break;
    case 107LL:
      result = "External sequences are not valid";
      break;
    default:
      result = "Unspecified error code";
      break;
  }
  return result;
}

