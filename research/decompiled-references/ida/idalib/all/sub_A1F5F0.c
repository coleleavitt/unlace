void *sub_A1F5F0()
{
  void *result; // rax

  result = calloc(0x40u, 0x10u);
  if ( !result )
    sub_2221CE0("Allocation failed");
  return result;
}
