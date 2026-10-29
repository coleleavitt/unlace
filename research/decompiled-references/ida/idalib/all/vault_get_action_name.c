char *__fastcall vault_get_action_name(char a1)
{
  char *result; // rax

  switch ( a1 )
  {
    case 0:
      result = (char *)&byte_22F0C30;
      break;
    case 1:
      result = (char *)"add";
      break;
    case 2:
      result = "del";
      break;
    case 3:
      result = "edit";
      break;
    case 4:
      result = (char *)"move";
      break;
    case 5:
      result = "medt";
      break;
    case 6:
      result = "copy";
      break;
    case 7:
      result = "cedt";
      break;
    case 8:
      result = "replace";
      break;
    default:
      result = "?";
      break;
  }
  return result;
}
