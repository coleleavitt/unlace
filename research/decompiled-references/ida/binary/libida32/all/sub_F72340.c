char *__fastcall sub_F72340(int a1)
{
  char *result; // rax

  switch ( a1 )
  {
    case 0:
      result = "block";
      break;
    case 1:
      result = "enum";
      break;
    case 2:
      result = "enum_constant";
      break;
    case 3:
      result = "field";
      break;
    case 4:
      result = "function";
      break;
    case 5:
      result = "function(is_member)";
      break;
    case 6:
      result = "namespace";
      break;
    case 7:
      result = "objc_category";
      break;
    case 8:
      result = "objc_implementation";
      break;
    case 9:
      result = (char *)"objc_interface";
      break;
    case 10:
      result = "objc_method";
      break;
    case 11:
      result = "objc_method(is_instance)";
      break;
    case 12:
      result = "objc_property";
      break;
    case 13:
      result = "objc_protocol";
      break;
    case 14:
      result = "record";
      break;
    case 15:
      result = "record(unless(is_union))";
      break;
    case 16:
      result = "hasType";
      break;
    case 17:
      result = "hasType(functionType)";
      break;
    case 18:
      result = "type_alias";
      break;
    case 19:
      result = "variable";
      break;
    case 20:
      result = "variable(is_thread_local)";
      break;
    case 21:
      result = "variable(is_global)";
      break;
    case 22:
      result = "variable(is_local)";
      break;
    case 23:
      result = "variable(is_parameter)";
      break;
    case 24:
      result = "variable(unless(is_parameter))";
      break;
  }
  return result;
}

