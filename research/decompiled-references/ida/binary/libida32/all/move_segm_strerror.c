const char *__fastcall move_segm_strerror(int a1)
{
  const char *result; // rax

  switch ( a1 )
  {
    case -11:
      result = "Invalid argument (delta/target does not fit the address space)";
      break;
    case -10:
      result = "Memory mapping ranges of addresses hinder segment movement";
      break;
    case -9:
      result = "Source files ranges of addresses hinder segment movement";
      break;
    case -8:
      result = "Debugger segments cannot be moved";
      break;
    case -7:
      result = "Orphan bytes hinder segment movement";
      break;
    case -6:
      result = "Cannot move segments by an odd number of bytes";
      break;
    case -5:
      result = "The segment has been moved but the relocation info was not modified";
      break;
    case -4:
      result = "Too many chunks are defined, can't move";
      break;
    case -3:
      result = "The current processor does not support segment moving";
      break;
    case -2:
      result = "Not enough free room at the target address";
      break;
    case -1:
      result = "The specified segment does not exist";
      break;
    case 0:
      result = "No error";
      break;
    default:
      result = "move_segm_strerror: unknown error code";
      break;
  }
  return result;
}

