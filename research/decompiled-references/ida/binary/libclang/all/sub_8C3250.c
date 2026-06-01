const char *__fastcall sub_8C3250(_WORD *a1)
{
  const char *result; // rax

  switch ( (*a1 + 430) & 0x1FF )
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
      result = "<invalid cast>";
      break;
  }
  return result;
}

