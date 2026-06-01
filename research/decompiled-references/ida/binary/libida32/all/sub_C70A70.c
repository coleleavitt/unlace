const char *__fastcall sub_C70A70(_WORD *a1)
{
  const char *result; // rax

  result = "<invalid cast>";
  switch ( (*a1 + 431) & 0x1FF )
  {
    case 0:
      result = "static_cast";
      break;
    case 1:
      result = "reinterpret_cast";
      break;
    case 2:
      result = "dynamic_cast";
      break;
    case 3:
      result = "const_cast";
      break;
    case 4:
      result = "addrspace_cast";
      break;
    default:
      return result;
  }
  return result;
}

