char *__fastcall sub_73DB20(int a1)
{
  char *result; // rax

  switch ( a1 )
  {
    case '!':
      result = "pixel";
      break;
    case '"':
      result = "vertex";
      break;
    case '#':
      result = "geometry";
      break;
    case '$':
      result = "hull";
      break;
    case '%':
      result = "domain";
      break;
    case '&':
      result = "compute";
      break;
    case '\'':
    case '/':
      result = "amplification";
      break;
    case '(':
      result = "raygeneration";
      break;
    case ')':
      result = "intersection";
      break;
    case '*':
      result = "anyhit";
      break;
    case '+':
      result = "closesthit";
      break;
    case ',':
      result = "miss";
      break;
    case '-':
      result = "callable";
      break;
    case '.':
      result = "mesh";
      break;
  }
  return result;
}

