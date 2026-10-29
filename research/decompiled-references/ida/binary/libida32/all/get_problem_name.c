char *__fastcall get_problem_name(unsigned __int8 a1, char a2)
{
  char *result; // rax

  result = "???";
  if ( (unsigned __int8)(a1 - 1) <= 0xFu )
  {
    if ( a2 )
      return *((char **)&off_2B03500 + 3 * a1 + 1);
    else
      return *((char **)&off_2B03500 + 3 * a1);
  }
  return result;
}

