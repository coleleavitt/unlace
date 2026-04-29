const char *__fastcall sub_11E0(char a1)
{
  const char *result; // rax

  switch ( a1 )
  {
    case 'a':
      result = "i8";
      break;
    case 'b':
      result = "bool";
      break;
    case 'c':
      result = "char";
      break;
    case 'd':
      result = "f64";
      break;
    case 'e':
      result = "str";
      break;
    case 'f':
      result = "f32";
      break;
    case 'h':
      result = "u8";
      break;
    case 'i':
      result = "isize";
      break;
    case 'j':
      result = "usize";
      break;
    case 'l':
      result = "i32";
      break;
    case 'm':
      result = "u32";
      break;
    case 'n':
      result = "i128";
      break;
    case 'o':
      result = "u128";
      break;
    case 'p':
      result = "_";
      break;
    case 's':
      result = "i16";
      break;
    case 't':
      result = "u16";
      break;
    case 'u':
      result = "()";
      break;
    case 'v':
      result = "...";
      break;
    case 'x':
      result = "i64";
      break;
    case 'y':
      result = "u64";
      break;
    case 'z':
      result = "!";
      break;
    default:
      result = nullptr;
      break;
  }
  return result;
}
