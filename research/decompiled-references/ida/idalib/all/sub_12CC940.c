char *__fastcall sub_12CC940(unsigned int a1, char a2)
{
  char *result; // rax

  if ( !a2 )
    return (char *)*(&off_2BAF280 + 3 * a1 - 2);
  if ( a1 == 46 )
    return "obj";
  if ( a1 <= 0x2E )
  {
    result = "asm";
    if ( a1 == 38 )
      return result;
    return (char *)*(&off_2BAF280 + 3 * a1 - 2);
  }
  result = "obj";
  if ( a1 != 58 )
  {
    result = "exe";
    if ( a1 != 60 )
      return (char *)*(&off_2BAF280 + 3 * a1 - 2);
  }
  return result;
}
